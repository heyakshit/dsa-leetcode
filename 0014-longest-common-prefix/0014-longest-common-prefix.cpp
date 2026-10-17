class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = strs[0];

        for (int i = 0; i<strs.size(); i++) {
            int j = 0;
            while (j < result.size() && j < strs[i].size() &&
                   result[j] == strs[i][j]) {
                j++;
            }
            result =result.substr(0,j);
            if(result==""){
                return "";
            }
        }
        return result;
    }
};