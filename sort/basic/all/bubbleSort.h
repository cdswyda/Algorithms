#pragma once
template <typename T>
// ð������
void bubbleSort(T arr[], int n) {
	int newEndIdx;
	do {
		newEndIdx = 0;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				// �ڲ�ѭ����ɺ� ����Ѿ��������һ����������ٴν���
				// ��¼���һ�ν����Ľ���λ�� �����Ż����ѭ���ı�������
				newEndIdx = i + 1;
			}
		}
		n = newEndIdx;
	} while (newEndIdx > 0);
}