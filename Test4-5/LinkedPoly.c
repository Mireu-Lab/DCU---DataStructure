// 헤더 파일 포함
#include "LinkedPoly.h "
#include <cstdlib>
#include <stdio.h>

// 연결 리스트 생성
// 반환: 연결 리스트 헤드
ListHead *createLinkedList(void) {
  // 연결 리스트 헤드 선언 및 할당
  ListHead *L;
  L = (ListHead *)malloc(sizeof(ListHead));
  // 헤드 포인터를 NULL로 초기화
  L->head = NULL;
  return L;
}

// 연결 리스트에 새로운 항 추가
// 인자: 연결 리스트 헤드, 계수, 지수
void appendTerm(ListHead *L, float coef, int expo) {
  // 새로운 노드 선언 및 할당
  ListNode *newNode;
  ListNode *p;
  newNode = (ListNode *)malloc(sizeof(ListNode));
  // 계수와 지수 설정
  newNode->coef = coef;
  newNode->expo = expo;
  // 링크를 NULL로 초기화
  newNode->link = NULL;

  // 연결 리스트가 비어 있으면
  if (L->head == NULL) {
    // 헤드 포인터를 새 노드로 지정
    L->head = newNode;
    return;
  } else {
    p = L->head;
    // 연결 리스트 순회
    ListNode *p = L->head;
    while (p->link != NULL) {
      p = p->link;
    }
    // 순회가 끝난 뒤 마지막 노드의 링크를 새 노드로 설정
    p->link = newNode;
  }
}

// 두 다항식의 합계를 계산
// 인자: 두 다항식의 헤드, 결과 다항식의 헤드
void addPoly(ListHead *A, ListHead *B, ListHead *C) {
  // 각 다항식의 헤드를 가리키는 포인터
  ListNode *pA = A->head;
  ListNode *pB = B->head;
  // 합계 계수 임시 저장 변수
  float sum;

  // 두 다항식의 모든 항을 순회
  while (pA && pB) {
    if (pA->expo == pB->expo) {
      sum = pA->coef + pB->coef;
      appendTerm(C, sum, pA->expo);
      pA = pA->link;
      pB = pB->link;
    } else if (pA->expo > pB->expo) {
      appendTerm(C, pA->coef, pA->expo);
      pA = pA->link;
    } else {
      appendTerm(C, pB->coef, pB->expo);
      pB = pB->link;
    }
  }
  for (; pA != NULL; pA = pA->link)
    appendTerm(C, pA->coef, pA->expo);

  for (; pB != NULL; pB = pB->link)
    appendTerm(C, pB->coef, pB->expo);
}

void printPoly(ListHead *L) {
  ListNode *p = L->head;
  for (; p; p = p->link) {
    printf("%3.0fx^%d", p->coef, p->expo);
    if (p->link != NULL)
      printf(" +");
  }
}
