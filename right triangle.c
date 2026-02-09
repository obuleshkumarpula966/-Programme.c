#include <stdio.h>
void main()
{
 int row,col;
 printf("Enter the no of rows\n");
 scanf("%d",&row);
 printf("Enter the no of columns\n");
 scanf("%d",&col );
 for (int i=1;i<=row;i++)
 {
 for (int j=1;j<=col;j++)
  {
   if (i==row||j==col||i+j>=(row+1))
   {
   printf("*\t");
   }
   else
   {
   printf("  \t");
   }
  }
  printf("\n");
 }
}
