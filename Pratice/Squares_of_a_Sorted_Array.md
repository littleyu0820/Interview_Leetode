# Squares_of_a_Sorted_Array 有序陣列的平方
## 思考邏輯:
### 所謂的有序陣列，即是最大值與最小值分別出現在左右兩端的陣列，如nums = [-1, 0, 5, 9]。
### 在這樣的前提下，如果我們將陣列當中的每個數值做平方，所產生的最大值則會出現在左右兩端，以上面的陣列nums為例子:nums**2 = [1, 0, 25, 81]
### 通過這個想法，我們就可以利用"雙指針"的方式，去對平方後的陣列做重新排列了。
## 操作方式:
### 首先我們需要兩段指針，一段從陣列的最左邊開始(nums[0])，另一段從最右邊開始(nums[len(nums-1)])。
### 再來則是一個全新的空陣列，當然要注意的是，這個陣列的大小必須跟nums一樣大。
### 依照前面所講，我們得知，陣列的最大值一定會出現在左右兩端，所以我們可以這樣操作:
#### 分別對nums[0]以及nums[len(nums-1)]做平方，如果是右邊的數值較大，則將最右邊的指針向前(左)移一個，左邊的指針則是維持不動。
#### 反之，如果是左邊的數值比較大，則是將左邊的指針向後(右)移一格，右邊的指針維持不動。
#### 當然，也要記得將數值較大的結果存入新的陣列當中。


## Code #1(Pointers or Sliding Window) //Python:
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


# LeetCode:<https://leetcode.com/problems/squares-of-a-sorted-array/>
# My_LeetCode_Solution:<https://github.com/littleyu0820/LeetCode_Exercises/blob/main/Exercise/Binary_Search.py>
