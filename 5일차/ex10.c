#include <stdio.h>

int main(void) {

    for (int i = 1; i<10 ; i++){
        printf("%d ", i);
    }
    printf("\n");
    int sum = 0;
    for(int i =1; i<=10 ; i++){
        sum +=i;
    }
    printf("гу╟Х : %d \n", sum);
    return 0;
}