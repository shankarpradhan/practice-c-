class Solution {
public:
    
    bool isSubsequence(string str, string str2) {
        if(str==str2){
            return true;
        }
        if(str.size()>str2.size())
        {
            return false;
        }
        for(int i = 0,j=0; i < str2.size();i++)
        {
            if(str2[i]==str[j])
            {
                j++;
            }
            if(j==str.size())
            {
                return true;
            }
        }
        return false;
    }
};
