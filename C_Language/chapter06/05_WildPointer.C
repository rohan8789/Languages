#include<stdio.h>

int main()
{
    int *p;  //wild pointer
    printf("%d\n", *p);
    return 0;
}

/*A pointer is said to be a wild pointer if it is not being initialized to anything.
  these pointers are not efficient because they may point to some unknown memory
  location which may cause problem in the program and may lead to the crashing 
  of the program*/