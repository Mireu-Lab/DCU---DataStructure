#define _CRT_SECURE_NO_WARNINGS
#include "CircularLinkedList.h"

#include <cstdlib>
#include <stdio.h>
#include <string.h>

// 링크드 리스트 헤드 노드를 생성
linkedList_h *createLinkedList_h(void) {
  // 헤드 노드 메모리 할당
  linkedList_h *CL;
  CL = (linkedList_h *)malloc(sizeof(linkedList_h));

  // 헤드 노드 초기화
  CL->head = NULL;

  // 헤드 노드 반환
  return CL;
}

// 연결리스트를 출력하는 함수
void printList( linkedList_h *CL) {
  // 포인터 p를 head로 설정
  listNode *p = CL->head;

  //  연결 리스트가 비어있는지 확인
  if (p == NULL) {
    // 비어있으면 "()" 출력
    printf(") \n");
    return;
  }

  // 연결 리스트의 모든 노드를 순회하며 출력
  do {
    // 데이터 출력 
    printf("%s", p->data);
    
    // 포인터를 다음 노드로 이동
    p = p->link;
    
    // head가 아니면 콤마와 공백 출력
    if (p != CL->head)
      printf(", ");
    
  } while (p != CL->head);

  // 마지막에 "()" 출력
  printf(") \n");
}


// 연결 리스트의 처음에 새로운 노드 삽입 
void insertFirstNode(linkedList_h *CL, const char *x) {
  // 새 노드와 임시 노드 포인터  선언
  listNode *newNode, *temp;

  // 새 노드 할당
  newNode = (listNode *)malloc(sizeof(listNode));

  // 새 노드 데이터 복사
  strcpy(newNode->data, x);

  // 연결 리스트가 비어있는 경우 
  if (CL->head == NULL) {
    // 새 노드를 헤드로 지정하고 원형 연결을 위해 자기 자신을 가리키게 함
    CL->head = newNode;
    newNode->link = newNode;

  } else {
    // 연결 리스트가 비어 있지 않은 경우

    // 임시 노드를 헤드 노드로 지정
    temp = CL->head;

    // 임시 노드가 헤드를 가리킬 때까지 반복
    while (temp->link != CL->head)
      temp  = temp->link;

    // 새 노드를 원형 연결에 삽입
    newNode->link = temp->link;
    temp->link = newNode;

    // 헤드를 새 노드로 변경
    CL->head = newNode;
  }
}


void insertMiddleNode(linkedList_h *CL, listNode  *pre, const char *x) {
  // 새 노드를 위한 메모리 할당
  listNode *newNode;
  newNode  = (listNode *)malloc(sizeof(listNode));

  // 새 노드의 데이터 필드에 x 값 복사
  strcpy(newNode->data, x);

  // 빈 연결 리스트인 경우
  if (CL->head == NULL) {
    // 새 노드를  ���드��� 설정하고 자기 자신을 가리키도록 설정
    CL->head = newNode;
    newNode->link = newNode;

  } else {
    // 새 노드를 이전 노드와 연결하고 이전 노드의 링크를 새 노드로 설정
    newNode->link = pre->link;
    pre->link = newNode;
  }
}


void deleteNode(linkedList_h *CL, listNode *old ) {
  // 이전 노드 포인터
  listNode *pre;
  // 빈 리스트를 검사
  if ( CL->head == NULL)
    return;

  // 헤드 노드가 자신만 참조하는 경우
  if (CL->head->link == CL->head) {
    free(CL->head);
    CL->head = NULL;
    return;
  
  //  ������할 노드가 유효하지 않는 경우
  } else if (old == NULL) {
    return;
  
  // 삭제할 노드가 리스트에 있는 경우
  } else {
    pre = CL->head;

    // 이전 노드 찾기
    while (pre->link != old) {
      pre = pre->link;
    }

    // 이전 노드의 링크를 삭제할 노드의 링크로 연결
    pre->link = old->link;

    // 삭제할 노드가 헤드노드인 경우
    if  (old == CL->head)
      CL->head = old->link;

    // 삭제할 노드 메모리 반환
    free(old);
  }
}


listNode *searchNode(linkedList_h *CL, const char *x) {
  // 탐색을 위한 임시 노드 생성.
  listNode *temp;
  temp = CL-> head;

  if (temp == NULL)
    // 연결 리스트가 비어 있으면 NULL 반환.
    return NULL;

  // 연결 리스트의 헤드에서 시작하여 순회하면서 데이터 비교 수행.
  do {
    if (strcmp(temp->data,  x) == 0)
      // 데이터가 일치하면 일치하는 노드 반환.
      return temp;
    else
      // 데이터가 일치하지 않으면 다음 노드로 이동.
      temp = temp->link;

  } while (temp != CL->head);

  // 순회가 끝났는데 일치하는 노드가 없으면 NULL 반환.
  return NULL;
}
