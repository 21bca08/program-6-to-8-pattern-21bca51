#include<stdio.h>
#include<conio.h>

void main()
{
    int a, b=1, i;
    clrscr();
    printf("enter the number of times you want to print the row:");
    scanf("%d",&a);
    while(b<=a)
    {
	i=0;
	while(i<=(b-1))
	{
	    i++;
	    printf("* ");
	}
	printf("\n");
	b++;
    }
    printf("congratulations");
    getch();
}
