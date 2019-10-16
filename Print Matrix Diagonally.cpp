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
	    int a[n][n];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	    int p=1,s,j,g;
	    for(int i=0;i<(2*n)-1;i++)
	    {
	        s=i;
	        j=0;
	        g=i;
	        if(i>=n)
	        {
	            g=n-1;
	            j=p;
	            s=g;
	            p++;
	        }
	        while(j!=s+1)
	        {
	           cout<<a[j][g]<<" ";
	           g--;
	           j++;
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
/*
Above code is acc to output

for 4X4 matrix

00
10 01
20 11 02
30 21 12 03
31 22 13
32 23
33

*/
