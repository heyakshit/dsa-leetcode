class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_map<char, char> reverseMp;

        for(int i =0;i<s.size(); i++){
            char a = s[i];
            char b = t[i];

            if(mp.count(a) && mp[a]!= b){
                return false;
            }

            if(reverseMp.count(b) && reverseMp[b]!= a){
                return false;
            }

            mp[a] =b;
            reverseMp[b]=a;
        }
            return true;

    }
};