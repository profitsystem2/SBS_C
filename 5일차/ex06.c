#include <stdio.h>

int main(void) {

    int score;
    printf("점수 : ");
    scanf("%d",&score);

    switch (score) {
        case 100:
        case 90:
            printf("성적은 A입니다."); //100이 break 없이 내려오므로 100과 90이 모두 A가 된다.
            break;
        case 80:
        case 70:
            printf("성적은 B입니다.");
            break;
        case 60:
        case 50:
            printf("성적은 C입니다.");
            break;
        default:
            printf("성적은 F입니다.");
            break;
    }
    return 0;
}