#include<stdio.h>
main()
{
	int i,j,k;
	
	for(i=5;i>=1;i--)
	{
		for(k=i+1;k<=5;k++)
		{ 
		printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d ",j%2);
		}
		printf("\n");
		
		
	}
	
}
/*
1 0 1 0 1
  0 1 0 1
    1 0 1
      0 1
        1
*/
