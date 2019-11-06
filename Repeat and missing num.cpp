vector<int> Solution::repeatedNumber(const vector<int> &v)
{
   vector<int>res;
   bool a[v.size()];       // bool array takes less memory
   int i,h=1;
   for(i=0;i<v.size();i++)
     a[i]=0;

   for(i=0;i<v.size();i++)
   {
       if(a[v[i]-1]==1&&h==1) //dont terminate this loop bcz at once we have to traverse
       {                      // whole array to make 0 and 1 for each element value
          res.push_back(v[i]);
          h=0;
       }
       else
       a[v[i]-1]=1;
   }
   for(i=0;i<v.size();i++)
   {;
       if(a[i]==0)
       {
           res.push_back(i+1);
           break;
       }
   }
   return res;
}
