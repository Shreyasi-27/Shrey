#include<stdio.h>
#include<conio.h>
void main(){
    float a,b,c;
    char ch;
    printf("Enter the first number : ");
    scanf("%f",&a);
    printf("Enter user choice operation : ");
    scanf(" %c",&ch);
    printf("Enter the second number : ");
    scanf("%f",&b);
    switch(ch){
        case'+':c=a+b;
        printf("Output is : %f",c);
        break;
        case'-':c=a-b;
        printf("Output is : %f",c);
        break;
        case'*':c=a*b;
        printf("Output is : %f",c);
        break;
        case'/':c=a/b;
        printf("Output is : %f",c);
        break;
        default:printf("Invalid operation");
        break;
    }
    getch();
}