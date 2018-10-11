#include <iostream>
#include <conio.h>
using namespace std;
void quicksort(int data[], int n)
{
 int i;
 for (i=1;i<=n;i++)
 cout<<data[i]<<" ";
 cout<<"\n";
}

int partision (int data[], int awal, int akhir)
{
 int x,i,j,simpan;

 
 i=awal;
 j=akhir;

   while(1)
   {
   while(data[i]<data[awal])
   i=i+1;

    while(data[j]>data[awal])
     j=j-1;

    if (i<j)
    {
    
   simpan=data[i];
    data[i]=data[j];
   data[j]=simpan;
    }
   else
      return j;
   }
}

void quick_sort(int data[], int awal, int akhir)
{
 int q;
 if(awal<akhir)
 {
  q=partision(data,awal,akhir);
  quick_sort(data,awal,q);
  quick_sort(data, q+1,akhir);
 }
}

int main()
{
 int i,j,n,data[100];

   cout<<"masukkan banyak data= ";cin>>n;
   for(i=1;i<=n;i++)
   {
    cout<<"data ke-"<<i<<" = ";cin>>data[i];
   }

 cout<<"Data sebelum diurut: "<<endl;
 for(j=1;j<=n;j++)
 {
  cout<<data[j]<<" ";
 }
 quick_sort(data,1,n);

 cout<<endl;
 cout<<endl;
 cout<<"hasil pengurutan:\n";
 quicksort(data,n);
 getch();
}

