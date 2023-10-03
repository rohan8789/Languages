#include<stdio.h>
 
 int main(int argc, char const *argv[])
 {
     int maths, physics;
     printf("enter your marks in maths");
     scanf("%d", &maths);

     printf("enter your marks in physics: ");
     scanf("%d", &physics);

     if (maths>=33 && physics >= 33)
     {
         printf("you got a gift worth 45");
     }
     else if (maths>=33 && physics<33)
     {
         printf("you got gift worth 15");
     }
     else if (physics >=33 && maths<33 )
     {
         printf("here your gift worth 15");
     }
     

     return 0;
 }
 