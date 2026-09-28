//singly linear link list
class node        //replacement of struct node in c++
{
    public int data;
    public node next;
}

class SinglyLL
{
   public node first;
   public int iCount;

   SinglyLL()
   {
    System.out.println("Object of SinglyLL gets Created :");
    this.first = null;
    this.iCount = 0;
   }
}

class DS32
{
  public static void main(String A[])
  {
    SinglyLL obj = null;  

    obj = new SinglyLL();

  }
}
