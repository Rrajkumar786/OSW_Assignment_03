// Develop a program to display each digit, starting with the rightmost digit.
// Your program should also determine whether or not the number is divisible by 9.

#include<stdio.h>
void main(){
    int n,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        int d = n%10;
        printf("%d\n",d); // Displaying each digit
        s=s+d;
        n=n/10;
    }
    if(s%9==0){
        printf("The number is divisible by 9");
    }
    else{
        printf("The number is not divisible by 9");
    }
}
