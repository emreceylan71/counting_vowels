
#include <iostream>
using namespace std;


int main()
{
	string word1;
	int count = 0 ;
	cout << "Give us a word and we will find how much vowels it has. " << endl;
	cin >> word1;


	for (int i = 0 ; i < word1.length(); i++) {

		if (word1[i] == 'a' || word1[i] == 'e' || word1[i] == 'u' || word1[i] == 'i' || word1[i] == 'o') {
			count++;
		}
		if (word1[i] == 'A' || word1[i] == 'E' || word1[i] == 'U' || word1[i] == 'I' || word1[i] == 'O') {
			count++;
		}

	}
	cout << "There are " << count << " vowels";

	return 0;
}
