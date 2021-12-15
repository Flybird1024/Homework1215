#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    cout << "選擇題目\f(\f輸入數字\f1、2、3、4\f)" << "\n\n"
        << "[1]\f用\fFor\f迴圈顯示從\f10\f~\f1" << '\n'
        << "[2]\f用兩個迴圈\f1.從\f0\f~\f5\f2.從\f6\f~\f10" << "\n\n"
        << "[3]\f在一個\f0\f~\f50的陣列中\f只顯示出特定數字倍數" << '\n'
        << "[4]\f衍生題:\f用同一個\fFor\f迴圈顯示相反過來的答案\f=\f只能改陣列內容" << "\n\n"
        << "[5]\f用While印出\f1\f~\f10" << '\n'
        << "[6]\f給任意一個數\f給出此數\f2\f的餘數" << "\n\n";
    int choose;
    cout << "題目\f-\f";
    cin >> choose;
    cout << '\n';
    switch (choose)
    {
    case 1: {
        cout << "說明\f:" << '\n'
            << "用 For 迴圈顯示從 10 ~1" << "\n\n"
            << "要求\f:" << '\n'
            << "必須用索引跟陣列" << "\n\n"
            << "以下為題目要求輸出\f:" << "\n\n";
        vector<int> vec1 = { 1,2,3,4,5,6,7,8,9,10 };
        int b = 10;
        for (int a = 0;a <= 10;a++) {
            if (b > 0) {
                b = b - 1;
                cout << vec1[b];
                cout << endl;
            }
        }
        break;
    }
    case 2: {
        cout << "說明\f:" << '\n'
            << "用兩個迴圈 1.從 0 ~ 5 2.從 6 ~ 10" << "\n\n"
            << "以下為題目要求輸出\f:" << "\n\n";
        int c = 0;
        for (;c <= 5;c++) {
            cout << c << endl;
        }
        for (;c <= 10;c++) {
            cout << c << endl;
        }
        break;
    }
    case 3: {
        cout << "說明\f:" << '\n'
            << "在一個 0 ~ 50 的陣列中 只顯示出特定數字倍數" << "\n\n"
            << "要求\f:" << '\n'
            << "特定數字倍數: 2" << "\n\n"
            << "以下為題目要求輸出\f:" << "\n\n";
        vector<int> vec2;
        int d = 0;
        int e = 0;
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
        cout << "說明\f:" << '\n'
            << "在一個 0 ~ 50 的陣列中 只顯示出特定數字倍數" << "\n\n"
            << "要求\f:" << '\n'
            << "用同一個 For 迴圈顯示相反過來的答案 = 只能改陣列內容" << "\n\n"
            << "以下為題目要求輸出\f:" << "\n\n";
        vector<int> vec3;
        int f = 50;
        int g = 0;
        for (;f >= 0;f -= 2) {
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
        cout << "說明\f:" << '\n'
            << "用While印出 1 ~ 10" << "\n\n"
            << "以下為題目要求輸出\f:" << "\n\n";
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
        cout << "說明\f:" << '\n'
            << "給任意一個數 給出此數 2 的餘數" << "\n\n"
            << "要求\f:" << '\n'
            << "兩個寫法都要寫出來" << "\n\n"
            << "以下為題目要求輸出\f:" << "\n\n";
            break;
    }
    default:
        cout << "查無此題目" << '\n';
        break;
    }
    return 0;
}