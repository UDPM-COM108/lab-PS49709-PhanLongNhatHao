#include<stdio.h>
#include<math.h>

int main(){
     int choice;
    printf("\nMenu chon chuong trinh");
    printf("\n1. Chuong trinh tinh hoc luc");
    printf("\n2. Giai phuong trinh bac nhat");
    printf("\n3. Giai phuong trinh bac hai");
    printf("\n4. Chuong trinh tinh tien dien");
    printf("\n5. Thoat");
    printf("\nXin hay chon chuong trinh:");
    scanf("%d",&choice);
    switch(choice){
         case 1: 
         //# Bài 2: Giải phương trình bậc nhất
         double diemtrungbinh;
        printf("Xin chao");
        printf("\nChuong trinh tinh hoc luc");
        printf("\nHay nhap diem trung binh cua sinh vien tu 0 den 10:");
        scanf("%lf",&diemtrungbinh);
        printf("Diem trung binh cua ban la: %.1f",diemtrungbinh);
        //Tinh hoc luc
        if(diemtrungbinh>=9){
            printf("\nHoc luc xuat sac");
        }else if(diemtrungbinh>=8 && diemtrungbinh<9){
            printf("\nHoc luc gioi");
        }else if(diemtrungbinh>=6.5 && diemtrungbinh<8){
            printf("\nHoc luc kha");
        }else if(diemtrungbinh>=5 && diemtrungbinh<6.5){
            printf("\nHoc luc trung binh");
        }else if(diemtrungbinh>=3.5 && diemtrungbinh<5){
            printf("\nHoc luc yeu");
        }else{
            printf("\nHoc luc kem");
        }
        break;
        case 2:
        //# Bài 2: Giải phương trình bậc nhất
        int a,b;
        printf("\nChuong trinh giai phuong trinh bac nhat");
        printf("\nHay nhap gia tri a:");
        scanf("%d",&a);
        printf("Hay nhap gia tri b:");
        scanf("%d",&b);
        //Phuong trinh bac nhat
        if(a==0){
            if(b==0){
                printf("Phuong trinh VSN");
            }else{
                printf("Phuong trinh vo nghiem");
            }
        }else{
            int x = -b / a;
            printf("Phuong trinh co 1 nghiem: %d",x);
        }
        break;
        case 3:
        //# Bài 3: Giải Phương trình bậc 2
         int a1,b1,c;
        printf("\nChuong trinh giai phuong trinh bac hai");
        printf("\nHay nhap gia tri a:");
        scanf("%d",&a1);
        printf("Hay nhap gia tri b:");
        scanf("%d",&b1);
        printf("Hay nhap gia tri c:");
        scanf("%d",&c);
        //Phương trình thành bx + c = 0
        if(a1 == 0){
            if(b1 == 0){
                if(c == 0){
                    printf("Phuong trinh VSN");
                }else{
                    printf("Phuong trinh vo nghiem");
                }
            }else{
                int x = -c / b1;
                printf("Phuong trinh co 1 nghiem: %d",x);
            }
            //Phuong trinh bac 2
        }else{
            int delta = b1 * b1 - 4 * a1 * c;
            if(delta<0){
                printf("Phuong trinh vo nghiem");
            }else if(delta == 0){
                int x = -b1 / (2 * a1);
                printf("Phuong trinh co nghiem kep x: %d",x);
            }else{
                int x1 = (-b1 + sqrt(delta))/(2 * a1);
                int x2 = (-b1 - sqrt(delta))/(2 * a1);
                printf("Phuong trinh co 2 nghiem rieng biet:");
                printf("\nx1 = %d",x1);
                printf("\nx2 = %d",x2);
            }
        }
        break;
        case 4:
        //# Bài 4: Xây dựng chương trình tính tiền điện
        int sodien;
        double bac1,bac2,bac3,bac4,bac5,bac6;
        printf("\nChuong trinh tinh tien dien");
        printf("\nHay nhap so dien tieu thu hang thang(kWh):");
        scanf("%d",&sodien);
        if(sodien<50){
            bac1 = sodien * 1.678;
            printf("So tien dien ban can dong la: %.1fVND",bac1);
        }else if(sodien>50 && sodien<=100){
            bac2 = sodien * 1.734;
            printf("So tien dien ban can dong la: %.1fVND",bac2);
        }else if(sodien>100 && sodien<=200){
            bac3 = sodien * 2.014;
            printf("So tien dien ban can dong la: %.1fVND",bac3);
        }else if(sodien>200 && sodien<=300){
            bac4 = sodien * 2.536;
            printf("So tien dien ban can dong la: %.1fVND",bac4);
        }else if(sodien>300 && sodien<=400){
            bac5 = sodien * 2.834;
            printf("So tien dien ban can dong la: %.1fVND",bac5);
        }else{
            bac6 = sodien * 2.927;
            printf("So tien dien ban can dong la: %.1fVND",bac6);
        }
        break;
        case 5: 
        printf("Thoat chuong trinh");
        break;
        default:
        printf("Ban chon sai, vui long chon lai");
    }
}