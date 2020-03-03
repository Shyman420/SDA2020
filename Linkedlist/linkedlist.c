/*
Program			: lingkedlist.c
Deskripsi		: hbody untuk linkedlist
Nama			: Irsyad Muhammad
Versi/Tanggal	: 01/03 Maret 2020
Compiler		: TDM-GCC 4.9.2 64-bit Release
*/

#include<stdio.h>
#include<stdlib.h>
#include "linkedlist.h"


/*KELOMPOK CREATOR*/

struct Node *createNode(){
/*fungsi untuk membuat 1 Node baru*/
/*Input	: */
/*Ouput	: Alamat node baru*/
	struct Node *newNode = NULL;
	newNode = (struct Node *)malloc(sizeof(struct Node));
	
	return newNode;

}

/*KELOMPOK DESTRUCTOR*/

void deleteNodeAt(struct Node *H_Node, int index){
/*Menghapus Node di posisi tertentu*/
/*I.S	: Node belum terhapus*/
/*F.S	: Node sudah terhapus*/

	struct Node *pivot = addressAt(H_Node, index);
	struct Node *pivotPrev = addressAt(H_Node, index-1);
	pivotPrev->next = pivot->next;
	pivot->next = NULL;
	free(pivot);
	
}

int size(struct Node *H_Node){
/*function untuk mengetahui panjang dari list yang sudah dibuat*/
/*Input		: List*/
/*Output	: panjang list*/
	
	int count = 0;
	
	while (H_Node->next != NULL){
		count++;
		H_Node = H_Node->next;
	}
}

struct Node *addressAt(struct Node *H_Node, int index){
/*mendapatkan alamat dari node ke- */
/*input		: Head dari lilst dan index*/
/*output	: adress node */

	struct Node *N = H_Node;
	
	int count = 0 ;
	
	while(count < index){
		
		count++;
		N = N->next;
		
	}
	
	return N;

}

struct Node *tailAddress(struct Node *H_Node){
/*mendapatkan alamat dari ujung list*/
/*input		: head dari list*/
/*output	: alamat tail dari list*/

	struct Node *N = H_Node;
	
	while (N->next !=NULL){
		N = N->next;
		
	}
	return N;
}

int getNodeAt(struct Node *H_Node, int index){
/*mendapatkan value dari bagian info sebuah node*/
/*input		: head dari list dan node ke-*/
/*output	: info dari node ke- */

	struct Node *N = addressAt(H_Node,index);
	
	return N->info;
	
}

/*KELOMPOK SET*/

void assignNode(struct Node *H_Node, int n){
/*mengubah nilai info dari sebuah Node*/
/*I.S	: nilai info sembarang*/
/*F.S	: nilai info menjadi n*/

	H_Node->info = n;
}

/*KELOMPOK READ/WRITE*/

void printList(struct Node *H_Node){
/*menampilkan list ke layar*/
/*I.S	: list belum ditampilkan di layar*/
/*F.S	: list ditampilkan di layar*/

	while(H_Node != NULL){
		printf("%d ", H_Node->info);
		H_Node = H_Node->info;
		
	}
	
}

