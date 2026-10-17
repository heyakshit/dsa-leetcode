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

        // int left=0;
        // int ptr =1;
        // int right= nums.size()-1;

        // while(ptr<=right){
        //     if((left%2==0 && nums[left] >=0) || (left%2 != 0 && nums[left]<0)){
        //         left++;
        //         ptr++;

        //     }else{
        //         for(int i=right;i>left; i--){
        //             swap(nums[i],nums[i-1]);
        //         }
        //         left++;
        //         right++;
        //     }
        // }
        return nums;
    }
};