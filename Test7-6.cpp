#include "Test7-6/heap.c"
#include "Test7-6/heap.h"
#include <stdio.h>

int
main (void)
{
  int i, n, item;
  heapType *heap = createHeap ();
  insertHeap (heap, 10);
  insertHeap (heap, 45);
  insertHeap (heap, 19);
  insertHeap (heap, 11);
  insertHeap (heap, 96);

  printHeap (heap);

  n = heap->heap_size;
  for (i = 1; i <= n; i++)
    {
      item = deleteHeap (heap);
      printf ("\n delete : [%d] ", item);
    }

  return 0;
}