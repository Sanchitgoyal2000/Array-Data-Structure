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
	        a[i]=a[i]-1;
	    }

	    for(int i=0;i<n;i++) //calculating frequency
	    {
	        a[a[i]%n]=a[a[i]%n]+n;   // important step must take modulus
	    }
	    int h=0,rep,mis,p=0;
	   //
	    for(int i=0;i<n;i++)
	    {
	        if(p==0&&a[i]<n)
	        {
	            mis=i+1;
	            p=1;
	        }
	        else if(h==0&&(a[i]/n)>=2)
	        {
	            rep=i+1;
	            h=1;
	        }
	    }
	    cout<<rep<<" "<<mis<<"\n";
	}
	return 0;
}
