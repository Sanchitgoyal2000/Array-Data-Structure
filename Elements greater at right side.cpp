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
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int max=-1;
	    int b[n],p=0;
	    for(int i=n-1;i>=0;i--)
	    {
	        b[p]=max;
	        p++;
	        if(a[i]>max)
	        max=a[i];
	    }
	    for(int i=p-1;i>=0;i--)
	    {
	        cout<<b[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
