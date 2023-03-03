	#include <stdio.h>

void inputTinh()
{
	unsigned short MaTinh;
	char TenTinh[30];
	float DienTich;
	printf("Nhap ma tinh: ");
   scanf("%d",&MaTinh) ;
   printf("Nhap ten tinh :");
   scanf("%s",&TenTinh);
	   
   printf("Nhap vao dien tich cua tinh : ");
   scanf("%f",&DienTich);
   
}

void outputTinh()
{
	unsigned short MaTinh;
	char TenTinh[30];
	float DienTich;
	 printf("==> Tinh %s | Ma ten - %d | Dien tich la : %f Km2 " ,TenTinh,MaTinh,DienTich);
}
int main()
{
	inputTinh();
	outputTinh();
   	return 0;
}