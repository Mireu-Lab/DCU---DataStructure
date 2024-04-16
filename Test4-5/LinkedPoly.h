#pragma once

// 계수를 저장하는 변수
float coef;

// 다항식 항을 나타내는 노드 구조체
typedef struct ListNode {
  float coef;            // 항의 계수
  int expo;              // 항의 ���수
  struct ListNode *link; // 다음 노드를 가리키는 포인터
} ListNode;

// 다항식을 나타내는 헤드 노드 구조체
typedef struct ListHead {
  ListNode *head; // 헤드 노드를 가리키는 포인터
} ListHead;

// 빈 다항식을 생성하는 함수
ListHead *createLinkedList(void);

// 새로운 항을 다항식에 추가하는 함수
void appendTerm(ListHead *L, float coef, int expo);

// 두 다항식을 더하는 함수
void addPoly(ListHead *A, ListHead *B, ListHead *C);

// 다항식을 출력하는 함수
void printPoly(ListHead *L);