vector<int> Solution::plusOne(vector<int> &A)
{
    int p,h=0;
    if(A[A.size()-1]<9)
    {
        A[A.size()-1]=A[A.size()-1]+1;
    }
    else if(A.size()==1&&A[A.size()-1]==9)
    {
        A[A.size()-1]=1;
        A.push_back(0);
    }
    else
    {
    for(int i=A.size()-1;i>0;i--)
    {
        if(A[A.size()-1]==9)     // for last digit only
        {
            A[i]=0;
            A[i-1]=A[i-1]+1;
        }
        else if(A[i]>9)
        {
            A[i]=0;
            A[i-1]=A[i-1]+1;
        }
    }
    if(A[0]==10)
    {
        A[0]=0;
        A.push_back(0);
        for(int i=A.size();i>0;i--)
        {
            A[i]=A[i-1];
        }
        A[0]=1;
    }
    }
    int count =0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0)
        count++;
        else
        break;
    }
    if(count!=0)
    {
        for(int i=0;i<A.size()-count;i++)
        {
            A[i]=A[count+i];
        }
    }
    for(int i=0;i<count;i++)
    {
        A.pop_back();
    }
    return A;
}
