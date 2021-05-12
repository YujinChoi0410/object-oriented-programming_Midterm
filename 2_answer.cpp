#include <iostream>
using namespace std;
 
void SandClock(int n) { //n=5

	//역삼각형 출력
	for (int k = 0; k <= (n - 1) / 2; k++) {//0 <= k <= 2 (다섯줄 중 셋째줄 까지)
		for (int i = 0; i < k; i++) { //k개의 ' '출력
			cout << " ";
		}

		for (int j = 0; j < n - 2 * k; j++) {//n-2k개의 *출력
			cout << "*";
		}
		cout << endl;
	}

	//삼각형 출력
	for (int k = n - (n-1)/2 - 2; k >= 0; k--) {
		for (int i = 0; i < k; i++) { //k개의 ' '출력
			cout << " ";
		}

		for (int j = 0; j < n - 2 * k; j++) {//n-2k개의 *출력
			cout << "*";
		}
		cout << endl;
	}
}


int main() {

	int n; 
	cout << "홀수의 정수를 입력하시오: ";
	cin >> n;
	while (n % 2 == 0) {
		cout << "짝수를 입력하셨습니다. 홀수로 다시 입력하세요.: ";
		cin >> n;
	}

	SandClock(n);

	system("pause");
	return 0;
}