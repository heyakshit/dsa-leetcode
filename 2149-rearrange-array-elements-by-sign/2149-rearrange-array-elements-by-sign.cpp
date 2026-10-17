class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ptv;
        vector<int> ntv;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                ptv.push_back(nums[i]);
            }else{
                ntv.push_back(nums[i]);
            }
        }
        int x=0;
        int y=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=ptv[x];
                x++;
            }else{
                nums[i]=ntv[y];
                y++;
            }
        }
        return nums;
    }
};