#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int numlist[8]={5,34,32,25,75,42,22,2};
	int swap;
	cout << "Data sebelum diurutkan:\n";
	for(int ctr=0;ctr<8;ctr++){
		cout << numlist[ctr] << " ";
	}
	cout << "\n\n";
	for(int i=0;i<7;i++){
		for(int ii=0;ii<7;ii++){
			if(numlist[ii] > numlist[ii+1]){
				swap=numlist[ii];
				numlist[ii]=numlist[ii+1];
				numlist[ii+1]=swap;
			}
		}
	}
	cout << "data setelah diurutkan:\n";
	
	for(int iii=0;iii<8;iii++){
		cout << numlist[iii] << " ";
	}
	cout << endl ;
	getch();
	
}
