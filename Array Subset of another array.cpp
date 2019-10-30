#include <iostream>
using namespace std;
int cmp(const void *a,const void *b);
int main() {                         //Time Complexity is nlogn+mlogn
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n],b[m];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<m;i++)
	    {
	        cin>>b[i];
	    }

	    qsort(a,n,sizeof(int),cmp);

	    int l,r,mid,h,p;
	    for(int i=0;i<m;i++)
	    {
	        l=0,r=n-1,p=0;
	        h=1;
	        while(l<=r)
	        {
	            mid=(l+r)/2;
	            if(a[mid]==b[i])
	            {
	                h=0;
	                break;
	            }

	            else if(a[mid]>b[i])
	            r=mid-1;

	            else
	            l=mid+1;
	        }
	        if(h==1)
	        {
	           p=1;
	           cout<<"No\n";
	           break;
	        }
	    }

	    if(h==0)
	       cout<<"Yes\n";
	}
	return 0;
}
int cmp(const void *a,const void *b)
{
    return (*(int *)a) -(*(int *)b);
}
