#include<stdio.h>
int main()
{
	int m,i,j,k,n,r;
	printf("Enter demension of 1st matrix and no. of column of 2nd matrix:\n");
	scanf("%d%d%d",&m,&n,&r);
	int a[m][n];
	int b[n][r];
	int c[m][r];
	for(i=0;i<m;i++)
	{
		for(j=0;j<r;j++)
		{
			c[i][j]=0;
		}
	}
	printf("Enter matrix A row-wise:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			int x=i+1,y=j+1;
			printf("A[%d][%d]:",x,y);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter matrix B row-wise:\n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<r;j++)
		{
			int x=i+1,y=j+1;
			printf("B[%d][%d]:",x,y);
			scanf("%d",&b[i][j]);
		}
	}
	printf("Your matrices are:\n");
	printf("A:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n  ");
	}
	printf("\n");
	printf("B:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n  ");
	}
	printf("\nYour Multiplication of matrices A*B:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<r;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
