#include <iostream>;
using namespace std;
bool check_vowel(char chr);

int main() {
	string str;
	cin >> str;
	bool vow = check_vowel(str[0]);
	cout << vow;

}

bool check_vowel(char chr) {
	if (chr == 'a' || chr == 'A' || chr == 'e' || chr == 'E' || chr == 'i' || chr == 'I' || chr == 'o' || chr == 'O' || chr == 'u' || chr == 'U') {
		return true;
	}
	else {
		false;
	}
}