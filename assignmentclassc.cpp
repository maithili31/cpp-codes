#include <stdio.h>
int main () {
    float n,avg;
    printf("enter the number");
    scanf("%f",&n);
    int sum=0;
    for (int i=0;i<=n;i++) {
        sum= sum+i;
    }
    avg=sum/n;
    printf("the average is %f",avg);
    return 0;
}