#include <iostream>
using namespace std;
#include<cstring>
int main() {
	//code                                       //1 2 2 1 should print 2 1 and not 1 2
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int a[n+2];
	    for(int i=0;i<n+2;i++)
	    {
	        cin>>a[i];
	    }
	    int count[n] = { 0 };

	    for(int i=0;i<n+2;i++)
	    {
	        if(count[a[i]-1]==1)                 //  print like this bcz we have to preserve the order
	          cout<<a[i]<<" ";
	        else
	          count[a[i]-1]++;
	    }

	    cout<<"\n";
	}
	return 0;
}
