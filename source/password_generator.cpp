#include <string>
#include <cstdlib>
#include <iostream>
using namespace std;

string generate_password(int len = 20) {
	string en = "abcdefghijklmnopqrsruvwxyz";
	string EN = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string num = "1234567890";

	string all = en + EN + num;
	string password = "";

	for (int i = 0; i < len; i++) {
		password += all[rand() % all.length()];
	}
	return password;
}

pair<int, int> get_paramateres() {
	int passwords_num, password_length;
	cout << "Code generator (version 0.01), Windows 10 i386 supported." << endl;
	try {
		cout << "Enter code length:" << endl;
		cin >> password_length;
		cout << "Enter number of passwords:" << endl;
		cin >> passwords_num;
		if (cin.fail()) {
			throw 1;
		}
		if (password_length <= 0 || password_length > 1000) {
			cout << "Inappropriate password length" << endl;
			return pair<int, int>(0, 0);
		}
		else if (passwords_num <= 0 || passwords_num > 10000) {
			cout << "Inappropriate number of passwords" << endl;
			return pair<int, int>(0, 0);
		}
	} catch(int i) {
		if (i == 1)
			cout << "An error occured: Received input is not a number" << endl;
		return pair<int, int>(0, 0);
	}
	
	return pair<int, int>(passwords_num, password_length);
}