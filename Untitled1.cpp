#include <stdio.h>

int main() {
    int array[100];
    int n, i, value, position;
    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them (0 den %d): ", n);
    scanf("%d", &position);
    if (position >= 0 && position <= n) {
        for (i = n; i > position; i--) {
            array[i] = array[i - 1];
        }
        array[position] = value;
        n++;
        printf("Mang sau khi chen: \n");
        for (i = 0; i < n; i++) {
            printf("%d ", array[i]);
        }
    } else {
        printf("Vi tri khong hop le!\n");
    }
    return 0;
}

