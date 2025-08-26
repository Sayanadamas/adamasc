#include<stdio.h>
int main(){
    int n,p;
    printf("Enter your number=",n);
    scanf("%d",&n);
    p=(n-(n/10)*10);
    printf("The last digit is=%d\n",p);
    printf("The last digit is=%d",n%10);
    return 0;
}