#include<stdio.h>
int main(){
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0){
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    printf("The sum of digits is: %d", sum);
}