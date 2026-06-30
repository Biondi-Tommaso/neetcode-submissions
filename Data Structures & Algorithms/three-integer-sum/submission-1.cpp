class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());

        vector<vector<int>> res;


        for(int i = 0; i < nums.size(); ++i){
            if (nums[i]>0) break; // I alredy checked al the negative number there are no other possible solution
            if (i > 0 && nums[i] == nums[i-1]) continue; // avoid duplicates

            int l = i+1;
            int r = nums.size()-1;
            while(l<r){
                int aux = nums[i]+nums[l]+nums[r];
                
                if (aux > 0) r--;
                else if (aux < 0) l++;
                else if(aux == 0) {
                    res.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(nums[l]==nums[l-1] and l<r){
                        l++;
                    }
                }
            }
        }
        return res;
    }
};
