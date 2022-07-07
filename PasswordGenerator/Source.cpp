#include <iostream>
#include <string>

using namespace std;

void generatePassword() {
	string password;
	int length;
	cout << "Enter the length of the password: ";
	cin >> length;
	char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charactersLength = strlen(characters);
	srand(time(NULL));
	for (int i = 0; i < length; i++) {
		int index = rand() % charactersLength;
		password += characters[index];
	}
	cout << "Your password is: " << password << endl;
}

int main() {
	generatePassword();
	return 0;
}