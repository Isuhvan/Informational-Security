#pragma once

void code(char word[], char cword[]) {
	int lenght = strlen(word);
	cout << lenght << endl;;
	for (int i = 0; i < lenght; i++)
	{
		cword[i] = word[i];
	}
}