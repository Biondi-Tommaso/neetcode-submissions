class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> freq;

        for (int num:nums){
            freq[num]++;
        }

        vector<pair<int,int>> arr;
        for (auto p : freq){
            arr.push_back({p.second, p.first});
        }

        sort(arr.begin(), arr.end());
        
        vector<int> res;
        for(int i = 0; i < k; ++i){
            res.push_back(arr.at(arr.size()-i-1).second);
        }

        return res;


    }
};
