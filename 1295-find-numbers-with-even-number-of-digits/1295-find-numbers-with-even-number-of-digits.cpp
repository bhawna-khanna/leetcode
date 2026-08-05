class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int no_freq=0;
        for(int i=0;i<n;i++)
        {
            int count=0;
            while(nums[i]>0)
            {
                int r=nums[i]%10;
                nums[i]=nums[i]/10;

                if(r>=0)
                {
                    count++;
                }
            }
            if(count%2==0)
            {
                no_freq++;
            }
        }
        return no_freq;
        
    }
};