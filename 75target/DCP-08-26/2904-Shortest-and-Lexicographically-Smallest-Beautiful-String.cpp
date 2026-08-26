class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int left = 0;
        int ones = 0;
        int minLength = INT_MAX;
        string ans = "";

        for (int right = 0; right < s.length(); right++) {

            if (s[right] == '1') {
                ones++;
            }

            if (ones == k) {

                // Remove unnecessary leading zeros
                while (s[left] == '0') {
                    left++;
                }

                int currentLength = right - left + 1;
                string current = s.substr(left, currentLength);

                // Update answer
                if (currentLength < minLength) {
                    minLength = currentLength;
                    ans = current;
                }
                else if (currentLength == minLength) {
                    ans = min(ans, current);
                }

                // Move past the first '1'
                ones--;
                left++;
            }
        }

        return ans;
    }
};
