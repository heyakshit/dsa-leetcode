class Solution {
public:
    bool isPalindrome(string s) {
        bool result = true;
        string cleaned;
        for(char c : s){
            if(isalnum(c)){
                cleaned +=tolower(c);
            }
        }
        int left = 0; 
        int right =cleaned.size()-1;
            if(cleaned.empty()){
                result = true;
                return result;
            }
        while(left<=right){
            if(cleaned[left] != cleaned[right]){
                result = false;
                break;
            }
            left++;
            right--;
        }
        cout<< cleaned;
        return result;
    }
};