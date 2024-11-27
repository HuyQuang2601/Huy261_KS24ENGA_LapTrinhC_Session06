#include<stdio.h>

int main(){
	int num;
	int sum = 0;
	
	for(int i = 1; i<=5;i++){
		printf("Moi ban nhap vao so nguyen thu %d\n",i);
		scanf("%d",&num);
		if(num%2!=0){
			sum += num;
		}
	}	
	printf("Tong cac so le la: %d",sum);
}
