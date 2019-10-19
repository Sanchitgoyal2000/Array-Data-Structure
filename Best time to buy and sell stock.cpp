class Solution {
public:
    int maxProfit(vector<int>& v) {
        int res=0,temp=0;
        if(v.size()!=0)           //necessary condition
            temp=v[0];
        for(int i=1;i<v.size();i++)
        {
            if(v[i]-temp>res)
                res=v[i]-temp;
            if(v[i]<temp)
                temp=v[i];
        }
        return res;
    }
};
