#include <stdio.h>

int main(void) {

    int num;

    //���ѹݺ�

    while (1){
        printf("1.�ֹ��ϱ�, 2.��ٱ���, 0. ���� \n");
        printf("�޴� ��ȣ : ");
        scanf("%d", &num);
        if (num ==0){
            printf("�����մϴ�.\n");
            break;
        }
        if (num ==1)
            printf("�ֹ��Ǿ����ϴ�.\n");
        if (num ==2)
            printf("��ٱ��Ͽ� ��ҽ��ϴ�.\n");
        
    }
    return 0;
}