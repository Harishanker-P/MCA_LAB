#include<stdio.h>
int main()
{

	//set u, a and b
	int u[10]={1,2,3,4,5,6,7,8,9,10};
	int a[10]={2,3,4,5};
	int b[10]={5,6,7,8,9};
	
	
	//for storing set in in bit representation
	int setU[10],setA[10],setB[10];
	
	int flag=0;
	
	//****************SET U*********************
	
	//displaying set U
	printf("\nSET U: ");
	printf("{ ");
	for(int i=0;i<10;i++)
	{
		printf("%d ",u[i]);
	}
	printf("}");
	
	//seting bit for bit representation	
	for(int i=0;i<10;i++)
	{
		setU[i]=1;
		setA[i]=0;
		setB[i]=0;
	}
	//bit representation of U
	printf("\nBIT U: ");
	printf("{ ");
	for(int i = 0; i<10;i++)
	{
		printf("%d ",setU[i]);
	}
	printf("}");
	
	//*****************SET A******************
	
	//displaying set A
	printf("\nSET A: ");
	printf("{ ");
	for(int i=0;i<4;i++)
	{
		printf("%d ",a[i]);
	}
	printf("}");
	
	//bit representation of SET A
	
	for(int i=0;i<4;i++)
	{
	
		for(int j=0;j<10;j++)
		{
			if(a[i]==u[j])
			{
				setA[j]=1;
				break;
			}
		}
		
		
	}
	
	//bit rep of set A
	printf("\nBIT A: ");
	printf("{ ");
	for(int i=0;i<10;i++)
	{
		printf("%d ",setA[i]);
	}
	printf("}");
	
	
	//*****************SET B******************
	
	//displaying set B
	printf("\nSET A: ");
	printf("{ ");
	for(int i=0;i<5;i++)
	{
		printf("%d ",b[i]);
	}
	printf("}");
	
	//bit representation of SET A
	
	for(int i=0;i<5;i++)
	{
	
		for(int j=0;j<10;j++)
		{
			if(b[i]==u[j])
			{
				setB[j]=1;
				break;
			}
		}
		
		
	}
	
	//bit rep of set A
	printf("\nBIT A: ");
	printf("{ ");
	for(int i=0;i<10;i++)
	{
		printf("%d ",setB[i]);
	}
	printf("}");
	
	

	//*************************UNION*****************************
	
	//A union B
	int AUB[10];
	printf("\nA U B: ");
	printf("{ ");
	for(int i=0;i<10;i++)
	{
		AUB[i]=setA[i]|setB[i];
		printf("%d ",AUB[i]);
	}
	printf("}");
	
	
	//*************************INTERSECTION*****************************
	
	//AnB
	int AnB[10];
	printf("\nA n B: ");
	printf("{ ");
	for(int i=0;i<10;i++)
	{
		AnB[i]=setA[i]&setB[i];
		printf("%d ",AnB[i]);
	}
	printf("}");

//************************DIFFERENCE********************************

	//Difference of A and B
	//A minus B
	int AMB[10];
	printf("\nA - B: ");
	printf("{ ");
	for(int i=0;i<10;++i)
	{
		if(setA[i]==1 && setB[i]==0)
		{
			AMB[i]=1;
		}
		else
		{
			AMB[i]=0;
		}
		printf("%d ",AMB[i]);
	}
	printf("}");

	//Difference of B and A
	//B minus A
	int BMA[10];
	
	printf("\nB - A: ");
	printf("{ ");
	for(int i=0;i<10;++i)
	{
		if(setB[i]==1 && setA[i]==0)
		{
			BMA[i]=1;
		}
		else
		{
			BMA[i]=0;
		}
		printf("%d ",BMA[i]);
	}
	printf("}\n");
	

}
