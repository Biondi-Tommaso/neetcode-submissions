class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<string, vector<string>> orderedString;
        
        for(string str : strs){
            string key = str;
            sort(key.begin(), key.end());
            orderedString[key].push_back(str);
        }

        vector<vector<string>> result;
        for (auto& pair : orderedString) {
            result.push_back(pair.second);
        }
        return result;
    }
};
