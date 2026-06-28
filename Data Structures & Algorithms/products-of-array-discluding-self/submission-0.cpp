class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;

        for (int num : nums){
            output.push_back(1);
        }

        for (int i = 0; i < nums.size(); ++i){
            for (int j=0; j<nums.size(); ++j){
                if(i==j) continue;
                output[j]*=nums[i];
            }
        }
        return output;
    }
};
