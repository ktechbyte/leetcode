class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ball_colors; // Stores ball -> color mapping
        unordered_set<int> distinct_colors;  // Stores unique colors
        vector<int> result;

        for (const auto& query : queries) {
            int ball = query[0], color = query[1];

            // Check if ball already has a color
            if (ball_colors.count(ball)) {
                int prev_color = ball_colors[ball];
                if (prev_color != color) {
                    // Remove previous color if it's no longer used
                    bool still_exists = false;
                    for (const auto& pair : ball_colors) {
                        if (pair.second == prev_color && pair.first != ball) {
                            still_exists = true;
                            break;
                        }
                    }
                    if (!still_exists) {
                        distinct_colors.erase(prev_color);
                    }
                }
            }

            // Assign new color to the ball
            ball_colors[ball] = color;
            distinct_colors.insert(color);

            // Store the number of distinct colors
            result.push_back(distinct_colors.size());
        }

        return result;
    }
};