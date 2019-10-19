#include <iostream>
using namespace std;
int cmp(const void *a,const void *b);
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	    cin>>a[i];
	    a[i]=a[i]*a[i];
	    }
	    qsort(a,n,sizeof(int),cmp);
	    int j,k,h=0,i;
	    for(int k=n-1;k>=0;k--)
	    {
	        j=k-1;
	        i=0;
	        while(i<j)
	        {
	           if(a[i]+a[j]==a[k])
	           {
	               cout<<"Yes\n";
	               h=1;
	               break;
	           }
	           else if(a[i]+a[j]>a[k])
	           {
	               j--;
	           }
	           else
	           {
	                i++;
	           }
	        }
	        if(h==1)
	           break;
	    }
	    if(h==0)
	    cout<<"No\n";
	}
	return 0;
}
int cmp(const void *a,const void *b)
{
    return (*(int *)a) - (*(int *)b);
}
