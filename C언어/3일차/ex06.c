#include <stdio.h>

int main(void) {

    char ch[100];
    int num;
    double fnum;

    printf("���� : ");
    scanf("%s",&ch);
    printf("���� : ");
    scanf("%d",&num);
    printf("�Ǽ� : ");
    scanf("%lf",&fnum);
    printf("%s %d %lf \n", ch, num, fnum);
    
    return 0;
}