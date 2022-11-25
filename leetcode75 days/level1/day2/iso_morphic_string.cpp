class Solution {
public:
  
    //O(n^2)
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,int> mpp;
        unordered_map<char,int> mpp1;
        for(int i = 0; i < s.length(); i++)
        {
            if(mpp[s[i]]==0){    
                for(int j = i; j < t.length(); j++)
                {
                    if(s[i]==s[j] && t[i]!=t[j])
                    {
                        return false;
                    }
                    else if(s[i]!=s[j] && t[i]==t[j])
                    {
                        return false;
                    }
                }
                mpp[s[i]]++;
                mpp1[t[i]]++;
            }
        }
        return true;
    }
  
  
    // TimeComplexity = O(n)
    // AuxilarySpace = n^2 as we are creating two umaps to store the character frequency of the two arrays
    // bool isIsomorphic(string s, string t) {
    //     unordered_map<char, int> map1;
    //     unordered_map<char, int> map2;
        
    //     for(int i =0 ;i < s.length(); i++){
    //         map1[s[i]] = i+1;
    //         map2[t[i]] = i+1;
    //     }
        
    //     for(int i =0 ;i < s.length(); i++){
    //         if (map1[s[i]] != map2[t[i]]){
    //             return false;
    //         }
    //     }
    //     return true;

    // }
  
    // TimeComplexity = O(n)
    // AuxilarySpace = n
    //   unordered_map<char,char> mp,mp1;
    //   int i=0,j=0;
    //   while(i<s.length() && j<t.length()){
    //       if(!mp.count(s[i]) && !mp1.count(t[j])){
    //           mp[s[i]]=t[j];
    //           mp1[t[j]]=s[i];
    //       }else{
    //           if(mp[s[i]]!=t[j] || mp1[t[j]]!=s[i]) return false;
    //       }
    //       i++;j++;
    //   }
    //   return true;
};
