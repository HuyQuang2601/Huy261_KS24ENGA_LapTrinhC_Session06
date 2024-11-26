#include <stdio.h>

int main(){
	int a,i;
	printf("Nhap 1 so nguyen: ");
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		if(a%i==0){
			printf("Uoc cua %d la: %d \n",a, i);
		}
	}
}
