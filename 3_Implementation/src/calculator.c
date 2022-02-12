#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int s;
    int fact=1;
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
            float a,b,c;
            printf("\nenter the first number:");
            scanf("%f", &a);
            printf("\nenter the second number:");
            scanf("%f", &b);
            c=a+b;
            printf("\nThe addition is: %f ", c);
            break;
            }
            
            case 2:
            {
            float a,b,c;
            printf("\nenter the first number:");
            scanf("%f", &a);
            printf("\nenter the second number:");
            scanf("%f", &b);
            c=a-b;
            printf("\nThe subraction is: %f ", c);
            break;
            }
            
            case 3:
            {
            float a,b,c;
            printf("\nenter the first number:");
            scanf("%f", &a);
            printf("\nenter the second number:");
            scanf("%f", &b);
            c=a*b;
            printf("\nThe multiplication is: %f ", c);
            break;
            }
            
            case 4:
            {
            float a,b,c;
            printf("\nenter the first number:");
            scanf("%f", &a);
            printf("\nenter the second number:");
            scanf("%f", &b);
            c=a/b;
            printf("\nThe division is: %f", c);
            break;
            }
            
            case 5:
            {
            int a,b,c;
            printf("\nenter the first number:");
            scanf("%d", &a);
            printf("\nenter the second number:");
            scanf("%d", &b);
            c=a%b;
            printf("\nThe modulus is: %d ", c);
            break;
            }
            
            case 6:
            {
            int num;
            printf("\nenter the first number:");
            scanf("%d", &num);
            for(int i=1;i<=num;i++)
            {
                fact=fact*i;
            }
            printf("\nThe factorial is: %d ", fact);
            break;
            }
            
            case 7:
            {
            float a,pnum,c;
            printf("\nenter the number:");
            scanf("%1f", &a);
            printf("\nenter the power:");
            scanf("%1f", &pnum);
            c=pow(a,pnum);
            printf("\nThe power is:%1f ", c);
            }
            
            case 8:
            {
            float num,squareroot;
            printf("\nenter the number:");
            scanf("%f", &num);
            squareroot=sqrt(num);
            printf("\nThe squareroot is: %f", squareroot);
            }
            
            case 9:
            {
            float number, result;
            printf("\nenter the number:");
            scanf("%f", &number);
            result=log(number);
            printf("\nThe log value is: %f", result);
            }
        }
    }
    
    else
    {
        printf("\nYou have entered the wrong choice");
        goto start;
    }
}
