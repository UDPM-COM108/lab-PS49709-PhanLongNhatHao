//#BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
#include <stdio.h>

int main(){
    int x,y;
    char tong,hieu;
    printf("Xin chao");
    printf("\nChuong trinh tinh tong va hieu");
    printf("\nNhap so x:");
    scanf("%d",&x);
    printf("Nhap so y:");
    scanf("%d",&y);
    tong = x + y;
    hieu = x - y;
    printf("Ket qua tong la: %d",tong);
    printf("\nKet qua hieu la: %d",hieu);
    return 0;
}
//#BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
#include <stdio.h>

int main(){
    double chieudai,chieurong,chuvi,dientich;
    printf("Xin chao");
    printf("\nChuong trinh tinh chu vi va dien tich hinh chu nhat");
    printf("\nHay nhap chieu dai:");
    scanf("%lf", &chieudai);
    printf("Hay nhap chieu rong:");
    scanf("%lf", &chieurong);
    chuvi = (chieudai + chieurong)*2;
    dientich = chieudai * chieurong;
    printf("Ket qua cua chu vi hinh chu nhat la: %.2f",chuvi);
    printf("\nKet qua cua dien tich hinh chu nhat la: %.2f",dientich);
    return 0;
}
//#Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
#include <stdio.h>
#define pi 3.14
int main(){
    double bankinh,chuvi,dientich;
    printf("Xin chao");
    printf("\nChuong trinh tinh chu vi va dien tich hinh tron");
    printf("\nHay nhap ban kinh:");
    scanf("%lf", &bankinh);
    chuvi = 2 * pi * bankinh;
    dientich = pi * bankinh * bankinh;
    printf("Ket qua cua chu vi hinh tron la: %lf",chuvi);
    printf("\nKet qua cua dien tich hinh tron la: %lf",dientich);
    return 0;
}