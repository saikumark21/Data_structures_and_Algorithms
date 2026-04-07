#ifndef SINGLY_LL_H
#define SINGLY_LL_H

#include<stdio.h>
#include<stdlib.h>

//#define DEBUG

//Struct for Linked List
struct Node{
    int data;
    struct Node *next;
};

//Function declarations
struct Node *create_node(void);
unsigned int get_data_from_usr(struct Node *);
unsigned int display_node_data(const struct Node *);
struct Node *insert_node(struct Node **, struct Node *,unsigned short int);

#endif