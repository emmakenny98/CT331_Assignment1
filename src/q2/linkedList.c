#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

typedef struct listElementStruct{
  char* data;
  size_t size;
  struct listElementStruct* next;
} listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(char* data, size_t size){
  listElement* e = malloc(sizeof(listElement));
  if(e == NULL){
    //malloc has had an error
    return NULL; //return NULL to indicate an error.
  }
  char* dataPointer = malloc(sizeof(char)*size);
  if(dataPointer == NULL){
    //malloc has had an error
    free(e); //release the previously allocated memory
    return NULL; //return NULL to indicate an error.
  }
  strcpy(dataPointer, data);
  e->data = dataPointer;
  e->size = size;
  e->next = NULL;
  return e;
}

//Prints out each element in the list
void traverse(listElement* start){
  listElement* current = start;
  while(current != NULL){
    printf("%s\n", current->data);
    current = current->next;
  }
}

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* el, char* data, size_t size){
  listElement* newEl = createEl(data, size);
  listElement* next = el->next;
  newEl->next = next;
  el->next = newEl;
  return newEl;
}


//Delete the element after the given el
void deleteAfter(listElement* after){
  listElement* delete = after->next;
  listElement* newNext = delete->next;
  after->next = newNext;
  //need to free the memory because we used malloc
  free(delete->data);
  free(delete);
}

//Return the number of elements in a linked list
int length(listElement* list){
	listElement* cur = list;
	int size = 0;

	while(cur != NULL){
		size++;
		cur = cur->next;
	}
	
	return size;
}

//Push a new element onto the head of a list
//Update the list reference using side effects
void push(listElement** list, char* data, size_t size){
	listElement* newEl = createEl(data, size);
	newEl->next = *list;
	*list = newEl;
}

//Pop an elemet from the head of a list.
//Update the list reference using side effects
void pop(listElement** list){
	listElement* el = *list;
	*list = el->next;
}

//Enqueue a new element onto the head of the list
void enqueue(listElement** list, char*data, size_t size){
	listElement* newEl = createEl(data,size);
	newEl->next = *list;
	*list = newEl;
}

//Dequeue an element from the tail of the list
void dequeue(listElement* list){
	listElement* head = list;
	while(head->next->next != NULL){
		head = head->next;
	}
	deleteAfter(head);
}
