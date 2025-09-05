//Write a C program to convert specified days into years, weeks and days. Note: Ignore leap year.

#include <stdio.h>

int main (void)
{
    long days, years, weeks;
    printf("Number of days: \n");
    scanf("%ld", &days);
    if (days >= 365)
    {
        years = days/365;
        printf("Years: %ld\n", years);
        days = days - (years * 365);
    }
    if (days >= 7)
    {
        weeks = days/7;
        printf("Weeks: %ld\n", weeks);
        days = days- (weeks * 7);
    }
    if (days > 0)
    {
        printf("Days: %ld\n", days);
    }

    return 0;


}
