//Doubly Circular link list 
class node        //replacement of struct node in c++
{
    public int data;
    public node next;
    public node prev;

    public node(int no)
    {
      this.data = no;
      this.next = null;
      this.prev = null;
    }
}

class DS36
{
   private node first;
   private node last;
   private int iCount;

   public DoublyCL()
   {
    System.out.println("Object of DoublyCL gets Created :");
    this.first = null;
    this.last = null;
    this.iCount = 0;
   }

   public void InsertFirst(int no)
   {}

   public void InsertLast(int no)
   {}
   public void InsertAtPos(int no,int pos)
   {}

   public void DeleteFirst()
   {}
   public void DeleteLast()
   {}
   public void DeleteAtPos(int pos)
   {}

   public void Display()
   {}

   public int Count()
   {
    return this.iCount;
   }
}

class Program449
{
  public static void main(String A[])
  {
    DoublyCL obj = null;  
    int iRet = 0;
    obj = new DoublyCL();
   

     obj.InsertFirst(51);
     obj.InsertFirst(21);
     obj.InsertFirst(11);

     obj.Display();

     iRet = obj.Count();

     System.out.println("Numbers of nodes are :"+iRet);

     obj.InsertLast(101);
     obj.InsertLast(121);
     obj.InsertLast(151);

     obj.Display();

     iRet = obj.Count();

     System.out.println("Numbers of nodes are :"+iRet);
     
     obj.DeleteFirst();
     obj.Display();

     iRet = obj.Count();

     System.out.println("Numbers of nodes are :"+iRet);

     obj.DeleteLast();
     obj.Display();

     iRet = obj.Count();

     System.out.println("Numbers of nodes are :"+iRet);

     obj.InsertAtPos(105,4);
     obj.Display();

     iRet = obj.Count();

     System.out.println("Numbers of nodes are :"+iRet);

     obj.DeleteAtPos(4);
     obj.Display();

     iRet = obj.Count();

     System.out.println("Numbers of nodes are :"+iRet);

     //Importatnt for memory deallocation
     obj = null;
     System.gc();
  }
  }
