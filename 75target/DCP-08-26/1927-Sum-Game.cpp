class Solution {
public:
    bool sumGame(string num) {
        int lsum=0;
        int rsum=0;
        int lq=0;
        int rq=0;
        int n=num.size();
        for(int i=0;i<n/2;i++)
        {
            if(num[i]=='?'){
                lq++;
            }
            else{
                lsum+=num[i]-'0';
            }
        }
        for(int i=n/2;i<n;i++)
        {
            if(num[i]=='?'){
                rq++;
            }
            else{
                rsum+=num[i]-'0';
            }
        }
        if((lq+rq)%2==1)
        {
            return true;
        }

        int diff=lsum-rsum;
        int qdiff=lq-rq;
        return diff!= -9*qdiff/2;
    }
};