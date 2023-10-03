/*wap to check whether the entered three sides of triangle is valid or not, 
triangle is valid if sum of two sides is greater than largest of three sides.
*/

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a, b, c;
//     printf("enter first side og the triangle: ");
//     scanf("%d", &a);

//     printf("enter second side of the triangle: ");
//     scanf("%d", &b);

//     printf("enter third side of the triangle: ");
//     scanf("%d", &c);

//     if (a + b > c && b + c > a && a + c > b)
//     {
//         printf("triangle is valid\n");
//     }
//     else
//     {
//         printf("triangle is not valid\n");
//     }

//     return 0;
// }
// #include<stdio.h>

// int main(int argc, char const *argv[])
// {
//     printf("welcome to chandigarh university!!\n");
//     printf("\tMy first C program\n");
//     printf("My name is Rohan\t\t");
//     printf("I am from Punjab\n");
//     printf("\t\tCoding is fun");
//     return 0;
// }

// #include<stdio.h>

// int main(int argc, char const *argv[])
// {
//     int inttype;
//     float floattype;
//     char chartype;
//     double doubletype;

//     printf("size of int: %ld bytes\n", sizeof(inttype));
//     printf("size of float: %ld bytes\n", sizeof(floattype));
//     printf("size of char: %ld bytes\n", sizeof(chartype));
//     printf("size of double: %ld bytes\n", sizeof(doubletype));

//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int j = 4;
//     (!j != 1 ? printf("\nWelcome") : printf("\nGood Bye"));
// }

/*wap to check if the num is perfect number. 6 is a perfect number since 
1,2,3 is divisor of 6 and 1+2+3 is 6.*/

// #include <stdio.h>

// int main()
// {
//     int x, sum = 0;
//     printf("enter your number: ");
//     scanf("%d", &x);

//     for (int i = 1; i < x; i++)
//     {
//         if (x % i == 0)
//         {
//             sum = sum + i;
//         }
//         if (x == sum)
//         {
//             printf("%d is a perfect number\n", x);
//         }
//         else
//         {
//             printf("%d is not a perfect number\n", x);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a=12, b=25;
//     printf("output = %d", a&b);
//     return 0;
// }

// #include<stdio.h>

// int main(int argc, char const *argv[])
// {
//     float x = 5.2;
//     int y;

//     y = (int)x;
//     printf("%d\n", y);

//     return 0;
// }

// # include <stdio.h>

// int main()
// {
//  int i, Number, Sum = 0 ;

//  printf("\n Please Enter any number \n") ;
//  scanf("%d", &Number) ;

//  for(i = 1 ; i < Number ; i++)
//   {
//    if(Number % i == 0)
//      Sum = Sum + i ;
//   }

//  if (Sum == Number)
//     printf("\n %d is a Perfect Number", Number) ;
//  else
//     printf("\n%d is not the Perfect Number", Number) ;

// return 0 ;
// }

// #include<stdio.h>

// int main(int argc, char const *argv[])
// {
//     int x, y, z;
//     printf("enter the number at location C: ");
//     scanf("%d", &x);

//     printf("enter number at the place of D: ");
//     scanf("%d", &y);

//    z=x;
//    x=y;
//    y=z;

//     printf("number at the place of C is: %d\n", x);
//     printf("number at the place of D is: %d\n", y);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     char ch;
//     char str[30];
//     char sen[50];

//     printf("type any alphabet");
//     scanf("%c", ch);
//     printf("type any word");
//     gets(str);
//     printf("type any senctence");
//     // scanf("%s, sen");
//     gets(sen);
//     printf("alpha= %c\n", ch);
//     printf("w0rd= %s\n", str);
//     printf("sent= %s\n", sen);

//     return 0;
// }

// #include<stdio.h>

// int main(int argc, char const *argv[])
// {
//     int x;
//     int i = 0;
//     printf("enter a number: ");
//     scanf("%d", &x);

//     while (x>0)
//     {
//         if (x % 10 == 0)
//         {
//             i++;
//         }
//         x = x/10;
//     }
//     if (i>0)
//     {
//         printf("duck number");
//     }
//     else
//     {
//         printf("not a duck number");
//     }





    
    
//     return 0;
// }


#include<stdio.h>

int main()
{ 
    int a, b, c;
    printf("enter your number: ");
    scanf("%d", &a);

    printf("enter 2nd num: ");
    scanf("%d", &b);

    printf("enter 3rd number: ");
    scanf("%d", &c);

    if (a>b && a>c)
    {
        printf("a is greater\n");
    }

    else if (b>c)
    {
        printf("b is greater\n");
    }
    
    else
    {
        printf("c is greater\n");
    }
    
    


    return 0;
}
