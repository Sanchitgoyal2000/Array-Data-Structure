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
	    for(int i=0;i<n;i++)        //test case 1 2 3 output is also 1 2 3
	    {                          //1 2 3 4 5 is a0 a1 b0 b1 a2
	        cin>>a[i];
	    }
	    int p=n/2,temp;
	    for(int i=1;i<n;i=i+2)
	    {
	        temp=a[p];              //store number in temporary va
	        for(int j=p-1;j>=i;j--)
	        {
	            a[j+1]=a[j];
	        }
	        a[i]=temp;;
	        p++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
