#include <iostream>
using namespace std;
 
void SandClock(int n) { //n=5

	//���ﰢ�� ���
	for (int k = 0; k <= (n - 1) / 2; k++) {//0 <= k <= 2 (�ټ��� �� ��°�� ����)
		for (int i = 0; i < k; i++) { //k���� ' '���
			cout << " ";
		}

		for (int j = 0; j < n - 2 * k; j++) {//n-2k���� *���
			cout << "*";
		}
		cout << endl;
	}

	//�ﰢ�� ���
	for (int k = n - (n-1)/2 - 2; k >= 0; k--) {
		for (int i = 0; i < k; i++) { //k���� ' '���
			cout << " ";
		}

		for (int j = 0; j < n - 2 * k; j++) {//n-2k���� *���
			cout << "*";
		}
		cout << endl;
	}
}


int main() {

	int n; 
	cout << "Ȧ���� ������ �Է��Ͻÿ�: ";
	cin >> n;
	while (n % 2 == 0) {
		cout << "¦���� �Է��ϼ̽��ϴ�. Ȧ���� �ٽ� �Է��ϼ���.: ";
		cin >> n;
	}

	SandClock(n);

	system("pause");
	return 0;
}