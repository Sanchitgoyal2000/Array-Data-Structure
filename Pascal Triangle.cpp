vector<vector<int> > Solution::solve(int n)
{
    vector<vector<int>>v;
    vector<int>v1;
        for(int i=0;i<n;i++)
        {
            v1.clear();
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
                    v1.push_back(v[i-1][j-1]+v[i-1][j]);
                }
            }
            v.push_back(v1);
            v1.clear();
        }
        return v;
}
