#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include<map>
int main() {
	//code

	int t;
	cin>>t;                    //time complexity less if we use unordered map
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    unordered_map<int,int>m;
	    int count=0,s=0;
	    m[0]=1;                //bcz for 0 we have to intialise with 1 as if element itself
	    for(int i=0;i<n;i++)   //can be zerpo and we have to count that element also
	    {
	        s=s+a[i];
	        if(m.find(s)!=m.end())
	        {
	            count=count+m[s];
	        }
	        m[s]++;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}

