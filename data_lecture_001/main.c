/*
 * Team Details:
 * 1)Achintya Vatsraj 1941101
 * 2) Marsh Roiden 1941122
 *
 * Q) A simple Calculater With minimal Features
 *
 */
#include <stdio.h>
#include <process.h>


int add(int,int);
int subs(int,int);
int mul(int,int);
int div(int,int);


int main()
{
    a:
    int num1 = 0,num2 = 0,zrs = 0;
    printf("               Welcome to a simple Calc \n");
    char key;
    fflush(stdout);
    fflush(stdin);
    printf("Enter a  for addition , s for subs , m for multiplication and d for division: \n");
    scanf("%c",&key);
    if(key == 'a')
    {
        printf("Enter 1st Number:");
        scanf("%d",&num1);
        printf("Enter 2nd number:");
        scanf("%d",&num2);
       printf("The Addition Results is %d\n",add(num1,num2));
//       printf("Do you want to Run the Program Again?");
//       char key2;
//       scanf("%c",&key2);
//       if(key == 'y')
//       {
//           goto a;
//       }
//       else if(key == 'n')
//       {
//           exit(0);
//       }
    }
    if(key == 's')
    {
        printf("Enter 1st Number:");
        scanf("%d",&num1);
        printf("Enter 2nd number:");
        scanf("%d",&num2);
        printf("The substraction Results is %d\n",subs(num1,num2));
//        printf("Do you want to Run the Program Again?");
//        char key2;
//        scanf("%c",&key2);
//        if(key == 'y')
//        {
//            goto a;
//        }
//        else if(key == 'n')
//        {
//            exit(0);
//        }

    }
    if(key == 'm')
    {
        printf("Enter 1st Number:");
        scanf("%d",&num1);
        printf("Enter 2nd number:");
        scanf("%d",&num2);
        printf("The Multiplication Results is %d\n",mul(num1,num2));
//        printf("Do you want to Run the Program Again?");
//        char key2;
//        scanf("%c",&key2);
//        if(key == 'y')
//        {
//            goto a;
//        }
//        if (key == 'n')
//        {
//            exit(0);
//        }
    }
    if(key == 'd')
    {
        printf("Enter 1st Number:");
        scanf("%d",&num1);
        printf("Enter 2nd number:");
        scanf("%d",&num2);
        printf("The Division Results is %d\n",div(num1,num2));
//        printf("Do you want to Run the Program Again?");
//        char key2;
//        scanf("%c",&key2);
//        if(key == 'y')
//        {
//            goto a;
//        }
//        else if(key == 'n')
//        {
//            exit(0);
//        }
    }

}

int add(int a , int b)
{
    int c;

    c = a + b;
    return c;


}
int  subs(int a , int b)
{
    int c ;
     c= a - b;

    return c;

}

int mul(int a , int b)
{
    int c;
    c = a*b;
    return c;
}

int div(int a , int b)
{
    int c;
    c = a/b;
    return c;
}