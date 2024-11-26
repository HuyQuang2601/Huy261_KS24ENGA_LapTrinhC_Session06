#include <stdio.h>

int main(){
	int month,a;
	float money,laiSuat,tienLai,tienNhan;
	printf("So tien gui ngan hang: ");
	scanf("%f", &money);
	printf("Lai suat thang: ");
	scanf("%f", &laiSuat);
	printf("So thang gui: ");
	scanf("%d", &month);
	tienNhan = money;
	for(a=1 ; a <= month; a++){
		tienNhan += tienNhan * (laiSuat/100) ;
		tienLai = tienNhan - money;
	
		}
		printf("Tien lai sau %d thang nhan duoc la %.1f\n", month, laiSuat);
		printf("Tien nhan duoc sau %d thang la: %.1f", month,tienNhan);

	}	
