# Remove Element(移除元素):
## 核心觀念:
### 1.數列是一個"連續"的類型相近的元素集合。
### 2.所謂移除，並不是刪除，而是對目標元素進行"覆蓋"。
### 3.在各種程式語言中，移除元素後，取其長度(len(nums))，確實會減小，但在實際空間上，其實陣列的整體空間大小不變。
# Code #1(Pointers) //Python
    nums = [1, 2, 3, 4, 5]  /*初始數列*/
    target = 3 /*移除目標*/
    pointer_fast = 0
    pointer_slow = 0
    size = len(nums)
    while(pointer_fast < size):
        if(nums[pointer_fast] != target):
            nums[pointer_slow] = nums[pointer_fast]
            pointer_slow += 1
        pointer_fast += 1

    return pointer_slow+1, nums
    
    
    
