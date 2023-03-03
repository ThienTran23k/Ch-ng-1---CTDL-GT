#include <stdio.h>

void THISINH_IN(){
	char HoTenTS [30];
	char MaTS [5];
	float DiemToan , DiemLy, DiemHoa , DiemTongCong;
	printf(" Nhap ho ten thi sinh: ");
	scanf("%s",&HoTenTS);
	printf("Nhap Ma so Thi Sinh : ");
	scanf("%s",&MaTS);
	do{
	printf("Nhap diem toan");
	scanf("%f" ,&DiemToan  );
	printf("Nhap diem  ly ");
	scanf("%f" ,&DiemLy );
	printf("Nhap diem  hoa ");
	scanf("%f" ,&DiemHoa );
	}while (DiemToan > 10 || DiemLy > 10 || DiemHoa > 10 );

}
void THISINH_OUT(){
	char HoTenTS [30];
	char MaTS [5];
	float DiemToan , DiemLy, DiemHoa , DiemTongCong;
	DiemTongCong = DiemToan + DiemLy + DiemHoa ;
	printf("Thi sinh : %s \n Ma so : %s \n Co diem toan : %f  \n Ly : %f \n Hoa : %f " ,HoTenTS,MaTS,DiemToan , DiemLy , DiemHoa);
	printf("Tong diem la : %f " , DiemTongCong);
}
int main (){
	THISINH_IN();
	THISINH_OUT();
	return 0 ;
}