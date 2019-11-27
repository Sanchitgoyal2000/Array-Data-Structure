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
	    int min=a[0];
	    int maxdiff=INT_MIN;
	    for(int i=1;i<n;i++)
	    {
	        if(a[i]-min>maxdiff)
	        {
	            maxdiff=a[i]-min;
	        }
	        if(a[i]<min)
	        {
	            min=a[i];
	        }
	    }
	    cout<<maxdiff<<"\n";
	}
	return 0;
}
