﻿// 1120313-03.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
// 函示

#include <iostream>
using namespace std;

void display(int var, double var2) {
    cout << "整數值為： " << var << endl;
    cout << "浮點數值為： " << var2 << endl;
}

void display(int var) {
    cout << "整數值為： " << var << endl;
}

void display(double var2) {
    cout << "浮點數值為： " << var2 << endl;
}


int main()
{
    int a = 5;
    double b = 5.5;
    display(a);
    display(b);
    display(a, b);
    return 0;
}
