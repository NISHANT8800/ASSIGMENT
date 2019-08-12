#include<stdio.h>
int main()
{
    int r,D;
    printf("HOW MANY DAYS YOU OWN THE BOOK (D)\n");
    scanf("%d",&D);
    if(D>6&&D<=10)
    {
        printf("YOU ARE FINED 50 paise \nbecause you are 6-10 days late for returning the book  ");
    }
     if(D>10&&D<30)
    {
        printf("YOU ARE FINED RS.5 \nbecause you are more than 10 days late for returning the book");
    }
     if(D>=30)
    {
        printf("YOUR MEMBERSHIP IS CANCELLED \nbecause you are 30 or more days late for returning the book ");
    }

    return 0;
}
