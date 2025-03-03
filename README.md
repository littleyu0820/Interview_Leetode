# 《流雲》程式工程師求職前準備!
## 本身是通訊系畢業的學生，在學期間主要使用的語言都是Python，但在求職前打算好好的學習C++以及刷LeetCode，在這裡記錄下學習過程。
### 題外話，下方C++的學習心得以及例題，基本上都來自C++Primer 5th這本書，所以可以搭配著看更好喔!
### Table of Contents(C++)
>#### ☁️[輸入與輸出](https://github.com/littleyu0820/LeetCode_Exercises/blob/main/README.md#1-%E8%BC%B8%E5%85%A5%E8%88%87%E8%BC%B8%E5%87%BA)  
>#### ☁️[迴圈](https://github.com/littleyu0820/LeetCode_Exercises/blob/main/README.md#2-%E8%BF%B4%E5%9C%88)
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
>>#### ☁️[練習題6](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C5)
>>#### ☁️[練習題7](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E7%B7%B4%E7%BF%92%E9%A1%8C5)
>#### ⭐[補充](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#%E8%A3%9C%E5%85%85-1)
### Table of Contents(LeetCode)
>#### ☁️[二分搜尋法(Binary Search)](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#leetcode)
>#### ☁️[移除元素(Remove Element)](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#exercise-2)
>#### ☁️[有序陣列的平方(Squares of a Sorted Array)](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#exercise-3)  
>#### ☁️[長度最小的子陣列(Minimum Size Subarray Sum)](https://github.com/littleyu0820/Interview_Leetode/blob/main/README.md#exercise-4)  


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
### 程式碼解釋:將變數x存到cout中，並且釋放。
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
				std::cout << "Number" << currentval << "occurs" << counter << "times" << std::endl; //print the previous number
				currentval = val; //assign the current value to the previous value
				counter = 1; //reset the counter
			}
		}
		
		std::cout << "Number" << currentval << "occurs" << counter << "times" << std::endl; //print the last number

	}
	else
	{
		return 0;
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
### 大家可以發現，再我們每次使用cin、cout，又或者是endl時，都會在前面加上"std::"，主要原因在於，它們三個都是存於std這個命名空間裡面的。
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
### 首先最重要的，兩個string相加還是string，再來"+"兩邊必然要存在一個sring，我們直接看例子。
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
>根據使用者輸入的字串，將其轉換為大寫，直到碰到空格為止(也就是指轉換第一個單字)。
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
### Vectir是一個裝滿物件(object)的集合，其中每個物件都有相同的型別，這裡我們直接透過練習題來理解。
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
## ⭐補充:
### 1. 在ostream中其實還包含了另外兩個物件，cerr跟clog，我們統稱他們的標準錯誤(standard error):
### 其中cerr是用來發出警告和錯誤訊息，clog則是用來記錄程式執行過程中的一般資訊。
### 2. "extern"不是定義，是宣告，讓我們從外部引用其它程式碼中所定義的非"static"變數。
### 3. 當我們在觀察一個變數的定義時，從右邊向左看就對了!


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
