/*
Program			: mcircle.c
Deskripsi		: Menyelesaikan persoalan yang tertulis di bawah.
Nama			: Irsyad Muhammad
Versi/Tanggal	: 1 Maret 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

/*Spesifikasi Persoalan
Andi adalah seorang pelajar SMP, ia ditugaskan oleh Guru Matematikanya untuk membandingkan dua buah Circle dan menampilkan hasil perbandingannya. 
Pertama, Andi harus membuat dua buah Circle (C1 dan C2) dengan nilai sebuah titik dan jari-jari sembarang. Kemudian menampilkan hasil perbadingan berdasarkan
1. Jika C1 = C2, maka menampilkan informasi "dua buah Circle memiliki luas area yang sama"
2. Jika C1 < C2, maka menampilkan informasi "Circle 1 memiliki luas area yang lebih kecil dibandingkan Circle 2"
3. Jika C1 > C2, maka menampilkan informasi "Circle 1 memiliki luas area yang lebih besar dibandingkan Circle 2"*/

#include "Circle.c"

int main(){
	
	//Deklarasi
	Circle C1,C2;
	
	/*=========MEMBUAT C1===========*/

	printf("Masukkan Koordinat X dan Y, dan panjang Radiusnya (input dipisahkan dengan spasi) : \n");
	scanf("%d %d %f",&C1.P.x,&C1.P.y,&C1.r);

	
	/*=========MEMBUAT C2===========*/

	printf("Masukkan Koordinat X dan Y, dan panjang Radiusnya (input dipisahkan dengan spasi) : \n");
	scanf("%d %d %f",&C2.P.x,&C2.P.y,&C2.r);


	/*=========MEMBANDINGKAN C1 DENGAN C2===========*/
	if (Area(C1) == Area(C2)){
		
		printf("\ndua buah Circle memiliki luas area yang sama");		
	}
	else if(Area(C1) < Area(C2)){
		
		printf("\nCircle 1 memiliki luas area yang lebih kecil dibandingkan Circle 2");
	}
	else{
		
		printf("\nCircle 1 memiliki luas area yang lebih besar dibandingkan Circle 2");
	}
	
	
	return 0;
}
