# 《流雲》程式工程師求職前準備!
## 本身是通訊系畢業的學生，之前使用的語言都是Python，但在求職前打算好好的學習C++以及刷LeetCode，在這裡記錄下學習過程。
### 題外話，下方C++的學習心得以及例題，基本上都來自C++Primer 5th這本書，所以可以搭配著看更好喔!
##  📹[流雲的程式筆記Programmer](https://www.youtube.com/@%E6%B5%81%E9%9B%B2%E7%9A%84%E7%A8%8B%E5%BC%8F%E7%AD%86%E8%A8%98)  📹[影片講解-C++學習心得(YouTube)](https://www.youtube.com/watch?v=nxY5JQDC97g)  
### Table of Contents(C++)
>#### ☁️[輸入與輸出](https://github.com/littleyu0820/LeetCode_Exercises/blob/main/README.md#1-%E8%BC%B8%E5%85%A5%E8%88%87%E8%BC%B8%E5%87%BA)  
>#### ☁️[迴圈](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#2-%E6%B5%81%E7%A8%8B%E6%8E%A7%E5%88%B6%E8%BF%B4%E5%9C%88)
>>#### ☁️[練習題1](https://github.com/littleyu0820/LeetCode_Exercises/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C1)
>>#### ☁️[練習題2](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C2)

>#### ☁️[條件式](https://github.com/littleyu0820/LeetCode_Exercises/blob/main/README.md#3-%E6%A2%9D%E4%BB%B6%E5%BC%8Fif)
>#### ☁️[物件導向](https://github.com/littleyu0820/LeetCode_Exercises/blob/main/README.md#3-%E7%89%A9%E4%BB%B6%E5%B0%8E%E5%90%91object-oriented)
>>#### ☁️[Class的應用與介紹](https://github.com/littleyu0820/LeetCode_Exercises/blob/main/README.md#%E7%A8%8B%E5%BC%8F%E7%A2%BC%E7%AF%84%E4%BE%8B1class%E7%9A%84%E7%B2%97%E7%95%A5%E8%A7%A3%E7%B4%B9%E8%88%87%E6%87%89%E7%94%A8)
>>#### ☁️[讀取/使用Class中的特定資料](https://github.com/littleyu0820/LeetCode_Exercises/blob/main/README.md#%E7%A8%8B%E5%BC%8F%E7%A2%BC%E7%AF%84%E4%BE%8B2%E8%AE%80%E5%8F%96class%E4%B8%AD%E7%9A%84%E7%89%B9%E5%AE%9A%E8%B3%87%E6%96%99)

>#### ☁️[基本觀念](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#4-%E5%9F%BA%E6%9C%AC%E8%A7%80%E5%BF%B5)
>#### ☁️[指標](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#5-%E6%8C%87%E6%A8%99pointer)
>#### ☁️[限定詞](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#6-%E9%99%90%E5%AE%9A%E8%A9%9Econst)
>#### ☁️[資料結構](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#7-%E8%B3%87%E6%96%99%E7%B5%90%E6%A7%8Bdata-structure)
>#### ☁️[命名空間](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#8-%E5%91%BD%E5%90%8D%E7%A9%BA%E9%96%93)
>#### ☁️[字串](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#8-%E5%AD%97%E4%B8%B2string)
>>#### ☁️[練習題3](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C3)
>>#### ☁️[練習題4](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C4)
>>#### ☁️[練習題5](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C5)

>#### ☁️[Vector](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#9-vector)
>>#### ☁️[練習題6](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C6)
>>#### ☁️[練習題7](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C7)

>#### ☁️[迭代器](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#10-%E8%BF%AD%E4%BB%A3%E5%99%A8iterator)
>>#### ☁️[練習題8](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C8)

>#### ☁️[陣列](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#11-%E9%99%A3%E5%88%97array)
>#### ☁️[多維陣列](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#12-%E5%A4%9A%E7%B6%AD%E9%99%A3%E5%88%97)
>#### ☁️[運算式](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#13-%E9%81%8B%E7%AE%97%E5%BC%8Fexpression)
>>#### ☁️[練習題9](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C9)
>>#### ☁️[練習題10](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C10)

>#### ☁️[述句](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#14-%E8%BF%B0%E5%8F%A5statement)
>>#### ☁️[練習題11](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C11)
>>#### ☁️[練習題12](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C12)
>>#### ☁️[練習題13](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C13)

>#### ☁️[例外(異常)處理](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#15-%E4%BE%8B%E5%A4%96%E7%95%B0%E5%B8%B8%E8%99%95%E7%90%86)
>>#### ⭐⭐⭐[綜合練習](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B6%9C%E5%90%88%E7%B7%B4%E7%BF%92-1)

>#### ☁️[函式](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#15-%E5%87%BD%E5%BC%8Ffunction)
>>#### ☁️[練習題14](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C14)

>#### ☁️[定義Class](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#16-%E9%A1%9E%E5%88%A5classes)
>#### ☁️[存取與封裝](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#17-%E5%AD%98%E5%8F%96%E8%88%87%E5%B0%81%E8%A3%9D)
>>#### ☁️[練習題15](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C15)

>#### ☁️[IO程式庫](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#18-io%E7%A8%8B%E5%BC%8F%E5%BA%AB)
>>#### ☁️[練習題16](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C16)

>#### ☁️[循序容器](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#19-%E5%BE%AA%E5%BA%8F%E5%AE%B9%E5%99%A8)
>>#### ☁️[練習題17](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C17)
>>#### ☁️[練習題18](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C18)
>>#### ☁️[練習題19](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C19)
>>#### ☁️[練習題20](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C20)

>#### ☁️[泛用演算法](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#20-%E6%B3%9B%E7%94%A8%E6%BC%94%E7%AE%97%E6%B3%95)
>#### ☁️[再探迭代器](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#21-%E5%86%8D%E6%8E%A2%E8%BF%AD%E4%BB%A3%E5%99%A8)
>>#### ☁️[練習題21](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C21)

>#### ☁️[關聯式容器](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#22-%E9%97%9C%E8%81%AF%E5%BC%8F%E5%AE%B9%E5%99%A8)
>>#### ☁️[練習題22](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C22)
>>#### ⭐⭐⭐[綜合練習](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B6%9C%E5%90%88%E7%B7%B4%E7%BF%92-3)

>#### ☁️[動態記憶體](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#23-%E5%8B%95%E6%85%8B%E8%A8%98%E6%86%B6%E9%AB%94dynamic-memory)

>#### ☁️[動態陣列](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#24-%E5%8B%95%E6%85%8B%E9%99%A3%E5%88%97dynamic-array)
>>#### [⭐⭐⭐⭐⭐實作](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E5%AF%A6%E4%BD%9C-3)

>#### ☁️[拷貝控制](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#25-%E6%8B%B7%E8%B2%9D%E6%8E%A7%E5%88%B6)
>>#### [⭐⭐⭐⭐⭐實作](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E5%AF%A6%E4%BD%9C-4)
>>#### [⭐⭐⭐⭐⭐實作](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E5%AF%A6%E4%BD%9C-5)
>>
>>
>#### ⭐[補充](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E8%A3%9C%E5%85%85-1)
### Table of Contents(LeetCode)
>#### ☁️[二分搜尋法(Binary Search)](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#leetcode)
>#### ☁️[搜索插入位置(Search Insert Position)](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#exercise%E6%87%89%E7%94%A8%E7%B7%B4%E7%BF%92)
>#### ☁️[移除元素(Remove Element)](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#exercise-2)
>#### ☁️[有序陣列的平方(Squares of a Sorted Array)](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#exercise-3)  
>#### ☁️[長度最小的子陣列(Minimum Size Subarray Sum)](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#exercise-4)
>#### ☁️[螺旋矩陣(Spiral_Matrix)](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#exercise-5)
>#### ☁️[移除列表元素(Remove Linked List Elements)](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#exercise-6)

# C++
## 1 輸入與輸出

```c++
/*
* 函式庫<iostream>的應用
* istream(cin)/ostream(cout)
* std::cin >> x;
* 將輸入的值存取到變數x
* std::cout << x << endl;
* 將變數x的值存到cout並且釋放
*/
#includ<iostream>
int main()
{
	std::cout << "This is a test!" << std::endl;
	std::cout << "Please enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << " The sum of " << v1 << " and " << v2 << " is "
		<< v1 + v2 << std::endl;
	return 0;
}
```
### 以上面這段程式碼為例子，在C++中，當我們要進行輸入輸出，皆須先引入函式庫iostream。
### iostream可以分成兩個部分:istreeam(cin)以及ostream(cout)。
	int  v1 = 0;
### 程式碼解釋:宣告變數v1。
	std::cin >> v1;
### 程式碼解釋:將輸入的值cin存取到變數v1中，但最後還是會返回cin(可以用來確認是否成立)。
	std::cout << v1 << endl;
### 程式碼解釋:將變數v1存到cout中，並且釋放。
### 注:endl是用來將緩衝區(buffer)的內容釋放到顯示器上的。

## 2 流程控制(迴圈)
### 一般來說，程式碼皆是順序執行的，但我們也可以通過迴圈的方式來增加特定條件。
### while:反覆執行某段程式，直到給定的條件為假(false)。
```c++
#include <iostream>  
int main()
{
	int sum = 0, val = 1;
	while (val <= 10) //if val is less than or equal to 10 keep running the loop
	{
		sum += val; // keep adding val to sum
	        ++val; // increment val by 1 each loop
	}
	std::cout << "The sum is: " << sum << std::endl;
	return 0;
}
```
### for:為了簡化迴圈內條件變數的增減而專門定義出來的，簡化步驟。
### for(變數初始值;條件;變數增減)
### 執行順序:變數初始值➡️條件➡️for內程式碼➡️變數增減➡️條件➡️for內程式碼➡️.....
```c++
#include <iostream>  
int main()
{	
	int sum = 0;
	for (int i = 0; i <= 10; ++i)
	{
		sum += i;
	}
	std::cout << "The sum is: " << sum << std::endl;
	return 0;
}
```

## 練習題1
>根據使用者輸入的值求總和
### 方法:
```c++
int main()
{

	int sum = 0, val = 0;

	while (std::cin >> val) //if "ctrl+z"(windows) or ";" is pressed, the loop will break
	{
		sum += val;
	}

	std::cout << "The sum is: " << sum << std::endl;
	return 0;

}
```
## 練習題2
>根據使用者輸入兩個數，印出其範圍內的所有數值
### 方法:
```c++
/*
*讓使用者輸入兩個整數，然後印出這兩個數字範圍內的所有數字
*/

#include<iostream>

int main()
{
	int val1 = 0, val2 = 0, currval = 0;

	std::cout << "Please enter two numbers: " << std::endl;
	std::cin >> val1 >> val2;

	if (val1 > val2) //check if the first number is bigger or not
	{
		currval = val2; //the result will start from the smaller one
		while (currval <= val1) //if the currval is greater than the first number, the loop will break
		{
			std::cout << currval << std::endl; //print the result from the smaller one
			++currval; //increment the result by 1
		}
	}
	else
	{
		currval = val1; //the result will start from the smaller one
		while (currval <= val2) //if the currval is greater than the second number, the loop will break
		{
			std::cout << currval << std::endl; //print the result from the smaller one
			++currval; //increment the result by 1
		}
	}

	return 0;
}
```
## 3 條件式(if)
### 當特定條件成立時，才會執行。
### 程式碼範例:
```c++
#include<iostream>
int main()
{
	int counter = 0, val = 0, currentval = 0;
	if (std::cin >> currentval) //if the first input is successful
	{	
		++counter; //counter is incremented by 1
		while (std::cin >> val) //if the next input is successful
		{
			if (val == currentval) //check if the current input is equal to the previous input or not
			{
				++counter;
			}
			else
			{
				std::cout << "The past number " << currentval << " occurs " << counter << " times." << std::endl; //print the previous number
				std::cout << "And the current value is: " << val << std::endl;
				currentval = val; //assign the current value to the previous value
				counter = 1; //reset the counter
			}
		}		
		std::cout << "The past number " << currentval << " occurs " << counter << " times." << std::endl; //print the previous number
		std::cout << "And the current value is: " << val << std::endl;
		return 0;
	}
	else
	{
		std::cout << "Invalid input." << std::endl;
		return -1;
	}
}
}
```
### 要記得，當我們每次套用std::cin時，代表的都是一個新的開始，以下面這幾段程式碼(中間內容省略)為例:
```c++
if (std::cin >> currentval) //if the first input is successful
	{		
		++counter; //counter is incremented by 1
		while (std::cin >> val) //if the next input is successful
		{
			...
		}
	}
```
### 其中第一段的if條件式，是用來判斷，當我們"第一次"讀取輸入的值時，是否成立，如果成立計數器加一，並且繼續向下執行。
### 而其中第四段的while迴圈，則是讓我們判斷"第二次"、"第三次"、....，所輸入的值是否成立。
### 從這兩條程式碼，我們就能夠看出，每一次cin結束之後，就是完全結束了，與先前的所有結果都無關。

## 3 物件導向(Object Oriented):
### 通過class的方式來定義自己的數據結構(詳細資料)。
### 程式碼範例1(class的粗略介紹與應用):
```c++
#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item book;

	std::cin >> book; //read ISBN, numbers of sold, the price of each book
	std::cout << book << std::endl; //write ISBN, numbers of sold, total revenue, the price of each book

	return 0;
}
```
```c++
#include"Sales_item.h"
```
### 程式碼解釋:引用標頭檔(Header file)。
```c++
Sales_item book;
```
### 程式碼解釋:對每一本書進行定義。
### 這樣說可能有些抽象，用一個簡單的例子來說，當我們在看一個人時，可以通過姓名、性別、年紀、身高體重，甚至是性格，來定義這個人，而上面這段程式碼也是一樣的意思。
```c++
std::cin >> book; //read ISBN, numbers of sold, the price of each book
```
### 程式碼解釋:可以發現，這裡的std::cin與原本的操作模式有所不同，這裡是用來讀取一連串的數值(書的詳細資料)
```c++
std::cout << book << std::endl; //write ISBN, numbers of sold, total revenue, the price of each book
```
### 程式碼解釋:與原本的std::cout不同，這裡不僅寫出book原本的資料，還可以直接得到我們要的所有結果。

### 程式碼範例2(讀取class中的特定資料):
```c++
#include<iostream>
#include"Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2; //read each data from the input
	if (item1.isbn() == item2.isbn()) //check if the isbn of the two books are same or not
	{
		std::cout << item1 + item2 << std::endl; //print the sum of the two books
		return 0;
	}
	else
	{
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1;
	}
}
```
```c++
if (item1.isbn() == item2.isbn())
```
### 程式碼解釋:通過".isbn"的方式，調用item1中的isbn值。

## 4 基本觀念:
### 1. C++是一種靜態的語言，所謂靜態，代表著就是在編譯時，我們就會對所有變數做型別的檢查。
### 電腦是以bit(0/1)為基本單位做存儲的，而每一個最小記憶體組塊(1byte)則是由8個bit所組成的。
### 2. 我們還可以對變數做有號(signed)或無號(unsigned)的定義:
### 有號代表著負、正，甚至是零的數字;而無號則只能表示大於等於零的值。
### 3. 宣告與定義:用第一點我們所提到的概念來說，C++會明確的要求我們在使用某一變數時，就要先進行宣告了，而所謂宣告和定義，又最簡單的話來講，就是你有沒有說＂清楚＂。　
### 舉例來說，有一個人叫做老王，但你只知道他叫做老王，不知道他是男是女，他的身高體重、年紀...等，這就是宣告；而定義就是，你明確的被告知，那人叫老王，是男的，有多高多重，甚至是幾歲。
### 在Ｃ++我們可以用關鍵字"extern"來做宣告(用來存取在其他地方就被定義的變數:
```c++
extern int i; //只宣告i，至於i的內容，去外面拿
int j = 1; //定義且宣告
```
### 變數只能定義一次，但可以被宣告無數次。
### 4. C++的識別字(identifier)必須由字母或底線為開頭，且區分大小寫。
### 5. 通常我們在定義一個變數的名稱時，都是由小寫組成，而定義一個類別(class)則是由大寫為開頭。
### 6. 要記得，如果定義了一個由多個單字組成的變數或類別，要用底線區分開每一個單字。
### 7. 第五點跟第六點並不是絕對的，但卻是我們寫程式時所會用到的慣例(convention)。
### 8. 當我們初始化一個變數時時，如:
```c++
int ival = 1024;
```
### 這代表我們將1024放進(拷貝)，到ival裡面。但如果我們這時候用複合型別中的"參考(references)"，結果會一樣，但過程大不相同，如下:
```c++
int &refval = ival;
```
### 在這裡，我們得到的結果，一樣會是1024，但卻不同於初始化，我們並非是將ival放進refval中，而是將refval繫結(bind)，當然我本身比較喜歡說綁到ival上面。
### 當然我們也要注意，做完參考初始化後，就已經綁定了，你無法再將它綁定到其它物件上。

