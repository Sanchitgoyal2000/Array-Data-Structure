int mycompare(string x,string y);
#include<sstream>
string Solution::largestNumber(const vector<int> &A)
{
    int i;
    vector<string>a;
    stringstream ss;
    for(i=0;i<A.size();i++)
    {
        ss<<A[i];
        a.push_back(ss.str());
        ss.str("");
    }

    sort(a.begin(),a.end(),mycompare);// mycompare has in built sorting algo

    string res="";
    int c=0;
    for(i=0;i<a.size();i++)
    {
        if(a[i]=="0")
          c++;
       res.append(a[i]);
    }
    if(c==a.size())
    return "0";

    return res;
}
int mycompare(string x,string y)
{                                    // 10 9 will be sorted like 9 10 bcz first characte r
    string xy=x.append(y);           //is compared 9 has more ascii then 1
    string yx=y.append(x);

    return xy.compare(yx)>0?1:0;
}
