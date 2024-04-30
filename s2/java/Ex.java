class Ex
{
    public static void main(String args[])
    {
        //System.out.println("hello world");
        try{

            int a=10/10;


            int age=1;
            if(age<18){
                throw new ArithmeticException("under age!!! you cannot vote");
                }
        }

        catch(Exception e)
        {
            System.out.println("hello world");
            
            System.out.println(e);
        }
        
    }
}