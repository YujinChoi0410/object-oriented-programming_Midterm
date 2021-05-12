#include <iostream>
#include <fstream>
using namespace std; 

int *min_to_max(int arr[10]);

int main() {

	ifstream inFile;
	inFile.open("3번_input_file.txt");

	if (!inFile.is_open()) {
		cout << "파일을 열 수 없습니다.";
	}

	int *n = new int[50];
	
	//파일에서 숫자 읽어오기
	for (int i = 0; i < 50; i++) {
		inFile >> n[i];
	}
	
	//2차원 배열로 변환
	int m[5][10];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 10; j++) {
			m[i][j] = n[i + 10 + j];
		}
	}

	//각 행별로 오름차순으로 배열
	for (int i = 0; i < 5; i++) {
		min_to_max(m[i]);
	}

	//같은 수는 중복되지 않게 출력
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