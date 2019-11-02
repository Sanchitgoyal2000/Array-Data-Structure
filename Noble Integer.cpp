int Solution::solve(vector<int> &A)
{
    int res=-1;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size();i++)
    {
        if(i!=A.size()-1&&A[i]==A[i+1])
        continue;

        if(A.size()-i-1==A[i])
          return 1;
    }
    return -1;
}
