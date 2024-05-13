#include <stdio.h>
#include "Test5-4/stackL.c"
#include "Test5-4/stackL.h"
#include "Test5-4/evalPostfix.c"
#include "Test5-4/evalPostfix.h"

int main() {
	int result;
	const char* express = "35*62/-";
	printf("ÈÄÀ§ Ç¥±â½Ä : %s", express);

	result = evalPostfix(express);
	printf("\n\n¿¬»ê °á°ú => %d\n", result);

    return 0;
}