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
	      cin>>a[i];

	    int h=0,p;
	    for(int i=0;i<n-1;i++)
	    {
	        if(h==0)
	        {
	            if(a[i]<a[i+1])
	            {
	                h=1;
	                continue;
	            }
	            else
	            {
	                p=a[i+1];
	                a[i+1]=a[i];
	                a[i]=p;
	                h=1;
	            }
	        }
	        else
	        {
	           if(a[i]>a[i+1])
	            {
	                h=0;
	                continue;
	            }
	            else
	            {
	                p=a[i+1];
	                a[i+1]=a[i];
	                a[i]=p;
	                h=0;
	            }
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
