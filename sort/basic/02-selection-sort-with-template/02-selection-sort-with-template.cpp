// 02-selection-sort-with-template.cpp: 定义控制台应用程序的入口点。
//

#include <stdio.h>
#include <iostream>
#include "Student.h"
#include "selectionSort.h"
using namespace std;


int main() {

    // 测试模板函数，传入浮点数数组
    float b[4] = { 4.4,3.3,2.2,1.1 };
    selectionSort(b, 4);
    for (int i = 0; i < 4; i++)
        cout << b[i] << " ";
    cout << endl;

    // 测试模板函数，传入字符串数组
    string c[4] = { "D","C","B","A" };
    selectionSort(c, 4);
    for (int i = 0; i < 4; i++)
        cout << c[i] << " ";
    cout << endl;

    // 测试模板函数，传入自定义结构体Student数组
    Student d[4] = { { "D",90 } ,{ "C",100 } ,{ "B",95 } ,{ "A",95 } };
    selectionSort(d, 4);
    for (int i = 0; i < 4; i++)
        cout << d[i];
    cout << endl;
    system("pause");
    return 0;
}

