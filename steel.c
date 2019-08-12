#include<stdio.h>
int main()
{
    float Carbon_Contain;
    int Hardness,Tensile_Strength;
    printf("A Certain Grade Is Graded according to following conditions :\n");
    printf("1.Hardness Of Steel :\n");
    scanf("%d",&Hardness);
    printf("2.Carbon Contain In Steel :\n");
    scanf("%f",&Carbon_Contain);
    printf("3.Tensile_Strength Of Steel :\n");
    scanf("%d",&Tensile_Strength);
    if(Hardness>50&&Carbon_Contain<0.7&&Tensile_Strength>5600)
    {
        printf("Grade is : 10");
    }
    else if(Hardness>50&&Carbon_Contain<0.7)
    {
        printf("Grade is : 9");
    }
    else if(Tensile_Strength>5600&&Carbon_Contain<0.7)
    {
        printf("Grade is : 8");
    }
    else if(Hardness>50&&Tensile_Strength>5600)
    {
        printf("Grade is : 7");
    }
        else if(Hardness>50||Carbon_Contain<0.7||Tensile_Strength>5600)
    {
        printf("Grade is : 6");
    }
    else if(Hardness<50&&Tensile_Strength<5600&&Carbon_Contain>0.7)
    {
        printf("Grade is : 5");
    }
    return 0;
}
