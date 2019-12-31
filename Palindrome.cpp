#include <iostream>
using namespace std;

int main()
{
	char word[20];
	int len, i;
	int	flag = 0;

	cout << "Enter a word to find out if it is a palindrome:  ";
	cin >> word;

	len = strlen(word);

	for (i = 0; i < len; i++) {
		if (word[i] != word[len - i - 1]) {
			flag = 1;
			break;
		}
	}
		if (flag) {
			cout << word << " is not a Palindrome" << endl;
		}
		else {
			cout << word << " is a Palindrome" << endl;
		}
		system("pause");
		return 0;
}
