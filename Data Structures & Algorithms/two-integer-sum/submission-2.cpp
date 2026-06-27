class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map <int, int> hash;
        vector<int> out;
        for (int i = 0; i < nums.size(); ++i){
            if(hash.count(target - nums.at(i))){
                out.push_back(hash[target - nums.at(i)]);
                out.push_back(i);
                break;
            }
            hash[nums[i]] = i;
        }

        return out;
    }
};
