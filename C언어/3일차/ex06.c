#include <stdio.h>

int main(void) {

    char ch[100];
    int num;
    double fnum;

    printf("문자 : ");
    scanf("%s",&ch);
    printf("정수 : ");
    scanf("%d",&num);
    printf("실수 : ");
    scanf("%lf",&fnum);
    printf("%s %d %lf \n", ch, num, fnum);
    
    return 0;
}