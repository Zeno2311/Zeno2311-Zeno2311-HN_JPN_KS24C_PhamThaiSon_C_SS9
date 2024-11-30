#include <stdio.h>

int main(){
	int arr[100];
	int gioihan,vitri,somoi;
	
	printf("Ban muon nhap bao nhieu ki tu vao mang (Tu 0 den 100): ");
	scanf("%d",&gioihan);
	while(gioihan>100){
		printf("Da vuot qua so luong dinh dang vui long nhap lai : ");
		scanf("%d",&gioihan);
	}
	
	for(int i=0;i<=gioihan-1;i++){
		printf("Xin moi ban nhap ki tu : ");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<gioihan;i++){
		printf(" %d ",arr[i]);
	}

	printf("\nNhap gia tri muon them vao mang : ");
	scanf("%d",&somoi);
	printf("Nhap vi tri ban muon them ki tu (0 den %d) : ",gioihan);
	scanf("%d",&vitri);
	while(vitri<0 || vitri > gioihan){
		printf("Vi tri khong hop le vui long nhap lai vi tri : ");
		scanf("%d",&vitri);
	}
	for(int i=gioihan;i>vitri;i--){
		arr[i]=arr[i-1];
	}
	
	arr[vitri]=somoi;
	
	printf("Mang sau khi ban da them phan tu la : ");
	for(int i=0;i<gioihan+1;i++){
		printf(" %d ",arr[i]);
	}
	
	return 0;
}
