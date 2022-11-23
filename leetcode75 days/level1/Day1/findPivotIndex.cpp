class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0, leftSum = 0, currentSum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }

        for(int i = 0; i < nums.size(); i++)
        {
            currentSum += nums[i];
            if(sum-currentSum == leftSum)
            {
                return i;
            }
            leftSum += nums[i];
        }

        return -1;
    }
};
