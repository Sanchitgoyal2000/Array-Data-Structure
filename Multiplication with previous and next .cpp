vector<int> Solution::solve(vector<int> &a)
{                                          // testcase [1 ] and [1 2]
    int p,q,i;
    for(i=0;i<a.size()&&a.size()!=1;i++)
    {
        if(i==0)
        {
            p=a[i];
            a[i]=a[i]*a[i+1];
        }
        else if(i==a.size()-1)
        {
            a[i]=a[i]*p;
        }
        else
        {
            q=a[i];
            a[i]=p*a[i+1];
            p=q;
        }
    }
    return a;
}
