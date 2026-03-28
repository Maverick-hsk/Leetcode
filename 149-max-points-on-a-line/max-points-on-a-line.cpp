class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int result = 0;
        if (n <= 2)
            return n;

        for (int i = 0; i < n; i++) {
            int max_pts = 0;

            unordered_map<string,int> mp;
            int duplicates = 0;
            int slope = 0;
            for (int j = i + 1; j < n; j++) {
                int dx = points[j][0] - points[i][0];
                int dy = points[j][1] - points[i][1];

                if (dx == 0 && dy == 0) {
                    duplicates++;
                    continue;
                }
                int g = __gcd(dx, dy);
                dx /= g;
                dy /= g;

                if (dx < 0) {
                    dx = -dx;
                    dy = -dy;
                } else if (dx == 0) {
                    dy = 1;
                } else if (dy == 0) {
                    dx = 1;
                }

                string key = to_string(dx) + '#' + to_string(dy);
                mp[key]++;

                max_pts = max(max_pts, mp[key]);
            }

            result = max(result, max_pts + duplicates + 1);
        }
        return result;
    }
};