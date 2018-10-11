#include <iostream>
#include <conio.h>
using namespace std;
void swapmembers (int items[],int index1,int index2){
	int temp;
	temp=items[index1];
	items[index1]=items[index2];
	items[index2]=temp;
}

main(){
	int n,m;
	int numbers[]={102,21,83,42,11,10,9,3,20,27,15,92,2};
	cout << "data sebelum diurutkan:" << endl;
	for(int n=0;n<13;n++){
		cout << numbers[n] << ",";
	}
	cout << endl;
	const int size = sizeof(numbers) / sizeof(numbers[0]);
	for(n=size-1;n>0;n--){
		for(m=0;m<n;m++){
			if(numbers[m] > numbers[m+1]){
				swapmembers(numbers,m,m+1);
			}
		}
	}
	cout << "data setelah diurutkan:" << endl;
	for(n=0;n<size;n++){
		cout << numbers[n] << ",";
	}
	getch();
}
