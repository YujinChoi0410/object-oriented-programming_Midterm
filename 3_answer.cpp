#include <iostream>
#include <fstream>
using namespace std; 

int *min_to_max(int arr[10]);

int main() {

	ifstream inFile;
	inFile.open("3��_input_file.txt");

	if (!inFile.is_open()) {
		cout << "������ �� �� �����ϴ�.";
	}

	int *n = new int[50];
	
	//���Ͽ��� ���� �о����
	for (int i = 0; i < 50; i++) {
		inFile >> n[i];
	}
	
	//2���� �迭�� ��ȯ
	int m[5][10];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			m[i][j] = n[i + 10 + j];
		}
	}

	//�� �ະ�� ������������ �迭
	for (int i = 0; i < 5; i++) {
		min_to_max(m[i]);
	}

	//���� ���� �ߺ����� �ʰ� ���
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			if (m[i][j] == m[i][j + 1]) continue;
			cout << m[i][j] << " ";
		}
		cout << endl;
	}

	delete[] n;

	system("pause");
	return 0;
}

int *min_to_max(int arr[10]) {

	int temp;
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[j];
				arr[i] = arr[j];
				arr[i] = temp;
			}
		}
	}

	return arr;
}