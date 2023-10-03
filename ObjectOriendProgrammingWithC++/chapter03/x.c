#include<stdio.h>
#include<math.h>

int main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    z = abs(z-y);
    z = abs(z-x);
    if(abs(z-y)>abs(z-x))
    {
        printf("%d catA will eat the mouse: ", abs(z-x));
    } 
    else
    {
        printf("%d catB will eat the mouse: ", abs(z-y));
    }

}