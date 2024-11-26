#include <stdio.h>

int main() {
    int day, month;
    printf("Nhap ngay sinh: ");
    scanf("%d", &day);
    printf("Nhap thang sinh: ");
    scanf("%d", &month);
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Ngày hoac tháng khong hop le\n");

    }
    char cung[20];
    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        sprintf(cung, "Bao Binh");
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        sprintf(cung, "Song Ngu");
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        sprintf(cung, "Bach Duong");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        sprintf(cung, "Kim Nguu");
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        sprintf(cung, "Song Tu");
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        sprintf(cung, "Cu Giai");
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        sprintf(cung, "Su Tu");
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        sprintf(cung, "Xu Nu");
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        sprintf(cung, "Thien Binh");
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        sprintf(cung, "Bo Cap");
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        sprintf(cung, "Nhan Ma");
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        sprintf(cung, "Ma Ket");
    } else {
        printf("Ngay thang khong hop le.\n");
        return 1;
    }

    // Hi?n th? cung hoàng d?o
    printf("Cung hoang dao cua ban la: %s\n", cung);

    return 0;
}
