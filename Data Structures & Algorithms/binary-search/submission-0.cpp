class Solution {
public:
    int search(vector<int>& nums, int target) {
        int min = 0; 
        int max = nums.size();

        while(min<max){
            if(nums[min + (max-min)/2] == target)
            return min + (max-min)/2;

            if(nums[min + (max-min)/2] > target){
                max = min + (max-min)/2;
            }
            if(nums[min + (max-min)/2] < target){
                min = min + (max-min)/2+1;
            }
        }
        return -1;
    }
};
