int Solution::firstMissingPositive(const vector<int> &A)
{
    bool a[A.size()];                // taking bool array as we cant modify array
    int i;                           // space complexity is less than O(n)
    for(i=0;i<A.size();i++)
    {
        a[i]=0;
    }
    for(i=0;i<A.size();i++)
    {
        if(A[i]>=0&&A[i]<=A.size())
        {
            a[A[i]-1]=1;
        }
    }
    for(i=0;i<A.size();i++)
    {
        if(a[i]==0)
        return i+1;
    }
    return A.size()+1;
}
