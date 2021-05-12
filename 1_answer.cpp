#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

	string str;
	string str2;
	cin >> str;

	int size = str.size();

	//알파벳만 남기고 모두 소문자로 
	for (int i = 0; i < size; i++) {
		
		if (!isalpha(str[i])) {
			str[i] = ' ';
		}

		else
			if (!islower(str[i])) tolower(str[i]);
			
	}

	//맨 첫글자는 대문자로
	str[0] = toupper(str[0]);

	//각 단어의 첫글자는 대문자로
	for (int i = 1; i < size; i++) {

		if (isspace(str[i - 1])) str[i] = toupper(str[i]);
		else continue;
	}

	//중복된 space 삭제
	for (int i = 0; i < size; i++) {

		if (isspace(str[i])) {
			
			if (str[i] == str[i + 1]) continue;
			else str2 += ' ';
		}


		else  str2 += str[i]; 
	}

	cout << "변환 결과 : " << str2 << endl;


	system("pause");
	return 0;
}