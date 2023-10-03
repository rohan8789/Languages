#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
   char *Name;
   int Roll;
   int age;
   double Marks;
};

int main()
{
   int i = 0, n = 3;

   struct Student student[n];

   student[0].Roll = 1;
   student[0].Name = "ROHAN";
   student[0].age = 20;
   student[0].Marks = 91.50;

   student[1].Roll = 7;
   student[1].Name = "SAMEER";
   student[1].age = 20;
   student[1].Marks = 87.84;

   student[2].Roll = 11;
   student[2].Name = "AMAN";
   student[2].age = 4;
   student[2].Marks = 89.94;

   printf("Student Records:\n\n");
   for (i = 0; i < n; i++)
   {
      printf("Name = %s\n", student[i].Name);
      printf("Roll Number = %d\n", student[i].Roll);
      printf("Age = %d\n", student[i].age);
      printf("Total Marks = %0.2f\n\n", student[i].Marks);
   }

   return 0;
}