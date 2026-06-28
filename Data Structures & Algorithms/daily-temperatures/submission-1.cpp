class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        unsigned int n = temperatures.size();
        vector<int> out(n);
        stack<int> s;
        int diff = 0;
        for (int i = 0; i < n; ++i){
            int el = temperatures[i];
            int counter = 0;
            while (s.size() && s.top() < temperatures[i]){
                counter++;
                if(out[i-counter]!=0) continue;
                out[i-counter] = counter;
                

                s.pop();
            }
            
            s.push(temperatures[i]);
            
        }
        return out;
    }
};
