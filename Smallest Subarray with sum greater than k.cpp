#include <iostream>
using namespace std;
#include<limits.h>
int main()
{
	int t;
	cin>>t;
	while(t-->0)  //using two pointers technique
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int start=0,end=0,sum=0,res=INT_MAX;
	    while(start<n+1)
	    {
	        if(sum>m)
	        {
	            sum=sum-a[end];
	            end++;
	           if(sum>m&&start-end<res)
	            res=start-end;
	        }
	        else
	        {
	          sum=sum+a[start];
	          start++;
	          if(sum>m&&start-end<res)
	           res=start-end;
	        }

	    }
	    cout<<res<<"\n";
	}
	return 0;
}
