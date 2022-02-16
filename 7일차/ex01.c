#include <stdio.h>

int main(void) {

    int N;
    printf("학생의 수 : ");
    scanf("%d", &N);
    int student[N];
    int sum = 0;
    double avg = 0.0;
    for(int i = 0; i<N ; i++)
    {
        printf("학생 %d의 성적 : ", i+1);
        scanf("%d", &student[i]);
        sum = sum +student[i];
    }
    avg =sum /N;

    printf("학생 성적의 합계 : %d\n", sum);
    printf("학생 성적의 평균 : %.2f\n", avg);

    return 0;
}