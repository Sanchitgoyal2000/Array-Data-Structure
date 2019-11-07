#include <iostream>
using namespace std;

int main()
{
    int a[7]={1,2,3,4,5,6,7};
    int n=7,k=11;
     if(k>n)
    {
        k=k%n;
    }
    int temp[k],s=n-1;
    int p=n-k,c=0;
    for(int i=n-k;i<n;i++)
    {
        temp[c]=a[i];
        c++;
    }
    for(int i=p-1;i>=0;i--)
    {
        a[s]=a[i];
        s--;
    }
    for(int i=0;i<c;i++)
    {
        a[i]=temp[i];
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
