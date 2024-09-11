#include<stdio.h>

int main(){
    int n0;
    int n1;
    int sum;

    printf("Input two numbers to be added.\n");
    scanf("%d", &n0);
    scanf("%d", &n1);

    sum = n0 + n1;
    printf("The sum of your two numbers is: %d", sum);

    return 0;
}
