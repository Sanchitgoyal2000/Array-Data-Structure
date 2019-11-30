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
	    int l=0,r=n/2,m,h=0;
	    while(l<=r)                   //484 and l<=r (equal to compulsory)
	    {
	        m=(l+r)/2;
	        if(m*m==n)
	        {
	            cout<<"1\n";
	            h=1;
	            break;
	        }
	        else if(m*m>n)
	        {
	            r=m-1;
	        }
	        else
	            l=m+1;
	    }
	    if(h==0)
	    {
	        cout<<"0\n";
	    }
	}
	return 0;
}
