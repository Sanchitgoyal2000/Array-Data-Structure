#include <iostream>  //time complexity O(n)
using namespace std;

int main() {  //counting of frequency elements from 1 to n
	//code    //array will contain elements less than equal to n
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
	        a[i]=a[i]-1;  // 0 1 2 3 4 will be represented as 1 2 3 4 5
	    }                 // So reduce each element by 1

	    for(int i=0;i<n;i++)
	    {
	        a[a[i]%n]=a[a[i]%n]+n;  // adding n at that index
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<a[i]/n<<" ";
	        a[i]=a[i]%n+1;   // again making array same
	    }
	    cout<<"\n";
	}
	return 0;
}
