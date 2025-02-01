class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        pointer_slow = 0
        pointer_fast = 0
        size = len(nums)
        while(pointer_fast < size):
            if(nums[pointer_fast] != val):
                nums[pointer_slow] = nums[pointer_fast]
                pointer_slow +=1
            pointer_fast +=1

        k = pointer_slow
        return k
