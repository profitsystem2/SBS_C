#include <stdio.h>

int main(void) {

    int score = 0;
    char grade ;
    printf("���� : ");
    scanf("%d",&score);
    if (score>=90 && score < 100){
        grade = 'A';
    }
    if (score >=80&& score <90){
        grade ='B';
    }
    if (score >=70&& score <80){
        grade ='C';
    }
    if (score >=60&& score <70){
        grade ='D';
    }
    if (score <60){
        grade ='F';
    }
    printf("����� %c�Դϴ�.",grade);
    return 0;
}