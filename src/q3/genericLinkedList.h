#ifndef CT331_ASSIGNMENT_GENERIC_LINKED_LIST
 #define CT331_ASSIGNMENT_GENERIC_LINKED_LIST
    

    typedef void (*printer) (void *data);
    
    typedef struct genericListElementStruct {
        void* data;
        printer print;
        size_t size;
        struct genericListElementStruct* next;
    } genericListElement;
    
    genericListElement* createEl(void* data, size_t size, printer print);
    

  
    int length(genericListElement* list);
    

    
    void traverse(genericListElement* start);
    

   
    genericListElement* insertAfter(genericListElement* after, void* data, size_t size, printer print);
    

    
    void push(genericListElement** list, void* data, size_t size, printer print);
    

   
    genericListElement* pop(genericListElement** list);
    
    
    genericListElement* dequeue(genericListElement* list);
    

   
    void deleteAfter(genericListElement* after);
    

    
    void enqueue(genericListElement** list, void* data, size_t size, printer print);
    

    

    #endif




