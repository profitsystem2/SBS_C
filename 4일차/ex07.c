#include <stdio.h>

int main(void) {

    int num, absolute;
    printf("���� �Է�:");
    scanf("%d",&num);

    absolute = num>0? num : -num;
    printf("���� : %d \n", absolute);

    return 0;
}