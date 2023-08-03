#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
It first copies the string "Saturday March 25 1989" into the dtm variable. The sscanf() function is then used to extract and assign the values from dtm to the weekday, month, day, and year variables respectively. The printf() function then prints these values in the format "March 25, 1989 = Saturday".
*/
int main()
{
   int day, year;
   char weekday[20], month[20], dtm[100];

   strcpy( dtm, "Saturday March 25 1989" );
   sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year );

   printf("%s %d, %d = %s\n", month, day, year, weekday );

   return(0);
}
