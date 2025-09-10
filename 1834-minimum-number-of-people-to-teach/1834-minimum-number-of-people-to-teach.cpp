class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int m = friendships.size();
        unordered_set<int> needTeach;

        for (int i = 0; i < m; i++) {
            int p1 = friendships[i][0]-1;
            int p2 = friendships[i][1]-1;
            bool flag = false;

            unordered_set<int> langs(languages[p1].begin(),languages[p1].end());
            for (int lang : languages[p2]) {
                if (langs.count(lang)) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                needTeach.insert(p1);
                needTeach.insert(p2);
            }
        }

        // count frequency of each language among people who need teaching
        vector<int> freq(n + 1, 0);
        for (int person : needTeach) {
            for (int lang : languages[person]) {
                freq[lang]++;
            }
        }

        int maxKnown = 0;
        for (int i = 1; i <= n; i++) {
            maxKnown = max(maxKnown, freq[i]);
        }

        return needTeach.size() - maxKnown;
    }
};