//tinh luong thuong thang 13
#include <stdio.h>

float luongthang13(int ikn, int ilv) {
    int luongct = 0;
    float thuong = 0;
    if (ikn < 2) {
        luongct = 10;
    } else if (ikn >= 2 && ikn <= 5) {
        luongct = 20;
    } else {
        luongct = 30;
    }
    if (ilv < 1) {
        thuong = luongct * 0.3;
    } else if (ilv >= 1 && ilv < 2) {
        thuong = luongct / 2;
    } else if (ilv >= 2 && ilv < 5) {
        thuong = luongct;
    } else {
        thuong = luongct * 2;
    }
    return (float) thuong;
}

int main() {
    int ilv, ikn;
    char choice = 'y';
    do {
        printf("nhap vao so nam kinh nghiem\n");
        scanf("%d", &ikn);
        printf("nhap vao so nam lam viec cho cong ty\n");
        scanf("%d", &ilv);
        printf("luong thang thu 13 la %.3f\n", luongthang13(ikn, ilv));
        printf("\n\nban co muon tinh tiep\n");
        printf("nhap phim bat ki de tiep tuc\nnhap n hoac N de thoat chuong trinh\n\n");
        getchar();
        scanf("%c", &choice);
    } while (choice != 'n' && choice != 'N');
    printf("tam biet\n");
    return 0;
}