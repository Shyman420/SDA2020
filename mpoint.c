/*
Program			: mpoint.c
Deskripsi		: Menyelesaikan persoalan point
Nama			: Irsyad Muhammad
Versi/Tanggal	: 02/1 Maret 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

/*Persoalan
Andi adalah seorang pelajar SMP, ia ditugaskan oleh Guru Matematikanya untuk menentukan posisi sebuah Titik (P) berdasarkan syarat tertentu. Pertama, Andi harus membuat sebuah titik dengan nilai X dan Y sembarang. Kemudian titik P akan bergerak berdasarkan posisinya dengan kondisi tertentu.
1. Jika P berada pada Kuandran I, Geser P sebanyak 1 langkah ke arah kanan
2. Jika P berada pada Kuandran II, Geser P sebanyak 1 langkah ke arah kiri
3. Jika P berada pada Kuandran III, Geser P sebanyak N langkah ke arah kiri, dimana N diinput dari keyboard
4. Jika P berada pada Kuandran IV, Geser P sebanyak N langkah ke arah kanan, dimana N diinput dari keyboard
5. Jika P berada pada tidak berada pada Kuandran I,II,III, dan IV, maka identifikasi titik apakah berada pada titik origin, sumbu x, sumbu y*/

#include "point.h"

int main(){

	//Deklarasi
	int x,y;
	int N;
	POINT P;
	
	//Proses
	printf("Masukkan koordinat P (X dan Y dipisahkan menggunakan 'spasi') : \n");
	scanf("%d %d",&x, &y);
	
	//memasukkan input user ke fungsi CreatePoint
	P = CreatePoint(x,y);

	//selection
	if(IsOrigin(P)== 1){
		PrintPoint(P);
		printf("\nTitik berada di titik origin");
	}
	else{
		if(IsOnSumbuY(P) == 1){
			PrintPoint(P);
			printf("\nTitik berada di sumbu Y");
		}
		else{
			if(IsOnSumbuX(P) == 1){
				PrintPoint(P);
				printf("\nTitik berada di sumbu X");
			}
			else{
				if(Kuadran(P) == 1){
				
					PrintPoint(P);
					/*Geser sebanyak 1 ke arah kanan*/
					NextX(&P);
					
					printf("\n");
					PrintPoint(P);
				}
				else if(Kuadran(P) == 2){
					
					PrintPoint(P);
					/*Geser sebanyak 1 ke arah kiri*/
					PrevX(&P);
					
					printf("\n");
					PrintPoint(P);
				}
				else if(Kuadran(P) == 3 ){
					
					/*Geser ke arah kiri sejauh N*/
					printf("\nGeser P sejauh N ke arah kiri\n");
					printf("\nMasukkan nilai N : ");
			
					/*input user*/
					scanf("%d", &N);
					PrintPoint(P);
					
					PrevX_N(&P,N);//N parameter input diambil dari input user
			
					PrintPoint(P);
				}
				else{
					
					/*Geser ke arah kiri sejauh N*/
					printf("\nGeser P sejauh N ke arah kanan\n");
					printf("\nMasukkan nilai N : ");
					
					/*input user*/
					scanf("%d", &N);
					
					PrintPoint(P);
					NextX_N(&P,N);//N parameter input diambil dari input user
					
					PrintPoint(P);
				}
			}
		}
	}

	
	
	return 0;
}
