#include <stdio.h>
#include <conio.h>

void main()
{
	int x ,y;
	clrscr();
	for(x=1; x<=20; x++)
	{
		for(y=1;y<=40-x;y++)
		{
			printf(" ");
		}
		for(y=1;y<=x;y++)
		{
			if(y==1||y==x)
			{
				textcolor(4598);
			}
			else

			{
				textcolor(4578*y);

			}
			cprintf("* ");
		}
		printf("\n");
	}
	for(x=19; x>=1; x--)
	{
		for(y=1;y<=40-x;y++)
		{
			printf(" ");
		}
		for(y=1;y<=x;y++)
		{
			if(y==1||y==x)
			{
				textcolor(3457);

			}

			else
			{
				textcolor(3457*x);
			}

		       cprintf("* ");
		}
		printf("\n");
	}
	getch();
}