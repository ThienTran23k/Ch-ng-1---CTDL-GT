#include <stdio.h>

void inputNHANVIEN()
{
	char MaNV[5];
	char TenNV [30] ;
 	float LuongNV ;
	
	printf("Nhap ten nhan vien : ");
	scanf("%s",&TenNV);
	printf("Nhap ma nhan vien : ");
	scanf("%s",&MaNV);
	printf("Nhap luong nhanh vien : ");
	scanf("%f",&LuongNV);
}

void outputNHANVIEN(){
char MaNV[5];
	char TenNV [30] ;
 	float LuongNV ;
	printf(" Nhan vien :%s \n Ma so : %s \n Co luong la : %f \n ",TenNV,MaNV,LuongNV);
}

int main (){
	inputNHANVIEN();
	outputNHANVIEN();
	return 0;
}