class P3
{
	float real,img;
	P3(float n1,float n2)
	{
		this.real=n1;
		this.img=n2;
	}
	void add(P3 obj1,P3 obj2)
	{
		this.real=obj1.real+obj2.real;
		this.img=obj1.img+obj2.img;
	}
	
	void display()
	{
		System.out.println(this.real+" + "+this.img+" i ");
	}
	
	public static void main(String args[])
	{
		P3 c1 = new P3(3,4);  
		P3 c2 = new P3(4,2);
		
		P3 res=new P3(0,0);
		
		c1.display();
		c2.display();
		
		
		res.add(c1,c2);
			
		res.display();
		
		
		
		
		
		
		
		
		
		
		
	
		
		
		
		
	}
}
