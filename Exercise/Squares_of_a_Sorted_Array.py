class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left_point = 0
        right_point = len(nums) - 1
        size = len(nums)
        new_nums = [float('inf')] * size # the new array to save the results
        final = size - 1

        while(left_point <= right_point): #left_point +1 or right_point -1 (moving)
            if(nums[left_point]**2 <= nums[right_point]**2):
                new_nums[final] = nums[right_point]**2
                right_point -= 1
            else:
                new_nums[final] = nums[left_point]**2
                left_point += 1

            final -= 1 #save the  results from the last
            
        return new_nums
