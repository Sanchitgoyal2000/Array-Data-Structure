#include <iostream>
using namespace std;
#include<limits.h>
int main() {
	//code
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,m;
	    cin>>m>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int sum=0,res=INT_MIN,index=0;
	    for(int i=0;i<m;i++)
	    {
	        sum=sum+a[i];
	    }

	    if((sum/m)>res)
	        res=(sum/m);

	    int j=m;
	    for(int i=0;i<n-m;i++)  // loop n-m+1 but one iteration is already done above
	    {                       // so n-m;
	        sum=sum-a[i]+a[j];
	        j++;
	        if((sum/m)>res)
	        {
	        index=i+1;          // give i+1 as index not i as we adding next element
	        res=sum/m;
	        }
	    }
	  for(int i=index;i<index+m;i++)
	  cout<<a[i]<<" ";
	  cout<<"\n";
	}
	return 0;
}