## 5 指標(pointer):
### 1. 指標是一種對位址(address)的封裝，也就是用來存放另一個物件的位址。同時與參考(references)不同，指標本身就是一個物件(有自己的空間)。
### 2. 當我們定義指標時，會在變數前面用上"*"。
```c++
int *ip1;
```
### 3. 如果我們沒有對指標進行初始化，那麼它將會擁有一個不確定的值。
### 4. 通過"&"來存取目標物件的位址。
```c++
int ival = 42; //ival是一個int型別的變數，內容為42
int *ip1 = &ival; //ip1是一個int的指標。同時，我們將存取ival的位址。
std::cout << *ip1 << std::endl; //將指標目前位址所存放的內容釋放出來
```
![Pointer](https://github.com/littleyu0820/Interview_Leetode/blob/main/PitcturesForLearning/pointer.png)

### 5. 指標的型別必須與所指的物件相同，但void*卻不用，如下:
```c++
double obj = 3.14, *pd;
*pd = &obj; //obj與pd都是double
void *pv;
pv = &obj; //pv是一個void型別的指標，所以可以隨意地指向任意物件。
```
### 6. 如我們前面第一點所說，指標也是一個物件，所以我們可以另一個指標，指向指標，這有點抽象，我們直接看例子:
```c++
int ival = 1024;
int *pi = &ival; //取ival的位址，內容物為1024
int **ppi = &pi; //取pi的位址，內容物也為1024
```

## 6 限定詞(const):
### 1. 當我們定義一個變數為const時，代表著我們不能再對其做任何改變了，如下:
```c++
const int bufSize = 512 //bufSize被固定在512，不能再被改變了。
```
### 2. 通常被定義為const的物件是侷限於同一個區域(檔案)內的，如果我們要再外部使用它，需要再前方加上extern。
```c++
extern const int bufSize = 512
```

## 7 資料結構(Data Structure):
### 與class做區別，class為private而struct則是public。
```c++
struct Sales_data //ISBN, numbers of sold, the price of each book
{
	std::string book_Numbers;
	unsigned int numbers_sold = 0;
	double price = 0.0;
};
```
![Structure](https://github.com/littleyu0820/Interview_Leetode/blob/main/PitcturesForLearning/structure.png)
### 註:要記得struct最後要加上";"

## 8 命名空間:
### 大家可以發現，我們每次使用cin、cout，又或者是endl時，都會在前面加上"std::"，主要原因在於，它們三個都是存於std這個命名空間裡面的。
### 舉例來說，你現在想吃水果口味的糖果，但是桌上卻有三包不同種類的糖果，你就必須很明確地告訴別人，你要吃得是哪三種糖果，這樣人家才可以拿出你想要的。
### 而在這種情況下，我們就會通過"std::"的方式來使用，當然每一次都這麼用確實有些繁雜，所以我們可以通過以下兩種方式來簡化。
```c++
using std::cin;
using std::cout;
using std::endl;
```
### 又或者是直接:
```c++
using namespace std;
```
### 當然要記得的是，在標頭檔(Header File)中不要使用using的宣告的喔!
### 題外話，我本身還是習慣使用"std::"的方式來寫程式，同時如果大家真的要簡化的話，也記得用第一種方式會比較好，這樣你又或者是讀某篇程式碼的人，才會明確得清楚，到底使用了那些宣告了。

## 8 字串(string):
### 1. 對於string的定義，通常有下面幾種方法:
```c++
std::string s1; //這是一個空的字串(null)
std::string s2 = s1; //將s1的值複製到s2中
std::string s3 = "hiya; //將hiya複製到s3中
std::string s4(10, 'c'); //cccccccccc
```
### 其中第三種方法的複製流程大致如下:
```c++
std::string temp = "hiya";
std::string s3 = temp;
```
### 2. 與前面第一章提到的輸入與輸出一樣，當我們在做cin時，是讀取到空白就停止了，如下:
```c++
std::string s1;
std::cin >> s1;
std::cout << s1 << std::endl;
```
### 以上面這段程式碼為例，如果我們輸入的是"hello world"，那最後輸出的結果只會是"hello"，因為cin在碰到hello就結束並回傳了。
### 3. 當然我們也可以連續輸入，如下:
```c++
std::string s1,s2;
std::cin >> s1 >> s2;
std::cout << s1 << s2 << std::endl;
```
### 如果我們輸入的是"hello跟world"，那最後輸出的結果只會是"helloworld"。
### 4. 而通常我們在輸入一串句子時，空白是不可避免的，這時候我們就會用getline來實現，如下:
```c++
std::string test_line;
getline(std::cin, test_line); //read the input from the user and store it into the test_line
std::cout << test_line << std::endl;
```
### 5. string中還有一些特殊的函式可以使用，如empty()跟size()，這裡先講empty():
### empty()如其名，就是用來判斷string是否為空(null)，而判斷與是否，這些字詞就可以馬上讓我們了解到，他回傳的一定就是一個bool值(true/false)。
### 註記:空格不屬於空喔!
### 接下來提到的是size()，也是看名字就知道了，size()，就是用來判斷字串大小的，所以無庸置疑的，他一定是一個unsigned，但有一點很重要，size()並非int型，而是string::size_type的型別。
### 那如果我們每次都要宣告一次string::size_type也太麻煩，所以可以直接用以下方法來宣告:
```c++
std::string test_line;
getline(std::cin, test_line); //read the input from the user and store it into the test_line
auto len = test_line.size(); //store the size of the test_line into the len
std::cout << len << std::endl;
```
### 通過auto的方式讓編譯器自己提供適當的型別。
### 註記:因為size()屬於unsigned，所以不要跟int做比較喔!
### 6. string也可以做相加的，如下:
### 首先最重要的，兩個string相加還是string，再來"+"兩邊必然要存在一個string，我們直接看例子。
```c++
std::string s1, s2;
std::string s3 = s1 + s2; //成立，兩邊都是string，不必多說
std::string s4 = s1 + "test"; //成立，其中一邊為string
std::string s5 = "test" + s2; //成立，其中一邊為string
std::string s6 = s1 + "," + "test"; //成立，因為s1 + ","，還是string
std::string s7 = "hi" + "," + "test"; //不成立，"+"兩邊都沒有string
std::string s8 = "hi" + "," + s2; //不成立，第一次相加就錯誤了，兩邊都沒有string
std::string s9 = "hi" + ("," + s2); //成立，因為先做後邊括號內的運算
```
### 7. 通常如果我們要處理string的每個字元，都會用for的方式來做:
```c++
std::string test_line;
getline(std::cin, test_line); //read the input from the user and store it into the test_line
for (auto test : test_line) //for each character in the test_line
{
	std::cout << test << std::endl; 
}
```
## 練習題3
>根據使用者輸入的字串，將其全部轉換為大寫
### 方法:
```c++
#include<iostream>
#include<string>
int main()
{
	std::string user_input;
	getline(std::cin, user_input); //read the input from the user and store it into the user_input
	for (auto &change_character : user_input) //for each character in the test_line and remember that change_character is reference
	{
		change_character = toupper(change_character); //since change_character is reference, the change will be reflected in the user_input
	}
	std::cout << user_input << std::endl;	
	return 0;
}
```
### 8. 當我們要用index去存取string時，一定要記得判斷該string是否為空。
## 練習題4
>根據使用者輸入的字串，將其轉換為大寫，直到碰到空格為止(也就是只轉換第一個單字)。
### 方法:
```c++
#include<iostream>
#include<string>
int main()
{
	std::string user_input;
	decltype(user_input.size()) index = 0; 
	getline(std::cin, user_input); //read the input from the user and store it into the user_input
	while (index < user_input.size() && !isspace(user_input[index]))
	{
		user_input[index] = toupper(user_input[index]); //convert the character to uppercase
		++index;
	}
	std::cout << user_input << std::endl; 	
	return 0;
}
```
## 練習題5
>根據使用者輸入的數字，將其轉換為十六進位，同時範圍在零到十五之間，數字與數字間用空格分開。
### 方法:
```c++
#include<iostream>
#include<string>
/*
*Enter the numbers from 0 to 15
*The output will be converted to hexadecimal
*/
int main()
{
	const std::string hexdigits = "0123456789ABCDEF"; //possible hex digits
	std::string result;
	decltype(hexdigits.size()) index; //std::string::size_type index;
	//通常就是unsigned
	std::cout << "Please enter a series of numbers between 0 and 15, separated by spaces. Hit ENTER when finished: " << std::endl;
	while (std::cin >> index) //read the input
	{
		if (index < hexdigits.size()) // check if the input is valid or not
		{
			result  = result + " " + hexdigits[index];
		}
		else
		{
			std::cout << "The input is invalid." << std::endl;
			return -1;
		}
	}
	std::cout << "The hex number is: " << result << std::endl;	
	return 0;
}
```
## 9 Vector:
### Vector是一個裝滿物件(object)的集合，其中每個物件都有相同的型別，這裡我們直接透過練習題來理解。
## 練習題6
>輸入一個集合，範圍在0~9，且最多只能有九個數字，求其所有元素的平方。
### 方法:
```c++
#include<iostream>
#include<string>
#include<vector>
int main()
{
	std::vector<int> v(9);
	int index = 0;
	while (std::cin >> v[index] && index < v.size()) //0-1 1-2 2-3 3-4 4-5 5-6 6-7 7-8 8-9
	{
		if (v[index] <= 9) //check if the input is valid or not
		{
			if (index != 8) //limit the input to 9
			{
				++index;
			}
			else
			{
				break;
			}
		}
		else
		{
			std::cout << "Invalid input!" << std::endl;
			return -1;
		}
	}	
	for (auto &i : v)
	{
		i *= i;
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}
```
## 練習題7
>輸入一個集合，內容物是分數範圍在0~100，同時我們根據0-9/10-19/.../90-99/100的方式將其分為11個層次。目標是計算出各個層次的人數，同時告訴我們總共有多少學生。
### 方法:
```c++
#include<iostream>
#include<string>
#include<vector>
//Enter the grades from 0 to 100 when you done press Ctrl+Z
int main()
{
	std::vector<unsigned> grades; //in order to store the grade
	unsigned grade; 
	std::vector<unsigned> level(11); //in order to store the number of students in each level

	while (std::cin >> grade) //read the grade(input)
	{
		if (grade <= 100)
		{
			grades.push_back(grade);
		}
		else
		{
			std::cout << "Invalid input!" << std::endl;
			return -1;
		}
	}
	for (auto recorded_grade : grades) //take the grade from grades
	{
		++level[recorded_grade / 10]; //e.g. 89/10 = 8.9 so the grade will be stored in level[8]
	}
	
	int level_index = 1;
	for (auto i : level) //check how many students in each level from level 1 to level 11
	{
		std::cout << "Level " << level_index << ": " << i << " student(s)." << std::endl;
		++level_index;
	}
	std::cout << "Total students: " << grades.size() << std::endl;
	return 0;
}
```
## 10 迭代器(Iterator):
### 1. 在很多時候，我們並沒有辦法像對待string又或者是vector那樣，使用index來存取我們想要的元素，在這種情況下，我們就會使用迭代器，如下:
```c++
#include<iostream>
#include<string>
#include<vector>
int main()
{
	std::string test_string("Hello, World!");
	for (auto convert_s = test_string.begin(); convert_s != test_string.end(); ++convert_s)
	{
		*convert_s = toupper(*convert_s);
	}
	std::cout << test_string << std::endl;
	return 0;
}
```
```c++
for (auto convert_s = test_string.begin(); convert_s != test_string.end(); ++convert_s)
```
### 程式碼解釋:convert_s初始化為test_string的第一個元素，且型別由編譯器判斷，不斷向後移動，直到碰到結尾(最後一個元素的下一個位置，是不存在的)。
```c++
*convert_s = toupper(*convert_s);
```
### 程式碼解釋:將convert_s所指向位址的字母做大寫轉換，然後替換掉。
### 2. 迭代器的定義方式:
```c++
std::vector<int>::iterator it;
std::string::iterator it2;
std::vector<int>::const_iterator it3;
std::vector<int> v;
auto it4 = v.cbegin(); //type:std::vector<int>::const_iterator
```
## 練習題8
>輸入九個數字，以及要尋找的數字，二分搜尋法的應用。
### 方法:
```c++
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
int main()
{
	std::vector<double> v(9); //sorted array
	double target = 0; //target value
	double index = 0;
	auto begin = v.begin(), end = v.end();
	auto mid = begin + (end - begin) / 2;
	std::cout << "Please enter a sorted array: " << std::endl;
	while (std::cin >> v[index])
	{
		
		if (index != 8)
		{
			++index; //keep tracking the index and recording the input
		}
		else //after the input is done
		{
			std::cout << "Please enter the target value: " << std::endl;
			std::cin >> target;
			std::sort(v.begin(), v.end()); //sort the array
			break;
		}
	}
	while (mid != end && *mid != target) //binary search
	{
		if (*mid < target) //check if the mid value is less than the target value or not
		{
			begin = mid + 1; //from mid to end(right side)
		}
		else
		{
			end = mid; //from begin to mid(left side)
		}
		mid = begin + (end - begin) / 2;
	}
	if (mid != end) //check if the mid value is not equal to the end value since if mid is equal to end, it means the target value is not in the array
	{
		std::cout << "The target value " << target << " is at index " << mid - v.begin() << std::endl;
		return 0;
	}
	else
	{
		std::cout << "The target value " << target << " is not in the array." << std::endl;
		return -1;
	}
}
```
## 11 陣列(array):
### 1. 與vector不同，陣列是有固定大小的，定義方式如下:
```c++
unsigned cnt = 42; //not a constant expression
constexpr unsigned sz = 42; //a constant expression
int arr[10]; //an array with 10 int
int *parr[sz]; //an array with 42 int pointers
string bad[cnt]; //wrong cnt is not a constant expression
```
### 2. 陣列的大小被指定完後就不能更改了，其內部所含的元素數量也不能大過其尺寸大小，如下:
```c++
const unsigned sz = 3;
int a1[sz] = {0, 1, 2}; //correct
int a1[sz] = {}; //correct
int a2[5] = {0, 1, 2}; //a = {0, 1, 2, 0, 0}
int a3[2] = {0, 1, 2}; //error 3 > 2
```
### 3. 字元陣列是特殊的，因為字串最後會再加上一個null做結尾:
```c++
char a4[] = "C++"; //C++\0
char a5[6] = "Dainel"; //error no space for null
```
### 4. 陣列是無法指定(拷貝)的:
```c++
int a[] = {0, 1, 2};
int a2[] = a; //error
a2 = a; //error
```
### 5. 陣列也是一種物件，所以可以使用指標，但要記得陣列沒辦法由參考(reference)組成:
```c++
int *ptrs[10]; //an array with 10 int pointers
int &refs[10]; //error no reference
int (*parray)[10] = &arr; //point to an array with 10 int
int (&arrRef)[10] = arr; //bind to an array with 10 int
```
### 6. 當我們使用一個陣列時，編譯器通常會將它當成一個指標來用:
```c++
string nums[] = {"one", "two", "three"};
string *p = &nums[0]; //one
string *p2 = nums; //*p2 = nums[0]
```
```c++
int ia[] = {0, 1, 2, 3, 5, 6};
auto ia2(ia); //a pointer point to ia[0]
```
### 7. 把指標當成迭代器:
```c++
int ia[] = {0, 1, 2, 3, 5, 6};
int *p = ia; //ia[0]
++p; //ia[1]
```
### 8. begin and end:
```c++
int ia[] = {0, 1, 2, 3, 5, 6};
int *b = begin(ia);
int *e = end(ia);
```
### 通過上面這個方法，我們就可以印出陣列中的所有元素:
```c++
#include<iostream>
#include<vector>
#include<string>
int main()
{
	int ia[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }; //array
	int *beg = std::begin(ia); //pointer to the first element of the array
	int *last = std::end(ia); //pointer to the last element of the array
	while (beg < last) //print the array until the last element
	{
		std::cout << *beg << std::endl;
		++beg;
	}
	return 0;
}
```
### 9. 字元字串函式:
```c++
strlen(p); //the length of p, null is not included
strcmp(p1, p2); //compare p1, p2
strcat(p1, p2); //concatenate p1 and p2
strcpy(p1, p2); //p1 = p2
```
### 10. 用陣列來初始化vecotr:
```c++
int int_arr[] = {0, 1, 2, 3, 4, 5};
std::vector<int> ivec(std::begin(int_arr), std::end(int_arr)) //{0, 1, 2, 3, 4, 5};
std::vector<int> subvec(int_arr + 1, int_arr + 4) //{1, 2, 3};
```
## 12 多維陣列:
### 1. 在C++中並沒有所謂的多維陣列，所謂多維陣列，其實就是由陣列構成的陣列。
```c++
int a[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}}
```
```c++
#include<iostream>
#include<vector>
#include<string>
int main()
{
	int ia[3][4] = { {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} }; //an 3x4 array
	for (const auto &row : ia) //{0-1-2-3}/{4-5-6-7}/{8-9-10-11}
	{
		for (auto &col : row) //
		{
			std::cout << col << std::endl;
		}
	}
	return 0;
}
```
```c++
#include<iostream>
#include<vector>
#include<string>
int main()
{
	int ia[3][4] = { {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} }; //an 3x4 array
	for (auto p = ia; p != std::end(ia); ++p) //p point to ia
	{
		for (auto q = *p; q != std::end(*p); ++q) q point to p
		{
			std::cout << *q << std::endl;
		}
	}
	return 0;
}
```
### 優化，提高程式可讀性:
```c++
#include<iostream>
#include<vector>
#include<string>
int main()
{
	int ia[3][4] = { {0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11} }; //an 3x4 array
	using int_array = int [4];
	for (int_array *p = std::begin(ia); p != std::end(ia); ++p)
	{
		for (int *q = std::begin(*p); q != std::end(*p); ++q)
		{
			std::cout << *q << std::endl;
		}
	}
	return 0;
}
```

## 13 運算式(Expression):
### 1. 估算順序、優先序，結合性:運算元的的估算獨立於優先序和結合性，如下:
### f() + g() * h() + j() 結合性會保證g()*h() 然後再加到f()，最後再與j()相加。
### 至於函式的呼叫順序，只要它們都是獨立的，則並不重要。
### 2. 多用括號來組合，就不會有問題了。
### 3. 如果你澳更改某個運算元的值，那就別在同一個運算式中使用那個運算元，如下:
```c++
int i = 0;
std::cout << i << ++i << std::endl; //error
```
### 4. 算術運算子，如圖:
![Expression](https://github.com/littleyu0820/Interview_Leetode/blob/main/PitcturesForLearning/expression.png)
### 5. bool的值不應該用於計算:
```c++
bool b = true;
bool b2 = -b; //b2還是true 因為他返回-1，只要不是零，都是true
```
### 5. 取餘數時(a % b)，a跟b都必須為整數。
### 6. 取餘數時(m & n)，得到結果的正負號是跟著m的。
```c++
-21 % 8 = -5 (-/-)
21 % -5 = 1 (+/+)
```
### 7. 算數運算式(a+b)，只能放在右邊，是rvalues。
## 練習題9
### 方法:
```c++
#include<iostream>
int main()
{
	std::cout << "This program will stop when we meet the first negative number." << std::endl;
	std::cout << "Please enter some numbers(Max:10): " << std::endl;
	int i[10], index = 0, max_index = 9;
	while (index <= max_index)
	{
		std::cin >> i[index];
		++index;
	}

	auto pbegin = std::begin(i);
	while (pbegin != std::end(i) && *pbegin >= 0)
	{
		std::cout << *pbegin++ << std::endl; //will print --pbegin
	}

	std::cout << "And the first negative number is: " << *pbegin << std::endl;
	return 0;
}
```
### 8. 條件運算子:
### condtition ? expression1 : expression2，當condition成立時，執行expression1，否則就執行expression2。
### 9. 成員存取運算子:
```c++
std::string s1 = "a string";
std::string *p = &s1;
auto n = s1.size(); //定義型別
n = (*p).size(); 
n = p->size(); //與上式一樣
std::cout << n << std::endl;
```
## 練習題10
### 方法:
```c++
/*
* 輸入一些數字(最多10個)
* 輸出結果為將其中所有奇數數字做平方
* 用vector實現
*/
#include<iostream>
#include<vector>
#include<iterator>
int main()
{
	std::vector<int> nums(10);
	for (int index = 0; index < nums.size(); ++index)
	{
		std::cin >> nums[index];
	}
	for (auto num = nums.begin(); num != nums.end(); ++num)
	{	
		std::cout << ((*num % 2 != 0) ? ((*num) * (*num)) : *num) << std::endl;
	}
	return 0;
}
```
### 10. 強制型別轉換，共分四種:static_cast、dynamic_cas、const_cast，以及reinterpret_cast。

## 14 述句(statement):
### 1. 在C++中大部分的述句都是以一個";"作為結尾。
### 2. 述句又分為幾種，首先提到的是"運算式述句":
```c++
ival + 5; //無用但正確
cout << val; /有用且正確
```
### 3. "null述句":
```c++
//持續讀取輸入，直到碰到sought，又或者檔案結尾才頂只
while (std::cin >> s && s != sought)
	;
```
### 4. "複合述句"，通常我們也將它稱為"區塊"，是由兩個大括號所包圍起來的:
```c++
while(val <= 10}
{
	sum += val;
	++val;
}
```
### 註記:在區塊內定義的變數在外面不能用。
### 5. if述句:
## 練習題11
### 方法:
```c++
#include<iostream>
#include<string>
#include<vector>
#include<iterator>
/*
* A program for defining the grades for students
* The level are A++(100) A+/A-(90~99) B+/B-(80~89) C+/C-(70~79) D+/D-(60~69) F+/F-(0~59)
*/
int main()
{
	std::string level[6] = {"Failed", "D", "C", "B", "A", "A++"}; //6 levels
	unsigned grades[10] = {}, grades_in = 0, counter = 0; //Max students:10
	
	while (std::cin >> grades_in)
	{
		grades[counter] = grades_in;
		++counter;
		if (counter == 10)
		{
			std::cout << "Already 10 students." << std::endl;
			break;
		}
	}
	std::string levels;
	for (unsigned &identify_grades : grades)
	{
		if (identify_grades < 60)
		{
			std::cout << identify_grades << ": " << level[0] << std::endl;
		}
		else
		{
			levels = level[(identify_grades - 50) / 10];
			if (identify_grades % 10 > 7)
			{
				levels += "+";
			}
			else if(identify_grades % 10 < 3 && identify_grades != 100)
			{
				levels += "-";
			}
			else
			{
				;
			}
			std::cout << identify_grades << ": " << levels << std::endl;
		}
	}
	return 0;
}
```
### 6. switch述句提供數個固定的替代方案讓我們挑選。
### 在使用switch case時最好都加上"break;"，因為一但程式匹配到了正確的case，如果我們沒有打破，它將會繼續向下執行，而不是跳出switch。
## 練習題12
### 方法:
```c++
#include<iostream>
#include<string>
#include<vector>
#include<iterator>
/*
* A program for defining the grades for students
* The level are A++(100) A+/A-(90~99) B+/B-(80~89) C+/C-(70~79) D+/D-(60~69) F+/F-(0~59)
*/
int main()
{
	std::string level[6] = {"Failed", "D", "C", "B", "A", "A++"}; //6 levels
	unsigned grades[10] = {}, grades_in = 0, counter = 0; //Max students:10	
	while (std::cin >> grades_in)
	{
		grades[counter] = grades_in;
		++counter;
		if (counter == 10)
		{
			std::cout << "Already 10 students." << std::endl;
			break;
		}
		else if(grades_in > 100)
		{
			std::cerr << "Invalid input." << std::endl;
			break;
		}
	}	
	std::string levels;
	for (unsigned &identify_grades : grades)
	{
		if (identify_grades < 60)
		{
			std::cout << identify_grades << ": " << level[0]  << " Please study hard!" << std::endl;
		}
		else
		{
			levels = level[(identify_grades - 50) / 10];

			if (identify_grades % 10 > 7)
			{
				levels += "+";
			}
			else if(identify_grades % 10 < 3 && identify_grades != 100)
			{
				levels += "-";
			}
			else
			{
				;
			}
			switch (identify_grades / 10)
			{
				case 10:
				case 9:
					std::cout << identify_grades << ": " << levels << " You're excellent!" << std::endl;
					break;
				case 8:
					std::cout << identify_grades << ": " << levels << " You're nice!" << std::endl;
					break;
				case 7:
					std::cout << identify_grades << ": " << levels << " You're good!" << std::endl;
					break;
				case 6:
					std::cout << identify_grades << ": " << levels << " You can be more better!" << std::endl;
					break;
			}
		}
	}
	return 0;
}
```
### 註記:switch裡面不能初始化，但如果你括號起來就可以，因為把它限定在區塊內了，與外面無關。
### 7. do while述句:
## 練習題13
```c++
/*這個程式可以讓我們統計成績*/
#include<iostream>
#include<string>
#include<vector>
int main()
{
	std::vector<unsigned> grades;
	std::string levels[6] = {"Failed", "D", "C", "B", "A", "A++"};
	std::string YesorNo;
	int grade_in = 0, stduents = 0, counter = 0;
	std::cout << "Do you want to start?(Yes or No)" << std::endl;
	std::cin >> YesorNo;
	if (YesorNo == "Yes" || YesorNo == "yes")
	{
		std::cout << "How many students do you need to enter?" << std::endl;
		std::cin >> stduents;
		do
		{
			std::cout << "Please enter the grades." << std::endl;
			std::cin >> grade_in;
			grades.push_back(grade_in);
			++counter;

		} while (counter < stduents);
	}
	else
	{
		std::cout << "Thanks for using." << std::endl;
		return 0;
	}
	std::string level;
	for (unsigned &identify_grades : grades) //範圍for(auto beg = v.begin(); beg != v.end(), ++beg) auto &r = *beg;
	{
		if (identify_grades < 60)
		{
			std::cout << identify_grades << ": " << levels[0] << " Please study hard!" << std::endl;
		}
		else
		{
			level = levels[(identify_grades - 50) / 10];

			if (identify_grades % 10 > 7)
			{
				level += "+";
			}
			else if (identify_grades % 10 < 3 && identify_grades != 100)
			{
				level += "-";
			}
			else
			{
				;
			}
			switch (identify_grades / 10)
			{
			case 10:
			case 9:
				std::cout << identify_grades << ": " << level << " You're excellent!" << std::endl;
				break;
			case 8:
				std::cout << identify_grades << ": " << level << " You're nice!" << std::endl;
				break;
			case 7:
				std::cout << identify_grades << ": " << level << " You're good!" << std::endl;
				break;
			case 6:
				std::cout << identify_grades << ": " << level << " You can be more better!" << std::endl;
				break;
			}
		}
	}
	return 0;	
}
```
### 8. continue述句，強制開始下一輪迴圈。
### 9 goto述句，跳轉到一個帶有標籤的述句，並且向下執行。
## 15 例外(異常)處理:
### throw運算式:
```c++
throw runtime_error("An error."); //stop
```
### try運算式:
```c++
try
{}
catch(runtime_error err)
{
std::cout << err.what() << std::endl;
}
```
## 綜合練習
>設計一個成績統計程式，能夠讓老師決定是否開始，內容包含可以輸入總人數，能夠將每個學生的分數以A++ A+/A/A- B+/B/B- C+/C/C- D+/D/D- 以及F來區分開來，最後在給上固定的評語，請考慮如果輸入負數程式該如何修正。

>Solution:
```c++
/*
* 這個程式可以讓我們統計成績
* 同時應用到
* do while
* for
* vector
* continue
* goto
* try/throw runrime_error
*/
#include<iostream>
#include<string>
#include<vector>
int main()
{
	std::vector<int> grades; //store grades
	std::string levels[6] = {"Failed", "D", "C", "B", "A", "A++"}; //6levels
	std::string YesorNo; //start or not start
	int grade_in = 0, stduents = 0, counter = 0;

	std::cout << "Do you want to start?(Yes or No)" << std::endl;
	std::cin >> YesorNo;
	if (YesorNo == "Yes" || YesorNo == "yes") //start or not start
	{
		begin: //if we choose start from here
			std::cout << "How many students do you need to enter?" << std::endl;
			std::cin >> stduents;
		try //try error
		{
			if (stduents <= 0)
			{
				throw std::runtime_error("Please eneter a positive number.");
			}
		}
		catch (std::runtime_error err) //if error
		{
			std::cout << err.what() << std::endl;
			goto begin;
		}
		do //start to enter
		{
			std::cout << "Please enter the grades." << std::endl;
			std::cin >> grade_in;
			if (grade_in < 0) //if negative numbers
			{
				std::cout << "Please eneter a number greater than 0." << std::endl;
				continue;
			}
			else
			{
				grades.push_back(grade_in); //store the grades into the vector
				++counter;
			}

		} while (counter < stduents); //stop when the grades are enough
	}
	else
	{
		std::cout << "Thanks for using." << std::endl;
		return 0;
	}
	std::string level;
	for (int &identify_grades : grades) //start to group the students
	{
		if (identify_grades < 60) //failed
		{
			std::cout << identify_grades << ": " << levels[0] << " Please study hard!" << std::endl;
		}
		else
		{
			level = levels[(identify_grades - 50) / 10]; //except for F we still have 5 levels from levels[1] to levels[5]

			if (identify_grades % 10 > 7) //identify better/normal/so-so
			{
				level += "+";
			}
			else if (identify_grades % 10 < 3 && identify_grades != 100) //except for 100
			{
				level += "-";
			}
			else
			{
				;
			}
			switch (identify_grades / 10) //give each levels a comment
			{
			case 10:
			case 9:
				std::cout << identify_grades << ": " << level << " You're excellent!" << std::endl;
				break;
			case 8:
				std::cout << identify_grades << ": " << level << " You're nice!" << std::endl;
				break;
			case 7:
				std::cout << identify_grades << ": " << level << " You're good!" << std::endl;
				break;
			case 6:
				std::cout << identify_grades << ": " << level << " You can be more better!" << std::endl;
				break;
			}
		}
	}
	return 0;
}
```

## 15 函式(function):
### 1. 一個函式的定義通常由一個回傳、一個名稱，以及一串參數(程式內容)所組成的。
```c++
#include<iostream>
#include<vector>
#include<string>
int fact(int val)
{
	int ret = 1;
	while (val > 1)
	{
		ret *= val--; //5 4 3 2 1
	}
	return ret;
}
int main()
{
	int val = 4;
	int restult = fact(val);
	std::cout << restult << std::endl;
	return 0;
}
```
### 2. 一個函式的執行會在遇到一個return時結束。
### 3. 大多數的型別都可以進行回傳，但要記得我們不能回傳函式跟陣列。
### 4. 在C++中，名稱具有範疇(scope)，簡單點來講就是有範圍的，具有區域性的。
### 5. 物件具有生命週期(lifetimes)。
### 所謂生命週期指的是該物件被執行時所存在的時間。
### 6. 物件又可分為"自動物件"(Automatic Objects)跟"區域物件"(Static Objects)。
### 自動物件泛指的是該物件只有在函式執行時存在，結束後就消失了。
### 區域物件泛指的是該物件會在函式執行後就一直存在，直到整個程式完全結束才會消失。
```c++
#include<iostream>
#include<vector>
#include<string>
int counter(int);
int main()
{
	int val = 5;
	while (val > 0)
	{
		std::cout << counter(val--) << std::endl;
	}
	return 0;
}
int counter(int val)
{
	//int ctr = 0; //will re-initialize when the function is called
	static int ctr = 0; //only initialize once despite the function is called every times
	if (val > 0)
	{
		++ctr;
	}
	return ctr;
}
```
### 7. 函式跟變數一樣，要使用前必須先宣告。
### 8. 可以通過指標來改變物件的值:
```c++
void reset_pointer(int *p)
{
	*p = 50; //will re-initialize
	//p = 50;
}
```
### 程式碼解釋:定義指標改變物件的函式
```c++
reset_pointer(&test_nums);
```
### 程式碼解釋:呼叫該函式
### 8. 可以通過參考來改變物件的值:
```c++
void references_reset(int &val)
{
	val = 100;
}
```
```c++
int main()
{
	int test_nums = 0;
	references_reset(test_nums);
	std::cout << test_nums << std::endl;
}
```
### 9. 如果真的要改變物件，最好的方式是使用參考。因為參考是直接改變該物件，而非通過"拷貝"的方式，拷貝的話我們的使用效率會大幅降低。
### 10. 如果我們不希望修改物件，那就記得使用const：
```c++
int test_const(const int val)
{
	///val = 50; //we cant modify a constant
	return val;
}
```
```c++
//使用const來固定變數
int main()
{
	int test_nums = 10;
	int result = test_const(test_nums);
	std::cout << result << std::endl;
	return 0;
}
```
### 11. 一個函式只能回傳一個值，但我們可以通過參考的方式，來回傳多個結果。
## 練習題14
```c++
#include<iostream>
#include<string>
#include<vector>
/*
* 設計一個可以在字串找出特定字母的函式，得到的結果必須包含:
* 該字母出現了幾次以及第一次出現在哪裡，並且可以自訂想要的字串與字母
* 如果沒有找到該字母，要讓使用者可以選擇是否重新開始
*/
std::string::size_type find_char(const std::string, const char,int&, bool&);
int main()
{
	begin:
	int occurs = 0;
	std::string test_s;
	char test_c;
	bool appearornot = false;
	std::cout << "Please enter the string: " << std::endl;
	getline(std::cin, test_s);
	std::cout << "Please enter the character you want to find: " << std::endl;
	std::cin >> test_c;
	auto result = find_char(test_s, test_c, occurs, appearornot);
	if (appearornot)
	{
		std::cout << "Character " << test_c << " occurs " << occurs << " times"
			<< " and appears(first) at index " << result << " in " << test_s << std::endl;
	}
	else
	{
		std::cout << "Sorry! The character you entered is not in the string: "
			<< test_s << std::endl;
		std::cout << "Do you want to try again?(Yes or No)" << std::endl;
		std::string YesOrNo;
		std::cin >> YesOrNo;
		if (YesOrNo == "Yes" || YesOrNo == "yes")
		{
			goto begin;
		}
		else
		{
			std::cout << "Thanks for using!" << std::endl;
			return 0;
		}
	}	
	return 0;
}
std::string::size_type find_char(const std::string s, const char c, int &occurs, bool &AppearOrNot)
{
	decltype(s.size()) first_time = 0;
	for (auto i = 0; i < s.size(); ++i)
	{
		if (s[i] == c)
		{
			if (!AppearOrNot)
			{
				AppearOrNot = true;
				first_time = i;
			}
			++occurs;
		}
	}
	return first_time;
}
```
### 12. 我們通常引用指標參數來管理陣列:
```c++
#include<iostream>
void pointer_practice(const int *beg, const int *end)
{
	while (*beg != *end)
	{
		std::cout << *beg++ << std::endl;
	}
}
```
```c++
int main()
{
	int test_arr[] = { 0, 1, 2, 3, 4, 5, 6 };
	int *beg = std::begin(test_arr); //an address
	int *end = std::end(test_arr); //an address
	pointer_practice(beg, end);
	return 0;
}
```
### 12. 我們也可以使用參考參數來管理陣列:
```c++
#include<iostream>
void reference_practice(int (&arr)[10])
{
	for (auto run_arr : arr)
	{
		std::cout << run_arr << std::endl;
	}
}
```
```c++
int main()
{
	int test_arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	reference_practice(test_arr);
	return 0;
}
```
### 註記:使用陣列時一定要宣告大小。
### 13. 帶有不定參數的函式:
### 有時候我們不確定到底要使用幾個參數，就可以使用標準函式庫中的，initializer_list<type>:
### 第一種用法:
```c++
#include<iostream>
#include<string>
#include<vector>
void print_string(std::initializer_list<std::string>); //kind of like vector
int main()
{
	std::initializer_list<std::string> test_s = { "Hello " , ", ""How ", "are ", "you ", "?"};
	print_string(test_s);
	return 0;
}
void print_string(std::initializer_list<std::string> ls)
{
	for (auto &s : ls)
	{
		std::cout << s;
	}
	std::cout << std::endl;
}
```
```c++
### 第二種用法:
#include<iostream>
#include<string>
#include<vector>
void print_string(std::initializer_list<std::string>); //kind of like vector
int main()
{
	std::string test = "Hi";
	print_string({ "Hello", test});
	return 0;
}
void print_string(std::initializer_list<std::string> ls)
{
	for (auto &s : ls)
	{
		std::cout << s;
	}
	std::cout << std::endl;
}
```
### 14. 對於一個void類型的函式，我們可以使用return來當成break使用，直接終止該函式。
```c++
void swap(int &v1, int &v2)
{
	if(v1 == v2)
	{
		return;
	}

	int tmp = v2;
	v2 = v1;
	v1 = tmp;
}
```
### 15. 只要不是void函式就一定都要有回傳值。這句話是絕對的，但有一個例外，如果我們在main()函式內沒有打出回傳值，它會自己默認為回傳0。
### 16. 我們也可以"呼叫"函式本身(Recursion):
```c++
int factorial(int val) 
{
	if (val > 1)
	{
		return factorial(val-1) * val;
	}
	return 1;
}
```
### 註記:main不能回傳main。
### 17. 我們不能回傳陣列。
### 18. 我們可以回傳一個對陣列的指標。
```c++
typedef int arr[10];
arr *func(int i); //型別是一個對陣列的指標 指向一個由10int組成的陣列
```
### 19. 尾端回傳類型:
```c++
auto func(int i) -> int(*)[10]; //型別是一個對陣列的指標 指向一個由10int組成的陣列
```
### 20. 重載函式:具有相同名稱，但參數列不同的函式。
### 要注意，main不能重載。
### 21. 要使用重載函式一定要記得，參數的數量又或者是其中的型別一定要不一樣。
### 22. 我們可以為函式設定訂預設參數。
### 但要注意的是，一旦你使用了預設參數，那後面的所有參數也必然都要有預設值。
### 23. 區域變數不能被設為預設參數:
```c++
typedef std::string::size_type sz;
sz wd = 80;
char def = '';
sz ht();
string screen(sz = ht(), sz = wd, char = def);
string window = screen(); //ht(), 80, ''

void f2()
{
	def = '*';
	sz wd = 100;
	window = screen(); //ht(), 80, *
}
```
### 24. 可以使用inline減少函式執行時期的負擔。
### 25. constexpr函式:必須回傳字面值型別(數字、字串、布林值、符號)，又或者是常數運算式。
### 26. 前置處理器巨集assert，通常用來檢查不可能發生的事情。
### 如果該運算式為false，那麼assert會寫出一段訊息，並且甚麼都不做;如果為true，則會甚麼都不管。
### 27. 要記住，assert是由前器處理器管理的，所以我們呼叫它的時候，不用std::，可以直接使用。
### 但使用前要記得#include <cassert>
### 28. 當我們定義了NDEBUG代表著程式已經不是開發狀態了，所以使用assert是無用的。
```c++
#define NDEBUG
#include<cassert>
int main()
{
	int x = 0;
	assert(x); //是無用的
	return 0
}
```
### 29. 我們也可以使用NDEBUG來定義自己的除錯(程式碼)方法:
```c++
#ifndef NDEBUG
/*
中間放我們想要印出的訊息
*/
#endif
```
### 30. 前置處理器還定義了四個可以讓我們除錯時使用的名稱:
>> __FILE__ //檔案名
>> __LINE__ //第幾行
>> __TIME__ //時間
>> __DATE__ //日期
>> 以及C++提供的 __func__
### 31. 當我們使用一個函式名稱當作變數的值時，那個函式會被自動轉換成一個指標。
```c++
#include <iostream>
#include <vector>
#include <string>
bool length_compare(const std::string&, const std::string&);
int main()
{
	bool (*pf)(const std::string&, const std::string&); //a pointer point to a function that return bool
	pf = &length_compare; //like pointer well get the address of the function
	bool b1 = pf("hello", "hello"); //same
	bool b2 = (*pf)("hello", "hello"); //same we get the value that in the address where pf points
	if (b2)
	{
		std::cout << "1" << std::endl;
	}
	return 0;
}
bool length_compare(const std::string &s1, const std::string &s2)
{
	return s1.size() == s2.size() ? true : false;
}
```
### 32. 我們可以妥善的利用typedef跟decltype來定義函式指標的型別。
```c++
typedef boo1 func1(const std::string, const std::string); //返回函式
typedef decltype(length_compare) func2; //同上
typedef boo1 (*func3)(const std::string, const std::string); //返回指標
typedef decltype(length_compare) *func3p; //decltype返回的是函式型別，所以需要通過*來將其轉換為指標
```
### 33. 函式不可以返回函式，這代表著還是不可以當成一個型別來定義函式。
```c++
using F = int(int*, int); 函式
using PF = int(*)(int*, int); PF是一個指標，指向F類型的函式
PF f1(int); f1現在是一個返回指標的指針，指向F
F f1(int); 錯，f1沒辦法返回一個函式型別
F *f1(int); f1是一個返回指標的函式，指向F
int (*f1(int))(int*, int);
auto f1(int) -> int(*)(int*, int);
```
## 16 類別(Classes):
### 1. 定義成員函式:
### 在內部定義:isbn()
```c++
struct Sales_Data
{
	std::string book_Numbers = "";
	unsigned units_sold = 0;
	double revenue = 0.0;
	std::string isbn() const //告訴電腦isbn其實是要使用一個叫做this的指針，指向回傳值，而且它是常量的，不能改變 //Sales_Data::isbn(&total) 如果我們要拿total的booknums的話
	{
		return book_Numbers;
	}//代表我們只能讀取isbn中的值，但不能改寫
	Sales_Data& combine(const Sales_Data&); //combine這個函式回傳的是一個Sales_Data型別的參考
	double avg_price() const;
};
```
### 在外部定義:avg_price()
```c++
double Sales_Data::avg_price() const
{
	
	if (units_sold)
	{
		return revenue / units_sold;
	}
	else
	{
		return 0;
	}

}
```
### 使用*this回傳物件(資料結構)本身:
```c++
/*
* combine()函式解釋:假設有兩個Sales_Data:data1跟data2
* 如果我現在是呼叫data1.combine(data2)代表著我們要做data1 = data1 + data2;
*/
Sales_Data& Sales_Data::combine(const Sales_Data& rhs) 
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this; //回傳data本身且是參考型別的，代表會改變data本身原有的值 用來回傳物件整體
}
```
### 2. 定義非成員函式:
### 通常定義在同一個標頭黨(.h)中。
```c++
/*
* 自己定義iostream
*/
std::istream& read(std::istream& in, Sales_Data& item)
{
	double price = 0; //每本書的價錢

	in >> item.book_Numbers >> item.units_sold >> price; //可以輸入isbn、賣了幾本、跟一本多少前
	item.revenue = price * item.units_sold; //計算總獲利
	return in; //回傳std::cin
}
std::ostream& print(std::ostream& out, Sales_Data& item)
{
	out << item.isbn() << " " << item.units_sold << " " << item.avg_price()
		<< " " << item.revenue;
	return out;
}
```
### 註記:iostream型別無法被拷貝，只能使用參考(因為我們在定義一個變數的時候，其實就依靠拷貝的方式定義)。
```c++
/*
* 定義相加
*/
Sales_Data add(const Sales_Data& data1, const Sales_Data& data2)
{
	Sales_Data sum = data1;
	sum.combine(data2); //data1+data2

	return sum; //return data1+data2
}
```
### 完整程式碼:
```c++
#include<iostream>
#include<string>
//定義成員函式
/*
* 1.能夠回傳isbn，命名為isbn()
* 2.能將同樣Sales_data這個型別的物件加到另一個上，命為名combie()
* 3.相加兩個相同的Sales_data，命名為add()
* 4.從istream(cin)中讀取資料到Sales_data內，命名為read()
* 5.從ostream(cout)上印出Sales_data內的物件，命名為print()
*/
/*
* 1.常量指針:指向常量的指針
* const int *cptr; //可以不用初始化
* 2.指針常量:指針是常量的，一開始是多少就是多少
* int *const ptrc = &a; //必須初始化
*/
struct Sales_Data
{
	std::string book_Numbers = "";
	unsigned units_sold = 0;
	double revenue = 0.0;
	std::string isbn() const //告訴電腦isbn其實是要使用一個叫做this的指針，指向回傳值，而且它是常量的，不能改變 //Sales_Data::isbn(&total) 如果我們要拿total的booknums的話
	{
		return book_Numbers;
	}//代表我們只能讀取isbn中的值，但不能改寫
	Sales_Data& combine(const Sales_Data&); //combine這個函式回傳的是一個Sales_Data型別的參考
	double avg_price() const;
};
double Sales_Data::avg_price() const
{	
	if (units_sold)
	{
		return revenue / units_sold;
	}
	else
	{
		return 0;
	}
}
/*
* combine()函式解釋:假設有兩個Sales_Data:data1跟data2
* 如果我現在是呼叫data1.combine(data2)代表著我們要做data1 = data1 + data2;
*/
Sales_Data& Sales_Data::combine(const Sales_Data& rhs) 
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this; //回傳data本身且是參考型別的，代表會改變data本身原有的值 用來回傳物件整體
}
/*
* 自己定義iostream
*/
std::istream& read(std::istream& in, Sales_Data& item)
{
	double price = 0; //每本書的價錢
	in >> item.book_Numbers >> item.units_sold >> price; //可以輸入isbn、賣了幾本、跟一本多少前
	item.revenue = price * item.units_sold; //計算總獲利
	return in; //回傳std::cin
}
std::ostream& print(std::ostream& out, Sales_Data& item)
{
	out << item.isbn() << " " << item.units_sold << " " << item.avg_price()
		<< " " << item.revenue;
	return out;
}
/*
* 定義相加
*/
Sales_Data add(const Sales_Data& data1, const Sales_Data& data2)
{
	Sales_Data sum = data1;
	sum.combine(data2); //data1+data2
	return sum; //return data1+data2
}
int main()
{	
	Sales_Data data1, data2, total;
	read(std::cin, data1); //read the data:isbn, unit_sold, price for each books
	read(std::cin, data2);
	if (data1.isbn() != data2.isbn())
	{
		std::cerr << "Invalid Input." << std::endl;
		return -1;
	}
	else
	{
		total = add(data1, data2);
		print(std::cout, total); //print the data:isbn, unit_sold, price for each books, revenue
		return 0;
	}
}
```
### 3. 建構器(構造函式):用來初始化類別(Classes)的特殊成員函式。
### 4. 當我們沒有定義"任何"建構器(構造函式)，那麼系統就會為我們定義預設的建構器(構造函式):synthesized default constructor
### 5. 只有相當簡單的calsses才能仰賴預設的建構器，通常來說我們都需要自己定義。
### 原因:因為變數在未定義時，會使用預設初始化的，這絕大多數都不是我們想要的。再來，有些時候編譯器會無法合成，這導致它無法幫我們初始化那些沒有被定義的成員。
### 6. 建構器(構造函式)不能宣告為const型別。
### 建構器範例:
```c++
struct Sales_Data
{
	Sales_Data() = default; //因為我們已經有對變數進行初始化了
	Sales_Data(const std::string s, unsigned n, double p) :
		book_Numbers(s), units_sold(n), revenue(n* p){}
	Sales_Data(std::istream&);
	std::string book_Numbers; = "";
	unsigned units_sold = 0;
	double revenue = 0.0;
	std::string isbn() const;
	Sales_Data& combine(const Sales_Data&); //combine這個函式回傳的是一個Sales_Data型別的參考
	double avg_price() const;
};
Sales_Data::Sales_Data(std::istream& in)
{
	read(in, *this);
}
```
## 17 存取與封裝:
### 1. public:整個程式內都可以被存取。
### 2. private:只能在class裡面實現。
### 3. 使用friend來存取private內的變數。
```c++
#include<iostream>
#include<string>
/*
* 設計一個程式，功能包含:
* 1.輸入isbn
* 2.輸入販賣數量
* 3.輸入一本書的價錢
* 4.最後印出: isbn/總銷量/總獲利/平均出售價錢
*/
class Sales_Data
{
	friend Sales_Data add(const Sales_Data&, const Sales_Data&);
	friend std::istream& read(std::istream&, Sales_Data&);
	friend std::ostream& print(std::ostream&, const Sales_Data&);
	public:
		//建構器
		Sales_Data() = default;
		Sales_Data(std::istream&);
		Sales_Data(const std::string s, unsigned n, double r) :
			book_Nos(s), unit_sold(n), revenue(n * r) {}
		std::string isbn () const; //print isbn
		Sales_Data& combine(const Sales_Data&); //combine 2 objects to make the new object
		//print the result: isbn, total_sold, average_price, total_revenue
	private:
		std::string book_Nos = "";
		unsigned unit_sold = 0;
		double revenue = 0.0;
		double avg_price() const
		{
			return unit_sold ? revenue / unit_sold : 0;
		}		
};
Sales_Data add(const Sales_Data&, const Sales_Data&);
std::istream& read(std::istream&, const Sales_Data&);
std::ostream& print(std::ostream&, const Sales_Data&);
std::string Sales_Data::isbn() const
{
	return book_Nos;
}
Sales_Data& Sales_Data::combine(const Sales_Data& new_data)
{
	unit_sold += new_data.unit_sold;
	revenue += new_data.revenue;
	return *this;
}
Sales_Data add(const Sales_Data& data_1, const Sales_Data& data_2)
{
	Sales_Data sum = data_1;
	sum.combine(data_2);
	return sum;
}
//define iostream
std::istream& read(std::istream& in/*cin*/, Sales_Data& data)
{
	double price = 0.0;
	in >> data.book_Nos >> data.unit_sold >> price;
	data.revenue = data.unit_sold * price;

	return in;
}
std::ostream& print(std::ostream& out/*out*/, const Sales_Data& data)
{
	out << data.book_Nos << " "<< data.unit_sold << " " << data.avg_price()
		<< " " << data.revenue << std::endl;
	return out;
}
Sales_Data::Sales_Data(std::istream& in)
{
	read(in, *this);
}
int main()
{
	Sales_Data data_1, data_2;
	read(std::cin, data_1);
	read(std::cin, data_2);
	if (data_1.isbn() == data_2.isbn())
	{
		Sales_Data new_data = add(data_1, data_2);
		print(std::cout, new_data);
	}
	else
	{
		std::cerr << "Invalid Input." << std::endl;
	}
	return 0;
}
```
### 4. 使用mutable來改變classes內部的成員，哪怕它是const。
```c++
class Screen
{
	public:
		void some_member() const;
	private:
		mutable size_t access_ctr;
};
void Screen:some_member() const
{
	++access_ctr;
}
```
### 5. classes的初始化:
```c++
class Screen
{
public:
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos ht, pos wd, char c):
		height(ht), width(wd), contents(ht * wd, c) {}
	char get() const
	{
		return contents[curson];
	}
	inline char get(pos ht, pos wd) const;
	Screen& move(pos r, pos c);
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;

};
class Window_mgr
{
private:
	std::vector<Screen> screens{Screen(24, 80, ' ')};
};
```
### 6. 回傳*this
```c++
Screen& move(pos r, pos c);
Screen& set(char c);
```
### 如果我們回傳的是一個reference(Screen)，代表著我們可以直接改變物件本身。但如果只是回傳(Screen)，那就像是我們在定義變數一樣，只是在做拷貝而已。
### 回傳reference的流程大致如下:
![Reference](https://github.com/littleyu0820/Interview_Leetode/blob/main/PitcturesForLearning/%E5%9B%9E%E5%82%B3%E5%8F%83%E8%80%83.png)
### 回傳非reference的流程大致如下:
![Non-Reference](https://github.com/littleyu0820/Interview_Leetode/blob/main/PitcturesForLearning/%E5%9B%9E%E5%82%B3%E6%8B%B7%E8%B2%9D%E5%80%BC.png)
### 7. claa也可以當class的frined。簡單點來講，我們可以在一個class內部friend另外一個class。
```c++
class Screen
{
	friend class Window_mgr;
};
```
### 8. 每個class都分別控制著自己的成員、函式，以及朋友。這代表說當class B要使用class A裡面的東西的時候，需要在class A裡面說清楚，那麼class B才能拿。
### 9. 當我們只想要讓class B中的某個函式有資格使用class A裡面的東西時，我們也可使用以下這個方法:
```c++
class A
{
	friend void B::test(); //表示class B中有一個回傳型別是void的函式可以使用class A中的東西
};
```
### 10. 當我們在一個class內部friend一個函式或class時，其實編譯器就已經隱含的幫我們宣告這個函式或class了。
### 但這其實僅侷限於那個class中，這也是為甚麼我們還需要在class後面或前面，再進行宣告一次的關係。
### 11. 定義一定會在編譯器處理完所有宣告後才開始處理。
### 12. 我們可以把建構器(constructor)想成一個複雜型的int或string，變數名稱後的括號內部所給定的值，就如同我們在對int a = 10，賦值一樣。
### 方法一，直接在class內初始化:
```c++
class Sales_Data
{
	public:
		//建構器
		//定義構造函式，又或者說告訴電腦，Sales_Data內部待會需要放入三個值
		Sales_Data(const std::string s, unsigned n, double r) :
			book_Nos(s), unit_sold(n), revenue(n * r) { }
		//構造函數end
		Sales_Data():Sales_Data("", 0, 0) {} //初始化
	private:
		std::string book_Nos;
		unsigned unit_sold;
		double revenue;
		double avg_price() const
		{
			return unit_sold ? revenue / unit_sold : 0;
		}		
};
```
### 方法二，如同我們在定義變數一樣，在main()函式裡定義它:
```c++
class Sales_Data
{
	public:
		//建構器
		//定義構造函式，又或者說告訴電腦，Sales_Data內部待會需要放入三個值
		Sales_Data(const std::string s, unsigned n, double r) :
			book_Nos(s), unit_sold(n), revenue(n * r) { }
		//構造函數end
	private:
		std::string book_Nos;
		unsigned unit_sold;
		double revenue;
		double avg_price() const
		{
			return unit_sold ? revenue / unit_sold : 0;
		}		
};
int main()
{
	Sales_Data data1("", 0, 0); //分別對isbn賦值空,unit_sold賦值0,price賦值0
	return 0;
}
```
### 13. 彙總類別/聚合(Aggregate Class):
### 使用條件:A. 成員都是public B. 沒有定義任何建構器 C. 沒有在classes裡初始化 D. 沒有base classes和virtual函式。
### 範例:
```c++
struct Data
{
	int ival;
	string s;
}


int main()
{
	Data data1 = {10, "test"};
	return 0;
}
```
註記:必須要按照變數宣告的順序來定義。
### 14. Satic:每一個static成員都是由整個class共用的。
### 15. Static沒有reference跟pointer，也不能宣告為const。
### 16. Static的定義一定要在classes外面。
### 17. 但是如果你加上constexpr就可以在classes內進行初始化。但這個初始化，還是只侷限於該classes裡面。
### 18. 存取static的member時一定要記得使擁範疇運算子"::"。
```c++
class Account()
{
public:
private:
	static conxtexpr int period = 30; //period的初始化值30值在account裡面有用
};
/*如果想在外面繼續使用則可以在class外部在定義一次*/
constexpr int Account::period;
```
## 練習題15
### 方法:
```c++
#include <iostream>
#include <string>
/*
* 設計一個銀行帳戶管理程式
* 功能包含:可以輸入用戶名、帳號過去金額、利率、經過了幾天，以及當前總金額(過去金額 * (1+利率))
* 利率變化是由天數決定的:180天以上的話就變成1.2倍(利率*1.2)，以下就維持不變
* 顯示出用戶經過了幾天之後，帳戶總金額變成多少了
*/
class Bank_Manage
{
	//friend
	friend std::istream& read(std::istream&, Bank_Manage&);
	friend std::ostream& print(std::ostream&, Bank_Manage&)
public:
	//calculate the money after the interestrate
	void calculate()
	{
		amount += amount * interest_rate;
	}
	//constructor
	Bank_Manage(const std::string& name, double money):
		owner(name), amount(money){}
	//initialize
	Bank_Manage():Bank_Manage("", 0){}
private:
	std::string owner;
	double amount;
	//static member need to be initialized outside
	static double interest_rate;
	static double init_rate(double);
	static unsigned period;
};
//initialzie the static member variable
double Bank_Manage::interest_rate = 0.0;
unsigned Bank_Manage::period = 0;
//declare the friend
std::istream& read(std::istream&, Bank_Manage&);
std::ostream& print(std::ostream&, Bank_Manage&);
//initialzie the static member function
double Bank_Manage::init_rate(double r)
{
	if (r <= 180)
	{
		return 1.0;
	}
	else
	{
		return 1.2;
	}
}
//design the function what we need
std::istream& read(std::istream& in, Bank_Manage& user)
{	
	std::cout << "User Name:" << std::endl;
	in >> user.owner;
	std::cout << "User Amount:" << std::endl;
	in >> user.amount;
	std::cout << "The Rate is:" << std::endl;
	in >> user.interest_rate;
	//static variable (public)
	std::cout << "How long does the user save?" << std::endl;
	in >> user.period;
	user.interest_rate  = user.interest_rate * Bank_Manage::init_rate(user.period);
	return in;
}
//decide the print what we need
std::ostream& print(std::ostream& out, Bank_Manage& user)
{
	out << "The rate is: " << user.interest_rate << std::endl;
	user.calculate();
	out << "After " << user.period << " days. " << "User: " << user.owner << " has " << user.amount << " dollars now." << std::endl;
	return out;
}
int main()
{
	Bank_Manage owner1;
	read(std::cin, owner1);
	print(std::cout, owner1);
	return 0;
}
```

## 18 IO程式庫:
### 1. 分別有三種:iostream、fstream，以及sstream。
### iostream:用來讀寫資料流。
### fstream:用來讀寫具檔名的型別。
### iostream:用來讀寫記憶體內的string。
### 2. 通常我們在使用程式碼之前，應該先檢查它的資料流是否有問題，如下:
```c++
while(std::cin >> word) //檢查cin是否有正確回傳
{
}
```
### 但上面這種方法只會告訴我們這個資料流是否有效，並不會告訴我們發生了甚麼。
### 3. 要想知道發生了甚麼，IO資料庫額外定義了一個整數型別"iostate"。
### 要記得，iostate存放於函式庫strm::iostate。
### badbit:表示系統層級的錯誤，如:無法復原的讀取或寫入錯誤。通常這種錯誤發生就代表著這個資料流無法使用了。
### failbit:表示出現可復原的錯誤，如:預期得到數字，卻得到字元。
### eofbit:表示到達檔案結尾了。
### goodbit:表示沒有錯誤，保證會有值0。
### 4. 我們可以通過restate這個函式來回傳目前的資料流狀態。
```c++
auto state = cin.rdstate(); //回傳狀態
cin.clear(); //使cin有效
```
### 5. 清除緩衝區的方法:
```c++
std::cout << s << std::endl; //換行(newline)然後清空
std::cout << s << std::flush; //清空
std::cout << s << std::ends; //輸入一個null然後清空
```
### 6. 也可以通過unitbuf來設定每一次輸出都要清空緩衝區:
```c++
std::cout << std::unitbuf; //設定每次都清空
std::cout << std::nounitbuf; //恢復正常
```
### 7. 我們有可以將輸入與輸出綁在一器，這樣每次讀取時就會都會先清空緩衝區。
### 互動式系統最常使用這個方法，這樣子每次都會在試著讀取輸入前就先被寫出了。
```c++
int main()
{
	std::string s = "hello";
	std::cin.tie(&std::cout);  //綁定cin/cout //這是函式庫內建的
	std::cin >> s;
	std::ostream* old_tie = std::cin.tie(nullptr); //解除綁定
	return 0;
}
```
### 8. 如果我們的cin跟cout沒有內建綁定，緩衝區未被釋放，那代表著程式會一值處於等待狀態，不會自動向下執行:
```c++
int val = 0;
std::cout << "Enter a number...";
std::cin >> val;
```
### 程式會卡在cout那，因為緩衝區沒有被釋放出來。當然，有些電腦不會這樣喔!
### 9. fstream中的三種型別:
### ifstream:讀取檔案
### ofstream:寫入檔案
### fstream:讀寫檔案
```c++
ifstream in(file)
ofstream out;
out.open(file + ".copy");
```
### 10. 一旦檔案被開啟，它就會持續到倍close()為止。
### 11. istringstream的應用，用來處理一整行的輸入。
## 練習題16
```c++
#include <iostream>
#include <vector>
#include <string> 
#include <fstream>
#include <sstream>
/*
* 設計一個電話本程式，用來記錄名字與電話號碼
* 假定輸入順序為名字、手機、家裡電話
* 輸出結果為名字與手機
*/
int main()
{
	struct Person_Info
	{
		std::string name; //名字
		std::vector<std::string> phones; //存放多種電話
	};

	std::string line, word;
	std::vector<Person_Info> people;
	while (getline(std::cin, line)) //輸入
	{
		Person_Info info; //當前資料
		std::istringstream record(line); //紀錄輸入值
		record >> info.name; //假設第一筆資料必然為名字
		while (record >> word) //後面都是電話
		{
			info.phones.push_back(word); //將電話一筆一筆存進vector中
		}
		people.push_back(info); //全部存到people中(電話本)
	}
	for (auto& p : people)
	{
		std::cout << p.name  << p.phones[0] << std::endl; //輸出名字/手機號碼
	}
	return 0;
}
```
### 12. ostringstream的應用，處理完後在輸出。
### 以下為範例程式碼:
```c++
ostringstream:
	for(const auto& entry :people)
	{
		ostringstream formatted, badnums;
		for(cosnt auto& nums : entry.phones)
		{
			if(!valid(nums))
			{
				badnums << " " << nums;
			}
			else
			{
				formatted << " " << format(nums);
			}
		}
		if(badnums.str().empty())
			os << entry.name << " " << formatted.str() << endl;
		else
			cerr << "input error: " << entry.name << "invalid number(s) " << badnums.str() << endl;

```

## 19 循序容器:
### 1. 循序容器共分以下幾種:
### vector:大小有彈性的陣列，支援快速的隨機存取，但是如果要在前面或中間做插入或刪除時，通常會比較慢。
### deque:有兩端開口的佇列(queue)，支援快速的隨機存取，在前端或後端做插入跟刪除很快。
### list:雙向連結串列，只支援雙向的循序存取，不論在哪做插入或刪除都很快。
### forward_list:單向連結串列，只支援單向的循序存取，不論在哪做插入或刪除都很快。
### array:大小有固定的陣列，支援快速的隨機存取，無法做新增或刪除元素。
### string:一種特化的容器，類似於vector，裡面存放的是字元。支援快速的隨機存取，且在後端的刪除與插入很快速。

### 2. 一般來說，我們都是選擇vector來使用。
### 3. 如果你的程式小型元素很多，空間會有額外的負擔，那就別用list跟forward_list。
### 4. 如果需要做快速的隨機存取，那就用vector跟deque。
### 5. 如果需要在容器中間做插入或刪除，就用list跟forward_list
### 6. 如果需要在前端或後端做插入跟刪除，就用deque。
### 7. 迭代器範圍:由一個begin跟end所組成。
### 所謂begin泛指容器中的第一個元素，而end卻非容器中的最後一個元素，而是指最後一個元素的下一個位置。
### 8. 這代表著我們的容器是一個左閉右開(left-inclusive intreval)的陣列:[begin,end)。
### 9. 換句話說，我們可以通過++begin的方式來抵達end。
### 10. 如果begin = end那就代表著這個容器是空的。
### 11. 如果begin != end那就代表著這個容器中間至少有一個元素。
### 12. 迭代器的型別如下:
```c++
list<string> a = {"Milton", "Shakespeare", "Austen"};
auto it1 - a.begin(); //list<string>::iterator
auto it2 - a.rbegin(); //list<string>::reverse_iterator
auto it3 - a.cbegin(); //list<string>::const_iterator
auto it4 - a.crbegin(); //list<string>::const_reverse_iterator
```
### 13. 如果不需要寫入的話，就使用cbegin()跟cend()。
### 14. 定義和初始化容器:
```c++
C c1(c2) //c1=c2
C c(begin, end) //c是由begin~end範圍內所有元素拷貝所組成的，但不包含end。
deque<string> c2(c1.begin(), c1.end());
C seq(n) //seq有n個型別為c的元素
C seq(n,t) //seq有n個型別為c的t
```
### 15. array的初始化與定義:
```c++
array<int, 42> a1//存放42個int的array:a1
```
### 16. 要記得陣列不能被放在右值，也就是不能被拷貝或指定給內建陣列。
### 17. 但是容器array卻可以拷貝或指定給容器array，如下:
```c++
int digs[10] = {0,1,2,3,4,5,6,7,8,9};
int cpy[10] = digs[10]; //錯的因為陣列不能被拷貝或指定給內建陣列
array<int, 10> digits = {0,1,2,3,4,5,6,7,8,9};
array<int, 10> copy = digits; //可以，只要型別是一樣的就行了
```
### 18. 只要型別相同，經過指定之後，容器的大小會變得跟右值一樣。
```c++
c1 = c2; //直接把c2拷貝給c1
c1 = {a,b,c}; //c1現在是一個大小為3的容器，裡面裝{a,b,c}
```
### 19. array也基本支持上面的各類指定模式，但卻不支持以下這種:
```c++
a = {0}; //我們沒辦法直接對array做assign，因為它可能與它一開始的宣告的大小不同。
```
### 20. 如同我們前面所說，array無法做插入與刪除，因此所有可能導致大小不同的運算都是不支援的。
### 21. 我們也可以通過swap的方式來交換c1跟c2，而且這通常比拷貝還要快。
```c++
swap(c1,c2);
c1.swap(c2);
```
### 22. 但要記得，還是需要相同型別才能使用這些運算。
### 23. 也有關於assign的函式:
```c++
seq.assign(c.begin(), c.end()); //將c從begin到end放到seq裡面
seq.assign(n,t) //將n個t放進squ裡面
seq.assign(il); //直接將串列il取代seq
```
### 24. assign就多樣化一點，它不一定要相同型別，只要相容的話，也能做運算，如下:
```c++
list<string> names;
vector<const char*> oldstyle;
names = oldstyle; //錯的，不是相同型別
names.assugn(oldstyle.cbegin(), oldstyle.cend()) //可以因為char與string相容
```
### 25. 哪怕經過了swap，容器的迭代器、參考，與指標都不會無效化。
### 這代表著哪怕經過swap，迭代器、參考，與指標仍然綁定在它們原來綁定的元素上，只是元素所代表的值不一樣了。
```c++
swap(c1,c2) //假定交換c1跟c2
```
### 假定現在我們交換了c1跟c2，那麼c1[2]的位址還是沒變，只是其內部所含的值改變了。
### 26. 容器支援大小比較:
```c++
vector<int> v1 = {1,3,5,7,9,12};
vector<int> v2 = {1,3,9};
vector<int> v3 = {1,3,5,7};
vector<int> v4 = {1,3,5,7,9,12};
```
### v1 < v2:成立，因為v2[2] > v1[2]
### v1 < v3:錯，因為前面四個元素都相等，那麼就比大小。這同樣代表v3是v1的子序列(subsequence)
### v1 == v4:成立，這無庸置疑的，兩個一模一樣。
### 27. 但我們也要記得，容器之所以支援大小比較，那是因為其內部所裝的物件(int,double,string,float)也同樣支援。
### 28. 當我們使用一個物件來初始化又或者插入到一個容器時，其本質就是拷貝，與該物件本體並沒有關係。
### 29. 除了push_back()之外，list、forward_list跟deque還支援了push_front()，用來將物件插入到容器的前端。
### 30. 我們也可以使用insert在容器的任一位置進行插入:
```c++
c.insert(p, t)  //在迭代器(位置)p之前插入值為t的元素，並回傳指向P上一個元素的迭代器
c.insert(p, n, t)  //在迭代器(位置)p之前插入n個值為t的元素
c.insert(p, begin(), end())  //在迭代器(位置)p之前插入範圍begin到end中間的所有元素，但還是要記得，不包含end
c.insert(p, il) //在迭代器(位置)p之前插入il(串列)
```
### 31. 但要記得，與swap不同的是，一但我們新增元素到一個容器中，那麼它原來的迭代器、參考，與指標就都會無效化了。
### 32. 雖然有些容器不支援push_front，但insert卻沒有限制，大家都能用。
### 這也就代表我們可以使用insert在vector前端插入一個元素，但這往往也意味著我們的效能會大幅降低。因為vector本身其實就不適合在前端做插入或刪除。
### 33. emplace函式，與push/insert不同，emplace是真的在空間內創建了一個物件然後放進容器裡，並非是拷貝。
```c++
c.emplace_back("978-0590353403", 25, 15.99); //假設我們有一個Sales_data物件的建構器，那麼就是創造一個Sales_data型別的物件放到c的後端。
c.emplace_back(Sales_data("978-0590353403", 25, 15.99));
```
### 這就代表著emplace函式中的參數(引述)，必須跟程式內部的某一個建構器相匹配。
### 34. 在操作一個容器之前，我們一定要習慣先檢查它內部是否有元素，最簡單的方法是:
```c++
if(!c.empty())
{
}
```
### 35.foward_list不支援遞減(--)跟back。
### 36. 存取容器中的元素:
```c++
c.back() //與end不同，這是取最後一個元素。
c.front() //第一個元素
c[n] //第n個元素
c.at(n) //第n個元素，但如果錯誤的話，就會回傳out_of_range
```
### 這也是為甚麼我們要先檢查容器是否為空的原因，因為我們是使用下標的方式來存取。如果沒有元素在容器內，這就代表著我們超出範圍了。
### 37. 我們存取容器中的元素，其實就等於回傳該元素的參考。如果我們在建構函式一樣，如果容器是const那就回傳const&，如果不是，那就是正常的reference，是可以做改變的。
### 38. 移除元素:
```c++
c.pop_back() //移除容器c中的最後一個元素
c.pop_back() //移除容器c中的第一個元素
c.erase(p) //移除迭代器p，也就是位置p的元素，並且回傳下一個元素
c.erase(begin,end) //移除迭代器begin到end中的所有元素，當然不包含end。同時回傳一個指針，指向end，又或者說指向被移除元素後的下一個元素。
c.clear() //移除c中的所有元素
```
## 練習題17
### 設計一個程式，可以讓使用者輸入一串數列，同時可以決定要刪除數列中的哪一個數字。
```c++
#include <iostream>
#include <string>
#include <vector>
int main()
{
begin:
	std::vector<int> nums; //the vector for user to stroe the numbers what they input
	int val = 0; //the varibale to store the input numbers
	int counter = 0; //the counter to count how many variables the user already input
	while (counter < 10 && std::cin >> val)
	{
		nums.push_back(val);
		++counter;
	}
	std::string YesOrNo = "";
	//check if the vector is empty or not
	if (nums.empty())
	{
		std::cerr << "No numbers in the vector now." << std::endl;
		std::cout << "Do you want to try again?(Yes or Np)" << std::endl;

		std::cin >> YesOrNo;
		if (YesOrNo == "yes" || YesOrNo == "Yes")
		{
			goto begin;
		}
		else
		{
			return -1;
		}
	}
	//print the variables in the vector
	std::cout << "The numbers you input are: " << std::flush;
	for (auto& v : nums)
	{
		std::cout << v << ", " << std::flush;
	}
	std::cout << "\n" << "Please enter what numbers you want to erase?" << std::endl;
	int era_val = 0;
	auto beg = nums.begin(); //iterator begin
	bool findornot = false; 
	//check if the input is valid or not
	if (std::cin >> era_val)
	{
		while (beg < nums.end()) //search the variable from begin to end
		{
			if (era_val == *beg) //find
			{
				nums.erase(beg);
				findornot = true;	
				break;
			}
			else //not find and increase the iterator
			{
				++beg;
			}
		}
	}
	else
	{
		std::cout << "Invalid Input." << std::endl;
	}
	//check if we find the variable or not
	if (findornot)
	{
		std::cout << "The numbers are: " << std::flush;
		//print the varibales after we erase the target
		for (auto& v : nums)
		{
			std::cout << v << ", " << std::flush;
		}
		return 0;
	}
	else
	{
		std::cout << "The number you want to erase is not in the vector." << std::endl;
		return -1;
	}
}
```
### 39. 對於forward_list的插入或刪除:
```c++
lst.before_begin() //回傳串列開頭前那個不存在的元素，以便之後用來新增跟刪除。
lst.cbefore_begin() //回傳串列開頭前那個不存在的元素，但是const，以便之後用來新增跟刪除。
lst.insert_after(p,t) //在迭代器p之後插入物件t。
lst.insert_after(p,n,t) //在迭代器p之後插入n個物件t。
lst.insert_after(p,begin,end) //在迭代器p之後插入迭代器begin到end中間的物件，當然一樣不包含end。
lst.insert_after(p,il) //在迭代器p之後插入串列il。
lst.erase_after(p) //移除迭代器p之後所代表元素的值，並回傳指標指向下一個元素
lst.erase_after(begin,end) //移除迭代器begin之後到end中間的物件，當然一樣不包含end，是會回傳指標指向end。
```
### 40. 當我們要對一個forward_list做插入或刪除，一定要記得追蹤兩個迭代器:
### 一定要記得宣告開頭前元素，因為forward_list是單向的，我們刪除的每一個元素都會引響前一個元素，因此我們需要使用前一個元素來做插入與刪除，這也代表著宣告開頭前元素是必然的。
### 範例程式:
```c++
forward_list<int> flst = {0,1,2,3,4,5,6,7,8,9};
auto prev = flst.before_begin();
auto curr = flst.begin();
while(curr != flst.end())
{
	if(*curr % 2) //奇數
	{
		curr = flst.erase_after(prev);
	}
	else
	{
		prev = curr; //開始向後移動尋找
		++curr;
	}
}
```
### 41. resize函式:用來調整vector的大小。
```c++
list<int> ilist(10,42); //裝有10個int物件，元素值都是10
ilist.resize(15); //向後新增5個元素值為0的物件
ilist.resize(25,-1); //向後新增10個元素值為-1的物件
ilist.resize(5); //從後端刪除20個元素
```
### 42. 要注意，array不能resize。
### 43. 一定要記得，當我們對容器做新增以及刪除之後，絕大多數的迭代器、指標，以及參考都無效化了，這代表著我們不能再使用它，請重新宣告。
### 44. 這也就代表著我們必須不斷的更新迭代器:
## 練習題18
```c++
//移除偶數並且複製奇數
int main()
{
	std::vector<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter = vi.begin();
	while (iter != vi.end())
	{
		if (*iter % 2) //奇數
		{
			iter = vi.insert(iter, *iter);
			iter += 2; //因為原來是要指向下一個元素(+1)，但我們現在在iter前面額外插入了一個元素，所以變成+2
		}
		else
		{
			iter = vi.erase(iter); //移除iter所代表的元素，並且回傳下一個元素，所以不用做改變
		}
	}
	for (auto& v : vi)
	{
		std::cout << v << std::flush;
	}
	return 0;
}
```
### 45. 不要將end()定義在一個變數內，因為我們每次做新增或移除是，迭代器就發生改變了，我們應該確保每一次的end都會再迴圈內做更新。
### 46. 容器的大小管理:
```c++
c.shrunk_to_fit() //請求將capcity降到跟size一樣的大小
c.capacity() //重新配置前c所可以容納的元素量  也就是程式真的運作起來後，才知道該容器到底多大
c.reserve(n) //為至少n個元素配置空間
```
### 所以我們可以通過capacity與size的互動來使用我們的空間:
```c++
while(ivec.size() != ivec.capacity())
{
	ivec.push_back(0);
}
```
### 47. 這種分配空間的方式叫做vector實作，它們都會自己定義capacity大小的最佳策略。
### 48. string的特殊建構式:
```c++
string s(cp,n); //cp所指陣列的前n個字元的拷貝
string s(s2,pos2); //字串s2從pos2開始後面所有元素的一個拷貝
string s(s2,pos2,len2); //字串s2從pos2開始後面len2個元素的一個拷貝
```
### 49. 一般來說當我們以一個指標來宣告字串，那這個指標所指的字串陣列就必然以null結尾。
```c++
const char *cp = "Hello World!";
```
### 50. substr函式:
```c++
string s("hello world");
string s2 = s.substr(0, 5); //s從零開始數五個 印出hello
string s2 = s.substr(6); //初始值預設為0 印出六個
```
### 51. 修改string:
```c++
s.insert(s.size(), 5, '!'); //在最後面，也就是end前插入五個驚嘆號
s.erase(s.size() - 5, 5); //移除最後五個字元
const char *cp = "Stately, plump Buck";
s.assign(cp, 7); //cp所指指向字元開始的七個字元
```
### 52. append與replace函式:
```c++
s2.append("4th Ed.") //等於將"4th Ed."附加到s2上，並且回傳一個新的s2參考
s2.replace(11, 3, "5th"); //等於將從11後面三個字元替換為"5th"
```
### 53. string的搜尋運算:
```c++
s.find(args) //在s中找出args第一個出現處
s.rfind(args) //在s中找出args最後一個出現處
s.find_first_of(args) //在s中找出args中任何字元的第一個出現處
s.find_last_of(args) //在s中找出args中任何字元的最後一個出現處
s.find_first_not_of(args) //在s中找出不在args中任何字元的第一個出現處
s.find_last_not_of(args) //在s中找出不在args中任何字元的最後一個出現處
```
### 註記:(args)代表:
### ('c', pos):從pos開始找字元c
### (s, pos):從pos開始找字串s
### (cp, pos):從pos開始找指標cp所指向的字串
### (cp, pos, n):從pos開始找指標cp所指向字串的前n個字元
## 練習題19
```c++
//尋找字元
int main()
{
	std::string s = "";
	char c;
	std::string::size_type pos = 0;
	std::cout << "Please enter a sentence or a word." << std::endl;
	if (getline(std::cin, s))
	{
		std::cout << "Please enter the character you want to find: " << std::flush;
		std::cin >> c;
		auto index = s.find(c, pos);
		if (index != -1) //find
		{
			std::cout << "The character " << c << " is at index: " << index << std::endl;
			return 0;
		}
		else
		{
			std::cout << "The character is not in this string. "<< std::endl;
			return 0;
		}
	}
	else
	{
		std::cerr << "Invalid Input." << std::endl;
		return -1;
	}
}
```
## 練習題20
```c++
//找出數字並且做出轉換
#include <iostream>
#include <string>
#include <sstream>
int main()
{
	std::string s = "";
	std::string::size_type pos = 0;
	std::string numbers = "-0123456789";
	std::cout << "Please enter the senetence: " << std::endl;
	if (getline(std::cin, s)) //輸入句子
	{	
		std::cout << "the numbers are: " << std::flush;
		while (s.find_first_of(numbers) != std::string::npos) //如果有找到數字
		{
			double d = stod(s.substr(s.find_first_of(numbers))); //從第一個數字的位置開始轉換，直到不是數字為止
			std::cout << d << " " << std::flush;
			std::ostringstream strStream;
			strStream << d; //將d轉為string
			//std::cout << strStream.str().size() << std::endl;
			//std::cout << "There are " << strStream.str().size() << " numbers" << std::endl;
			if (s.find_first_of(numbers) == 0)
			{
				s.erase(s.find_first_of(numbers), strStream.str().size());
				//std::cout << "Now: " << s << std::endl;
			}
			else
			{
				s.erase(pos, s.find_first_of(numbers) + strStream.str().size());
				//std::cout << "Now: " << s << std::endl;
			}		
		}
	}
	return 0;
}

```
### 54. 容器轉接器:stack, queue, priority_queue
### 每個轉接器都定義了兩個建構器，一個用來創建空物件，還有一個用來接受容器。
### 默認情況下，stack跟queue都是基於deque實現的。而priority_queue則是在vector上實現。
```c++
stack<int> stk(deq); //將deq裡面的元素拿出來存到stk裡面
```
### 55. stack存放於stack的標頭檔中，同時也為於標準函式庫中。
```c++
int main()
{
	std::stack<int> intstack;
	for (size_t ix = 0; ix != 10; ++ix)
	{
		intstack.push(ix); //從0放到9
	}
	while (!intstack.empty()) 
	{
		int value = intstack.top(); //最頂端為9
		std::cout << value << std::endl; //印出最頂端的值
		intstack.pop(); //刪除最頂端的值，代表向前移一格
	}	
}
```
## 20 泛用演算法:
### 1. 一般來說，演算法不會直接作用在整個容器上，而是通過一組迭代器所界定的範圍，在上面尋訪(traverse)，而後對每一個元素做一些處理。
### 2. 指標在內建陣列上的行為就等同於迭代器。
### 3. 除了少數幾個例外，演算就就是作用於一組迭代器的範圍內，而這個範圍我們稱為輸入範圍"input range"。
### 4. 如果只打算讀取不會寫入，請善用cbegin()跟cend()。
### 5. 一定要記得，演算法不會改變容器大小，因為它們並不能直接做插入與刪除。
### 6. 為了確保我們有足夠的元素來進行存取，我們可以使用插入迭代器(insert iterator):
```c++
int main()
{
	std::vector<int> vec;
	auto it = back_inserter(vec); //通過it來插入元素到vec中
	*it = 42;
	auto beg = vec.begin();

	while (beg != vec.end())
	{
		std::cout << *beg++ << std::endl;
	}
	return 0;
}

```
```c++
int main()
{
	std::vector<int> vec;
	auto it = back_inserter(vec);	
	fill_n(it, 10, 0);
	auto beg = vec.begin();
	while (beg != vec.end())
	{
		std::cout << *beg++ << std::endl;
	}
	return 0;
}
```
### 7. 當我們想要確保兩個陣列大小相同時，可以使用sizeof:
```c++
int a1[] = {0,1,2,3,4,5,6,7,8,9};
int a2[sizeof(a1)/sizeof(*a1)];
auto ret = copy(begin(a1),end(a1),a2); //將a1拷貝到a2中，但前題是a2與a1一樣大
```
### 8. 如我們前面所說，演算法並不能直接做插入與刪除，因此我們可以通過以下方法來改變容器:
```c++
void Elim_Dups(std::vector<std::string> sen)
{

	sort(sen.begin(), sen.end());
	auto the_unique = unique(sen.begin(), sen.end()); //covert the repeat_words to null and move them to the end(after the last element)
	//but the size of the vector isnt changed
	sen.erase(the_unique, sen.end()); //erase the null from the_unique(after the last not null element) to end(before the end)
	for (auto& beg : sen)
	{
		std::cout << beg << " " << std::flush;
	}
}
void Elim_Dups(std::vector<std::string>);
int main()
{
	std::vector<std::string> sentences;
	std::string word = "";
	while (std::cin >> word) //press ctrl+z to stop
	{
		sentences.push_back(word);
	}
	Elim_Dups(sentences);
	return 0;
}
```
### 註記:unique只能處理相鄰的重複元素，所以使用前必然要先進行排序。
### 9. 可呼叫物件(Callable Objects):Lambda Expression，可以把它想成是一個沒有命名的inline函式。
	[capture list] (parameter list) -> return type {function body}
 	//parameter list跟return type是可以省略的
### 範例程式:
```c++
//比較字詞長短並重新排序
void Elim_Dups(std::vector<std::string>);
bool Is_Shorter(const std::string&, const std::string&);
void Elim_Dups(std::vector<std::string> sen)
{
	sort(sen.begin(), sen.end());
	auto the_unique = unique(sen.begin(), sen.end()); //covert the repeat_words to null(or doesnt convert) and move them to the end(after the last element)
	//but the size of the vector isnt changed
	sen.erase(the_unique, sen.end()); //erase the null from the_unique(after the last not null element) to end(before the end)
	stable_sort(sen.begin(), sen.end(), Is_Shorter);
	for (auto& beg : sen)
	{
		std::cout << beg << " " << std::flush;
	}
}
bool Is_Shorter(const std::string& w1, const std::string& w2)
{
	return w1.size() < w2.size();
}
int main()
{
	std::vector<std::string> sentences;
	std::string word = "";
	while (std::cin >> word) //press ctrl+z to stop
	{
		sentences.push_back(word);
	}
	Elim_Dups(sentences);
	//sort(sentences.begin(), sentences.end(), Is_Shorter);
	return 0;
}
```
### 範例程式(Lambda Expression):
```c++
//比較字詞長短並重新排序
void Elim_Dups(std::vector<std::string>);
void Elim_Dups(std::vector<std::string> sen)
{
	sort(sen.begin(), sen.end());
	auto the_unique = unique(sen.begin(), sen.end()); //covert the repeat_words to null and move them to the end(after the last element)
	//but the size of the vector isnt changed
	sen.erase(the_unique, sen.end()); //erase the null from the_unique(after the last not null element) to end(before the end)
	stable_sort(sen.begin(), sen.end(), [](const string& a, const string& b) { return a.size() < b.size(); });
	for (auto& beg : sen)
	{
		std::cout << beg << " " << std::flush;
	}
}
int main()
{
	std::vector<std::string> sentences;
	std::string word = "";
	while (std::cin >> word) //press ctrl+z to stop
	{
		sentences.push_back(word);
	}
	Elim_Dups(sentences);
	//sort(sentences.begin(), sentences.end(), Is_Shorter);
	return 0;
}
```
### 註記:stable_sort:維持相等元素原來的順序。
### 10. Lambda Expression的捕捉串列:
```c++
[sz] (const string& a)
{
	return a.size() >= sz;
}
```
### 範例程式:
```c++
void biggies(std::vector<std::string>& sen, std::ostream& os = std::cout, std::string c = ", ")
{
	for_each(sen.begin(), sen.end(),
		[&os, c](const std::string& s /*本身拿到的結果*/) { os << s << c; });
}
```
### 11. 一般情況下一個Lambda是沒辦法改變它以值捕捉的變數的，我們需要通過mutable才能改變。
```c++
void func3()
{
	size_t v1 = 42;
	auto f = [v1]() mutalbe { return ++v1};
	v1 = 0;
	auto j = f(); //43
}
```
```c++
void func4()
{
	size_t v1 = 42;
	auto f = [&v1]() mutalbe { return ++v1};
	v1 = 0;
	auto j = f(); //1
}
```
### 12. 通常來說Lambda Expression最適合在不需要使用一個以上的運算時使用最好，如果條件太多了，最好還是設計一個function。
## 21 再探迭代器
### 1. 除了每個容器所定義的迭代器之外，我們還有:插入迭代器(insert iterator)、資料流迭代器(stream iterator)、反向迭代器(reverse iterator)，以及移動迭代器(move iterator)。
### 插入迭代器(insert iterator)又分三種:back_inserter(push_back)、front_inserter(push_fornt)，以及inserter(insert)。
### 2. 相對的我們也必須在容器有支援以上幾種迭代器時，才能使用。
### 範例程式:
```c++
#include <iostream>
#include <iterator>
#include <list>
int main()
{
	std::list<int> lst = { 1,2,3,4 };
	std::list<int> lst2, lst3; //空列表所以lst3.begin() = lst3.end()
	copy(lst.cbegin(), lst.cend(), front_inserter(lst2)); //4 (front) 3 (front) 2 (front) 1 (front)
	for (auto& val : lst2)
	{
		std::cout << val  << " " << std::flush;
	}
	std::cout << std::endl;
	copy(lst.cbegin(), lst.cend(), inserter(lst3, lst3.end())); //1 2 3 4 (end)
	for (auto& val : lst3)
	{
		std::cout << val << " " << std::flush;
	}
	return 0;
}
```
### 3. iostream迭代器:
### istream_iterator:讀取輸入資料流。
### 範例程式:
```c++
int main()
{
	typedef std::istream_iterator<int> int_it;
	int_it it(std::cin);
	int_it it_eof;	
	std::vector<int> vec;
	while (it != it_eof)
	{
		vec.push_back(*it++);
	}
	for (auto& val : vec)
		{
			std::cout << val << " " << std::flush;
		}
	return 0;
}
```
### ostream_iterator:讀取輸入資料流。
### 範例程式:
```c++
int main()
{
	typedef std::istream_iterator<int> in_it;
	typedef std::ostream_iterator<int> out_it;
	in_it it(std::cin);
	in_it it_eof;
	out_it out(std::cout, " ");
	std::vector<int> vec;
	while (it != it_eof)
	{
		vec.push_back(*it++);
	}
	for (auto& val : vec)
		{
			//*out++ = val;
			out = val; //可以不用解參考跟遞增，會自己移動
		}
	std::cout << std::flush;
	return 0;
}
```
### 範例程式(最優解):
```c++
int main()
{
	typedef std::istream_iterator<int> in_it;
	typedef std::ostream_iterator<int> out_it;
	in_it it(std::cin);
	in_it it_eof;
	out_it out(std::cout, " ");
	std::vector<int> vec;	
	while (it != it_eof)
	{
		vec.push_back(*it++);
	}
	copy(vec.begin(), vec.end(), out);
	std::cout << std::flush;
	return 0;
}
```
### 4. 反向迭代器是一個往回巡訪的迭代器，從最後一個元素開始朝向第一個元素。
### 5. 要注意，它反轉了遞增(++)與遞減(--)的意義:"++"變成向前，"--"變成向後。
### 6. 除了forward_list之外，所有的容器都有反向迭代器。
### 範例程式:
```c++
//reverse iterator
int main()
{
	std::vector<int> vec = { 0,1,2,3,4,5,6,7,8,9 };
	for (auto r_iter = vec.crbegin(); r_iter != vec.crend(); ++r_iter) //crbegin是vec[9],crend是vec[0]的前一個空位置
	{
		std::cout << *r_iter << " " << std::flush;
	}
	return 0;
}
```
## 練習題21
```c++
// 設計一個可以找出標點符號的程式
// 可以選擇印出逗號前後的單字/句子
// 句子由使用者自己輸入
// 並且可以決定要尋找哪一個標點符號
int main()
{
	typedef std::ostream_iterator<std::string> out_it;
	std::string words, decide;
	char symbols;
	getline(std::cin, words);
	auto find_comma = find(words.cbegin(), words.cend(), ','); //只能找string
	auto rfind_comma = find(words.crbegin(), words.crend(), ','); //只能找string
	auto find_question_mark = find(words.cbegin(), words.cend(), '?'); //只能找string
	auto rfind_question_mark = find(words.crbegin(), words.crend(), '?'); //只能找string
	auto find_period = find(words.cbegin(), words.cend(), '.'); //只能找string
	auto rfind_period = find(words.crbegin(), words.crend(), '.'); //只能找string
	bool foundornot = false;
	int decision = 0;
	std::cout << "Please decide which symbols you want to find?(comma, period or question mark)" << std::endl;
	std::cin >> symbols;
	if (symbols == ',')
	{
		if (find_comma != words.end())
		{
			foundornot = true;
			decision = 1;
		}
		else
		{
			std::cerr << "There is no comma." << std::endl;
			return -1;
		}
	}
	else if (symbols == '.')
	{
		if (find_period != words.end())
		{
			foundornot = true;
			decision = 2;
		}
		else
		{
			std::cerr << "There is no period." << std::endl;
			return -1;
		}
	}
	else if (symbols == '?')
	{
		if (find_question_mark != words.end())
		{
			foundornot = true;
			decision = 3;
		}
		else
		{
			std::cerr << "There is no question mark." << std::endl;
			return -1;
		}
	}
	switch (decision)
	{
	case 1: //comma
		std::cout << "Please decide to find which words, the first one or the last one?(first or last)" << std::endl;
		std::cin >> decide;
		if (decide == "first")
		{
			std::cout << std::string(words.cbegin(), find_comma) << std::flush;
		}
		else if (decide == "last")
		{
			std::cout << std::string(rfind_comma.base(), words.cend()) << std::flush;
		}
		else
		{
			std::cerr << "Invalid Input" << std::endl;
			return -1;
		}
		break;
	case 2: //period
		std::cout << "Please decide to find which words, the first one or the last one?(first or last)" << std::endl;
		std::cin >> decide;
		if (decide == "first")
		{
			std::cout << std::string(words.cbegin(), find_period) << std::flush;
		}
		else if (decide == "last")
		{
			std::cout << std::string(rfind_period.base(), words.cend()) << std::flush;
		}
		else
		{
			std::cerr << "Invalid Input" << std::endl;
			return -1;
		}
		break;
	case 3: //question mark
		std::cout << "Please decide to find which words, the first one or the last one?(first or last)" << std::endl;
		std::cin >> decide;
		if (decide == "first")
		{
			std::cout << std::string(words.cbegin(), find_question_mark) << std::flush;
		}
		else if (decide == "last")
		{
			std::cout << std::string(rfind_question_mark.base(), words.cend()) << std::flush;
		}
		else
		{
			std::cerr << "Invalid Input" << std::endl;
			return -1;
		}
	}
	return 0;
}
```
### 7. 迭代器的分類:
### 輸入迭代器(input iterator):讀取但不寫入，單回，僅遞增。
### 輸出迭代器(output iterator):寫入但不讀取，單回，僅遞增。
### 正向迭代器(forward iterator):讀取且寫入，多回，僅遞增。
### 雙向迭代器(bidirectional iterator):讀取且寫入，多回，遞增及遞減。
### 隨機存取迭代器(random-access iterator):讀取且寫入，多回，完整的迭代器運算術。


## 22 關聯式容器
### 1. 與循序性容器不同，循序性容器式通過位置來做存取，但是關聯性容器是通過鍵(key)來做存取的。
### 2. 關聯式容器主要分兩個型別:map跟set。
### 3. map:其中包含的元素有鍵(key)跟值對組(key-value pairs)
### 其中key是索引，而值則是那個索引所關聯的資料。字典會是很好的例子，單字是key，解釋是值。
### 4. set:其中只含有一個鍵(key)，key就是value。
### set支援有效率的查詢一個key是否存在。
### 5. map通常會被稱作關聯性陣列，只是他的下標(index)並不一定要是整數而已。再來，如果我們要尋找map裡面的值，也並非是通過位置，而是key。
### 6. 相比於map，set就只是一些由key所組成的群集。就比如製作黑名單人員，我們就可以使用一個set來存取這些人員，之後只要通過key就可以查找那個仁是否有在黑名單裡面了。
### 範例程式(map):
```c++
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>
int main()
{
	std::map<std::string, size_t> word_count; //std::map<key(index),the type of value> map_name
	std::string word;
	while (std::cin >> word) //use word to be a (key)index and store it(each time plus one)
	{
		++word_count[word];
	}
	for (const auto& c : word_count) //print the data of the map(first for key(index) and second for the value)
	{
		std::cout << c.first << ": " << c.second << ((c.second > 1) ? " times" : " time") << std::endl;
	}
	return 0;
}
```
## 練習題22
```c++
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <map>
#include <set>
#include <algorithm>
//map and set 設計一個忽略大小寫與標點符號的記數程式 e.g example跟example.都會增加
int main()
{
	std::map<std::string, size_t> word_count; //std::map<key(index),the type of value> map_name
	std::set<char> exclude = { ',', '.', '?', ':', '!' };
	std::string word;
	std::cout << "Please enter the words:" << std::endl;
	while (std::cin >> word) //use word to be a (key)index and store it(each time plus one)
	{
		std::transform(word.begin(), word.end(), word.begin(), ::tolower); //convert the string to lowercase and copy into word(from begin) again
		for (const auto& m : exclude) //從set中取標點符號
		{
			auto mark = find(word.begin(), word.end(), m); //找邊標點符號
			if (mark != word.end()); //找到了
			{
				word = std::string(word.begin(), mark); //忽略標點符號
			}		
		}
		++word_count[word];
	}
	for (const auto& c : word_count) //print the data of the map(first for key(index) and second for the value)
	{
		std::cout << c.first << ": " << c.second << ((c.second > 1) ? " times" : " time") << std::endl;
	}
	return 0;
}
```
### 7. 關聯式容器並不支援循序容器上那些基於位置的運算。
### 8. 關聯式容器的迭代是雙向的。
### 9. 每個map跟set的鍵都是唯一的，但是multiamp跟multiset就沒有這種限制。
### 範例程式:
```c++
//multimap and multiset 
int main()
{
	std::vector<unsigned> vec;
	for (unsigned i = 0; i != 10; ++i)
	{
		vec.push_back(i);
		vec.push_back(i);
	}
	std::set<unsigned> iset(vec.cbegin(), vec.cend());
	std::multiset<unsigned> multiset(vec.cbegin(), vec.cend());
	std::cout << vec.size() << std::endl;
	std::cout << iset.size() << std::endl;
	std::cout << multiset.size() << std::endl;
	for (const auto& val : vec)
	{
		std::cout << val << " " << std::flush;
	}
	std::cout << std::endl;
	for (const auto& val : iset)
	{
		std::cout << val << " " << std::flush;
	}
	std::cout << std::endl;
	for (const auto& val : multiset)
	{
		std::cout << val << " " << std::flush;
	}
	return 0;
}
```
### 10. pair型別:一個pair存有兩個資料成員，是一個模板，讓我們產出特別的型別。
### 11. pair存放於utlity的標頭檔中。
### 範例程式:
```c++
int main()
{
	std::pair<std::string, std::string> author;
	return 0;
}
```
### 12. 對於set來說，每個key就是value。但是如果我們探討的是map，就是不一樣了。
### map是由key-value所組成的，這代表每一個元素都是pair。同時，我們也要記得，key是const的，不可改變，但是value可以改變。
### 13. set的key是const的，這代表set的迭代器也是const的。
### 範例程式:
```c++
int main()
{	
	std::set<int> iset = { 0,1,2,3,4,5,6,7,8,9 };
	auto isetb = iset.begin();
	while (isetb != iset.end())
	{
		std::cout << *isetb++ << " " << std::flush;
	}
	return 0;
}
```
### 14. 新增元素:
### 範例程式:
```c++
//新增元素到set
int main()
{
	std::vector<int> vec = { 2,4,6,8,2,4,6,8 };
	std::set<int> iset, iset2;
	iset.insert(vec.begin(),vec.end()); //唯一性，所以重複的不會再放進去
	auto isetb = iset.begin();
	while (isetb != iset.end())
	{
		std::cout << *isetb++ << " " << std::flush;
	}
	std::cout << std::endl;
	iset.insert({ 1,3,5,7,1,3,5,7 });
	isetb = iset.begin();
	while (isetb != iset.end())
	{
		std::cout << *isetb++ << " " << std::flush;
	}
	return 0;
}
```
### 範例程式:
```c++
//新增元素到map
int main()
{
	std::map<std::string, unsigned> word_count;
	std::string word;
	while (std::cin >> word)
	{
		word_count.insert({ word, 1 }); //return pair(map,true or flae) map又分成map->first(key) map-->second(value)
	}
	auto beg = word_count.begin();
	while (beg != word_count.end()) //iterator use -> to get the value
	{
		std::cout << beg->first << " " << beg->second << std::endl;
		++beg;
	}
	return 0;
}
```
### 15. 移除元素:
### 範例程式:
```c++
int main()
{
	std::map<std::string, unsigned> word_count;
	std::string word;
	int ctr = 0;
	while (ctr < 4 && std::cin >> word)
	{
		word_count.insert({ word, 1 });
		++ctr;
	}
	auto beg = word_count.begin();
	while (beg != word_count.end()) //iterator use -> to get the value
	{
		std::cout << beg->first << " " << beg->second << std::endl;
		++beg;
	}
	std::cout << "Please enter what word you want to remove: " << std::flush;
	std::string removed;
	std::cin >> removed;
	if (word_count.erase(removed))
	{
		beg = word_count.begin();
		while (beg != word_count.end()) //iterator use -> to get the value
		{
			std::cout << beg->first << " " << beg->second << std::endl;
			++beg;
		}
	}
	else
	{
		std::cout << removed << "is not found." << std::endl;
	}
	return 0;
}
```
### 16. 添標:我們可以幫map跟unordered_map提供下標。
### 但是沒辦法對set添標，因為set的key就是value沒有成對。然後multimap也不行，因為同一個key可能有多個值;簡單點來講，就是一個下標會有多個值。
### 17. 存取元素:如果我們只是想要尋找某一個元素有沒有在容器中，那使用find()會是個好方法。
### 但這是在key-value具有唯一性時才是如此。如果是有多重鍵值的容器，那麼使用count會好一些。
### find會回傳迭代器，而count則會回傳那個元素出現了幾次。
### 18. 因為find是回傳迭代器，所以我們可以通過迭代器的方式，來判斷該元素是否存在:
```c++
if(word.count.find("foot") == word.count.end()) //表示不存在
	std::cout << "not found" << std::endl;
```
### 註記:使用下標來尋找元素時，如果該元素不存在，那麼電腦會自動幫我們新增，這也是我們使用迭代器來尋找元素的主要原因。
### 19. 當一個multimap或multiset有多個元素具有相同的鍵值時，這些元素會彼此相鄰。
### 範例程式:
```c++
//尋找特定元素
int main()
{
	std::multimap<std::string, double> fruits;
	std::string fruit;
	double price;
	unsigned ctr = 0;
	std::cout << "The fruit: " << std::flush;
	while (ctr < 5 && std::cin >> fruit)
	{
		std::cout << "The price: " << std::flush;
		std::cin >> price;
		fruits.insert({ fruit ,price });
		++ctr;
		if (ctr != 5)
			std::cout << "The fruit: " << std::flush;
	}
	std::string search;
	std::cout << "Please enter what fruit you want to find: " << std::flush;
	std::cin >> search;
	auto total = fruits.count(search);
	auto beg = fruits.begin();
	while (total)
	{
		std::cout << beg->first << " " << beg->second << std::endl;
		++beg;
		--total;
	}
	return 0;
}
```
### 範例程式(優化):
```c++
int main()
{
	std::multimap<std::string, double> fruits;
	std::string fruit;
	double price;
	unsigned ctr = 0;
	std::cout << "The fruit: " << std::flush;
	while (ctr < 5 && std::cin >> fruit)
	{
		std::cout << "The price: " << std::flush;
		std::cin >> price;
		fruits.insert({ fruit ,price });
		++ctr;
		if (ctr != 5)
			std::cout << "The fruit: " << std::flush;
	}
	std::string search;
	std::cout << "Please enter what fruit you want to find: " << std::flush;
	std::cin >> search;
	for (auto beg = fruits.lower_bound(search), end = fruits.upper_bound(search); beg != end; ++beg)
	{
		std::cout << beg->first << " " << beg->second << std::endl;
	}
	return 0;
}
```
### 範例程式(最佳化):
```c++
int main()
{
	std::multimap<std::string, double> fruits;
	std::string fruit;
	double price;
	unsigned ctr = 0;
	std::cout << "The fruit: " << std::flush;
	while (ctr < 5 && std::cin >> fruit)
	{
		std::cout << "The price: " << std::flush;
		std::cin >> price;
		fruits.insert({ fruit ,price });
		++ctr;
		if (ctr != 5)
			std::cout << "The fruit: " << std::flush;
	}
	std::string search;
	std::cout << "Please enter what fruit you want to find: " << std::flush;
	std::cin >> search;
	for (auto pos = fruits.equal_range(search); pos.first != pos.second; ++pos.first)
	{
		std::cout << pos.first->first << " " << pos.first->second << std::endl;
	}
	return 0;
}
```
### 20. 如上面的範例程式，我們也可以通過lower_bound與upper_bound來進行限定查詢，當兩者回傳相同的迭代器時，即代表所給的值已不再容器內部了。
## 綜合練習:
```c++
// 設計一個字詞轉換程式
// 使用者可以自己決定要改變成甚麼單字
// 句子使用者自己輸入
/*
* 1.read word function
* 2.transform function
*/
void read_word(const std::map<std::string, std::string>&, std::ifstream&);
const std::string& transform(const std::string&, const std::map<std::string, std::string>&);
const std::string& transform(const std::string& s, const std::map<std::string,std::string>& m)
{
	auto map_it = m.find(s); //從容器中尋找s，也就是我們輸入句子裡面的各個單字

	if (map_it != m.end()) //如果有找到
		return map_it->second; //把那個字替換為容器中的second 如r要變成are

	else
		return s;
}
void read_word(const std::map<std::string, std::string>& m)
{
	std::string text;
	std::cout << "Please enter the sentence: " << std::endl;
	while (getline(std::cin, text)) //開始輸入句子
	{
		std::istringstream stream(text); //將每個單字分開拿出來這是一個"流"
		std::string word; //用來存放流裡面的單字
		bool firstword = true; //用來判斷是不是第一個字
		while(stream >> word) //開始把流裡面的字一個一個放進去
		{
			if (firstword)
				firstword = false;
			else
				std::cout << " " << std::flush; //如果是後面的單字，印出來之前要加空格
			std::cout << transform(word, m); //印出變化後的結果
		}
	}	
}
int main()
{
	std::cout << "This program is designed to change the word, you can enter 5 rules totally." << std::endl;
	std::map<std::string, std::string> changed_map; //宣告容器
	std::string bechanged, change;
	int ctr = 0;
	while(ctr < 5)
	{
		std::cout << "Please enter the word you want to change: " << std::flush;
		std::cin >> bechanged;
		std::cout << "Please enter what word you want to change to: " << std::flush;
		std::cin >> change;
		changed_map.insert({ bechanged, change }); //把要更改的值存入容器內
		++ctr;
		std::cin.get(); //釋放cin緩衝區
	}
	read_word(changed_map);
	return 0;
}
```
### 21. 無序關聯式容器:不使用一般比較運算子來組織元素，而是使用hash_function，以及鍵值型別的"=="。
### 22. 無序容器會被組織成由bucket所組成的一個群集(a collection of buckets)。
### 23. 無序容器的效能取決於hash function以及buckets的數量跟大小。

## 23 動態記憶體(Dynamic Memory)
### 1. 靜態記憶體:存放區域與類別的static物件或成員，以及任何函式定義外的變數。
### 2. 靜態記憶體:存放函式內的非static物件。
### 3. 靜態記憶體與靜態記憶體:它們所配置的物件都會由編譯器自動創建跟摧毀。
### 4. 動態記憶體的管理式通過:new與delete來進行的。
### 5. shared_ptr:允許多個指標指向同一個物件，存放於標準函式庫裡。
### 5. unique_ptr:表示這個指標擁有它所指的物件。
### 6. weak_ptr:弱參考(weak reference)指向由一個shared_ptr管理的物件。
### 7. 跟vector一樣，智慧指標也是模板，宣告方式如下:
```c++
int main()
{
	std::shared_ptr<int> p1 = std::make_shared<int>(42); //p is a shared ptr point to an int and the value of the int is 42
	std::shared_ptr<std::string> p2 = std::make_shared<std::string>(10,'9'); //p is a shared ptr point to a string and the value of the string is "9999999999"
	std::shared_ptr<int> p3 = std::make_shared<int>(); //p is a shared ptr point to an int and the value is initialized to 0
	std::cout << *p1 << " " << *p2 << " " << *p3 << std::endl;
	return 0;
}
```
### 當然，一般來說我們可以直接使用auto來宣告:
```c++
int main()
{
	auto p1 = std::make_shared<int>(42); //p is a shared ptr point to an int and the value of the int is 42
	auto p2 = std::make_shared<std::string>(10,'9'); //p is a shared ptr point to a string and the value of the string is "9999999999"
	auto p3 = std::make_shared<int>(); //p is a shared ptr point to an int and the value is initialized to 0
	std::cout << *p1 << " " << *p2 << " " << *p3 << std::endl;
	return 0;
}
```
### 8. 當我們在拷貝或者指定一個shared_ptr時，它內部都會有一個計數器，用來記錄當前總共有幾個shared_ptr指向相同的物件。
### 換句話說，只要shared_ptr的計數器為零，那就代表著該物件要被自動釋放了。
### 9. 如上述，shared_ptr會自動釋放關聯的記憶體。
### 10. 我們之所以要使用動態記憶體，是為了讓多個物件共用相同的狀態。
### 範例程式:定義一個模板
```c++
#include <iostream>
#include <vector>
#include <string>
#include <memory>
class StrBlob
{
public:
	typedef std::vector<std::string>::size_type size_type; //typedefine
	StrBlob() : data(std::make_shared<std::vector<std::string>>()) {}; //constructor
	StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>>()) {}; //constructor
	size_type size() const { return data->size(); } //function get_size
	bool empty() const { return data->empty(); } //function check empty
	void push_back(const std::string& s) { data->push_back(s); } //insert element to back
	void pop_back(); // erase element from back
	std::string& front(); //get the frist element
	const std::string& front() const;
	std::string& back(); //get the last element
	const std::string& back() const;
private:
	std::shared_ptr<std::vector<std::string>> data; //a shared_ptr
	inline void check(size_type i, const std::string& msg) const;
};
int main()
{
	StrBlob data1;
	data1.push_back("10");
	data1.push_back("20");
	data1.push_back("30");
	std::cout << data1.front() << std::endl;
	std::cout << data1.back() << std::endl;
	data1.pop_back();
	std::cout << data1.back() << std::endl;
	return 0;
}
void StrBlob::check(size_type i, const std::string& msg) const
{
	if (i >= data->size())
		throw std::out_of_range(msg);
}
void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob.");
	data->pop_back();
}
std::string& StrBlob::front()
{
	check(0, "front on empty StrBlob.");
	return data->front();
}
const std::string& StrBlob::front() const
{
	check(0, "front on empty StrBlob.");
	return data->front();
}
std::string& StrBlob::back()
{
	check(0, "back on empty StrBlob.");
	return data->back();
}
const std::string& StrBlob::back() const
{
	check(0, "back on empty StrBlob.");
	return data->back();
}
```
### 11. new會回傳一個"指標"指向它所配置的物件。
```c++
int* pi = new int; //pi指向一個動態配置，且無名未初始化的int
```
### 12. 如同我們會初始化變數一樣，初始化動態配置的物件也是個好習慣。
### 13. new也可以配置cosnt物件。
### 14. 我們可以用以下方法來解決讓new配置失敗時回傳一個nullprt。
```c++
int* pi = new(nothrow) int; //回傳一個nullprt
```
### 15. 為了避免動態記憶體耗盡，我們必須在使用完後，通過delete的方式來將記憶體歸還給系統。
```c++
delete p; //p必須是一個動態配置的物件或者是null
int i, * pi1 = &i, * pi2 = nullptr;
double* pd = new double(33), * pd2 = pd;
delete i; //error its an int
delete pi1;//undefined it points to a value
delete pd; //ok point to a dynamic object
delete pd2;//undefined the object already be deleted 
delete pi2; //ok a nullptr
```
### 16. 在delete pi1編譯器不會馬上報錯，這是一個潛在的錯誤，因為編譯器無法判斷這個指標是否為動態的。
### 同樣的，在delete pd2編譯器也不會馬上報錯，因為它無法判斷那個位置的記憶體是否被釋放了。
### 17. 當我們的函式回傳一個動態物件(動態指標所指的物件)，那麼後面使用到這個函式的呼叫者，就要負責釋放動態記憶體。
```c++
int* factory(int val)
{
	return new int(val);
}
void use_factory(int val)
{
	int* p = factory(val); //p need to be deleted
	delete p;
}
```
### 18. 雖然我們delete一個指標後，就代表著那個指標無效了，但在許多機器上，這些被delete的指標會被變成dangling pointer(懸置指標)。
### 所謂dangling pointer所指向的正是曾經指向某個物件的記憶體，但現如今已經消失或不同的一種指標。
### 19. 使用一個內建指標來存取某個智慧指標所擁有的物件通常並不是個好想法，因為我們不知道那個物件何時會被摧毀。
### 20. 不論是shared_ptr還是unique_ptr，我們都必須使用直接初始化的方式。來將他綁到一個new所回傳的指標上。
```c++
shared_ptr<int> sp1(new int(42));
unique_ptr<int> sp2(new int(42));
```
### 21. unique_ptr不支援一般的拷貝跟指定。
### 22. 通過weak_prt對shared_ptr進行綁定，並不會影響該shared_ptr的計數。
```c++
auto p = make_shared<int>(42);
weak_ptr<int> wp(p); //使用shared_ptr來初始化，但shared_ptr的計數器不變。
```
## 24 動態陣列(Dynamic Array)
### 1. 定義/刪除動態陣列，如下:
```c++
int *pia = new int[size]; //要注意，pia所指的是陣列中的第一個元素
delete[] pia;
```
### 2. 我們可以使用unique_ptr來管理動態陣列:
```c++
unique_ptr<int[]> up(new int[10]);
up.release(); //等價於delete []
```
### 3. 我們也能通過下標的方式來存取unique_ptr:
```c++
for(size_t i = 0; i != 10; ++i)
{
	up[i] = i; //賦值
}
```
### 4.通常我們並不建議使用shared_ptr來管理動態陣列，如果真的要使用，要記得設計一個刪除器。
### 同時，如果我們要存取動態陣列中的元素，也無法使用下標來存取，而是要使用get()函式。
## ⭐⭐⭐實作:
```c++
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <algorithm>
/*
* 設計一個文字查詢程式
* 讀取一篇文章
* 使用者輸入一個字詞(不區分大小寫)
* 輸出該字詞總共出現了幾次
* 輸出該字詞在哪一行出現，在該行出現了幾次，並且印出該行
* 
*/

/*
* Function:
* 1.Use a vector to store the passage
* 2.Each (index) stroe 1 line
* 3.Seperate the word
* 4.Store the word
* 5.Store the line
* 6.Print the answer
*/

void LookFor_Word(const std::string, std::map<std::string, unsigned>, std::map<unsigned, unsigned>, std::map<unsigned, std::string>);
const std::string User_Input();

class Read_Passage
{
public:
	//using line_Nos = std::vector<std::string>::size_type; //use vector to stroe the passage the line means vec[0],vec[1],vec[2]
	Read_Passage(std::ifstream& input, const std::string search_word); //constructor

private:
	std::vector<std::string> file; //a vector used to store each sentence
	std::map<std::string, unsigned> word_map; //word + total counter
	std::map<unsigned, unsigned> lines_map; //line + line counter(use to count the word occurs in each line)
	std::map<unsigned, std::string> sentence_map; // line + sentence in order to save the sentence
	//We need to notice that map is searched by key not idnex so we can start from 1 which means line 1
};

inline Read_Passage::Read_Passage(std::ifstream& input, const std::string search_word) //the details of the constructor
{
	std::string text = "";

	while (getline(input, text)) //read the sentence line by line
	{
		file.push_back(text); //store the text in each line
		size_t n = file.size(); //the line_Nos
		std::istringstream record(text); //seperate the words in each line
		std::string word; //in order to stroe the word
		while (record >> word) //start to seperate
		{
			std::transform(word.begin(), word.end(), word.begin(), ::tolower); //conver the word to lower
			++word_map[word]; //store each word into the map and for the repeat word the total counter will +1
			if (word == search_word) //check if the word is equal to search_word or not
			{
				++lines_map[n]; //the word is equal to the target and it doesnt jump out the loop so its in the same line / counter+1
			}
			
		}

		sentence_map[n] = text; //store each sentence
	}

	LookFor_Word(search_word, word_map, lines_map, sentence_map); //funciton for looking for the word
	

}

inline const std::string User_Input() //function for user to input the word what they want to search and return it
{

	std::cout << "Please enter the word you want to find in this chapter: " << std::flush;
	std::string search_word = "";

	std::cin >> search_word; //store the word

	std::cout << "The word you want to search is: >>" << search_word << "<<" << std::endl;

	std::transform(search_word.begin(), search_word.end(), search_word.begin(), ::tolower); //conver the word to lower
	return search_word;
}

inline void LookFor_Word(const std::string w, std::map<std::string, unsigned> m, std::map<unsigned, unsigned> l, std::map<unsigned, std::string> sen) //funciton for looking for the word
{
	if (m.find(w) == m.end()) //check if we find the target or not
		std::cout << "We can not find this word in this chapter." << std::endl;

	if (m[w] > 1) //singular(incldue 0) and plura
		std::cout << "There are " << m[w] << " >>" << w << "<< in this chapter totally." << std::endl;
	else
		std::cout << "There is " << m[w] << " >>" << w << "<< in this chapter totally." << std::endl;


	auto lines_beg = l.begin();
	while (lines_beg != l.end()) //start to print the details for each line if we find the word
								//if we dont find the word: lines_beg == l.end()
	{
		std::cout << "(Lines: " << (lines_beg->first) << ")" << " The word: " << ">>" << w << "<< "
			<< "occurs " << lines_beg->second << " time(s)" << std::endl;
		std::cout << sen[lines_beg->first] << std::endl; //print the sentence included the word
		++lines_beg;
	}
	
}


int main()
{
	const std::string serach_word = User_Input();
	
	std::ifstream input("Twilight.txt");
	Read_Passage file(input, serach_word);

	return 0;
}
```
## 25 拷貝控制:
### 1. 拷貝建構器:
```c++
// 拷貝建構器
class copy_constructor
{

public:

	copy_constructor() { std::cout << "default constructor" << std::endl; }; //defualt
	copy_constructor(const copy_constructor&) { std::cout << "copy constructor" << std::endl; }; //copy

};

int main()
{

	copy_constructor A;
	copy_constructor B(A);
	copy_constructor C = A; //等價於上述


	return 0;
}
```
### 2. 當我們使用直接初始化時，是在要求編譯器使用函式匹配，來選擇與提供參數相同的建構器。而拷貝初始化則是在將右手邊的運算元拷貝到正在建立的物件當中。
```c++
// 直接初始化 / 拷貝初始化
void copy_initial(int val)
{
	std::cout << "copy" << std::endl;
}

int main()
{
	std::string s1(10, 's'); //直接初始化
	std::string s2(s1); //直接初始化(拷貝建構器)
	std::string s3 = s1; //拷貝初始化
	std::string s4 = "ssssssssssssss"; //拷貝初始化
	std::string s5 = std::string(10, 's'); //拷貝初始化

	int value = 5;

	copy_initial(value); // int val = value;
	return 0;
}
```
### 3. 拷貝初始化不只發生在我們使用"="時。
### 傳遞一個物件作為非參考型的參數時。
### 從一個非參考型別的函式回傳物件時。
### 以大括號初始化一個陣列中的元素時。
### 以上這些也都會做拷貝初始化。
### 4. 拷貝指定運算子:重載的運算子是一種函式，其名稱為operator後面加上一個被定義的運算子符號，如下:
```c++
// 重載運算子
class Foo
{
public:
	Foo(const std::string s, const int i) : ss(s), ii(i) { std::cout << "Initialized" << std::endl; };
	Foo& operator=(const Foo&);
	

private:
	std::string ss;
	int ii;
};

Foo& Foo::operator=(const Foo& F)
{
	ss = F.ss;
	ii = F.ii;

	return *this;
}
```
### 5. 為了跟內建型別一致，指定運算子通常回傳一個參考指向左邊運算元。
### 6. 解構器:解構器會將一個物件用到的資源進行釋放，並摧毀該物件非static的資料成員。
### 7. 解構器沒有回傳值也不接受參數。而又因為不接受參數的原因，所以解構器沒有重載。
```c++
// 解構器
class Foo
{

public:
	~Foo() {};

};
```
### 8. Three Rules:三個基本運算用來控制物件的拷貝:拷貝建構器、拷貝指定運算子，以及解構器。
### 9. 一般來說，如果有解構器，那麼就需要拷貝建構器跟拷貝建構器。而如果有拷貝建構器也會需要拷貝指定運算子，反之亦然。
### 10. 但要記得，有拷貝建構器跟拷貝建構器卻不一定需要解構器。
### 11. 類值拷貝:
```c++
//類值拷貝
class value_like
{
public:
	value_like(const std::string& s = std::string()) : //initialize
		ps(new std::string(s)), i(0) 
	{
		std::cout << "Initialized: " << *ps << " " << i << std::endl;
	}; // ps need to be deleted

	value_like(const value_like& val) : //copy 
		ps(new std::string(*val.ps)), i(val.i) 
	{
		std::cout << "Copy: " << *ps << " " << i << std::endl;
	}; //in order to avoid double or more pointers point to the same object, we need to dereference to create a new object
												
	value_like& operator=(const value_like&);
	~value_like() //deconstructor
	{
		delete ps;
	};
private:

	std::string* ps;
	int i;

};

value_like& value_like::operator=(const value_like& rhs) // after we initialized we'll use assign
{
	auto temp = new std::string(*(rhs.ps)); //dereference to access its value
	delete ps;
	ps = temp;
	i = rhs.i;
	std::cout << "Assigned: " << *(this->ps) << " " << this->i << std::endl;

	return *this; // value_like* this = &value (value_like value)
}

int main()
{

	value_like test1("Hello"); //initialize
	value_like test2(test1); //copy
	value_like test3 = test1; //copy


	value_like test4("Hi"); //initialize
	test4 = test1; //assign

	return 0;
}
```
### 12. 在寫指定運算子時，我們需要做的就是將右手邊的運算原先拷貝到一個暫存物件上，那麼我們就可以安心的摧毀物件了。
### 13. 類指標拷貝:要讓一個類別表現的像指標，最簡單的方式就是使用智慧指標(shared_ptr)的管理系統。因為shared_ptr就是依靠追蹤到底有多少使用者共用所指的物件，來決定是否摧毀該物件。
```c++
//類指標拷貝
class pointer_like
{
public:
	pointer_like(const std::string& s = std::string()) : //initialize
		ps(new std::string(s)), i(0), use(new std::size_t(1))
	{
		std::cout << "Initialized: " << *ps << " " << i << " Counter: " << *use << std::endl;
	}; // ps need to be deleted

	pointer_like(const pointer_like& val) : //copy 
		ps(new std::string(*val.ps)), i(val.i), use(val.use)
	{
		++(*use);
		std::cout << "Copy: " << *ps << " " << i << " Counter: " << *use << std::endl;
	}; //in order to avoid double or more pointers point to the same object, we need to dereference to create a new object

	pointer_like& operator=(const pointer_like&);
	~pointer_like() //deconstructor
	{
		if (--(*use) == 0) //when there are no the other users point to the object we just can delete
		{
			delete ps;
			delete use;
		}
		
	};
private:

	std::string* ps;
	int i;
	std::size_t* use;

};

pointer_like& pointer_like::operator=(const pointer_like& rhs) // after we initialized we'll use assign
{
	++(*(rhs.use));
	if (--(*use) == 0) // deconstructor:since this is assigning so the lavalue will be deleted and going to be assign
	{
		delete ps; //this->ps
		delete use; //this->use
		//delete i //auto delete
	}

	ps = rhs.ps; //dereference to access its value
	i = rhs.i;
	use = rhs.use;
	std::cout << "Assigned: " << *(this->ps) << " " << this->i << " Counter: " << *(this->use) << std::endl;

	return *this; // value_like* this = &value (value_like value)
}

int main()
{
	pointer_like test1("Hello"); //initialize
	pointer_like test2(test1); //copy
	pointer_like test3 = test1; //copy


	pointer_like test4("Hi"); //initialize
	test4 = test1; //assign

	return 0;
}
```
### 14. 如果我們計畫將類別用於重新排列元素的演算法，那定義一個swap是個好主意。
```c++
//Swap function
//copy and swap

class value_like
{
public:
	friend void swap(value_like&, value_like&);
	value_like(const std::string& s = std::string()) : //initialize
		ps(new std::string(s)), i(0)
	{
		std::cout << "Initialized: " << *ps << " " << i << std::endl;
	}; // ps need to be deleted

	value_like(const value_like& val) : //copy 
		ps(new std::string(*val.ps)), i(val.i)
	{
		std::cout << "Copy: " << *ps << " " << i << std::endl;
	}; //in order to avoid double or more pointers point to the same object, we need to dereference to create a new object

	value_like& operator=(value_like);
	~value_like() //deconstructor give each class a independent object so we can delete them each time
	{
		delete ps;
	};
private:

	std::string* ps;
	int i;

};

value_like& value_like::operator=(value_like rhs) // rememebr that rhs should not be a const
{
	swap(*this, rhs); //the swap we designed

	return *this; // value_like* this = &value (value_like value)
}

inline void swap(value_like& v1, value_like& v2) //this is my own swap
{
	
	std::swap(v1.ps, v2.ps); //this is the swap in standard library
	std::swap(v1.i, v2.i);

	std::cout << "left: " << *(v1.ps) << " " << v1.i << " right: " << *(v2.ps) << " " << v2.i << std::endl;
}

int main()
{

	value_like test1("Hello"); //initialize
	value_like test2(test1); //copy
	value_like test3 = test1; //copy


	value_like test4("Hi"); //initialize
	test4 = test1; //assign -> swap

	value_like test5("Swap test");

	swap(test1, test5);

	return 0;
}
```
## ⭐⭐⭐實作:
```c++
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <map>
#include <set>


//設計一個郵件管理系統
/*
* 1. Folder:用來儲存郵件
* 2. 一個郵件可以儲存在多個folder內
* 3. 可以單獨在某個folder刪除郵件，但不影響整體
* 4. 可以直接刪除郵件(從全部的folder的)
*/



class Folder
{
public:

	friend class Message;

	Folder(const std::string& name) :
		folder_name(new std::string(name))
	{
		std::cout << "Folder " << name << " is created." << std::endl;
		std::cout << "-----------------------------" << std::endl;
	} //Constructor


	void Add_Msg(Message& msg); //adding mail into folder
	void Remove_From_Folder(Message& msg); //remove mail from folder
	void show_folder(); //show the details of the folder

private:

	std::string* folder_name;
	std::set<Message*> mail; //use to store the pointer which points to the mail (save mail)

};

class Message
{
public:

	friend class Folder;

	Message(const std::string& mail_name, const std::string& mail_contents):
		name(new std::string(mail_name)), content(new std::string(mail_contents))
	{
		std::cout << "Mail: " << mail_name << " is created." << std::endl;
		std::cout << "-----------------------------" << std::endl;
	} //Constructor

	Message(const Message&); //copy
	Message& operator=(const Message&); //assign

	~Message() 
	{ 
		if (!*(this->removedornot))
		{
			std::cout << *(this->name) << " is destructing..." << std::endl;
			for (auto folder : in_folder)
			{
				folder->mail.erase(this);
			}
			delete name, content;
			in_folder.clear();
		}
		else
			;
	}; //Destructor

	void Remove_Message(); //Remove the mail from all folders
	void show_mail(); //show the details of the mail


private:

	std::string* name;
	std::string* content;
	std::set<Folder*> in_folder; //store the pointer which points to the folder that stroes this mail
	bool* removedornot = new bool(false); //used to check the mail is removed or not
};

Message::Message(const Message& mail): //copy
	name(new std::string(*(mail.name))), content(new std::string(*(mail.content))){}

Message& Message::operator=(const Message& rhs) //assign
{
	auto name_temp = new std::string(*(rhs.name));
	auto content_temp = new std::string(*(rhs.content));
	delete name, content;
	name = name_temp;
	content = content_temp;
	in_folder = rhs.in_folder;

	return *this;
}

inline void Message::Remove_Message()
{
	std::cout << "Removing mail... " << *(this->name) << " from: " << std::flush;
	
	std::size_t ctr = 1; //used to check run throw the all folders or not

	for (auto folder : in_folder) //run throw the all folders that store this mail and use them to remove this mail
	{
		std::cout << *(folder->folder_name) << ((ctr < in_folder.size()) ? ", " : ".") << std::flush;
		folder->mail.erase(this);
		++ctr;
	}
	delete name, content;
	in_folder.clear();
	*(this->removedornot) = true;
	
}

inline void Message::show_mail()
{
	std::cout << "Mail: " << *(this->name) << std::endl;
	std::cout << "Contents: " << *(this->content) << std::endl;
	std::cout << "-----------------------------" << std::endl;

	auto beg = (this->in_folder).begin();
	while (beg != (this->in_folder).end())
	{
		std::cout << "Mail is stored in folder: " << *((*beg)->folder_name) << std::endl;
		std::cout << "-----------------------------" << std::endl;
		++beg;
	}

}



inline void Folder::Add_Msg(Message& msg)
{
	mail.insert(&msg);
	msg.in_folder.insert(this);
}
inline void Folder::Remove_From_Folder(Message& msg)
{
	mail.erase(&msg);
	msg.in_folder.erase(this);
}

inline void Folder::show_folder()
{
	std::cout << "Folder: " << *(this->folder_name) << std::endl;
	std::cout << "The mail in this folder: " << std::endl;

	auto beg = (this->mail).begin();
	unsigned ctr = 1;
	while (beg != (this->mail).end())
	{
		std::cout << ctr++ << ": " << *((*beg)->name) << std::endl;
		++beg;
	}

}

int main()
{

	//Create 2 folders
	Folder folder1("first_folder");
	Folder folder2("second_folder");

	//Create 3 mails
	Message msg1("First mail", "Hello, how are you?");
	Message msg2("Second mail", "Test");
	Message msg3("Third mail", "Hi");


	//adding mails to folders
	folder1.Add_Msg(msg1);
	folder1.Add_Msg(msg2);
	folder1.Add_Msg(msg3);

	folder2.Add_Msg(msg1);
	folder2.Add_Msg(msg2);

	//check details
	msg1.show_mail();
	msg2.show_mail();
	msg3.show_mail();
	folder1.show_folder();

	std::cout << std::endl;
	folder2.show_folder();
	std::cout << std::endl;


	//Remove mail from folder
	folder1.Remove_From_Folder(msg2);
	folder1.show_folder();
	std::cout << std::endl;
	msg2.show_mail();
	std::cout << std::endl;
	std::cout << std::endl;

	//Remove the whole mail
	msg1.Remove_Message();
	std::cout << std::endl;
	folder1.show_folder();
	std::cout << std::endl;


	return 0;
}
```
### 15. 移動建構器(move constructor):將資源從所給的物件"移動"到正在建構的物件(拷貝指標，而非拷貝那些字元)。
## ⭐⭐⭐實作:
```c++
//設計一個小型的vector

class strVec
{
public:
	strVec():
		elements(nullptr), first_free(nullptr), cap(nullptr) {}
	strVec(const strVec&);
	strVec& operator=(const strVec&);

	~strVec()
	{
		free();
	}

	void push_back(const std::string&);
	size_t size() const
	{
		return first_free - elements;
	}

	size_t capacity() const
	{
		return cap - elements;
	}

	std::string* begin() const
	{
		return elements;
	}

	std::string* end() const
	{
		return first_free;
	}
private:
	
	static std::allocator<std::string> alloc; //用來配置空記憶體
	void check_alloc_size() //檢查容量
	{
		if (size() == capacity()) //如果儲存元素數量已經等於容量大小
			reallocate(); //重新分配
	}
	std::pair<std::string*, std::string*> copy_alloc(const std::string*, const std::string*); //copy

	void free();
	void reallocate();

	std::string* elements; //第一個元素
	std::string* first_free; //最後一個元素的下一個空位置
	std::string* cap; //最後一個空位置

};

std::allocator<std::string> strVec::alloc;

void strVec::push_back(const std::string& s)
{
	check_alloc_size(); //只有增加元素時才有可能大小不足
	alloc.construct(first_free++, s); //從第一個空位置開始添加元素
}

std::pair<std::string*, std::string*> strVec::copy_alloc(const std::string* b, const std::string* e) //used to copy
{
	auto data = alloc.allocate(e - b); //分配一塊空間給目標物件
	return { data, std::uninitialized_copy(b,e,data) }; //回傳目標物件的第一個元素跟尾後
														//uninitialized_copy(b,e,data)把b到e複製到data裡面
}

void strVec::free()
{
	if (elements) // if there are elements in the vector means that begin is not null
	{
		for (auto p = first_free; p != elements;) //delete the element from the last element
			alloc.destroy(--p);

		alloc.deallocate(elements, cap - elements); //deallocate from element to cap (begin to end)
	}
}


strVec::strVec(const strVec& v) //複製
{
	auto new_data = copy_alloc(v.begin(), v.end());
	elements = new_data.first; // 取new_data的第一個元素 可以看71行
	first_free = cap = new_data.second; //this is copy so cap will equal to end and first_free
}


strVec& strVec::operator=(const strVec& rhs)
{
	auto data = copy_alloc(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;

	return *this;
}

void strVec::reallocate()

{
	auto new_capacity = (size() == 0) ? 1 : size() * 2; //確認是否為新的vector
	auto new_data = alloc.allocate(new_capacity); //分配新的空間

	auto dest = new_data; //指向新空間的第一個元素
	auto elem = elements; //指向舊空間的第一個元素
	for (size_t i = 0; i != size(); ++i)
	{
		alloc.construct(dest++, std::move(*elem++)); //從舊空間移動元素到新空間
	}
	free(); //釋放舊空間
	elements = new_data; //更新資料指向新空間
	first_free = dest;
	cap = elements + new_capacity;

}
```







## ⭐補充
### 1. 在ostream中其實還包含了另外兩個物件，cerr跟clog，我們統稱他們的標準錯誤(standard error):
### 其中cerr是用來發出警告和錯誤訊息，clog則是用來記錄程式執行過程中的一般資訊。
### 2. "extern"不是定義，是宣告，讓我們從外部引用其它程式碼中所定義的非"static"變數。
### 3. 當我們在觀察一個變數的定義時，從右邊向左看就對了!
### 4. 可以把迭代器想成是一個pointer，指向index所處的位置。
### 5. 在使用"null"述句時，都應該加上註解，讓閱讀程式碼的人知道該行是刻意省略的。
### 6. 在我們使用迴圈時，如果不確定到底要執行多少次，又或者已經知道會執行非常多次，那我們就都會用while。
### 7. 在一個參考上進行運算，其實就是在對該參考所綁定的物件進行運算。
### 8. 如果你不打算在一個函式內部修該引用的參數，請妥善使用const。
### 9. 在C++中名稱的查找先於型別檢查。
### 10. 當你看到一個函式被當成參數時，它會自動地被轉換為指標。
### 11. 編譯器會先做宣告然後才處理函式主體。
### 12. reference跟const都是不能被賦值的。
### 13. 構造函式不會有回傳。
### 14. 一定要記得，對於IO物件是不能拷貝的，只能用參考。
### 15. 只要是key就不能修改。
### 16. 一定要記得，任何const物件都必須被初始化。
### 17. 當我們有多個class要共用一個物件時，就可以使用shared_ptr。


# LeetCode
### Exercise 1
>Binary Search(二分搜尋法):Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.
### 二分搜尋法是一種在"有序"數列搜尋特定元素(數值)的演算法，通過將陣列拆半，從最中間的元素開始尋找目標值，其平均時間複雜度(Time Complexity)為:O(logn)。
### 核心概念:
1. 左閉右閉[left, right]:表示區間包含兩點極端值left以及right。
2. 左閉右開[left, right):表示區間不包含右方極端值right，反之亦然。
3. 區間不變量:表示區間初始設定為左閉右閉，那麼在接下來的執行過程中，就維持左閉右閉，其他例子也是如此。

### 程式碼範例1(左閉右閉):
```python
nums = [0, 1, 3, 5, 8, 7, 11] /*初始數列*/
left, right = 0, len(nums)-1
target = 2 /*目標值*/
while(left <= right):
   middle = (left + right)/2 /*取中間值*/
   if(nums[middle] > target): /*中間值大於目標值，從左區間開始重新尋找*/
       right = middle - 1 /*將中間值往左一格重新尋找*/
   elif(nums[middle] < target): /*中間值小於目標值，從右區間開始重新尋找*/
       left = middle + 1 /*將中間值往右一格重新尋找*/
   else: /*中間值與目標值相等，表示找到了*/
       return middle

return -1
```
### 程式碼範例2(左閉右開):
```python
nums = [0, 1, 3, 5, 8, 7, 11] /*初始數列*/
left, right = 0, len(nums)
target = 2 /*目標值*/
while(left < right):
   middle = (left + right)/2 /*取中間值*/
   if(nums[middle] > target): /*中間值大於目標值，從左區間開始重新尋找*/
       right = middle /*從將中間值開始重新尋找*/
   elif(nums[middle] < target): /*中間值小於目標值，從右區間開始重新尋找*/
       left = middle + 1 /*將中間值往右一格重新尋找*/
   else: /*中間值與目標值相等，表示找到了*/
       return middle

return -1
```
>Solution:
```python
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums) - 1 #[left, right]
        while(left <= right):
            middle = (left + right)//2
            if(nums[middle] > target): #left side
                right = middle - 1
            elif(nums[middle] < target): #right side
                left = middle + 1
            else:
                return middle # The Index of the target
            
        return -1
```
☁️[LeetCode連結](https://leetcode.com/problems/binary-search/description/)
☁️[My_LeetCode_Sol](https://github.com/littleyu0820/LeetCode_Exercises/blob/main/Exercise/Binary_Search.py)

### Exercise(應用練習)
>Search Insert Position(搜索插入位置):Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
### 思考邏輯: 與二分搜尋法有異曲同工之妙，但需要額外判定是否有找到目標值，如果沒有找到，則根據目標值的大小來判斷該放在哪裡。
>Solution:
```C++
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
       //1.找東西
       //2.有序的陣列
       //3.使用binary search
        int left = 0;
        int right = nums.size() - 1;
        int mid = 0;
        while(left <= right) //start to search
        {
            mid = (left + right) / 2; //中間值

            if(nums[mid] < target) //答案在右區間或不存在
            {
                left = ++mid;
            }
            else if(nums[mid] > target) //答案在左區間或不存在
            {
                right = --mid;
            }
            else
            {
                return mid;
            }
        }
        mid = (left + right) / 2;
        if(nums[mid] > target && mid == 0) //答案在左區間
        {
            return mid;
        }
        else
        {
            return (nums[mid] < target) ? ++mid : --mid;
        }
    }
};
```
☁️[LeetCode連結](https://leetcode.com/problems/search-insert-position/)
☁️[My_LeetCode_Sol](https://github.com/littleyu0820/Interview_Leetode/blob/main/Exercise/Search%20Insert%20Position.cpp)

### Exercise 2
>Remove Element(移除元素):Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
### 核心概念:
1. 數列是一個"連續"的類型相近的元素集合。
2. 所謂移除，並不是刪除，而是對目標元素進行"覆蓋"。
3. 在各種程式語言中，移除元素後，取其長度(len(nums))，確實會減小，但在實際空間上，其實陣列的整體空間大小不變。

### 程式碼範例1(快慢指針法):
### 思考邏輯:通過快指針移動來尋找目標值，如果沒找到，則將快指針所在位置的值賦給慢指針，找到了的話則忽略，繼續向後移動。
>Solution:
```python
nums = [1, 2, 3, 4, 5]  /*初始數列*/
target = 3 /*移除目標*/
pointer_fast = 0 /*用來找尋要刪除的數值*/ /*如果沒找到，則把當前數值給到慢指針上*/
pointer_slow = 0 
size = len(nums)
while(pointer_fast < size): /*在數列內移動*/
    if(nums[pointer_fast] != target):
        nums[pointer_slow] = nums[pointer_fast]
        pointer_slow += 1
    pointer_fast += 1

return pointer_slow, nums
```
### 程式碼範例2(普通思路):
>Solution:
```python
nums = [1, 2, 3, 4, 5]  /*初始數列*/
target = 3 /*移除目標*/
counter = 0
size = len(nums)
while(counter < size): /*在數列內移動*/
    if(nums[counter] = target): /*找到目標值*/
        for(i in range(counter+1, size): /*覆蓋該元素，其後所有元素向左平移一格*/
            nums[i-1] = nums[i]
        counter -= 1 /*向左平移*/
        size -= 1 /*忽略被覆蓋元素*/
    counter += 1

return counter, nums
```
☁️[LeetCode連結](https://leetcode.com/problems/remove-element/description/)
☁️[My_LeetCode_Sol](https://github.com/littleyu0820/Interview_Leetode/blob/main/Exercise/Remove_Element.py)

### Exercise 3
>Squares of a Sorted Array(有序陣列的平方):Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
### 程式碼範例(雙指針法):
### 思考邏輯:所謂的有序陣列，即代表其最大值與最小值必然會出現在左右兩個端點。在這樣的前提下，如果我們將整個陣列做平方，想當然，最大值也必然會出現在左右兩端。
>Solution:
```python
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
```
```python
new_nums = [float('inf')] * size # the new array to save the results
final = size - 1
```
### 程式碼解釋:建立一個新陣列用來存取平方後的值，同時存取方向是由後往前。
```python
if(nums[left_point]**2 <= nums[right_point]**2):
	new_nums[final] = nums[right_point]**2
	right_point -= 1
else:
	new_nums[final] = nums[left_point]**2
	left_point += 1 
```
### 程式碼解釋:左右兩端點在迴圈內不斷比較，以此找出最大值，存取到新陣列中。

☁️[LeetCode連結](https://leetcode.com/problems/squares-of-a-sorted-array/description/)
☁️[My_LeetCode_Sol](https://github.com/littleyu0820/Interview_Leetode/blob/main/Exercise/Squares_of_a_Sorted_Array.py)

### Exercise 4
>Minimum Size Subarray Sum(長度最小的子陣列):Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.
### 思考邏輯:通過快指針移動來找出兩根指針的和是否大於等於目標值了。如果找到了，計算長度，同時再將慢指針向右移一格，繼續判斷。
>Solution:
```python
class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        size = len(nums)
        left_pointer = 0
        right_pointer = 0 #right_pointer is the pointer keeps moving
        sublength = float('inf')
        cur_sum = 0 
        while(right_pointer < size):
            cur_sum += nums[right_pointer]

            #check whether cur_sum is greater than target or not. sometimes when we minus nums[left_pointer] cur_sum will still be greater than thetarget
            while(cur_sum >= target):
                sublength = min(sublength, right_pointer - left_pointer + 1)
                cur_sum -= nums[left_pointer]
                left_pointer += 1
              
            right_pointer += 1
        return sublength if sublength != float('inf') else 0
```
☁️[LeetCode連結](https://leetcode.com/problems/minimum-size-subarray-sum/description/)
☁️[My_LeetCode_Sol](https://github.com/littleyu0820/Interview_Leetode/blob/main/Exercise/Minimum_Size_Subarray_Sum.py)

### Exercise 5 
>Spiral Matrix II(螺旋矩陣):Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
### 思考邏輯:如我們在二分搜尋法時所提到的，我們的每一次迴圈所操作的方式都要一樣，在此題我們統一的設想是左閉右開，代表著每一次右邊的端點我們都不考慮。
![Spiral Matrix](https://github.com/littleyu0820/Interview_Leetode/blob/main/PitcturesForLearning/Spiral_Matrix.png)
>Solution:
```python
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
```
☁️[LeetCode連結](https://leetcode.com/problems/spiral-matrix-ii/description/)
☁️[My_LeetCode_Sol](https://github.com/littleyu0820/Interview_Leetode/blob/main/Exercise/Spiral_Matrix.py)

### Exercise 6
>Remove Linked List Elements(移除列表元素):Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
### 思考邏輯:依靠list是通過指針的方式來連接的想法，只要將next的目的地改向後一個就可以了。
>Solution:
```C++
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode* vhead = new ListNode(0); //create a virtual head
        vhead->next = head;
        ListNode* cur = vhead;
        while(cur->next != NULL)
        {
            if(cur->next->val == val)
            {
               ListNode* tmp = cur->next;
               cur->next = cur->next->next;
               delete tmp;
            }
            else
            {
                cur = cur->next;
            }
        }
        head = vhead->next;
        delete vhead;
        return head;
    }   
```
☁️[LeetCode連結](https://leetcode.com/problems/remove-linked-list-elements/description/)
☁️[My_LeetCode_Sol](https://github.com/littleyu0820/Interview_Leetode/blob/main/Exercise/Remove%20Linked%20List%20Elements_V2.cpp)
