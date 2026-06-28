class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int num : nums){
            cout << num << ",";
        }

        int max = 0;
        int current = 0;
        for (int i = 0; i < nums.size(); ++i){
            if (i == 0) {current = 1; max = 1;continue;} 
            if(std::abs(nums[i]-nums[i-1]) == 1){
                current++;
                max = std::max(max, current);
            }
            else if(nums[i]-nums[i-1] == 0) continue;
            else current = 1;
        }
        return max;
    }
};
