#include<sstream>
string Solution::largestNumber(const vector<int> &A)
{
    stringstream stream;    //test case 0 0 0 0
    int n=A.size();         // log(0) is not defined So be careful
    int a[n];
    int i,j,b,c,d;
    for(i=0;i<n;i++)
       a[i]=A[i];
    string s="";
    for(i=0;i<n-1;i++)
    {
       for(j=i+1;j<n;j++)
       {
       if(a[i]!=0)
         b=log10(a[i])+1;
       else
        b=1;

       c=a[j]*pow(10,b)+a[i];

       if(a[j]!=0)
         b=log10(a[j])+1;
       else
         b=1;


       b=a[i]*pow(10,b)+a[j];
            if(c>b)
            {
                d=a[j];
                a[j]=a[i];
                a[i]=d;
            }
       }
       if(a[0]==0)
       {
           return "0";
       }
       stream<<a[i];           //to convert integer to string type
       s=s+stream.str();
       stream.str("");
   }
       stream<<a[n-1];
       s=s+stream.str();

   return s;
}
