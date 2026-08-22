class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
    int area=0;
        while(l<r)
        {
            int width=r-l;
            int currh=min(height[l],height[r]);
            int a=width*currh;
            area=max(a,area);

            if(height[l]<height[r]){l++;}
            else{ r--;}
        }
        return area;
    }
};