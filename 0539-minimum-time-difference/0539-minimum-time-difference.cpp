class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();

        vector<int> t;
        for(int i = 0; i < n; i++) {
            string s = timePoints[i];
            string minute = s.substr(3);
            string hour = s.substr(0, 2);

            int m = stoi(minute);
            int h = stoi(hour);
            t.push_back(60 * h + m);
        }

        sort(t.begin(), t.end());

        int ans = INT_MAX;
 
        for(int i = 0; i < n - 1; i++) {
            ans = min(ans, t[i + 1] - t[i]);
            ans = min(ans, abs(1440 - t[i + 1]) + t[i]);
        }
        
        ans = min(ans, t[n-1] - t[0]);
        ans = min(ans, abs(1440 - t[n-1]) + t[0]);

        return ans;
    }
};