#include<stdio.h>
#include"singly_LL.h"

//Head pointer for the list
struct Node *head = NULL;

void main()
{
    struct Node *ptr = NULL;
    //Lets create a node 
    //As it is the first node, assigning it to the head pointer
    ptr = create_node();

    insert_node(&head,ptr,4);

    puts("Printing head data...");
    display_node_data(head);

}