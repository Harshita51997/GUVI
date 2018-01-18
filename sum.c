#include<stdio.h>
void main()
{
	int n,i,Sum=0;
	printf("enter number\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{for(i = 1; i <=n; i++)
  {
     Sum = Sum + i;
  }
  
  printf("Sum of Natural Numbers = %d", Sum);
		
	}
}
