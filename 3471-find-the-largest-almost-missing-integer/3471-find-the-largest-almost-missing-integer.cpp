class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for(int i = 0; i < n - k + 1; i++) {
            unordered_set<int> st;

            for(int j = i; j < i + k; j++) {
                st.insert(nums[j]);
            }

            for(auto x: st) {
                mp[x]++;
            }
        }

        int ans = -1;
        for(auto p: mp) {
            int val = p.first;
            int freq = p.second;

            if(freq == 1)
                ans = max(ans, val);
        }

        return ans;
    }
};