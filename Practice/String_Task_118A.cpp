#include <iostream>;
using namespace std;
bool check_vowel(char *chr);
bool check_case(char *chr);

int main() {
	string str, new_str= "";
	int str_len;
	cin >> str;
	str_len = str.length();
	for (int k = 0; k < str_len; k++) {
		char chr = str[k];
		if (!check_vowel(&chr)) {//ignores all vowels 
			if (check_case(&chr)) {//upper case convert to lower case				
				new_str += '.';
				new_str += chr + 32;
			}
			else {
				new_str += ".";//lower case, leave it as is
				new_str += chr;
			}
			
		}
	}
	cout << new_str;

}

bool check_vowel(char *chr) {//apparently y is considered a vowel these days
	if (*chr == 'a' || *chr == 'A' || *chr == 'e' || *chr == 'E' || *chr == 'i' || *chr == 'I' || *chr == 'o' || *chr == 'O' || *chr == 'u' || *chr == 'U' || *chr == 'y' || *chr == 'Y')
	{
		return true;
	}
	else {//a regular consonant
		return false;
	}
}

bool check_case(char *chr) { //within the ASCI code range for lower case
	if (*chr > 64 && *chr < 91) {//Upper case
		return true;
	}
	else//lower case
		return false;
}