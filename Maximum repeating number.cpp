#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,res=0,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        a[(a[i]%n)]=a[(a[i]%n)]+n;
	    }
	   // for(int i=0;i<n;i++)
	   // cout<<a[i]<<" ";
	    int max=-1;
	    for(int i=0;i<n;i++)
	    {
	        if((a[i]/n)>max)
	        {
	            max=a[i]/n;
	            res=i;
	        }
	    }
	    cout<<res<<"\n";
	}
	return 0;
}
