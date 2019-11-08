#include <iostream>
using namespace std;
#include<limits.h>

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int a[n],min=INT_MAX,max=INT_MIN;
	    for(int i=0;i<n;i++)
	        cin>>a[i];

	   int s,e;
	   for(s=0;s<n-1;s++)
	   {
	       if(a[s]>a[s+1])
	       break;
	   }

	   //if(s==n-1)               // means array is sorted
    //   {
    //       cout<<"-1\n";
    //       continue;
    //   }

	   for(e=n-1;e>0;e--)
	   {
	       if(a[e]<a[e-1])
	       break;
	   }

	   for(int i=s;i<=e;i++)
	   {
	       if(a[i]<min)
	         min=a[i];
	       if(a[i]>max)
	         max=a[i];
	   }

	   for(int i=0;i<s;i++)
	   {
	       if(a[i]>min)
	         {
	             s=i;
	             break;
	         }
	   }

	   for(int i=n-1;i>e;i--)
	   {
	       if(a[i]<max)
	         {
	             e=i;
	             break;
	         }
	   }
	    cout<<s<<" "<<e<<"\n";
	}
	return 0;
}
