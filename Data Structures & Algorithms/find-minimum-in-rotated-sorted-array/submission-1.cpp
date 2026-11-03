class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size()-1;

        while (l<r){
            int mid = l + (r-l)/2;
            
            if(nums[r] < nums[mid]){
                // se la sezione a destra è ordinata correttamente
                
                 l = mid +1;
            }
            else{
               r = mid;
            }
        }

       // if(r+1 <= nums.size()-1)
        //    return std::min(nums[l], nums[0]);
        return std::min(nums[l],nums[0]);
    }
};
