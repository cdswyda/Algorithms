// 01-selection-sort.cpp: 定义控制台应用程序的入口点。

#include <stdio.h>
#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		// [i, n) 内的最小值
		int minIdx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minIdx])
				minIdx = j;
		}
		// 最小值放入当前最前面
		swap(arr[i], arr[minIdx]);
	}
}

int main()
{
	int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	selectionSort(a, 10);
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
