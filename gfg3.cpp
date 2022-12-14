#include <stdio.h>
int main () {
    int x,n;
    printf("enter the number of terms");
    scanf("%d",&n);
    int term1=0,term2=1;
    int y=term1+term2;
    printf("The series is %d %d",term1,term2);
    for (int i=3;i<n;++i){
        term1=term2;
        term2=y;
        y=term1+term2;
        printf(" %d ",y);
    }
    return 0;
}