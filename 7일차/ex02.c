#include <stdio.h>

int main(void) {

    char greet[]="Hello, C~!";
    printf("문자열의 내용 : %s\n", greet);
    printf("문자열의 크기 : %d\n", sizeof(greet));

    char mind[30] = "I love python!";
    printf("%s \n", mind);

    mind[7] = '\0';
    printf("%s\n",mind);
    mind[1] = '\0';
    printf("%s\n",mind);

    return 0;
}