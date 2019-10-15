#include <iostream>
using namespace std;

int main() {
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
	    int p=1,count=0,h;
	    while(p)
	    {
	        h=1;
	        for(int i=0;i<n;i++)
	        {
	            if(a[i]%2!=0)
	            {
	                a[i]=a[i]-1;
	                count++;
	            }
	        }
	        for(int i=0;i<n;i++)
	        {
	            if(a[i]==0)
	            h=0;
	            else
	            {
	                h=1;
	                break;
	            }
	        }

	          if(h==0)
	             break;
	        for(int i=0;i<n;i++)
	        {
	            a[i]=a[i]/2;
	        }
	        count++;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
