class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        i, j =  0, 0
        nums = [[0] * n for _ in range(n)]
        counter = 1
        loop = n//2
        mid = n//2

        for offset in range(1, loop + 1):
            for run in range(j, n - offset):
                nums[i][run] = counter
                counter += 1
            for run in range(i, n - offset):
                nums[run][n - offset] = counter
                counter += 1
            for run in range(n - offset, j, -1):
                nums[n - offset][run] = counter
                counter += 1
            for run in range(n - offset, i, -1):
                nums[run][j] = counter
                counter += 1
            
            i += 1
            j += 1

        if n % 2 != 0:
            nums[mid][mid] = counter

        return nums
 
        
