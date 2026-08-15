class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int s1 = str1.size();
        int s2 = str2.size();

        int smstr = min(s1, s2);

        for (int i = smstr; i >= 1; i--) {

            if (s1 % i == 0 && s2 % i == 0) {

                string candidate = str1.substr(0, i);

                // Check candidate can build str1
                string temp = "";

                while (temp.size() < str1.size()) {
                    temp += candidate;
                }

                if (temp != str1) {
                    continue;
                }

                // Check candidate can build str2
                temp = "";

                while (temp.size() < str2.size()) {
                    temp += candidate;
                }

                if (temp != str2) {
                    continue;
                }

                // First valid candidate is the greatest
                return candidate;
            }
        }

        return "";
    }
};
