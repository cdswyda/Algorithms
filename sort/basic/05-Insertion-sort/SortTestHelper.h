#pragma once
#include <iostream>
#include <ctime>
#include <cassert>
#include <string>

using namespace std;

namespace SortTestHelper {

	// 生成有n个元素的随机数组,每个元素的随机范围为[rangeL, rangeR]
	int *generateRandomArray(int n, int range_l, int range_r) {

		int *arr = new int[n];

		srand(time(NULL));
		for (int i = 0; i < n; i++)
			arr[i] = rand() % (range_r - range_l + 1) + range_l;
		return arr;
	}

	// 定义数组打印函数
	template <typename T>
	void printArray(T arr[], int n) {
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
		return;
	}

	template<typename T>
	void testSort(const string &sortName, void(*sort)(T[], int), T arr[], int n) {

		clock_t startTime = clock();
		sort(arr, n);
		clock_t endTime = clock();

		assert(SortTestHelper::isSorted(arr, n));
		cout << sortName << " : " << double(endTime - startTime) / CLOCKS_PER_SEC << " s" << endl;

		return;
	}

	// 判读是否排序成功
	// 判断arr数组是否有序
	template<typename T>
	bool isSorted(T arr[], int n) {

		for (int i = 0; i < n - 1; i++)
			if (arr[i] > arr[i + 1])
				return false;

		return true;
	}

	// 整形数组拷贝
	int* copyIntArray(int a[], int n) {
		int * arr = new int[n];
		// copy(a, a + n, arr);

		for (int i = 0; i < n; i++) {
			arr[i] = a[i];
		}

		return arr;
	}
}