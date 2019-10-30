#include <iostream>
using namespace std;
int prime(int n);
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,i=1,res=0,res1=9;
	    cin>>n;
	    int p=n-1,h=0;
	    while(i<=p)
	    {
	        if(i+p==n)
	        {
	            res=prime(i);
	            res1=prime(p);
	            if(res==1&&res1==1)
	            {
	                h=1;
	                cout<<i<<" "<<p<<"\n";
	                break;
	            }
	            i++;  // necessary conditions otherwise infinite loop
	            p--;
	        }
	        else if(i+p>n)
	        p--;
	        else
	        i++;
	    }
	    if(h==0)
	     cout<<"-1\n";
	}
	return 0;
}
int prime(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
          return 0;
    }
    return 1;
}
