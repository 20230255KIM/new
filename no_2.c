#include <stdio.h>

int main() {
    int n;

    while (1) {
        printf("�Ƕ�̵��� ���̸� �Է��ϼ��� (0 ���ϸ� ���α׷� ����): ");
        scanf_s("%d", &n);

        if (n <= 0) {
            printf("���α׷��� �����մϴ�.\n");
            break;
        }

        for (int i = 1; i <= n; i++) {

            for (int space = 0; space < n - i; space++) {
                printf(" ");
            }


            for (int star = 0; star < 2 * i - 1; star++) {
                printf("*");
            }


            printf("\n");
        }
    }

    return 0;
}
