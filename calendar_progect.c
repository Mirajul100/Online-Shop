#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int getfirstdayofyear (int year)
{
    int day = (year * 365 + ((year -1) / 4) - ((year -1) /100) + ((year - 1) / 400)) %7;
    return day;
}
int main ()
{
    // 6 means console color yellow.
    // 0 means console front color black.
    system ("color 60");
    char *monts[] = {"January", "February", "March", "April", "May", "Jun", "July", "August", "September", "October", "November", "December"};
    int i;
    int dayofmonts[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int weekday =0, spacecounter =0;
    int year;
    printf ("\t\t\t  Enter Your Favorite Year : ");
    scanf ("%d",&year);
    printf ("\n   ********************** Welcome to Your favorite year %d ******************\n\n",year);

    // Check leap Year.

    if (year % 4 == 0 && year % 100 != 0 || year %400 == 0)
    {
        dayofmonts[1] = 29;
        printf ("\t\t\t\t Welcome to leap year");

    }
    weekday = getfirstdayofyear(year);

    for (i = 0 ; i < 12; i++)
    {
        printf ("\n\n\n       ------------------------------ %s ------------------------------\n", monts[i]);
        printf ("\n        Sun       Mon       Tue       Wed       Thu       Fri       Sat\n");
        for (spacecounter = 1; spacecounter <= weekday ; spacecounter++)
        {
            printf("          ");
        }
        for (int j = 1 ; j <= dayofmonts[i] ; j++)
        {
            printf("%10d",j);
            weekday++;
            if (weekday > 6)
            {
                weekday=0;
                printf ("\n");
            }
        }

    }
    getch();
    return 0;
}
