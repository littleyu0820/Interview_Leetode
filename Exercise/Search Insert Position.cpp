class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {

       //1.找東西
       //2.有序的陣列
       //3.使用binary search

        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;

        while(left <= right) //start to search
        {
            mid = (left + right) / 2; //中間值

            if(nums[mid] < target) //答案在右區間或不存在
            {
                left = ++mid;
            }
            else if(nums[mid] > target) //答案在左區間或不存在
            {
                right = --mid;
            }
            else
            {
                return mid;
            }
        }

        mid = (left + right) / 2;

        if(nums[mid] > target && mid == 0) //答案在左區間
        {
            return mid;
        }
        else
        {
            return (nums[mid] < target) ? ++mid : --mid;
        }


    }
};
