#include <iostream>
using namespace std;

int main() {                    // input is 3446879123
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    string n;
	    cin>>n;

	    int a[10],m=10;

	    for(int i=0;i<m;i++)
	    {
	        a[i]=0;
	    }

	   for(int i=0;i<n.length();i++)
	   {
	       a[n[i]-'0']++;
	   }


	    for(int i=m-1;i>=0;i--)
	    {
	        while(a[i]!=0)
	        {
	           cout<<i;
	           a[i]=a[i]-1;
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
