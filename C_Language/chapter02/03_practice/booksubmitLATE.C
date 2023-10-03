#include<stdio.h>

int main()
{
   int n;
   printf("enter the number of days you are late to submit the book: ");
   scanf("%d", &n);

   if (n > 0 && n <= 5)
   {
       printf("pay fine of Rs. 50\n");
   }
   else if (n >= 6 && n <= 10)
   {
       printf("pay fine of Rs. 100\n");
   }
   else if (n > 10 && n <= 29)
   {
       printf("pay fine of Rs. 500\n");
   }
   else if (n > 29)
   {
       printf("your membership for library is cancelled\n");
   }
   else
   {
       printf("invalid input\n");
   }
   
   
   
   
   
    
    return 0;
}
