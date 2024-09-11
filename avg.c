#include<stdio.h>

int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int avg;
    avg = (arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6]+arr[7]+arr[8]+arr[9])/10;
    printf("The average of the values of the array is: %d", avg);
    return 0;
}
