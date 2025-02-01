# 二分搜尋法(Binary Seach):
## 是一種在"有序"數列搜尋特定元素(數值)的演算法，通過將陣列拆半，從最中間的元素開始尋找目標值，其平均時間複雜度(Time Complexity)為:O(logn)。
# 核心概念:
## 1. 左閉右閉[left, right]:
### 表示區間包含兩點極端值left以及right。
## 2. 左閉右開[left, right):
### 表示區間不包含右方極端值right。
## 3. 區間不變量:
### 表示區間初始設定為左閉右閉，那麼在接下來的執行過程中，就維持左閉右閉;左閉右開亦是如此。
# Code #1([left, right]) //Python
### nums = [0, 1, 3, 5, 8, 7, 11] //初始數列
### left, right = 0, len(nums)-1
### target = 2 //目標值
### while(left <= right):
       middle

