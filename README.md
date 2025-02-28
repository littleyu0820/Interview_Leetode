# 《流雲》程式工程師求職前準備!
## 本身是通訊系畢業的學生，在學期間主要使用的語言都是Python，但在求職前打算好好的學習C++，在這裡記錄下學習過程。
# C++

## 1 C++的輸入與輸出
    /*
    *函式庫<iostream>的應用
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
    int  = 0;
### 程式碼解釋:宣告變數x。
    std::cin >> v1;
### 程式碼解釋:將輸入的值cin存取到變數x中。
    std::cout << x << endl;
### 程式碼解釋:將變數x存到cout中，並且釋放。



# LeetCode_Exercises
