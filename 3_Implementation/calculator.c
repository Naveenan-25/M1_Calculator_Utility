#include <stdio.h>
#include <conio.h>
#include <math.h>

void addition();
void subraction();
void multiplication();
void division();
void modulus();
int factorial();
void power();
void squareroot();
void logvalue();


int main()
{
    int s;
    start:
    printf(" \t\t\t\tWelcome to Calculator!!!!! ");
    printf("\n1.Addition \n2.Subraction \n3.Multiplication \n4.Division \n5.Modulus  \n6.Factorial \n7.Power \n8.Squareroot \n9.Log");
    printf("\n\nPlease enter your choice:");
    scanf("%d",&s);
    if(s>=1&&s<=9)
    {
        
        switch(s){
            case 1:
            { 
                addition();
            break;
            }
             
            case 2:
            {
               subraction();
            break;
            }
            
            case 3:
            {
               multiplication();
            break;
            }
            
            case 4:
            {
            division();
            }
            
            case 5:
            {
            modulus();
            }
            
            case 6:
            {
            factorial();
            break;
            }
            
            case 7:
            {
            power();
            break;
            }
            
            case 8:
            {
            squareroot();
            break;
            }
            
            case 9:
            {
           logvalue();
           break;
            }
        }
    }
    
    else
    {
        printf("\nYou have entered the wrong choice");
        goto start;
    }
}
void addition()
{
    float a,b,c;
            printf("\nenter the first number:");
            scanf("%f", &a);
            printf("\nenter the second number:");
            scanf("%f", &b);
            c=a+b;
            printf("\nThe addition is: %f ", c);
}

void subraction()

{
    float a,b,c;
            printf("\nenter the first number:");
            scanf("%f", &a);
            printf("\nenter the second number:");
            scanf("%f", &b);
            c=a-b;
            printf("\nThe subraction is: %f ", c);
}
 
void multiplication()
{
    float a,b,c;
            printf("\nenter the first number:");
            scanf("%f", &a);
            printf("\nenter the second number:");
            scanf("%f", &b);
            c=a*b;
            printf("\nThe multiplication is: %f ", c);
    
}

void division()
{
     float a,b,c;
            printf("\nenter the first number:");
            scanf("%f", &a);
            printf("\nenter the second number:");
            scanf("%f", &b);
            c=a/b;
            printf("\nThe division is: %f", c);
}

void modulus()
{
    int a,b,c;
            printf("\nenter the first number:");
            scanf("%d", &a);
            printf("\nenter the second number:");
            scanf("%d", &b);
            c=a%b;
            printf("\nThe modulus is: %d ", c);
            
}

int factorial()
{
    int num, fact=1; 
            printf("\nenter the first number:");
            scanf("%d", &num);
            for(int i=1;i<=num;i++)
            {
                fact=fact*i;
            }
            printf("\nThe factorial is: %d ", fact);
}

void power()
{
    float a,pnum,c;
            printf("\nenter the number:");
            scanf("%1f", &a);
            printf("\nenter the power:");
            scanf("%1f", &pnum);
            c=pow(a,pnum);
            printf("\nThe power is:%1f ", c);
}
void squareroot()
{
    float num,squareroot;
            printf("\nenter the number:");
            scanf("%f", &num);
            squareroot=sqrt(num);
            printf("\nThe squareroot is: %f", squareroot);
}

void logvalue()
{
     float number, result;
            printf("\nenter the number:");
            scanf("%f", &number);
            result=log(number);
            printf("\nThe log value is: %f", result);
}
