#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <stdbool.h>

struct extensi{
	char eks[50];
	char jenis [50];
	int ID;
	char name_file[50];
	char owner[50];
};
typedef struct extensi ext;

void ubah();
void view();


//coctail sort

void coctailsortID1(struct extensi ex[30],int n){
	struct extensi ek;
	
	bool tukar = true;
	int mulai = 0;
	int akhir = n;
	
	
	while(tukar!=false) {
		int f1;
		tukar = false;
		for(f1= mulai;f1<akhir-1;f1++){
			if(ex[f1].ID>ex[f1+1].ID) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		}
		
	if (tukar == false){
		break;
	}
	
	tukar = false;
	
	akhir--;
	
	for(f1=akhir-1; f1>=mulai; f1--){
			if((ex[f1].ID>ex[f1+1].ID)>0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		
	}
	mulai++;
 }
}

void coctailsortID2(struct extensi ex[30],int n){
	struct extensi ek;
	
	bool tukar = true;
	int mulai = 0;
	int akhir = n;
	
	
	while(tukar!=false) {
		int f1;
		tukar = false;
		for(f1= mulai;f1<akhir-1;f1++){
			if((ex[f1].ID>ex[f1+1].ID)<0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		}
		
	if (tukar == false){
		break;
	}
	
	tukar = false;
	
	akhir--;
	
	for(f1=akhir-1; f1>=mulai; f1--){
			if((ex[f1].ID>ex[f1+1].ID)<0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		
	}
	mulai++;
 }
}

void coctailsortNama1(struct extensi ex[30],int n){
	struct extensi ek;
	bool tukar = true;
	int mulai = 0;
	int akhir = n;
	
	
	while(tukar!=false) {
		int f1;
		tukar = false;
		for(f1= mulai;f1<akhir-1;f1++){
			if(strcmp(ex[f1].name_file,ex[f1+1].name_file)<0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		}
		
	if (tukar == false){
		break;
	}
	
	tukar = false;
	
	akhir--;
	
	for(f1=akhir-1; f1>=mulai; f1--){
			if(strcmp(ex[f1].name_file,ex[f1+1].name_file)>0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		
	}
	mulai++;
 }
}

void coctailsortNama2(struct extensi ex[30],int n){
	struct extensi ek;
	bool tukar = true;
	int mulai = 0;
	int akhir = n;
	
	
	while(tukar!=false) {
		int f1;
		tukar = false;
		for(f1= mulai;f1<akhir-1;f1++){
			if(strcmp(ex[f1].name_file,ex[f1+1].name_file)<0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		}
		
	if (tukar == false){
		break;
	}
	
	tukar = false;
	
	akhir--;
	
	for(f1=akhir-1; f1>=mulai; f1--){
			if(strcmp(ex[f1].name_file,ex[f1+1].name_file)<0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		
	}
	mulai++;
 }
}

void coctailsortjenis1(struct extensi ex[30],int n){
	struct extensi ek;
	
	bool tukar = true;
	int mulai = 0;
	int akhir = n;
	
	
	while(tukar!=false) {
		int f1;
		tukar = false;
		for(f1= mulai;f1<akhir-1;f1++){
			if((strcmp(ex[f1].jenis,ex[f1+1].jenis)>0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		}
		
	if (tukar == false){
		break;
	}
	
	tukar = false;
	
	akhir--;
	
	for(f1=akhir-1; f1>=mulai; f1--){
			if(strcmp(ex[f1].jenis,ex[f1+1].jenis)>0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		
	}
	mulai++;
 }
}

void coctailsortjenis2(struct extensi ex[30],int n){
	struct extensi ek;
	
	bool tukar = true;
	int mulai = 0;
	int akhir = n;
	
	
	while(tukar!=false) {
		int f1;
		tukar = false;
		for(f1= mulai;f1<akhir-1;f1++){
			if(strcmp(ex[f1].jenis,ex[f1+1].jenis)) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		}
		
	if (tukar == false){
		break;
	}
	
	tukar = false;
	
	akhir--;
	
	for(f1=akhir-1; f1>=mulai; f1--){
			if(strcmp(ex[f1].jenis,ex[f1+1].jenis)<0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		
	}
	mulai++;
 }
}

void coctailsortOwner1(struct extensi ex[30],int n){
	struct extensi ek;
	
	bool tukar = true;
	int mulai = 0;
	int akhir = n;
	
	
	while(tukar!=false) {
		int f1;
		tukar = false;
		for(f1= mulai;f1<akhir-1;f1++){
			if(strcmp(ex[f1].owner,ex[f1+1].owner)>0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		}
		
	if (tukar == false){
		break;
	}
	
	tukar = false;
	
	akhir--;
	
	for(f1=akhir-1; f1>=mulai; f1--){
			if(strcmp(ex[f1].owner,ex[f1+1].owner)>0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		
	}
	mulai++;
 }
}


void coctailsortOwner2(struct extensi ex[30],int n){
	struct extensi ek;
	
	bool tukar = true;
	int mulai = 0;
	int akhir = n;
	
	
	while(tukar!=false) {
		int f1;
		tukar = false;
		for(f1= mulai;f1<akhir-1;f1++){
			if(strcmp(ex[f1].owner,ex[f1+1].owner)<0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		}
		
	if (tukar == false){
		break;
	}
	
	tukar = false;
	
	akhir--;
	
	for(f1=akhir-1; f1>=mulai; f1--){
			if(strcmp(ex[f1].owner,ex[f1+1].owner)<0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		
	}
	mulai++;
 }
}

void coctailsortEkstensi1(struct extensi ex[30],int n){
		struct extensi ek;
	
	bool tukar = true;
	int mulai = 0;
	int akhir = n;
	
	
	while(tukar!=false) {
		int f1;
		tukar = false;
		for(f1= mulai;f1<akhir-1;f1++){
			if(strcmp(ex[f1].owner,ex[f1+1].owner)) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		}
		
	if (tukar == false){
		break;
	}
	
	tukar = false;
	
	akhir--;
	
	for(f1=akhir-1; f1>=mulai; f1--){
			if(strcmp(ex[f1].owner,ex[f1+1].owner)>0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		
	}
	mulai++;
 }
}


void coctailsortEkstensi2(struct extensi ex[30],int n){
		struct extensi ek;
	
	bool tukar = true;
	int mulai = 0;
	int akhir = n;
	
	
	while(tukar!=false) {
		int f1;
		tukar = false;
		for(f1= mulai;f1<akhir-1;f1++){
			if(strcmp(ex[f1].owner,ex[f1+1].owner)) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		}
		
	if (tukar == false){
		break;
	}
	
	tukar = false;
	
	akhir--;
	
	for(f1=akhir-1; f1>=mulai; f1--){
			if(strcmp(ex[f1].owner,ex[f1+1].owner)<0) {
				ek=ex[f1];
				ex[f1]=ex[f1+1];
				ex[f1+1]=ek;
				tukar = true ;	
			}
		
	}
	mulai++;
 }
}
//seaching

	
	
main(){ //c = key
	struct extensi ex[50];
	int pilih =-1,i,c,j,sort,ngurut;
	char search[50];
	
	while(pilih<=7)
	{
		printf("\n\n============================");
		printf("\n\t DATA EKSTENSI \n");
		printf("============================");
		printf("\n 1. input data file");
		printf("\n 2. Ubah file");
		printf("\n 3. Urutkan file");
		printf("\n 4. cari file");
		printf("\n 5. Keluar");
		printf("\n masukkan pilihanmu = ");
		scanf("%d",&pilih);
		
		switch(pilih){
			case 1:	//input
							printf("============================");
							printf("\n\nID file     : ");
							scanf("%d",&ex[i].ID);
							printf("Nama file   : ");
							scanf("%s",&ex[i].name_file);
							printf("Owner file  : ");
							scanf("%s",&ex[i].owner);
							printf("jenis file  : ");
							scanf("%s",&ex[i].jenis);
							printf("ekstensi (ex (.exe .ppt .dst)) : ");
							scanf("%s",&ex[i].eks);
							i++;
							break;
							
					
			case 2:			//update
							printf("============================");
							printf("\n");
							printf("\nmasukkan ID untuk diubah : ");
							scanf("%d",&c);
							
							ubah(ex,i,c);
							break;
			case 3://sort coctail
					printf("============================");
					printf("\n");
					if(i==0){
					printf("\ndata kosong");
					}else{
							printf("\n1. Berdasarkan ID (keatas)");
							printf("\n2. Berdasarkan ID (kebawah)");
							printf("\n3. Berdasarkan Nama berkas (keatas)1");
							printf("\n4. Berdasarkan Nama berkas (kebawah)");
							printf("\n5. Berdasarkan Jenis File (keatas)");
							printf("\n6. Berdasarkan Jenis File (kebawah)");
							printf("\n7. Berdasarkan Pemilik File (keatas)");
							printf("\n8. Berdasarkan Pemilik File (kebawah)");
							printf("\n9. Berdasarkan ekstensi File (keatas)");
							printf("\n10. Berdasarkan ekstensi File (kebawah)");
							
							printf("\nMasukkan Pilihan : ");
							scanf("%d",&ngurut);
						
						switch(ngurut){
						//sort
							case 1: coctailsortID1(ex,i);
									view(ex,i);
									break;
							case 2: coctailsortID2(ex,i);
									view(ex,i);
									break;
									
							case 3: coctailsortNama1(ex,i);
									view(ex,i);
									break;
							case 4: coctailsortNama2(ex,i);
									view(ex,i);
									break;
									
							case 5: coctailsortjenis1(ex,i);
									view(ex,i);
									break;
							case 6: coctailsortjenis2(ex,i);
									view(ex,i);
									break;
							
							case 7: coctailsortOwner1(ex,i);
									view(ex,i);
									break;
							case 8: coctailsortOwner2(ex,i);
									view(ex,i);
									break;
							case 9: coctailsortEkstensi1(ex,i);
									view(ex,i);
									break;
							case 10: coctailsortEkstensi2(ex,i);
									view(ex,i);
									break;		
							default : printf("maaf tidak ada");
									break;
						}
			}
						
			
			case 5:
			exit(0);			    
		}
		
			
	}
}

void ubah(struct extensi ex[30],int n,int c){
	int i;
	for(i=0;i<n;i++){
		if(ex[i].ID==c){
			printf("\nID file    : ");
			scanf("%d",&ex[i].ID);
			printf("Nama file  : ");
			scanf("%s",&ex[i].name_file);
			printf("Owner file : ");
			scanf("%s",&ex[i].owner);
			printf("jenis file : ");
			scanf("%s",&ex[i].jenis);
			printf("ekstensi (ex (.exe .ppt .dst)) : ");
			scanf("%s",&ex[i].eks);
		}
		if(ex[i].ID!=c){
			printf("\nmaaf tidak ada yg anda cari\n");
		}
	}
}

void view(struct extensi ex[30],int n){
	int i;
		printf("Data ekstensi \n");
		for (i=0;i<n;i++){
			printf("\n ID file    : %d", ex[i].ID);
			printf("\n Nama file  : %s", ex[i].name_file);
			printf("\n owner      : %s", ex[i].owner);
			printf("\n jenis file : %s", ex[i].jenis);
			printf("\n ekstensi   : %s", ex[i].eks);
			printf("\n\n");
		}
}
