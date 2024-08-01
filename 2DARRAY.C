#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][3],i,n,j,sum=0;
	clrscr();
	print("\n enter the size of array==>");
	scanf("%d",&n);
	for(i=0;i<2;i++)
	{
		  for(j=0;j<3;j++)
		  {
			printf("\enter element of arrary  a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		  }
	}
	for(i=0;i<2;i++)
	{
		  for(j=0;j<3;j++)
		  {
			sum=sum+a[i][j];
			printf("\nenter element of arrary  a[%d][%d]==>%d",i,j,a[i][j]);
			scanf("%d",&a[i][j]);
		  }
		 // printf("\nsum==>%d",sum);
		 // sum=0;
	}

	getch();
}