#include <iostream>
using namespace std;

int main()
{
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

	    int s=0,h=1;
	    for(int i=0;i<n;i++)
	    {
	        s=s+a[i];
	    }
	    int left=0;
	    for(int i=0;i<n;i++)
	    {
	        s=s-a[i];
	        if(s==left)
	         {
	             h=0;
	             cout<<i+1<<"\n";
	             break;
	         }
	         left=left+a[i];
	    }
	    if(h==1)
	      cout<<"-1\n";
	}
	return 0;
}
// 30
// 20 17 42 25 32 32 30 32 37 9 2 33 31 17 14 40 9 12 36 21 8 33 6 6 10 37 12 26 21 3

