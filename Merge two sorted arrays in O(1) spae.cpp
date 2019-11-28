#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n],b[m];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int j=0;j<m;j++)
	    {
	        cin>>b[j];
	    }
	    int h=0,j,last;
	    for(int i=m-1;i>=0&&n>0;i--)
	    {
	        h=0;
	        j=n-2;
	        last=a[n-1];
	        while(j>=0&&a[j]>b[i])
	        {
	            a[j+1]=a[j];
	            h=1;
	            j--;
	        }
	        if(h==1||last>b[i])    // last>b[i] important condition
	        {                      // test case 1 2 3 and 2 5 6 important test case
	            a[j+1]=b[i];
	            b[i]=last;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    for(int i=0;i<m;i++)
	    {
	        cout<<b[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
