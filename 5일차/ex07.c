#include <stdio.h>

int main(void) {

    int i = 1;
    int sum = 0;

    while(i<=10){
        sum +=i;
        i++;
    }
    printf("1���� 10���� �� ���� %d�Դϴ�.",sum);
    return 0;
}