class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,int>mp;

        for(auto &seats:reservedSeats)
        {
            int r=seats[0];
            int c=seats[1];
            mp[r]|=(1<<(c-1));
        }
        int l=0;
        int r=0;
        int m=0;
        for(int s=2;s<=5;s++){l|=(1<<(s-1));}
        for(int s=4;s<=7;s++){m|=(1<<(s-1));}
        for(int s=6;s<=9;s++){r|=(1<<(s-1));}

         int ans = 2 * (n - mp.size());

        // Process rows having reservations
        for (auto &[row, mask] : mp)
        {
            bool leftFree = (mask & l) == 0;
            bool middleFree = (mask & m) == 0;
            bool rightFree = (mask & r) == 0;

            if (leftFree && rightFree)
            {
                ans += 2;
            }
            else if (leftFree || middleFree || rightFree)
            {
                ans += 1;
            }
        }

        return ans;
    }
};