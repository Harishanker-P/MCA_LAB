
public class p11
{
    int rollno;
    
    void get(int rollno)
    {
        this.rollno=rollno;
    }

    static void display(p11 obj)
    {
        System.out.println("The roll number is "+obj.rollno);
    }
    public static void  main(String args[])
    {
        p11 p = new p11();
        p.get(11);
        display(p);
    }

}