#include<bits/stdc++.h>
using namespace std;
string decodeSequence(string binarysequence)
{
    unordered_map<string, char> mpp;
    mpp["001"] = 'C';
    mpp["010"] = 'G';
    mpp["011"] = 'A';
    mpp["101"] = 'T';
    mpp["110"] = 'U';
    string result = "";
    string tempo = binarysequence.substr(0,3);
    if(tempo == "000")
    {
        mpp["110"] = 'T';
    }
    if(tempo == "111"){
        mpp["101"] = 'U';
    }
    for(int i = 0; i+2 < binarysequence.size();i+=3)
    {
        string temp = binarysequence.substr(i,3);
        
        if(mpp.find(temp) != mpp.end())
        {
            result += mpp[temp];
        }
    }
    return result;
}
int main(){
    string str;
    cin >> str;
    cout << decodeSequence(str)<<endl;
    return 0;
}