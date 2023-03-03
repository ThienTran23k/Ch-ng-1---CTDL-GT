#include <stdio.h>

void Input_HOCSINH(){
	char TenHS [30];
	unsigned short  DiemToan ;
 	unsigned short  DiemVan ;
	float DTB;
	printf(" Nhap ten hoc sinh : ");
	scanf("%s",&TenHS);
	printf("Nhap diem toan : ");
	scanf("%d",&DiemToan);
	printf("Nhap diem van : ");
	scanf("%d",&DiemVan);
}
void Output_HOCSINH(){
	char TenHS [30];
	unsigned short  DiemToan ;
	unsigned short  DiemVan ;
	float DTB;
	printf("Ten hoc sinh : %s \n",TenHS);
	printf("Diem Toan : %d \n",DiemToan);
	printf("Diem Van : %d \n",DiemVan);
	DTB = (DiemToan + DiemVan) / 2;
	printf("Diem Trung Binh = %f \n" ,DTB);
}
int main (){
	Input_HOCSINH();
	Output_HOCSINH();
	return 0;
}