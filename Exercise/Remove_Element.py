#Pointers(fast and slow) method
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

#Simple method
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        counter = 0
        size = len(nums) 
        while(counter < size): 
            if(nums[counter] == val): 
                for i in range(counter+1, size):
                    nums[i-1] = nums[i]
                size -= 1
                counter -= 1

            counter += 1

        k = counter
        return k
