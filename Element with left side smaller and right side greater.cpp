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
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int l[n],r[n],h=0;
	    l[0]=INT_MIN;
	    for(int i=1;i<n;i++)
	    {
	        l[i]=max(l[i-1],a[i-1]);
	    }
	    r[n-1]=INT_MAX;
	    for(int i=n-2;i>=0;i--)
	    {
	        r[i]=min(r[i+1],a[i+1]);
	    }
	    for(int i=1;i<n-1;i++)  //not to consider first and last element
	    {
	        if(a[i]>=l[i]&&a[i]<=r[i])
	        {
	            cout<<a[i]<<"\n";
	            h=1;
	            break;
	        }
	    }
	    if(h==0)
	    {
	        cout<<"-1\n";
	    }
	}
	return 0;
}
int max(int a,int b)
{
    if(a>b)
      return a;
    return b;
}

int min(int a,int b)
{
    if(a<b)
      return a;
    return b;
}
