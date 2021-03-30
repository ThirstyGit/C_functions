#include <stdio.h>

int leapyear(int num)
{
	if (num % 4 == 0)
	{
		if (num % 100 != 0)
		{
			return 1;
		}
		else if (num % 400 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()

{
	int day,month,year,total,loop;
	input://This is to make sure that there isn't any wrong input.
	printf("Day: ");
	scanf("%d", &day);
	printf("Month: ");
	scanf("%d", &month);
	printf("year: ");
	scanf("%d", &year);
//    Checking if the input is correct.
	if (day < 1)
	{
		printf("Please input a valid date.\n");
		goto input;
	}
	else if (month > 12 || month < 1)
	{
		printf("Please input a valid date.\n");
		goto input;
	}
	else if (day > 31)
	{
		printf("Please input a valid date.\n");
		goto input;
	}
	else if (day == 31)
	{
		if (month != 1 && month != 3 && month != 5 && month != 7 && month != 8 && month != 10 && month != 12)
		{
			printf("Please input a valid date.\n");
			goto input;
		}
	}
	else if (day > 28 && month == 2)
	{
		if (leapyear(year != 1))
		{
			printf("Please input a valid date.\n");
			goto input;
		}
	}
//	 Adding all the days together.
	total = 0;
//	Adding the extra events.
	if(year>1752) // 1752 September 3rd to 13th doesn't exist. Look it up if necessary.
    {
        total -= 11;
    }
    else if(year == 1752)
    {
        if(month>9)
        {
            total -= 11;
        }
        else if(month == 9)
        {
            if(day >= 3)
            {
                total -= 11;
            }
        }
    }
	for (loop = 0; loop < year; loop++)
	{
		if (leapyear(loop) == 0)
		{
			total += 365;
		}
		else
		{
			total += 366;
		}
	}
	while(month != 0)
	{
		month--;
		if (month == 1)
		{
			total += 31;
		}
		else if (month == 2)
		{
			if (leapyear(year) == 0)
			{
				total += 28;
			}
			else
			{
				total += 29;
			}
		}
		else if (month == 3)
		{
			total += 31;
		}
		else if (month == 4)
		{
			total += 30;
		}
		else if (month == 5)
		{
			total += 31;
		}
		else if (month == 6)
		{
			total += 30;
		}
		else if (month == 7)
		{
			total += 31;
		}
		else if (month == 8)
		{
			total += 31;
		}
		else if (month == 9)
		{
			total += 30;
		}
		else if (month == 10)
		{
			total += 31;
		}
		else if (month == 11)
		{
			total += 30;
		}
		else if (month == 12)
		{
			total += 31;
		}
	}
	total += day;
	//printing the day.
	//7 days a week. modulus gives us a number from 0 to 6.
	printf("\nThe Date is: ");
	if (total % 7 == 4)
	{
		printf("Saturday\n\n");
	}
	else if (total % 7 == 5)
	{
		printf("Sunday\n\n");
	}
	else if (total % 7 ==  6)
	{
		printf("Monday\n\n");
	}
	else if (total % 7 == 0)
	{
		printf("Tuesday\n\n");
	}
	else if (total % 7 ==1)
	{
		printf("Wednsday\n\n");
	}
	else if (total % 7 == 2)
	{
		printf("Thursday\n\n");
	}
	else if (total % 7 == 3)
	{
		printf("Friday\n\n");
	}


	return main();

}
