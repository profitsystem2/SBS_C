#include <stdio.h>

int main(void) {

    char str[50];

    printf("���ڿ��� �Է� : ");
    scanf("%s", str);
    printf("�Է¹��� ���ڿ� : %s \n", str);
    printf("�迭�� �̸� : %p \n", str);
    printf("�ּҿ����� : %p \n", &str[0]);
    return 0;
}