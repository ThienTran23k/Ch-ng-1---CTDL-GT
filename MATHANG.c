#include <stdio.h>

void inputMATHANG()
{
	char TenMH[20];
	unsigned int DonGia ;
 	unsigned int SLton ;
	
	printf("Nhap ten mat hang :");
	scanf("%s",&TenMH);
	printf("Nhap don gia : ");
	scanf("%d",&DonGia);
	printf("Nhap so luong ton kho : ");
	scanf("%d",&SLton);
}
void outputMATHANG(){
	char TenMH[20];
	int DonGia ;
 	int SLton ;
	printf(" Ten mat hang :%s \n Don gia : %d \n So ton kho con lai : %d \n ",TenMH,DonGia,SLton);
}
int main (){
	inputMATHANG();
	outputMATHANG();
	return 0;
}