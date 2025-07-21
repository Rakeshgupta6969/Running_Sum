class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
          // using the prefix sum concept.


          int n = nums.size();
          vector<int>ans(n);
          ans[0] = nums[0];

        for(int i = 1; i<n; i++){
            ans[i]  = nums[i]+ans[i-1];
        }

        return ans;
    }
};