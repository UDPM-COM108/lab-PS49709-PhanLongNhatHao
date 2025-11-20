#include <stdio.h>
#define pi 3.14

int main(){
    //#BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
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
    //#BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
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
    //#Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
     double bankinh,chuvi,dientich;
    printf("Xin chao");
    printf("\nChuong trinh tinh chu vi va dien tich hinh tron");
    printf("\nHay nhap ban kinh:");
    scanf("%lf", &bankinh);
    chuvi = 2 * pi * bankinh;
    dientich = pi * bankinh * bankinh;
    printf("Ket qua cua chu vi hinh tron la: %lf",chuvi);
    printf("\nKet qua cua dien tich hinh tron la: %lf",dientich);
    //#Bài 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
    double toan,ly,hoa,diemtrungbinh;
    printf("Hay nhap diem toan");
    scanf("%lf",&toan);
    printf("Hay nhap diem ly");
    scanf("%lf",&ly);
    printf("Hay nhap diem hoa");
    sccanf("%lf",&hoa);
    diemtrungbinh = (toan * 3 + ly * 2 + hoa * 1)/6;
    printf("Diem trung binh la: %lf",diemtrungbinh);
    // TÍNH CHU VI DIỆN TÍCH 
    int a,b,c,chuvi,dientich;
    printf("Hay nhap a:");
    scanf("%d",&a);
    printf("Hay nhap b:");
    scanf("%d",&b);
    printf("Hay nhap c:");
    scanf("%d",&c);
    chuvi = a + b + c;
    dientich = 1/2 * a * b;
    printf("Chu vi tam giac vuong la:",chuvi);
    printf("Dien tich tam giac vuong la:",dientich);
    return 0;
}