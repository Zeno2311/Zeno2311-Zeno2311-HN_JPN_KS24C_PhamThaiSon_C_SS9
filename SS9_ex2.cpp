#include <stdio.h>

int main(){
	int mang[100];
	int gioihan,vitri,giatrimoi;
	
	printf("Ban muon tao mang gom bao nhieu phan tu : ");
	scanf("%d",&gioihan);
	
	for(int i=0;i<gioihan;i++){
		printf("Moi ban nhap gia tri : ");
		scanf("%d",&mang[i]);
	}
	printf("Mang ban da nhap gia tri : ");
	for(int i=0;i<gioihan;i++){
		printf("%d ",mang[i]);
	}
	printf("\nBan muon sua gia tri tai vi tri nao trong mang (0 den %d) : ",gioihan);
	scanf("%d",&vitri);
	printf("Moi ban nhap gia tri ban muon sua trong mang : ");
	scanf("%d",&giatrimoi);
	
	mang[vitri]=giatrimoi;
	printf("Mang sau khi sua gia tri tai vi tri %d la :\n",vitri);
	for(int i=0;i<gioihan;i++){
		printf(" %d ",mang[i]);	
	}
	return 0;
}
