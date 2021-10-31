#pragma once

void code(char in_word[], char out_word[]) {
	for (int i = 0; i < strlen(in_word); i++)
	{
		out_word[i] = in_word[i];
	}
}