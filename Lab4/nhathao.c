#include<stdio.h>
void trungbinh(){
    //#BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
    int min,max;
    printf("Nhap min:");
    scanf("%d",&min);
    printf("Nhap max:");
    scanf("%d",&max);
    int tong = 0,biendem = 0,trungbinh = 0;
    //Chuong trinh tinh trung binh tong cac so tu nhien chia het cho 2
    for(int i=min;i<=max;i++){
        if(i % 2 == 0){
            tong += i;
            biendem++;
        }
    }
    if(biendem == 0){
        printf("Khong co so chia het cho 2 tu %d den %d",min,max);
    }else{
        trungbinh = tong/biendem;
        printf("Trung binh tong cua cac so tu nhien chia het cho 2 tu %d den %d la: %d",min,max,trungbinh);
    }
}
void nguyento(){
    //#Bài 2: XÁC ĐỊNH SỐ NGUYÊN TỐ
    int x,i,count=0;
    printf("Nhap so x:");
    scanf("%d",&x);
    //Chuong trinh so nguyen to
    for(i=2;i<x;i++){
        if(x%i ==0){
            count++;
        }
    }
    if(count ==0){
        printf("x la so nguyen to");
    }else{
        printf("x khong phai so nguyen to");
    }
} 
void chinhphuong(){
    //#Bài 3: XÁC ĐỊNH SỐ CHÍNH PHƯƠNG
    int x1,i1,count1=0;
    printf("Nhap so x:");
    scanf("%d",&x1);
    //Chuong trinh so chinh phuong 
    for(i1=1;i1<=x1;i1++){
        if(i1*i1 ==x1){
            printf("x la so chinh phuong");
            break;
        }else{
            printf("x khong phai so chinh phuong");
            break;
        }
    }
}

int main(){
    //XÂY DỰNG MENU CHƢƠNG TRÌNH CHO 3 BÀI TẬP TRÊN
    int choice;
    do{
        printf("\nMenu chon chuc nang");
        printf("\nChuc nang 1: Tinh trung binh tong");
        printf("\nChuc nang 2: Tim so nguyen to");
        printf("\nChuc nang 3: Tim so chinh phuong");
        printf("\nChuc nang 4: Thoát");
        printf("\nXin moi chon chuc nang (1,2,3,4):");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            trungbinh();
            break;
            case 2:
            nguyento();
            break;
            case 3:
            chinhphuong();
            break;
            case 4:
            printf("Hen gap lai");
            break;
            default:
            printf("Chuc nang ban chon khong co, ban vui long chon lai chuc nang");
        }
    }while(choice!=4);
    return 0;
}