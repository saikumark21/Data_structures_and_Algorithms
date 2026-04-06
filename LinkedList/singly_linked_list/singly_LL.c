#include"singly_LL.h"

struct Node *create_node(void)
{
    struct Node *ptr = NULL;

    ptr = (struct Node *)malloc(sizeof(struct Node));

    if(ptr == NULL)
    {
        #ifdef DEBUG
        puts("Error: Node can't be created...");
        #endif
        return NULL;
    }
    else{
        #ifdef DEBUG
        puts("Node created successfully...");
        #endif
        return ptr;
    }
}

