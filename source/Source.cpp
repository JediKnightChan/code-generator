#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "passwords.h"

using namespace std;



int main() {
	int passwords_num, password_length;
	pair<int, int> parameters = get_paramateres();
	passwords_num = parameters.first;
	password_length = parameters.second;
	
	srand(time(0));
	for (int i = 0; i < passwords_num; i++) {
		string password = "";
		password = generate_password(password_length);
		cout << password << endl;
	}


	string end;
	cout << endl << "Type anything to exit this program" << endl;
	cin >> end;
	return 0;
}

