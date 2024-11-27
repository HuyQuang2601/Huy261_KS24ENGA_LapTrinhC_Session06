#include <stdio.h>

int main(){
	int month,year;
	printf("Nhap so nam: ");
	scanf("%d", &year);
	printf("Nhap so thang: ");
	scanf("%d", &month);
	if(year>=2000){
		switch(month){
			case 1: 
			case 3: 
			case 5: 
			case 7: case 8:
			case 10:
			case 12:
				printf("Thang nay co 31 ngay");
				break;
			case 4: 
			case 6: 
			case 9: 
			case 11:
				printf("Thang nay co 30 ngay");
				break;
			case 2:
				if(year%4==0 && year%100!=0 || year%400==0){
				printf("Thang nay co 29 ngay");
				break;
				}else{
				printf("Thang nay co 28 ngay");
				break;
				}
		}
	}else{
		printf("Nam khong hop le");
	}
}
