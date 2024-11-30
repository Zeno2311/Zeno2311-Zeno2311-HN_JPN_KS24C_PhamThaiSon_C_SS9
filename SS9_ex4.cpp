#include <stdio.h>

int main(){
	int arr[100];
	int nhapkitu,gioihan,vitri,chon;
	
	printf("\tMENU\n");
	printf("1.Nhap vao mang\n");
	printf("2.Hien thi mang\n");
	printf("3.Them phan tu\n");
	printf("4.Sua phan tu\n");
	printf("5.Xoa phan tu\n");
	printf("6.Thoat\n\n");
	printf("**Luu y** : Ban hay chon che do 1 de nhap gia tri\n");
	
	for(int i=0;i<=6;i++){
		printf("\nMoi ban chon che do trong menu : ");
		scanf("%d",&chon);
		
		switch(chon){
			case 1:
				printf("Ban muon nhap mang co bao nhieu phan tu : ");
				scanf("%d",&gioihan);
				for(int i=0;i<gioihan;i++){
					printf("Moi ban nhap : ");
					scanf("%d",&arr[i]);
					}
					break;
			case 2:
				for(int i=0;i<gioihan;i++){
					printf(" %d ",arr[i]);
				}
				break;	
			case 3:
				printf("Ban muon them phan tu co gia tri la : ");
				scanf("%d",&nhapkitu);
				printf("Ban muon dua gia tri vao vi tri nao trong mang : ");
				scanf("%d",&vitri);
				for(int i=gioihan;i>vitri;i--){
					arr[i]=arr[i-1];
				}
				arr[vitri]=nhapkitu;
				for(int i=0;i<gioihan+1;i++){
					printf(" %d ",arr[i]);
				}
				break;
			case 4:
				printf("Ban muon sua gia tri thanh gia tri nao : ");
				scanf("%d",&nhapkitu);
				printf("Ban muon sua gia tri o vi tri nao : ");
				scanf("%d",&vitri);
				arr[vitri]=nhapkitu;
				for(int i=0;i<gioihan+1;i++){
				printf(" %d ",arr[i]);
				}
				break;
			case 5:
				printf("Ban muon xoa phan tu o vi tri nao trong mang : ");
				scanf("%d",&vitri);
				for(int i=vitri;i<gioihan;i++){
				arr[i]=arr[i+1];
				}
				for(int i=0;i<gioihan-1;i++){
					printf(" %d ",arr[i]);
				}
				break;
			case 6:
				printf("\nKet thu chuong trinh");
				return 0;						
		}
	}
	return 0;
}
