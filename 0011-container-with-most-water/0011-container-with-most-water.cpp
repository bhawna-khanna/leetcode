class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water=0;
        int n=height.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            int w=j-i;
            int h=min(height[i],height[j]);
            int area=h*w;

            max_water=max(max_water,area);
            if(height[i]<height[j])
            {
                i++;
            }
            else{
                j--;
            }
        }
        cout<<max_water;

        // for(int i=0;i<height.size();i++)
        // {
        //     for(int j=i+1;j<height.size();j++)
        //     {
        //         int w=j-i;
        //         int h=min(height[i],height[j]);
        //         int area=w*h;

        //         max_water=max(max_water,area);
        //     }
        // }
        return max_water;
    }
};