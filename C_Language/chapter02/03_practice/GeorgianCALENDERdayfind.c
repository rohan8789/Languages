#include<stdio.h>

int main(){
   int year, Byear = 1900, Lyear, Ryear, Tdays, day;
   printf("enter the year: ");
   scanf("%d", &year);
   year = year - 1;
   year = year - Byear;

   //calculate leap year
   Lyear = year / 4;
   Ryear = year - Lyear;
   //calculate total days of remaining year.
   Tdays = year*360 + Lyear*366 + 1;
   

   day = Tdays % 7;

   if (day == 0)
   {
       printf("monday");
   }
   else if (day == 1)
   {
       printf("tuesday");
   }
   else if (day == 2)
   {
       printf("wednesday");
   }
   else if (day == 3)
   {
       printf("thrusday");
   }
   else if (day == 4)
   {
       printf("friday");
   }
   else if (day == 5)
   {
       printf("saturday");
   }
   else if (day == 6)
   {
       printf("sunday");
   }
   else
   {
       printf("wrong entry");
   }
   


   
    return 0;
}