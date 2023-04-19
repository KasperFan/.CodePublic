#include <stdio.h>

int year = 1777, month = 4, day = 30;

int isLeapYear(year){
	if ((year % 100 != 0 && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0))
		return 1;
	else
		return 0;
}

int whichMonth(month){
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 2;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		return 1;
	else
		return 0;
}

int main()
{
	int days;
	scanf("%d", &days);
	days--;
	while (days > 0)
	{
		if (days > 366)
			if (isLeapYear(year))
			{
				year++;
				days -= 366;
			}
			else
				days -= 365;
		else if (days >= 30)
		{
			if (whichMonth(month)==2&&days>=31)
			{
				month++;
				days -= 31;
			}
			else if (whichMonth(month)==1&&days>=30)
			{
				month++;
				days -= 30;
			}
			else
			{
				if (whichMonth(month)==0&&isLeapYear(year))
				{
					month++;
					days -= 29;
				}else
				{
					month++;
					days -= 28;
				}
			}
		}
		else
		{
			if (day+=days>30)
			{
				if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
				{
					month++;
					days -= 31;
				}
				else if (month == 4 || month == 6 || month == 9 || month == 11)
				{
					month++;
					days -= 30;
				}
				else
				{
					if ((year % 100 != 0 && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0))
					{
						month++;
						days -= 29;
					}
					else
					{
						month++;
						days -= 28;
					}
				}
			}
			
		}
		
	}
}
