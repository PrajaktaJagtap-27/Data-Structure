// BST   in  inorder  count child node and parentnode  in //linear search to use unsorted array


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

// L D R order
void Inorder(PNODE first)
{
   if(first != NULL)
   {
    Inorder(first->lchild);
    printf("%d\t",first->data);
    Inorder(first->rchild);
   }
}



bool  Search(PNODE first, int no)
{
   bool bFlag = false;
   while (first != NULL)
   {
      if(no > first->data)
      {
         first = first->rchild;
      }
      else if(no < first->data)
      {
         first = first->lchild;
      }
      else if(no == first->data)
      {
         bFlag = true;
         break;
      }
   }
   return bFlag;
}
int Count(PNODE first)
{
  static int iCount = 0;

  if(first != NULL)
  {
   iCount++;
   Count(first->lchild);
   Count(first->rchild);
  }
  return iCount;
}

int CountParentNode(PNODE first)
{
  static int iCount = 0;

  if(first != NULL)
  {
   if((first->lchild != NULL) || (first->rchild != NULL))
   {
   iCount++;
   }
   CountParentNode(first->lchild);
   CountParentNode(first->rchild);
  }
  return iCount;
}

int CountChildNode(PNODE first)
{
  static int iCount = 0;

  if(first != NULL)
  {
   if((first->lchild != NULL) && (first->rchild != NULL))
   {
   iCount++;
   }
   CountChildNode(first->lchild);
   CountChildNode(first->rchild);
  }
  return iCount;
}

int main()
{
    PNODE head = NULL;
    
    bool bRet = false;
    int iRet = 0;

    Insert(&head,21);
    Insert(&head,11);
    Insert(&head,51);
    Insert(&head,67);
    Insert(&head,40);
    Insert(&head,10);
    Insert(&head,13);
    Insert(&head,38);
   

    Inorder(head);
    printf("Inorder traversal :\n");
    
    bRet = Search(head,38);

    if(bRet == true)
    {
      printf("Element is present\n");
    }
    else
    {
      printf("Element is not present\n");
    }

    iRet = Count(head);
    printf("Number of elements are :%d\n",iRet);

    iRet = CountParentNode(head);
    printf("Number of Parentnodes are :%d\n",iRet);

    iRet = CountChildNode(head);
    printf("Number of Parentnodes are :%d\n",iRet);

    return 0;
}
