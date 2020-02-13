#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        a[i]=a[i]+(a[a[i]]%n)*n;
	    }
	    for(int i=0;i<n;i++)
	    {
	        a[i]=a[i]/n;
	        cout<<a[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
