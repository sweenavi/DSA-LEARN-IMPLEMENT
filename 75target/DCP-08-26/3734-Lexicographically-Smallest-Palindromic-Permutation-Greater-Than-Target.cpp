class Solution {
public:
    string lexPalindromicPermutation(string s, string target) {

        int n = s.size();
        int m = n / 2;

        vector<int> cnt(26, 0);

        for (char c : s) {
            cnt[c - 'a']++;
        }

        int odd = 0;
        int middle = -1;

        for (int i = 0; i < 26; i++) {
            if (cnt[i] % 2) {
                odd++;
                middle = i;
            }
        }

        if (odd > 1) {
            return "";
        }

        vector<int> halfCnt(26);

        for (int i = 0; i < 26; i++) {
            halfCnt[i] = cnt[i] / 2;
        }

        string t = target.substr(0, m);

        auto makePalindrome = [&](string left) {

            string right = left;
            reverse(right.begin(), right.end());

            string mid = "";

            if (middle != -1) {
                mid += char('a' + middle);
            }

            return left + mid + right;
        };

  
        vector<int> remaining = halfCnt;
        bool possible = true;

        for (char c : t) {
            int x = c - 'a';

            if (remaining[x] == 0) {
                possible = false;
                break;
            }

            remaining[x]--;
        }

        if (possible) {

            string candidate = t;

            string pal = makePalindrome(candidate);

            if (pal > target) {
                return pal;
            }
        }

 

        for (int i = m - 1; i >= 0; i--) {

            vector<int> rem = halfCnt;

            bool prefixPossible = true;

            for (int j = 0; j < i; j++) {

                int x = t[j] - 'a';

                if (rem[x] == 0) {
                    prefixPossible = false;
                    break;
                }

                rem[x]--;
            }

            if (!prefixPossible) {
                continue;
            }

            int targetChar = t[i] - 'a';

            int bigger = -1;

            for (int c = targetChar + 1; c < 26; c++) {
                if (rem[c] > 0) {
                    bigger = c;
                    break;
                }
            }

            if (bigger == -1) {
                continue;
            }


            string left = "";

            for (int j = 0; j < i; j++) {
                left += t[j];
            }

            left += char('a' + bigger);
            rem[bigger]--;

            for (int c = 0; c < 26; c++) {
                while (rem[c] > 0) {
                    left += char('a' + c);
                    rem[c]--;
                }
            }

            return makePalindrome(left);
        }

        return "";
    }
};
