class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> p;
        for(int i = 0; i < position.size(); ++ i){
            p.push_back({position[i],speed[i]});
        }

        std::sort(p.begin(), p.end());

        int n = position.size();
        double last = (double)(target-p[n-1].first)/p[n-1].second;
        for(int i = n-2; i >=0; --i){
            double temp = (double)(target-p[i].first)/p[i].second;
            if(last >= temp){
                n--;
            }
            else{
            last = temp;
            }
        }
        
        return n;
    }
};
