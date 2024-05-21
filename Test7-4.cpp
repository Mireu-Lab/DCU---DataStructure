#include <stdio.h>

#include "Test7-4/bst.c" // 이진탐색트리 구현
#include "Test7-4/bst.h" // 이진탐색트리 헤더

#include "Test7-4/node.c" // 노드 구현
#include "Test7-4/node.h" // 노드 헤더


void menu(void); // 메뉴 출력 함수

int main(void) {
	treeNode* root = NULL; // 루트 노드 포인터
	treeNode* foundedNode = NULL; // 찾은 노드 포인터
	char choice, key; // 선택, 키

	root = insertBSTNode(root, 'G'); // 루트에 'G' 문자 삽입
    insertBSTNode(root, 'I');
    insertBSTNode(root, 'H');
    insertBSTNode(root, 'D');
    insertBSTNode(root, 'B');
    insertBSTNode(root, 'M');
    insertBSTNode(root, 'N');
    insertBSTNode(root, 'A');
    insertBSTNode(root, 'J');
    insertBSTNode(root, 'E');
    insertBSTNode(root, 'Q'); // 이진탐색트리에 노드 삽입

	while (1) { // 메뉴 반복
		menu(); // 메뉴 출력
		scanf(" %c", &choice); // 선택 입력

		switch (choice - '0') {
		case 1:	printf("\t[이진 트리 출력]  ");
			displayInorder(root);  printf("\n"); // 이진탐색트리 중위 순회 출력
			break;

		case 2:	printf("삽입할 문자를 입력하세요 : ");
			scanf(" %c", &key); // 삽입할 문자 입력
			insertBSTNode(root, key); // 이진탐색트리에 문자 삽입
			break;

		case 3:	printf("삭제할 문자를 입력하세요 : ");
			scanf(" %c", &key); // 삭제할 문자 입력
			deleteBSTNode(root, key); // 이진탐색트리에��� 문자 ��제
			break;

		case 4: printf("찾을 문자를 입력하세요 : ");
			scanf(" %c", &key); // 찾을 문자 입력
			foundedNode = searchBST(root, key); // 이진탐색트리에서 문자 검색
			if (foundedNode != NULL)
				printf("\n %c를 찾았습니다! \n", foundedNode->key); // 문자 찾음
			else  printf("\n 문자를 찾지 못했습니다. \n"); // 문자 못 찾음
			break;

		case 5: 	return 0; // 종료

		default: printf("없는 메뉴입니다. 메뉴를 다시 선택하세요! \n"); // 잘못된 선택
			break;
		}
	}
}

void menu(void) { // 메뉴 출력 함수
	printf("\n*---------------------------*");
	printf("\n\t1 : 트리 출력");
	printf("\n\t2 : 문자 삽입");
	printf("\n\t3 : 문자 삭제");
	printf("\n\t4 : 문자 검색");
	printf("\n\t5 : 종료");
	printf("\n*---------------------------*");
	printf("\n메뉴입력 >> ");
}