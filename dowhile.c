#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	do{
		int num,a;
		printf("Choices are 1.Even-Odd\n 2.Greater or less than\n 3.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&num);
		switch(num)
		{
			case 1:printf("Enter any number:");
		           scanf("%d",&a);
		           if(num/2)
	                {printf("The number is even");}
	               else
	                {printf("The number is odd");}
                   break;
            case 2:printf("Enter any number:");
		           scanf("%d",&a);
		           if(num>10) 
		            {printf("The number is greater than 10\n");}
	               else
		            {printf("The number is less than 10\n");}
		           break;
		    default: {printf("Enter correct choice");
		}
		}while(num!=3);
		printf("Exit");
	}
	return 0;
}