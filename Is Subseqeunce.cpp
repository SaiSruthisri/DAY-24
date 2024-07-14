class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sindex=0,tindex=0;
        while(sindex<s.size() && tindex<t.size())
        {
            if(s[sindex]==t[tindex])
            {
                sindex++;
            }
            tindex++;
        }

        return sindex==s.size();
    }
};
