/*Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/
#include<stdio.h>
int main()      
{  
    int n;    
    printf("Enter an integer: ");    
    scanf("%d", &n);    
    if(n >= 0)    
    {    
        if(n == 0)    
            printf("You entered 0.");    
        else    
            printf("You entered a positive integer.");    
    }    
    else    
        printf("You entered a negative integer.");    
    return 0;  
}