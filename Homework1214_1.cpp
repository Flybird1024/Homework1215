#include "pch.h"
#include <iostream>
#include <list>
#include <vector>

using namespace std;

class detail {
public:
	string explanation;
	string request;

	detail(string aExplanation, string aRequest) {
		explanation = aExplanation;
		request = aRequest;
	}
};

int main()
{
	detail info1("用 For 迴圈顯示從 10 ~ 1", "必須用索引跟陣列");
	detail info2("用兩個迴圈 1.從 0 ~ 5 2.從 6 ~ 10", "");
	detail info3("在一個 0 ~ 50 的陣列中 只顯示出特定數字倍數", "特定數字倍數: 2");
	detail info4("在一個 0 ~ 50 的陣列中 只顯示出特定數字倍數", "用同一個 For 迴圈顯示相反過來的答案 = 只能改陣列內容");
	detail info5("用 While 印出 1 ~ 10", "");
	detail info6("給任意一個數 給出此數 2 的餘數", "兩個寫法都要寫出來\n計算式不要用 [ % ]");

	string question("選擇題目 ( 輸入數字 1、2、3、4 )\n\n[1] " + info1.explanation + "\n[2] " + info2.explanation + "\n[3] " + info3.explanation + "\n[4] " + info4.explanation + "\n[5] " + info5.explanation + "\n[6] " + info6.explanation + "\n\n");

	string content1("\n說明 : " + info1.explanation + "\n要求 : " + info1.request + "\n\n輸出 : \n");
	string content2("\n說明 : " + info2.explanation + "\n要求 : " + info2.request + "\n\n輸出 : \n");
	string content3("\n說明 : " + info3.explanation + "\n要求 : " + info3.request + "\n\n輸出 : \n");
	string content4("\n說明 : " + info4.explanation + "\n要求 : " + info4.request + "\n\n輸出 : \n");
	string content5("\n說明 : " + info5.explanation + "\n要求 : " + info5.request + "\n\n輸出 : \n");
	string content6("\n說明 : " + info6.explanation + "\n要求 : " + info6.request + "\n\n輸出 : \n");

	cout << question;
	int choose;
	cout << "題目 - ";
	cin >> choose;
	switch (choose)
	{
	case 1: {
		cout << content1;
		vector<int> vec1 = { 1,2,3,4,5,6,7,8,9,10 };
		int b = 10;
		for (int a = 0; a <= 10; a++) {
			if (b > 0) {
				b = b - 1;
				cout << vec1[b];
				cout << endl;
			}
		}
		break;
	}
	case 2: {
		cout << content2;
		int c = 0;
		for (; c <= 5; c++) {
			cout << c << endl;
		}
		for (; c <= 10; c++) {
			cout << c << endl;
		}
		break;
	}
	case 3: {
		cout << content3;
		vector<int> vec2;
		int d = 0, e = 0;
		while (d < 50)
		{
			d = d + 2;
			vec2.push_back(d);
			cout << vec2[e] << '\f';
			e += 1;
		}
		cout << endl;
		break;
	}
	case 4: {
		cout << content4;
		vector<int> vec3;
		int f = 50, g = 0;
		for (; f >= 0; f -= 2) {
			if (f > 0) {
				vec3.push_back(f);
				cout << vec3[g] << '\f';
				g += 1;
			}
		}
		cout << endl;
		break;
	}
	case 5: {
		cout << content5;
		int h = 1;
		while (h <= 10)
		{
			cout << h << '\f';
			h++;
		}
		cout << endl;
		break;
	}
	case 6: {
		cout << content6;
		int i, j, k;
		cout << "給予任意數 - " << "";
		cin >> i;
		cout << '\n';
		j = i, k = i;
		if (i >= 0) {
			while (i > 1)i -= 2;
			for (; k > 1; k -= 2);
			cout << "[For] " << j << " 的餘數為 " << k << "\n";
			cout << "[While] " << j << " 的餘數為 " << i << "\n";
			break;
		}
		else {
			cout << "程式太爛 無法計算負數 ;(\n";
			break;
		}
	}
	default:
	{
		cout << "查無此題目" << '\n';
		break;
	}
	}
}