#include<stdio.h>
#include<stdlib.h>

struct node   //struct node is a self referential structure because it contains a pointer to the same structure type.
{
    int data;
    struct node *next;   
    struct node *prev;      // $
};

typedef struct node NODE; 
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, int no) 
{
    PNODE newn = NULL; 

    newn = (PNODE)malloc(sizeof(NODE)); //malloc is used to allocate memory for the new node.

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // $

    if(*first == NULL)
    {
        *first = newn;
    }   
    else
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int no)  // InsertLast function is used to insert a new node at the end of the linked list.
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;      // $

    if(*first == NULL)
    {
        *first = newn;
    }   
    else
    {

    }
}

void InsertAtPos(PPNODE first, int no, int pos)
{}

void DeleteFirst(PPNODE first)
{}

void DeleteLast(PPNODE first)
{}

void DeleteAtPos(PPNODE first, int pos)
{}

void Display(PNODE first)
{}

int Count(PNODE first)
{
    return 0;
}

int main()
{
    PNODE head = NULL;

    return 0;
}
