#include <stdio.h>

int main(void) {

    int num;

    //무한반복

    while (1){
        printf("1.주문하기, 2.장바구니, 0. 종료 \n");
        printf("메뉴 번호 : ");
        scanf("%d", &num);
        if (num ==0){
            printf("종료합니다.\n");
            break;
        }
        if (num ==1)
            printf("주문되었습니다.\n");
        if (num ==2)
            printf("장바구니에 담았습니다.\n");
        
    }
    return 0;
}