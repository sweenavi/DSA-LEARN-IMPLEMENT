class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int r=0;
        int wr=0;
        while(r<n)
        {
            char cur=chars[r];
            int st=r;
            while(r<n && chars[r]==cur)
            {
                r++;
            }
            int cnt=r-st;
            chars[wr++]=cur;
            if(cnt>1)
            {
                int dig=0;
                int temp=cnt;

                while(temp>0){
                    dig++;
                    temp/=10;
                }

                int pos=wr+dig-1;
                while(cnt>0){
                    chars[pos--]='0'+(cnt%10);
                    cnt/=10;
                }
                wr+=dig;
            }

        }
        return wr;
    }
};