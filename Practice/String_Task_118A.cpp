#include <iostream>;
using namespace std;
bool check_vowel(char chr);

int main() {
	string str;
	int strlen;
	cin >> str;
	strlen = str.length();
	for (int k = 0; k < strlen; k++) {
		if (check_vowel(str[k])) {

		}
	}
	bool vow = check_vowel(str[0]);
	cout << vow;

}

bool check_vowel(char chr) {
	if (chr == 'a' || chr == 'A' || chr == 'e' || chr == 'E' || chr == 'i' || chr == 'I' || chr == 'o' || chr == 'O' || chr == 'u' || chr == 'U') {
		return true;
	}
	else {
		return false;
	}
}