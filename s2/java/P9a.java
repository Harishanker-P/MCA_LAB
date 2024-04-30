import java.util.Scanner;
class P9a
{

    public static void main(String args[])
    {
        try{
            int n,result=0,num;
            Scanner sc = new Scanner(System.in);
            System.out.println("Ener the limit:");
            n=sc.nextInt();
            for(int i=1;i<=n;i++)
            {

                System.out.println("Enter number(" +i+"):");
                num=sc.nextInt();
                if(num<0){
                    throw new ArithmeticException("number cannot be negative");
                }
                result+=num;
            }
            // calculating avg
            result=result/n;
            System.out.println("The avg is "+result);
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}