// BST  
#include<stdio.h>
#include<stdlib.h>

struct  node
{
  int  data;
  struct  node *lchild;
  struct node *rchild;    
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Insert(PPNODE first, int no)
{
  PNODE newn = NULL;
  PNODE temp = NULL;

  newn = (PNODE)malloc(sizeof(NODE));

  newn->data = no;
  newn->lchild = NULL;
  newn->rchild = NULL;

  if(*first == NULL)    // if tree is empty // root
  {
    *first = newn;
  }
  else                 // if tree contains atleast one node
  {
     temp = *first;

     while (1)
     {
       if(no > temp->data)            // if element is greater to go the right side of BST tree
       {
          if(temp->rchild == NULL)
          {
            temp->rchild = newn;
            break;
          }
          temp = temp->rchild;
       }
       else if(no < temp->data)       // if element is smaller to go the left side of BST tree
       {
           if(temp->lchild == NULL)
           {
            temp->lchild = newn;
            break;
           }
           temp = temp->lchild;
       }
       else if(no == temp->data)      // if element is identical  //to same element 
       {
          printf("Unable to insert as element is duplicate :\n");
          free(newn);
          break;
       }
     }   
  }
}

int main()
{
    PNODE head = NULL;

    Insert(&head,11);
    Insert(&head,21);
    Insert(&head,51);

    Insert(&head,11); //duplicate

    return 0;
}
