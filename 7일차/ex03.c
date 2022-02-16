#include <stdio.h>

int main(void) {

    char str[50];

    printf("문자열을 입력 : ");
    scanf("%s", str);
    printf("입력받은 문자열 : %s \n", str);
    printf("배열의 이름 : %p \n", str);
    printf("주소연산자 : %p \n", &str[0]);
    return 0;
}