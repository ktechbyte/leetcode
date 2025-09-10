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

/*
n = 3
languages = [[2],[1,3],[1,2],[3]]
friendships = [[1,4],[1,2],[3,4]]
Bad friendships: (1,4), (3,4) → needTeach = {1,3,4}.

Check language frequencies:

Lang 1: person 3 → 1

Lang 2: person 1,3 → 2

Lang 3: person 4 → 1

Best choice: teach everyone language 2 → needTeach.size()=3, maxKnown=2.
Answer = 1.
*/