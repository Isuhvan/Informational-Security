#include "read_write.h"

using namespace std;

void input(char word[]) {
	cout << "Enter String" << endl;
	cin >> word;
}
void output(char cword[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << cword[i];
	}
	cout << endl;
}