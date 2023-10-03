//check wheather a stident is pass or fail if it required 40% in total and atleast 33% in each of three subject

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int physics, chemistry, maths;
    float total;

    printf("enter your marks in physics: ");
    scanf("%d", &physics);

    printf("enter your marks in chemistry: ");
    scanf("%d", &chemistry);

    printf("enter your marks in maths: ");
    scanf("%d", &maths);

    total = (physics + chemistry + maths) / 3;

    if((physics<33 || chemistry<33 || maths<33)|| total< 40)

{
    printf("sorry, you are fail");
}
else
{
    printf("you are pass. congratulation");
}

return 0;
}
