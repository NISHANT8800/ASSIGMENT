#include<stdio.h>
int main()
{
    short int Age;
    int Premium;
    char Health,Lives,Gender;
    printf("Provide The Following Information\n");
    printf(" Your Age\n Your Gender (M/F)\n Your Health Condion (E/P)\n  Where You Lives (C/V)\n");
    scanf("%d%c%c%c",&Age,&Gender,&Health,&Lives);
    if(Gender=='M')
    {
        if(Age>25&&Age<35)
           {
            if(Health=='E'&&Lives=='C')
             {
               Premium=4000;
               printf("Premium=%d",Premium);
             }
            else if(Health=='P'&&Lives=='V')
            {
                Premium=6000;
                printf("Premium=%d",Premium);
            }

           }
    }
    else if(Gender=='F')
    {
        if((Age>25&&Age<35)&&Health=='E'&&Lives=='C')
            Premium=3000;
            printf("Premium=%d",Premium);
    }
return 0;
}

