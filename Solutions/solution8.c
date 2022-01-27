
#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k, l, n;
 clrscr();
 printf("\n Enter the number of rows you want to print:");
	scanf("%d",&n);
 for (i = 1; i <= n; i++)   
    {  
        for (j = n; j > i; j--)  
        {  
            printf(" ");   
        }  
        for (k = i; k >= 1; k--)  
        {  
            printf("%d",k); // print the Star  
        }        
        for(l=2;l<=i;l++)
        {
            printf("%d",l);
        }
        printf ("\n");   
    }  
    getch();
}