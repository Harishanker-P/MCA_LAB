class P1
{
	 P1(String name)
	{
		System.out.println("Hy iam a const"+name);
	}
	P1(int a,int b)
	{
		System.out.println(a+b);
	}
	void sayHy()
	{
		
	}
	
	
	public static void main(String args[])
	{
		P1 obj = new P1(1,2);
		P1 obj2 = new P1("hari");
	
		
	}
}
