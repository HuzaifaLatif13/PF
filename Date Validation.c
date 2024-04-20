# include <stdio.h>
int main (void)
{
	int date,month,year,day;
	printf("Enter the date (date/month/year) : __________");
	scanf("%d/%d/%d",&date,&month,&year);
	if((date>31||date<1)||(month>12||month<1)||(year<1900))
	{
		printf("Invalid Date");
		
	}
	
	else if((date==31)&&((month==2)||(month==4)||(month==6)||(month==9)||(month==11)))
	{
		printf("Invalid Date");
	}
	
	else if((date==29)&&(month==2)&&(year%100!=0)&&(year%4!=0))
	{
		printf("Invalid Date.");
		 	}
	
	else
	{
		printf("Valid Date.");
		printf("\nEnter '1' for SUNDAY.\nEnter '2' for MONDAY.\nEnter '3' for TUESDAY.\nEnter '4' for WEDNESDAY.\nEnter '5' for THURSDAY.\nEnter '6' for FRIDAY.\nEnter '7' for SATURDAY.\n");
		printf("\nEnter day : _\b");
		scanf("%d",&day);
		while(!(day<8&&day>0))
		{
			printf("\nEnter day : _\b");
			scanf("%d",&day);
		}
		switch(day)
		{
			case 1 : printf("Sunday"); break;
			case 2 : printf("Monday"); break;
			case 3 : printf("Tuesday"); break;
			case 4 : printf("Wednesday"); break;
			case 5 : printf("Thursday"); break;
			case 6 : printf("Friday"); break;
			case 7 : printf("Saturday"); break;
			default : printf("Chal nikal.") ; break;
		}
		
		printf(" , %d",date);
		

		switch(date)
		{
			case 1:
			case 21:
			case 31:
				printf("st of ");
				break;
				
			case 2:
			case 22:
				printf("nd of ");
				break;
				
			case 3:
			case 23:
				printf("rd of ");
				break;
				
			default:
				printf("th of ");
				break;
		}				
		
		
			switch(month)
		{
			case 1  : printf("January"); break;
			case 2  : printf("February"); break;
			case 3  : printf("March"); break;
			case 4  : printf("April"); break;
			case 5  : printf("May"); break;
			case 6  : printf("June"); break;
			case 7  : printf("July"); break;
			case 8  : printf("August"); break;
			case 9  : printf("September"); break;
			case 10 : printf("October"); break;
			case 11 : printf("November"); break;
			case 12 : printf("December"); break;
			default : printf("Chal nikal."); break;
		}
		
		printf(" , %d" , year);
	}
	
	return 0;
}