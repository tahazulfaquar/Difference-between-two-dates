/*program to print difference between two dates*/
#include <stdio.h>
int main()
{
   int day1, month1, year1;
   int day2, month2, year2;
   /* these are the days in the 12 months of an year */
   /*array positions- 00  01  02  03  04  05  06  07  08  09  10  11 */
   int months[100] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


   /* takes first date from user*/
   printf("Enter first date in DD MM YYYY: ");
   scanf("%d %d %d", &day1, &month1, &year1);


   /* we need the days passed before that month in the year so if the user enter's
   5 as the month then we need the total days till 4th month, that 4 is stored in monthindex */
   int monthindex = month1 - 1;


   /* d1 stores the total days */
   int d1 = day1;


   /* let's take an example as the user enters 7 as the month so here I initialized a
   for loop that will run till the 6th month as we are calculating the total days
   passed till that date of that particular year */
   if (year1 % 4 == 0)
   {
       int months[100] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
       months[01] = 29;
   }
   for (int i = 0; i < monthindex; i++)
   {
       d1 = d1 + months[i];
   }


   /* takes second date from user*/
   printf("Enter second date in DD MM YYYY: ");
   scanf("%d %d %d", &day2, &month2, &year2);


   monthindex = month2 - 1;
   int d2 = day2;


   if (year2 % 4 == 0)
   {
       int months[100] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
       months[01] = 29;
   }
   for (int i = 0; i < monthindex; i++)
   {
       d2 = d2 + months[i];
   }


   /* no to calculate the days between the two dates we need the remaining days of the
   first year + the year difference*365 + the days passed in the second date*/
   
   int diff = 365 - d1 + d2;
   int d = year2 - year1;
   if (d > 1)
   {
       /* we need to subtract 1 as if the difference between two years is 1 then the
       days would be calculated using the above conditions only we do need to     add 1*365
       in that case */
       diff += (d - 1) * 365 + d / 4;
   }
   printf("The difference in both dates is: %d\n\n", diff);
   return 0;
}
