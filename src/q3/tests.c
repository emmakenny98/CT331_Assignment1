#include <stdio.h>
#include "tests.h"
#include "genericLinkedList.h"

void printInt(void* data) {
    printf("%d\n", *(int*)data);
}

void printChar(void* data){
    printf("%c\n", *(char*)data);
    
}

void printFloat(void* data){
    printf("%f\n", *(float*)data);
}

void printString(void* data){
    printf("%s\n", data);
}

void runTests(){
  printf("Tests running...\n");
  
  printf("Adding an int\n");
  int test1 = 2;
  genericListElement* l = createEl(&test1, 30, &printInt);
  traverse(l);
  
  printf("\nAdding a char\n");
  char test2 = 'a';
  genericListElement* l2 = createEl(&test2, 30, &printChar);
  traverse(l2);
 
  printf("\nAdding a float\n");
  float test3 = 2.3;
  genericListElement* l3 = createEl(&test3, 30, &printFloat);
  traverse(l3);
  
   printf("\nAdding a string\n");
  char test4[] = "Test string";
  genericListElement* l4 = createEl(&test4, 30, &printString);
  traverse(l4);
  
}

