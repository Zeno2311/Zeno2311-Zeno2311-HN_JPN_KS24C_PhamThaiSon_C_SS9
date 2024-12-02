#include <stdio.h>

int main(){
	int arr[100];
	int luachon,gioihan,sum,max,min,kitu,check,vitri;
	
	printf("\tMENU\n");
	printf("1.Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2.In ra gia tri cac phan tu dang quan ly\n");
	printf("3.In ra gia tri cac phan tu chan va tinh tong\n");
	printf("4.In ra gia tri lon nhat va nho nhat trong mang\n");
	printf("5.In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
	printf("6.Nhap vao mot so va thong ke trong mang co bao nhieu phan do\n");
	printf("7.Them mot phan tu vao vi tri chi dinh\n");
	printf("8.Thoat\n");
	printf("Luu y : khoi tao chuong trinh bat");
	
	for(int i=0;i<=8;i++){
		printf("\n\nLua chon cua ban : ");
		scanf("%d",&luachon);
		switch(luachon){
			case 1:
				printf("Nhap so phan tu can nhap : ");
				scanf("%d",&gioihan);
				for(int i=0;i<gioihan;i++){
					printf("Moi ban nhap ki tu : ");
					scanf("%d",&arr[i]);
				}
				printf("\n");
				break;
			case 2:
				printf("Mang gia tri ban da nhap vao : ");
				for(int i=0;i<gioihan;i++){
					printf("\t%d",arr[i]);
				}
				break;
			case 3:
				printf("So chan trong day ki tu la : ");
				for(int i=0;i<gioihan;i++){
					if(arr[i]%2==0){
						printf("%3d",arr[i]);
						sum+=arr[i];
					}
				}
				printf("\nTong cac gia tri chan trong mang : %d",sum);
				break;
			case 4:
				for(int i=0;i<gioihan;i++){
					if(max>arr[i]){
						max=arr[i];
					}
					if(min<arr[i]){
						min=arr[i];
					}
				}
				printf("Gia tri lon nha trong mang : %d",max);
				printf("\nGia tri nho nhat trong mang : %d",min);
				break;	
			case 5:
				printf("\nSo nguyen to trong mang la : ");
				for(int i=0;i<gioihan;i++){
					if(arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0){
						printf("%3d",arr[i]);
					}
				}
				break;
			case 6:
				printf("Ban muon thong ke gia tri nao ton tai trong mang : ");
				scanf("%d",&kitu);
				for(int i=0;i<gioihan;i++){
					if(kitu==arr[i]){
						check++;
					}
				}
				printf("Co %d so %d ton tai trong mang",check,kitu);
				break;
			case 7:
				printf("Moi ban nhap vi tri cua gia tri ban muon them vao trong mang : ");
				scanf("%d",&vitri);
				while(vitri<0 || vitri>gioihan){
					printf("Vui long nhap lai dung vi tri : ");
					scanf("%d",&vitri);
				}
				printf("Moi ban nhap gia tri muon them vao mang : ");
				scanf("%d",&kitu);
				for(int i=gioihan;i>vitri;i--){
					arr[i]=arr[i-1];
				}
				arr[vitri]=kitu;
				printf("Mang sau khi them mot gia tri : ");
				for(int i=0;i<gioihan+1;i++){
					printf("%3d",arr[i]);
				}
				break;
			case 8:
				printf("Ban dang thoat khoi chuong trinh!!!");
				return 0;	
		}
	}
	return 0;
}
