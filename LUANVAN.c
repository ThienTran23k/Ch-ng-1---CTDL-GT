#include <stdio.h>

void Nhap_LUANVAN(){
	char MaLV [10];
	char TenLV[100];
	char SVThucHien [30];
	char GVHuongDan [30];
	unsigned short NamThucHien;
	printf("Nhap ma luan van : ");
	scanf("%s",&MaLV);
	printf("Nhap ten luan van : ");
	scanf("%s",&TenLV);
	printf("Nhap ten sinh vien thuc hien luan van : ");
	scanf("%s",&SVThucHien);
	printf("Nhap ten Giang Vien huong dan : ");
	scanf("%s",&GVHuongDan);
	printf("Nhap nam thuc hien : ");
	scanf("%d",&NamThucHien);
}
void Xuat_LUANVAN(){
	char MaLV [10];
	char TenLV[100];
	char SVThucHien [30];
	char GVHuongDan [30];
	unsigned short NamThucHien;
	printf(" Ma luan van : %s \n Ten bai luan van : %s \n Ten sinh vien thuc hien bai luan van : %s \n Ten giang vien huong dan : %s \n Nam thuc hien : %d ",MaLV,TenLV,SVThucHien,GVHuongDan ,NamThucHien );	
}
int main() {
	Nhap_LUANVAN();
	Xuat_LUANVAN();
	return 0 ;
}