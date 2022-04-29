/* Utkarsh Shukla 
   Faculty of Engineering and Technology
   University of Lucknow
   B.tech(2019-20023)
   Computer Science and Engineering Technology 
   */
#include<stdio.h>
#include <time.h>
#include <stdlib.h>
#include<conio.h>
void main()
{
	int h=0,m=0,s=0;
	int a;
	printf("Please enter a time format in Hour:Min:Sec:\n\t");
	scanf("\t%d\t%d\t%d",&h,&m,&s);
	printf("clock sound :\n");
	printf("1.every second\n");
	printf("2.every min\n");
	printf("3.every hour\n");
	printf("4.mute\n");
	printf("choose from 1 to 4.....");
	scanf("%d",&a);
	
	
     while(1)
     {
	for(h;h<24;h++)
	{
		if(a==3)
		{
			printf("\a");
		}
		for(m;m<60;m++)
		{
			if(a==2)
				{
					printf("\a");
				}
			for(s;s<60;s++)
			{
			    system("cls");    //clear console for window user 
				printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t%d:%d:%d",h,m,s);
				
				if(h<12)
				{
					printf(" AM");
				}
				else
				{
					printf(" PM");
				}
				if(a==1)
				{
					printf("\a");
				}
				sleep(1);
			}
			s=0;
		}
		m=0;
	}
	h=0;
     }
getch();
}
