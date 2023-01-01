class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int rsum = reduce(nums.begin(), nums.end());
        int lsum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            rsum -= nums[i];
            if (lsum == rsum) {
                return i;
            }
            lsum += nums[i];
        }
        return -1;
    }
};
