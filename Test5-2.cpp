#include <stdio.h>
#include "Test5-2/stackL.h"
#include "Test5-2/stackL.c"

int main() {
	element item;
	top = NULL;
	printf("\n** 연결 스택 연산 **\n");
	printStack();

	push(1);
	printStack();		// 1 삽입
	
	push(2);
	printStack();		// 2 삽입

	push(3);
	printStack();		// 3 삽입

	item = peek();
	printStack();	// 현재 top의 원소 출력
	printf("peek => %d", item);

	item = pop();
	printStack();	// 삭제
	printf("\t pop  => %d", item);

	item = pop();
	printStack();	// 삭제
	printf("\t pop  => %d", item);

	item = pop();  
	printStack();	// 삭제
	printf("\t pop  => %d\n", item);
    
    return 0;
}