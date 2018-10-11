#include <iostream>
#include <conio.h>
using namespace std;
void selectionsort(int array[],const int size){
	int i,j,smallest,temp;
	for(i=0;i<size;i++){
		smallest=i;
		for(j=i;j<size;j++){
			if(array[smallest]>array[j]){
				smallest=j;
			}
		}
		temp=array[i];
		array[i]=array[smallest];
		array[smallest]=temp;
	}
}
int main(){
	int array1[8]={5,34,32,25,75,42,22,2};
	int b = 8;
	selectionsort(array1,b);
	for(int i=0;i<8;i++){
		cout << array1[i] << " ";
	}
	getch();
}
