#include <iostream>
using namespace std;
#include<limits.h>
int main() {
	//code                             less time complexity
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n][m];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin>>a[i][j];
	        }
	    }

	    int index=INT_MAX,res=-1;
	    for(int i=0;i<n;i++)
	    {
	       for(int j=0;j<n;j++)
	       {
	           if(a[i][j]==1&&j<index)
	           {
	             res=i;
	             index=j;
	             break;
	           }
	           else if(index!=INT_MAX&&a[i][index]==0)
	             break;
	       }
	    }
	    cout<<res<<"\n";
	}
	return 0;
}
