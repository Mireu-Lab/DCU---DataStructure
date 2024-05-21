#pragma once
#include "node.h"

// 트리 노드에서 특정 요소를 검색하는 함수
treeNode* searchBST(treeNode* root, element x);

// 트리 노드에 새로운 노드를 삽입하는 함수
treeNode* insertBSTNode(treeNode* p, element x);

// 트리 노드에서 특정 키를 가진 노드를 삭제하는 함수
void deleteBSTNode(treeNode* root, element key);