class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> frequency;
        int n =nums.size()/2;
        int result;
        for(int x : nums){
            frequency[x]++;
        }
        for(auto it: frequency){
            if(it.second>n){
                result =it.first;
            }
        }
        return result;
    }
};