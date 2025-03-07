class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int left = 0;
        int right = nums.size() - 1;
        while(left <= right)
        {
            int mid = (right + left) / 2;
            if(nums[mid] < target)
            {
                left = mid + 1;
            }
            else if(nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                return mid;
            }
        }

        int new_mid = (right + left) / 2;
        if(new_mid == 0 && nums[new_mid] > target)
        {
            return new_mid;
        }
        else
        {
            return nums[new_mid] < target ? ++new_mid : --new_mid;
        }
    
        
    }
};
