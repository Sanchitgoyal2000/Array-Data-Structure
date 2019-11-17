int maxLen(int a[],int n)
{
  int max=0,count=0,s=0;
  map<int,int>m;
  for(int i=0;i<n;i++)
  {
      s=s+a[i];
      if(a[i]==0&&max==0)
        max=1;
      if(s==0)             // if whole array from starting sum is zero
        max=i+1;              // in map only unique indexes are present
      if(m.find(s)!=m.end())
      {
          if(i-m[s]>max)
          {
              max=i-m[s];
          }
      }
      else
         m[s]=i;              //sum acting as index here
  }
  return max;
}
