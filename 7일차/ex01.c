#include <stdio.h>

int main(void) {

    int N;
    printf("�л��� �� : ");
    scanf("%d", &N);
    int student[N];
    int sum = 0;
    double avg = 0.0;
    for(int i = 0; i<N ; i++)
    {
        printf("�л� %d�� ���� : ", i+1);
        scanf("%d", &student[i]);
        sum = sum +student[i];
    }
    avg =sum /N;

    printf("�л� ������ �հ� : %d\n", sum);
    printf("�л� ������ ��� : %.2f\n", avg);

    return 0;
}