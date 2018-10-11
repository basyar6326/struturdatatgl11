#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	typedef struct{
		char judul[20];
		int tahun;
	}kar;
	int pil , jml , awl1,awl2;
	kar kartun[100];
	
	
	do{
		cout << "Movie Program" << endl << "================" << endl;
		cout << "1.Masukkan data" << endl << "2.Tampil data" << endl << "3.Keluar" << endl;
		cout << "Pilih:";cin >> pil;
		if(pil == 1){
			cout << "masukkan banyaknya data:";cin >> jml;
			for (awl1 = 0;awl1 < jml;awl1++){
				cout << "==================" << endl << "data ke-" << awl1+1 << endl;
				cout << "masukkan judul:";cin >> kartun[awl1].judul;
				cout << "masukkan tahun:";cin >> kartun[awl1].tahun;
			}
		}else if(pil == 2){
			for(awl2=0;awl2 < jml;awl2++){
				cout << "=============================" << endl;
				cout << "data ke-" << awl2+1 << endl;
				cout << "title:" << kartun[awl2].judul << endl;
				cout << "tahun:" << kartun[awl2].tahun << endl;
				cout << "=============================" << endl;
			}
		}
		
	}while(pil!=3);
	getch();
}
