//you had food in a restra, now give rating to restra accordig to your experience

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int rating;
    printf("enter rating as per your experience");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("rating is 1, horrible experience\n");
        break;
    case 2:
        printf("rating is 2, you need to improve\n");
        break;
    case 3:
        printf("rating is 3, it was ok\n");
        break;
    case 4:
        printf("rating is 4, thanks for warm welcome\n");
        break;
    case 5:
        printf("rating is 5, impressive hospitality\n");
        break;
        default:
        printf("invalid input\n");
        break;
    }
    return 0;
}
