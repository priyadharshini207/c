#include<stdio.h>
 

int main()

{
	
int i,j,a[5][5],b[5][5],c[i][j],rows,cols;

printf("enter row,cols");

scanf("%d %d",&rows,&cols);

printf("enter 1 array");

for(i=0;i<rows;i++)
	
{
	 
  for(j=0;j<cols;j++)

	    {

	        scanf("%d",&a[i][j]);
	
    }

	}

	printf("enter 2 array");

	for(i=0;i<rows;i++)
	
{
	
    for(j=0;j<cols;j++)
	  
  {
	
        scanf("%d",&b[i][j]);

	        {
	
            c[i][j]=a[i][j]+b[i][j];
	
        }

	printf("%d",c[i][j]);
	
    }
	
}

}	