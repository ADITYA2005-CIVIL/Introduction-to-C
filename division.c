//write a C program using division operator
#include<stdio.h>
//function heading
void main(){
//variable declaration
    int var1, var2, quotient;
//output statement (prompt)
    printf("enter the two numbers to be divided\n");
//input statement
    scanf("%d%d", &var1, &var2);
//Assignment statement
    quotient=var1/var2;
//output statement
    printf("%d/%d=%d", var1, var2, quotient);
}
