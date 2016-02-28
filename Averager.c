/* Name: Tristan Luten
Date: 2/5/2015
Program: Averager-Averages 4 numbers*/
#include<stdio.h>

int main ()
{

    int Count,Num;
    float Aver, Total;


    printf("Welcome to the Averager.\n\n");

    for (Count=1; Count<5; Count++)
    {
        printf("Please enter a number. \n");
        scanf("%d",&Num);
        Total=Total+Num;
    }
    Aver=Total/4;

    printf("The total is %.0f\n",Total);
    printf("The average is %.2f\n",Aver);

    return 0;
}