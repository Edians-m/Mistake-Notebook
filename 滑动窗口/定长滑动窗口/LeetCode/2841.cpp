class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        unordered_map<int,int> hash;
        int n = nums.size();
        long long ans = 0;
        long long sum = 0;
        int distinct = 0;       //不同元素个数   

        for(int i = 0; i < n; i++) {
            // 加入当前元素
            if(!hash[nums[i]]) distinct++;
            hash[nums[i]]++;
            sum+=nums[i];

            // 当窗口长度超过k，移除左边的元素
            if(i >= k) {
                hash[nums[i-k]]--;
                if(!hash[nums[i-k]]) distinct--;
                sum -= nums[i-k];
            }

            // 当窗口长度刚好为k时，检查条件并更新答案
            if(i >= k-1 && distinct >= m) {
                ans = max(ans,sum);
            }
        }

        return ans;
    }
};



//https://leetcode.cn/problems/maximum-sum-of-almost-unique-subarray/description/
