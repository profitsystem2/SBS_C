#include <stdio.h>

int main(void) {

    int arr [2][3]= { {1,2,3},{4,5,6}};
    printf("%d\n",sizeof(arr)/sizeof(int));
    printf("%d\n",sizeof(arr)/sizeof(arr[0])); //1���� �迭 ����� ����
    printf("%d\n",sizeof(arr[0])/sizeof(int)); //2���� �迭 ����� ����

    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0])/ sizeof(int);

    for (int i =0 ; i<row; i++){
        for (int j=0 ; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}