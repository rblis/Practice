//Petya started to attend programming lessons.On the first lesson his task was to write a simple program.The program was supposed to do the following : in the given string, consisting if uppercaseand lowercase Latin letters, it :
//
//	deletes all the vowels,
//	inserts a character "." before each consonant,
//	replaces all uppercase consonants with corresponding lowercase ones.
//
//	Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants.The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.
//
//	Help Petya cope with this easy task.
//	Input
//
//	The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.
//	Output
//
//	Print the resulting string.It is guaranteed that this string is not empty.


#include <iostream>;
using namespace std;
bool check_vowel(char *chr);
bool check_case(char *chr);

//int main() {
//	string str, new_str= "";
//	int str_len;
//	cin >> str;
//	str_len = str.length();
//	for (int k = 0; k < str_len; k++) {
//		char chr = str[k];
//		if (!check_vowel(&chr)) {//ignores all vowels 
//			if (check_case(&chr)) {//upper case convert to lower case				
//				new_str += '.';
//				new_str += chr + 32;
//			}
//			else {
//				new_str += ".";//lower case, leave it as is
//				new_str += chr;
//			}
//			
//		}
//	}
//	cout << new_str;
//
//}

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