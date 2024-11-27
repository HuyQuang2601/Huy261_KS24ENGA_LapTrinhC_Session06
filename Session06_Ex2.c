#include<stdio.h>

int main(){
	int j;
	int n = 0;
	int k = 0;
	
	for(int i=1; i<=5; i++){
		printf("Moi ban nhap vao so nguyen thu %d\n",i);
		scanf("%d",&j);

		if(j%2==0){
			n++;
		}else
			k++;		
		}
		printf("So luong so chan la: %d\n",n);
		printf("So luong so le la: %d\n",k);
	return 0;
}
