#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

	string str;
	string str2;
	cin >> str;

	int size = str.size();

	//���ĺ��� ����� ��� �ҹ��ڷ� 
	for (int i = 0; i < size; i++) {
		
		if (!isalpha(str[i])) {
			str[i] = ' ';
		}

		else
			if (!islower(str[i])) tolower(str[i]);
			
	}

	//�� ù���ڴ� �빮�ڷ�
	str[0] = toupper(str[0]);

	//�� �ܾ��� ù���ڴ� �빮�ڷ�
	for (int i = 1; i < size; i++) {

		if (isspace(str[i - 1])) str[i] = toupper(str[i]);
		else continue;
	}

	//�ߺ��� space ����
	for (int i = 0; i < size; i++) {

		if (isspace(str[i])) {
			
			if (str[i] == str[i + 1]) continue;
			else str2 += ' ';
		}


		else  str2 += str[i]; 
	}

	cout << "��ȯ ��� : " << str2 << endl;


	system("pause");
	return 0;
}