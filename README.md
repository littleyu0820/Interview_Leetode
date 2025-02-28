# 《流雲》程式工程師求職前準備!
## 本身是通訊系畢業的學生，在學期間主要使用的語言都是Python，但在求職前打算好好的學習C++，在這裡記錄下學習過程。
# C++
### Table of Contents
  ##### ☁️[輸入與輸出](https://github.com/littleyu0820/LeetCode_Exercises/blob/main/README.md#輸入與輸出)
  ##### ☁️[迴圈](https://github.com/littleyu0820/LeetCode_Exercises/blob/main/README.md#迴圈)
## 1 輸入與輸出
    /*
    * 函式庫<iostream>的應用
    * istream(cin)/ostream(cout)
    * std::cin >> x;
    * 將輸入的值存取到變數x
    * std::cout << x << endl;
    * 將變數x的值存到cout並且釋放
    */
    
    #include <iostream>

    int main()
    {
    	std::cout << "This is a test!" << std::endl;
    
    	int v1 = 0, v2 = 0;
    	std::cin >> v1 >> v2;
    	std::cout << " The sum of " << v1 << " and " << v2 << " is "
    		<< v1 + v2 << std::endl;
    
    	return 0;
    }
### 以上面這段程式碼為例子，在C++中，當我們要進行輸入輸出，皆須先引入函式庫iostream。
### iostream可以分成兩個部分:istreeam(cin)以及ostream(cout)。
    int  x = 0;
### 程式碼解釋:宣告變數x。
    std::cin >> v1;
### 程式碼解釋:將輸入的值cin存取到變數x中。
    std::cout << x << endl;
### 程式碼解釋:將變數x存到cout中，並且釋放。
### 注:endl是用來將暫存區的內容釋放到顯示器上的。

## 2 迴圈
### 一般來說，程式碼皆是順序執行的，但我們也可以通過迴圈的方式來增加特定條件。
### while:反覆執行某段程式，直到給定的條件為假(false)。
    #include <iostream>
    
    int main()
    {
        int sum = 0, val = 1;
        
        while (val <= 10) //if val is less than or equal to 10 keep running the loop
        {
        	sum += val; // keep adding val to sum
        	++val; // increment val by 1 each loop
        }
        std::cout << "Total is: " << sum << std::endl;
        return 0;
     }
     
### for:為了簡化迴圈內條件變數的增減而專們定義出來的，簡化步驟。

# LeetCode_Exercises
