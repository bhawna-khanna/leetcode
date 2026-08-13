class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i;
        int n=digits.size();
        for(i=n-1;i>=0;i--)
        {
            if(digits[i]!=9)
            {
                digits[i]++;
                break;
            }
            else{
                digits[i]=0;
            }
        }
        if(i==-1)
        {
            digits.insert(digits.begin(),1);
        }
        for(int j=0;j<digits.size();j++)
        {
            cout<<digits[j];
        }
        return digits;
    }
};