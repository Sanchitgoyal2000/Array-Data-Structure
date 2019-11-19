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
	    int exec=0,inc=a[0],oldinc,res=a[0];       //exec means exclude and inc means include
	    for(int i=1;i<n;i++)
	    {
	         oldinc=inc;
           	 inc=exec+a[i];
           	 exec=max(oldinc,exec);
           	 res=max(inc,exec);
	    }
	    cout<<res<<"\n";
	}
	return 0;
}
int max(int a,int b)
{
    if(a>b)
      return a;
    return b;
}
