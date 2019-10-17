#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int a[n],res[n];
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	    int temp=a[n-1],p=0,max=a[n-1];
	    res[p]=temp;
	    p++;
	    for(int i=n-2;i>=0;i--)
	    {
	        if(a[i]>=max)
	        {
	            max=a[i];
	            res[p]=a[i];
	            p++;
	        }
	    }
	    for(int i=p-1;i>=0;i--)
	    cout<<res[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}
