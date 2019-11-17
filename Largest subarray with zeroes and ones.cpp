int maxLen(int a[], int n) // solving this questions as laargest subarray length with
{                          //zero sum
  int max=0,count=0,s=0;   // 0 0 1 0 1 to -1 -1 1 -1 1
  for(int i=0;i<n;i++)
  {
     if(a[i]==0)
         a[i]=-1;
  }
  map<int,int>m;
  for(int i=0;i<n;i++)
  {
      s=s+a[i];
      if(a[i]==0&&max==0)
        max=1;
      if(s==0)             //if whole array from starting sum is zero
        max=i+1;
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
