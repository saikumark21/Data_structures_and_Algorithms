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
        get_data_from_usr(ptr);
        #ifdef DEBUG
            puts("Node created successfully...");
            display_node_data(ptr);
        #endif
        return ptr;
    }
}

unsigned int get_data_from_usr(struct Node *ptr)
{
    if(ptr != NULL){
        printf("Enter value for data: ");
        scanf("%d",&ptr->data);

        return 1;
    }
    else{
        #ifdef DEBUG
            puts("Error: Passed NULL pointer..");
        #endif
        return 0;
    }
}

unsigned int display_node_data(const struct Node *ptr)
{
    if(ptr != NULL){
        printf("data: %d \n",ptr->data);

        return 1;
    }
    else{
        #ifdef DEBUG
            puts("Error: Passed NULL pointer..");
        #endif
        return 0;
    }
}

struct Node *insert_node(struct Node **head, struct Node *node, unsigned short int position)
{
    struct Node *trav_ptr = *head; unsigned short int count = 0;
    if(node != NULL){
        while(trav_ptr != NULL){
            count++;
            trav_ptr = trav_ptr->next;
        }
        trav_ptr = *head;    //pointer pointing to first node

        //If position value is greater than the number of nodes, the node be placed at the end
        if((position > count + 1) || (position < 1))
            position = count + 1;

        if((position == 1) || (*head == NULL)){
                #ifdef DEBUG
                    puts("As head is NULL, added node to head...");
                #endif
                node->next = *head;
                *head = node;
                return *head;
            }

        //Position traversal pointer to the node to add new node at position
        count = 0;
        while((trav_ptr->next != NULL) && (count < position - 1))
        {
            trav_ptr = trav_ptr->next;
            count++;
        }
        
        //Inserting node at position of the link
        node->next = trav_ptr->next;
        trav_ptr->next = node;

        #ifdef DEBUG 
        printf("The node added at pos: %d , success\n",position);
        #endif

        return *head;
    }
    else{
        #ifdef DEBUG
        puts("Error: Node pointer is empty...");
        #endif
        return NULL;
    }
}
