#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t-->0)
  {
      int n;
      cin>>n;
      int v[n];
      for(int i=0;i<n;i++)
      {
          cin>>v[i];
      }
       int candidate=v[0],count=1;
        for(int i=1;i<n;i++)
        {
            if(candidate==v[i])
                count++;
            else if(count==0)
            {
                candidate=v[i];
                count=1;
            }
            else
                count--;
        }
        count=0;
        for(int i=0;i<n;i++)
        {
            if(candidate==v[i])
                count++;
        }
        if(count>n/2)
        {
          cout<<candidate<<"\n";
          continue;
        }
        cout<<"-1\n";
  }
}
