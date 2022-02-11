#include <stdio.h>

int main(void) {

    int num1 = 20, num2 = 10;
    int result;

    result =1 && 1;
    printf("result 1: %d \n", result);

    result = num1 == 20 && num2 == 30;
    printf("result 2: %d \n", result);

    result = 0 || 1;
    printf("result 3: %d \n", result);

    result = 0 || 0;
    printf("result 4: %d \n", result);

    printf("result 5: %d \n", !0);
    printf("result 6: %d \n", !1);
    

    return 0;
}
