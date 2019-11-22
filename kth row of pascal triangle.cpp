vector<int> Solution::getRow(int n)
{
    vector<int>v1,v;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0)
                {
                    v1.push_back(1);
                }
                else if(j==i)
                {
                    v1.push_back(1);
                }
                else
                {
                    v1.push_back(v[j-1]+v[j]);
                }
            }
            if(i!=n)
            {
              v.clear();
              v=v1;
              v1.clear();
            }
        }
        return v1;
}
