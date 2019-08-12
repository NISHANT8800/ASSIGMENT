#include<stdio.h>
int main()
{
    short int Age;
    int Premium;
    char Health,Lives,Gender;
    printf("Provide The Following Information\n");
    printf(" Your Age\n Your Gender (M/F)\n Your Health Condion (E/P)\n  Where You Lives (C/V)\n");
    scanf("%d%c%c%c",&Age,&Gender,&Health,&Lives);
    if(Age>25&&Age<35)
    {
        if(Gender=='M')
           {
            if(Health=='E'&&Lives=='C')
             {
               Premium=4000;
               printf("Premium=%d \nAnd you can insured for RS. 2 lakhs only  ",Premium);
             }
            else if(Health=='P'&&Lives=='V')
            {
                Premium=6000;
                printf("Premium=%d\nAnd you can insured for RS.10,000 only",Premium);
            }

           }
    }
    else if(Gender=='F')
    {
        if((Age>25&&Age<35)&&Health=='E'&&Lives=='C')
            Premium=3000;
            printf("Premium=%d \nAnd you can insured for RS. 1 lakhs only",Premium);
    }
    else
    {
    	printf("Your not insured for this policy \nsorry ");
	}
return 0;
}
