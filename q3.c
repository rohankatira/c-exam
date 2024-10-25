//write a program that define a function to reversed a three degit number
#include<stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
