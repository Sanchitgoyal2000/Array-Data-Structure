#include <iostream>
using namespace std;//time complexity is nlogn +mlogm + n
int cmp(const void *a,const void *b);
int cmp(const void *a,const void *b)
{
    return *((int *)a) - *((int *)b);
}
int main() {
	//code        //another approach sort first array then subtract each element
	int t;        //of second array from given number and apply binary search on
	cin>>t;       //first array (sorted array) nlogn+mlogn is time complxity

	while(t-->0)
	{
	    int n,m,s;
	    cin>>n>>m>>s;
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
	    qsort(b,m,sizeof(int),cmp);

	    int i=0,j=m-1,h=0,p=0;

	    while(i<n&&j>=0)
	    {
	        if(a[i]+b[j]==s)
	        {
	            if(h==0)
	             cout<<a[i]<<" "<<b[j];
	            else
	             cout<<", "<<a[i]<<" "<<b[j];
	            i++;
	            j--;
	            h=1;
	            p=1;
	        }
	        else if(a[i]+b[j]>s)
	        {
	            j--;
	        }
	        else
	        {
	            i++;
	        }
	    }
	    if(p==0)
	    cout<<"-1";
	    cout<<"\n";
	}
	return 0;
}
