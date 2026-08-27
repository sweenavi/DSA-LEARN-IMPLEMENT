class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        string ans = "";

        // Try to match target from left to right
        for (int i = 0; i < target.size(); i++) {

            char c = target[i];

            // Can we use target[i]?
            if (freq[c] > 0) {
                ans += c;
                freq[c]--;
            }
            else {
                // Cannot match target[i].
                // Find the smallest character > target[i].
                char bigger = '{';   // after 'z'

                for (char x = c + 1; x <= 'z'; x++) {
                    if (freq[x] > 0) {
                        bigger = x;
                        break;
                    }
                }

                // If we found a bigger character,
                // complete the rest with smallest characters.
                if (bigger != '{') {
                    ans += bigger;
                    freq[bigger]--;

                    for (char x = 'a'; x <= 'z'; x++) {
                        while (freq[x] > 0) {
                            ans += x;
                            freq[x]--;
                        }
                    }

                    return ans;
                }

                // No bigger character at this position.
                // Need to backtrack.
                break;
            }
        }

        // We matched target completely.
        // Need to backtrack and make one position bigger.

        for (int i = ans.size() - 1; i >= 0; i--) {

            // Put ans[i] back into available characters
            freq[ans[i]]++;

            // Find smallest character greater than ans[i]
            char bigger = '{';

            for (char x = ans[i] + 1; x <= 'z'; x++) {
                if (freq[x] > 0) {
                    bigger = x;
                    break;
                }
            }

            if (bigger != '{') {
                string result = ans.substr(0, i);

                result += bigger;
                freq[bigger]--;

                // Fill remaining positions with smallest chars
                for (char x = 'a'; x <= 'z'; x++) {
                    while (freq[x] > 0) {
                        result += x;
                        freq[x]--;
                    }
                }

                return result;
            }
        }

        return "";
    }
};
