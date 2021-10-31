#include "read_write.h"
#include "basic_change.h"


int main() {
	char buffer[10];

	input(buffer);
	const int size = strlen(buffer);

	char* cword = new char[size];

	code(buffer, cword);
	output(cword, size);

	delete cword;
	return 0;
}