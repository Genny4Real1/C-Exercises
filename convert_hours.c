//Write a C program to convert specified days into years, weeks and days. Note: Ignore leap year.

#include <stdio.h>

int main (void)
{
    long seconds, minutes, hours, days, weeks, months, years;
    char next;
    printf("Number of hours: \n");
    scanf("%ld", &hours);

    if (hours >= 8760)
    {
        years = hours/8760;
        printf("Years: %ld\n", years);
        hours = hours - (years * 8760);
    }
    if (hours >= 720)
    {
        months = hours/720;
        printf("Months: %ld\n", months);
        hours = hours - (months * 720);
    }
    if (hours >= 168)
    {
        weeks = hours/168;
        printf("Weeks: %ld\n", weeks);
        hours = hours - (weeks * 168);
    }
    if (hours >= 24)
    {
        days = hours/24;
        printf("Days: %ld\n", days);
        hours = hours - (days * 24);
    }
    if (hours > 0)
    {
        printf("Hours: %ld\n", hours);
    }
    do
    {
    printf("Continue? (y/n): ");
    scanf(" %c", &next);
    }
    while (next != 'y' && next != 'Y' && next != 'n' && next != 'N');

    if (next == 'y' || next == 'Y')
    {
        printf("Work in progress\n");
    }

    return 0;


}
