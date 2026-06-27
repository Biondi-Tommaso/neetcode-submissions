class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> freq;
        
        for (int num : nums){
            if(freq.count(num))
                return true;
            freq[num]++;
        }
        return false;
    }
};