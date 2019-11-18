#include <iostream>
using namespace std;
#include<limits.h>
int main()
{
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
        }

        int ans=0,max=-1;
        for(int i=0;i<n;i++)
        {
            if(ans+a[i]>=0)
            {
                ans=ans+a[i];
                if(ans>max)
                {
                    max=ans;
                }
            }
            else
            {
                ans=0;
            }
        }

        if(n==1)             // only -84 as a testcase
        {
            max=a[0];
        }

        cout<<max<<"\n";
    }

	return 0;

}
