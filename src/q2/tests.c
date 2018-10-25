#include <stdio.h>
#include "tests.h"
#include "linkedList.h"

void runTests(){
  printf("Tests running...\n");
  listElement* l = createEl("Test String (1).", 30);
  //printf("%s\n%p\n", l->data, l->next);
  //Test create and traverse
  traverse(l);
  printf("\n");

  printf("Test insertAfter\n");
  listElement* l2 = insertAfter(l, "another string (2)", 30);
  insertAfter(l2, "a final string (3)", 30);
  traverse(l);
  printf("\n");

  printf("Test deleteAfter\n");
  deleteAfter(l);
  traverse(l);
  printf("\n");
  
  
  printf("Test length\n");
   printf("The length of l is %d\n", length(l));
    printf("\n");
   
 printf("Test push\n");
    push(&l, "another string (0)", 30);
    traverse(l);
    printf("The length of l is %d\n", length(l));
     printf("\n");
 
 printf("Test pop\n");
  pop(&l);
  traverse(l);
  printf("The length of l is %d\n", length(l));
   printf("\n");
  
 printf("Test enqueue\n");
  enqueue(&l, "another string (0)", 30);
  traverse(l);
  printf("The length of l is %d\n", length(l));
   printf("\n");
  
  printf("Test dequeue\n");
  dequeue(l);
  traverse(l);
  printf("The length of l is %d\n", length(l));
   printf("\n");
  printf("\nTests complete.\n");
}
