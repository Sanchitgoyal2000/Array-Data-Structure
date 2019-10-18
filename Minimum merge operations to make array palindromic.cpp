#include <iostream>
using namespace std;

int main() {   // each array will be palindrome bcz at the end one element will be left
	//code     //and that one element will be palindrome
	int t;      // 1 2 0 -1 2 output should be 2 but it is 4
	cin>>t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int l=0,r=n-1,p=a[l],q=a[r],res=0;       //1 2 3 4   res = 1
	    while(l<r)                              //3 3 4        res = 2
	    {                                        //6 4        res=3
	        if(p==q)
	        {
	            l++;
	            r--;
	            p=a[l];
	            q=a[r];
	        }
	        else
	        {
	            res++;
	           if(p>q)
	           {
	               r--;
	               q=q+a[r];
	           }
	           else
	           {
	               l++;
	               p=p+a[l];
	           }
	           if(l==r)    //at particular point l will become equal to r and only one lement in arrray will be left
	            p=q;
	        }
	    }
	    cout<<res<<"\n";
	}
	return 0;
}

