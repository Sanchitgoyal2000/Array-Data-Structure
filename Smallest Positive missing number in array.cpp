#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int i,n,h=0,temp;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
    for(i=0;i<n;i++)
    {
       if(a[i]>=0&&a[i]<=n)
       {
           if(a[i]==a[a[i]-1])
           {
             continue;
           }
           else
           {
               temp=a[a[i]-1];
               a[a[i]-1]=a[i];
               a[i]=temp;
               if(i>0)
               {
                 i--;
               }
           }
       }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=i+1)
        {
         cout<<i+1<<"\n";
         h=1;
         break;
        }
    }
    if(h==0)
    {
        cout<<n+1<<"\n";
    }
	}
	return 0;
}
