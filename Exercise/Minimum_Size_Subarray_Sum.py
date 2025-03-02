class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        size = len(nums)
        left_pointer = 0
        right_pointer = 0 #j is the pointer keeps moving
        sublength = float('inf')
        cur_sum = 0 
        result = 0
        while(right_pointer < size):

            cur_sum += nums[right_pointer]
            while(cur_sum >= target):
                sublength = min(sublength, right_pointer - left_pointer + 1)
                cur_sum -= nums[left_pointer]
                left_pointer += 1
                
            right_pointer += 1

        
        return sublength if sublength != float('inf') else 0
       
