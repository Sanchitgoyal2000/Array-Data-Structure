int Solution::repeatedNumber(const vector<int> &A)
{
    bool a[A.size()];
    int i;
    for(i=0;i<A.size();i++)
      a[i]=0;
    for(i=0;i<A.size();i++)
    {
        if(a[A[i]-1])
        {
            return A[i];
        }
        else
        {
            a[A[i]-1]=1;
        }
    }
    return -1;
}
