#include <iostream>
using namespace std;
#include<numeric>
#include<set>
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

	    set<int> s (a,a+n);
	    int p=accumulate(a,a+n,0);
	    int q=accumulate(s.begin(),s.end(),0);
	    //cout<<p<<" "<<q;
	    cout<<((3*q)-p)/2<<"\n";
	}
	return 0;
}
