#include <iostream>
using namespace std;

int main() {
	//code               // O(n) time and constant space and O(n) space for answer
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
	    int prod[n];
	    prod[0]=1;
	    int temp=1;
	    for(int i=0;i<n;i++)
	    {
	        prod[i]=temp;
	        temp=temp*a[i];
	    }
	    temp=1;
	    for(int i=n-1;i>=0;i--)
	    {
	        prod[i]=prod[i]*temp;
	        temp=temp*a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<prod[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
