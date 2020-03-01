/*
Program			: mpoint.c
Deskripsi		: Program untuk menguji point.c
Nama			: Irsyad Muhammad
Versi/Tanggal	: 28 Februari 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/
#include "point.h"

int main() {
	
	POINT P, P1;
	
	//CreatePoint
	//Membuat Point dengan fungsi CreatePoint
	printf("=====CreatePoint : =====");
	printf ("\nMembuat P1, melalui fungsi / CreatePoint : ");

	//Simpan CreatePoint ke dalam variabel bertipe int
	P1 = CreatePoint(2,2);
	PrintPoint(P1);
	
	
	//MakePoint
	//Membuat point dengan prosedur MakePoint
	printf("\n\n=====MakePoint : =====");
	printf ("\nMembuat P, melalui prosedur / MakePoint : ");
	MakePoint(&P,-22,13);
	PrintPoint(P);
	
	
	//GetX / GetY
	//Menampilkan masing masing absis dan oordinat dari point P
	printf("\n\n=====Get : =====");
	printf("\nNilai X dari point P : %d", GetX(P));
	printf("\nNilai Y dari point P : %d", GetY(P));
	
	
	//SetX / SetY
	//Mengubah nilai X/Y dari sebuah Point
	printf("\n\n=====Set : =====");
	SetX(&P,-3);
	SetY(&P,-11);
	printf("\nNilai X dari point P setelah diubah dengan SetX : %d", GetX(P));
	printf("\nNilai Y dari point P setelah diubah dengan SetY : %d\n", GetY(P));
	printf("Koordniat P : ");PrintPoint(P);
	
	
	//ReSet
	//Nilai Point P1 di re-set menjadi (0,0)
	printf("\n\n=====Reset :=====");
	ReSet(&P1);
	printf("\nNilai P1 setelah di ReSet : ");
	PrintPoint(P1);
	
	
	//Kuadran
	//Menampilkan kuadran dari Point
	printf("\n\n=====Kuadran : =====");
	printf("\nPoint P berada di Kuadran : %d", Kuadran(P));
	
	
	//IsOnSumbuX
	//Menampilkan apakah point berada di sumbu X
	printf("\n\n=====IsOnSumbuX : =====");
	
	//point p
	printf("\nKoordinat Point P : ");PrintPoint(P);
	
	if(IsOnSumbuX(P) == 1){
		printf("\nPoint berada di sumbu X");
	}
	else{
		printf("\nPoint TIDAK berada di sumbu X");
	}
	
	//point P1
	printf("\n\nKoordinat Point P1 : ");PrintPoint(P1);
	
	if(IsOnSumbuX(P1) == 1){
		printf("\nPoint berada di sumbu X");
	}
	else{
		printf("\nPoint TIDAK berada di sumbu X");
	}
	
	//IsOnSumbuY
	//Menampilkan apakah point berada di sumbu Y
	printf("\n\n=====IsOnSumbuY : =====");
	//point p
	printf("\nKoordinat Point P : ");PrintPoint(P);
	
	if(IsOnSumbuY(P) == 1){
		printf("\nPoint berada di sumbu Y");
	}
	else{
		printf("\nPoint TIDAK berada di sumbu Y");
	}
	
	//point P1
	printf("\n\nKoordinat Point P1 : ");PrintPoint(P1);
	
	if(IsOnSumbuY(P1) == 1){
		printf("\nPoint berada di sumbu Y");
	}
	else{
		printf("\nPoint TIDAK berada di sumbu Y");
	}
	
	
	//IsOrigin
	//Menampilkan apakah point berada di titik origin (0,0)
	printf("\n\n=====IsOrigin : =====");
	
	//point P
	printf("\n\nKoordinat Point P : ");PrintPoint(P);
	if (IsOrigin(P) == 1){
		printf("\nPoint berada di titik Origin");
	}
	else {
		printf("\nPoint TIDAK berada di titik Origin");
	}
	
	//point P1
	printf("\n\nKoordinat Point P1 : ");PrintPoint(P1);
	if (IsOrigin(P1) == 1){
		printf("\nPoint berada di titik Origin");
	}	
	else {
		printf("\nPoint TIDAK berada di titik Origin");
	}
	
	
	//NextX
	//menggeser P, 1 koordinat ke kanan
	printf("\n\n=====NextX : =====");
	printf("\nKoordinat awal point P1 : ");PrintPoint(P1);
	NextX(&P1);
	printf("\nKoordinat akhir point P1 : ");PrintPoint(P1);
	
	printf("\n\nKoordinat awal point P : ");PrintPoint(P);
	NextX(&P);
	printf("\nKoordinat akhir point P1 : ");PrintPoint(P);
	
	
	//NextX_N
	//Menggeser P sejauh N koordinat ke kanan
	printf("\n\n=====Next_N :=====");
	printf("\nKoordinat awal point P1 : ");PrintPoint(P1);
	NextX_N(&P1,3);
	printf("\nKoordinat akhir point P1 : ");PrintPoint(P1);
	
	printf("\n\nKoordinat awal point P : ");PrintPoint(P);
	NextX_N(&P,6);
	printf("\nKoordinat akhir point P1 : ");PrintPoint(P);
	
	
	//PrevX
	//menggeser P sejauh 1 koordinat ke kiri
	printf("\n\n=====PrevX : =====");
	printf("\nKoordinat awal point P1 : ");PrintPoint(P1);
	PrevX(&P1);
	printf("\nKoordinat akhir point P1 : ");PrintPoint(P1);
	
	printf("\n\nKoordinat awal point P : ");PrintPoint(P);
	PrevX(&P);
	printf("\nKoordinat akhir point P : ");PrintPoint(P);
	
	
	//PrevX_N
	//menggeser P sejauh N koordinat ke kiri
	printf("\n\n=====PrevX_N : =====");
	printf("\nKoordinat awal point P1 : ");PrintPoint(P1);
	PrevX_N(&P1,4);
	printf("\nKoordinat akhir point P1 : ");PrintPoint(P1);
	
	printf("\n\nKoordinat awal point P : ");PrintPoint(P);
	PrevX_N(&P,1);
	printf("\nKoordinat akhir point P : ");PrintPoint(P);
	
	
	//Jarak 
	//menghasilkan jarak antara P1 dan P2
	printf("\n\n=====Jarak : =====");
	printf("\nKoordinat awal point P : ");PrintPoint(P);
	printf("\nKoordinat awal point P1 : ");PrintPoint(P1);
	printf("\nJarak antara P dan P1 adalah : %d", Jarak(P,P1));


	return 0;
}
