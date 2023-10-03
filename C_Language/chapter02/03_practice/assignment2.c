/*ram mohan and sohan took toan of rs x,y,z
 from the bankon the rate of interest p%, 
 q% & r% for time t1, t2, t3 years resp. calculate
 simple interest they wil pay and who will pay 
 the most using terenary operator*/

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int x, y, z;
//     float p, q, r;
//     float t1, t2, t3;
//     float s1, s2, s3;

//     printf("enter ram's amount of loan, rate and time: ");
//     scanf("%d%f%f", &x, &p, &t1);

//     printf("enter mohan's amount of loan, rate and interest: ");
//     scanf("%d%f%f", &y, &q, &t2);

//     printf("enter sohan's amount of loan, rate and time: ");
//     scanf("%d%f%f", &z, &r, &t3);

//     s1 = (x * p * t1) / 100;
//     s2 = (y * q * t2) / 100;
//     s3 = (z * r * t3) / 100;

//     printf("simple interest on ram is: %f\n ", s1);
//     printf("simple interest on mohan is: %f\n", s2);
//     printf("simple interest on sohan is: %f\n", s3);

//     printf("maximum interest paid by: ");
//     s1 > s2?(s1 > s3? printf("ram") : printf("sohan"))
//      : (s2 > s3? printf("mohan") : printf("sohan"));

//     return 0;
// }

/*Inside the CPU, mathematical operations like addition, subtraction,
 multiplication and division are done in bit-level. To perform bit-level 
 operations in C programming, bitwise operators are used. Apply the 
 knowledge you gained while learning bitwise operators.
Write a program to input two integers from user by using single 
scanf. Compute and display the value for
 a& b,
a| b, 
a ^ b.*/

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int a, b;
//     printf("input two integer number: ");
//     scanf("%d%d", &a, &b);

//     printf("value of a&b is: %d\n", a & b);
//     printf("\nvalue of a|b is: %d", a | b);
//     printf("\nvalue of a^b is %d\n", a ^ b);
//     return 0;
// }

/*Write a C program to find out year in which Mr. Kavi
 was born from the following information.
a)    Kavi is m years younger than his mother.
b)    Kavi’s brother who born in year y(1900<=y<=2019) is n years younger to his mother
c)    If Kavi’s brother is reading in class r then On the basis
     of your common sense also predict  In which class Kavi is reading?*/

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int m, y, n, r;
//     printf("value of m, y(1900<y<2019), n & r(12<r<1): ");
//     scanf("%d%d%d%d", &m, &y, &n, &r);

//     int yob, class;
//     yob = y + m - n;
//     printf("Mr. kavi's year of birth is %d\n", yob);

//     if (r <= 12 && r >= 1)
//     {
//         class = r + n - m;
//         if (class < 1)
//         {
//             printf("mr. kavi is in pre primary\n");
//         }
//         else if (class > 12)
//         {
//             printf("mr. kavi is in university or college");
//         }
//         else
//         {
//             printf("mr. kavi is in class %d\n", class);
//         }
//     }

//     return 0;
// }

/*If last day of mth month of the year is
 Friday then find out nth day(1<=n<=31)
  of the same month .*/

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int day, month;
//     printf("enter the day you want to find: ");
//     scanf("%d", &day);
//     printf("enter the month: ");
//     scanf("%d", &month);

//     if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//     {
//         if ((31 - day) % 7 == 0)
//             printf("entered day is friday");
//         if ((31 - day) % 7 == 1)
//             printf("entered day is thursday");
//         if ((31 - day) % 7 == 2)
//             printf("entered day is wednesday");
//         if ((31 - day) % 7 == 3)
//             printf("entered day is tuesday");
//         if ((31 - day) % 7 == 4)
//             printf("entered day is monday");
//         if ((31 - day) % 7 == 5)
//             printf("entered day is sunday");
//         if ((31 - day) % 7 == 6)
//             printf("entered day is saturday");
//     }
//     if (month == 4 || month == 6 || month == 9 || month == 11)
//     {
//         if ((30 - day) % 7 == 0)
//             printf("entered day is friday");
//         if ((30 - day) % 7 == 1)
//             printf("entered day is thursday");
//         if ((30 - day) % 7 == 2)
//             printf("entered day is wednesday");
//         if ((30 - day) % 7 == 3)
//             printf("entered day is tuesday");
//         if ((30 - day) % 7 == 4)
//             printf("entered day is monday");
//         if ((30 - day) % 7 == 5)
//             printf("entered day is sunday");
//         if ((30 - day) % 7 == 6)
//             printf("entered day is saturday");
//     }
//     if (month == 2)
//     {
//         if ((28 - day) % 7 == 0)
//             printf("entered day is friday");
//         if ((28 - day) % 7 == 1)
//             printf("entered day is thursday");
//         if ((28 - day) % 7 == 2)
//             printf("entered day is wednesday");
//         if ((28 - day) % 7 == 3)
//             printf("entered day is tuesday");
//         if ((28 - day) % 7 == 4)
//             printf("entered day is monday");
//         if ((28 - day) % 7 == 5)
//             printf("entered day is sunday");
//         if ((28 - day) % 7 == 6)
//             printf("entered day is saturday");
//     }

// return 0;
// }

/*In a class of N students where girls and boys ratio
is p:q Savita ranked rth from the top. If there are m (m<r)
boys ahead of Savita, how many girls are after her rank ?*/

// #include <stdio.h>
// int main()
// {
//     int n, p, q, m, r, x, y, ratio, num_girls, num_boys;
//     printf(" enter total number of student: ");
//     scanf("%d", &n);

//     printf("enter the ratio p:q: ");
//     scanf("%d %d", &p, &q);

//     num_girls = (p * n) / (p + q);
//     printf("\ntotal number of girls are : %d", num_girls);

//     num_boys = (q * n) / (p + q);
//     printf("\n total number of boys are : %d", num_boys);


//     printf("\n Enter savita's position from top : ");
//     scanf("%d", &r);
//     printf("\n enter number of boys ahead of her : ");
//     scanf("%d", &m);

//     y = r - m;
//     printf("\n number of girls ahead of her: %d", y);
//     x = num_girls - y;
//     printf("\n number of girls behind her: %d", x);

//     return 0;
// }