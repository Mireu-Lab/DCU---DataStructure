#include "Test4-3/CircularLinkedList.c"
#include "Test4-3/CircularLinkedList.h"
#include <stdio.h>

int main(void) {
  // 원형 연결 리스트  헤드를 가리키는 포인터
  linkedList_h *CL;
  // 리스트 노드를 가리키는 포인터 
  listNode *p;

  // 원형 연결 리스트 생성
  CL = createLinkedList_h();
  printf("(1) 원형 연결 리스트 생성하기! \n");
  printList(CL);

  printf("\n(2) 원형 연결 리스트에 [월] 노드  ������하기! \n");
  // 선형 연결 리스트의 첫 번째 노드에 "월" 데이터 삽입
  insertFirstNode(CL, "월");
  printList(CL);

  printf("\n(3) 원형 연결 리스트의 [월] 노드 뒤에 [수] 노드 삽입하기! \n");
  // "월" 노드를 검색
  p = searchNode(CL, "월");
  // "월" 노드 뒤에 "수" 데이터를 삽입
  insertMiddleNode(CL, p,  "수");
  printList(CL);

  printf("\n(4) 원형 연결 리스트의 [수] 노드 뒤에 [금] 노드 삽입하기! \n");
  // "수" 노드를 검색
  p = searchNode(CL, "수");
  // "수" 노드 뒤에 "금" 데이터를 삽입
  insertMiddleNode(CL, p, "금");
  printList(CL);

  printf("\n(5) 원형 연결 리스트에서 [수] 노드 삭제하기! \n");
  // "수" 노드를 검색
  p = searchNode(CL, "수");
  // "수" 노드 삭제
  deleteNode(CL, p);
  printList(CL);

  return 0;
}
