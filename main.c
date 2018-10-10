#include <stdio.h>
#include <stdlib.h>

float tinhluongthang13(int a, int b) {
    float luongchinhthuc;
    return (luongchinhthuc);

}


int main() {
    int a, b;
    printf("Vui long nhap vao so nam kinh nghiem: ");
    scanf("%d", &a);
    printf("Vui long nhap vao so nam cong hien: ");
    scanf("%d", &b);
    float luongchinhthuc,luongthuongthang13;
    if ((a < 2) && (b < 1)) {
        luongchinhthuc = 10;
        tinhluongthang13(a,b) == (luongchinhthuc * 30) / 100;
    }
    if ((a < 2) && (b > 1) && (b < 2)) {
        luongchinhthuc = 10;
        luongthuongthang13 = (luongchinhthuc * 50) / 100;
    }
    if ((a > 2) && (a < 5) && (b > 2) && (b < 5)) {
        luongchinhthuc = 20;
        luongthuongthang13 = luongchinhthuc;
    }
    if ((a > 5) && (b >5)) {
        luongchinhthuc = 30;
        luongthuongthang13 = (luongchinhthuc * 2);
    }
        printf("Luong thuong thang 13 se la %2f trieu", tinhluongthang13(a, b));

    return 0;
}