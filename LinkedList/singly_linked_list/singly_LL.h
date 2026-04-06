#ifndef SINGLY_LL_H
#define SINGLY_LL_H

#include<stdio.h>
#include<stdlib.h>

#define DEBUG

//Struct for Linked List
struct Node{
    int data;
    struct Node *next;
};

//Function declarations
struct Node *create_node(void);

#endif