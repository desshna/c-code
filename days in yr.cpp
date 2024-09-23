#include<stdio.h>
int main(){
	int a;
	printf("Enter month");
	scanf("%d",&a);
	int b;
	printf("Enter year");
	scanf("%d",&b);
	if((b%4==0&&b%100!=0)||b%400==0)
	{
		if(a==2)
		printf("February has 29 days and year is %d",b);
	}
	else
	{
		if(a==1)
		printf("January has 31 days and year is %d",b);
		if(a==2)
		printf("February has 28 days and year is %d",b);
		if(a==3)
		printf("March has 31 days and year is %d",b);
		if(a==4)
		printf("April has 30 days and year is %d",b);
		if(a==5)
		printf("May has 31 days and year is %d",b);
		if(a==6)
		printf("June has 30 days and year is %d",b);
		if(a==7)
		printf("July has 31 days and year is %d",b);
		if(a==8)
		printf("August has 31 days and year is %d",b);
		if(a==9)
		printf("September has 30 days and year is %d",b);
		if(a==10)
		printf("October has 31 days and year is %d",b);
		if(a==11)
		printf("November has 30 days and year is %d",b);
		if(a==12)
		printf("December has 31 days and year is %d",b);
		
	}
	
}