#include <stdio.h>

int main(){
	int arr[100];
	int gioihan,vitri;
	
	printf("Ban muon nhap bao nhieu gia tri : ");
	scanf("%d",&gioihan);
	
	for(int i=0;i<gioihan;i++){
		printf("Moi ban nhap gia tri : ");
		scanf("%d",&arr[i]);
	}
	printf("Chuoi gia tri ban da nhap vao\n");
	
	for(int i=0;i<gioihan;i++){
		printf(" %d ",arr[i]);
	}
	
	printf("\nBan co muon xoa ki tu nao trong chuoi ki tu ban vua tao : ");
	scanf("%d",&vitri);
	
	while(vitri<0 || vitri > gioihan){
		printf("Vi tri khong hop le vui long nhap lai vi tri : ");
		scanf("%d",&vitri);
	}
	
	for(int i=vitri;i<gioihan;i++){
		arr[i]=arr[i+1];
	}
	
	printf("Chuoi gia tri sau khi xoa gia tri theo yeu cau : ");
	for(int i=0;i<gioihan-1;i++){
		printf(" %d ",arr[i]);
	}
	return 0;
}
