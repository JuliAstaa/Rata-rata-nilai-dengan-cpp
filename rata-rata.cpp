#include <iostream>
using namespace std;

int main(){
	int jumlah_index;
	cout<<"Masukkan jumlah data : ";
	cin>>jumlah_index;
	
	float angka[jumlah_index], total, rata_rata;
		for(int a = 0; a<jumlah_index; a++){
			int angkaKe = a+1;
			cout<<"Masukkan angka ke-"<<angkaKe<<" : ";
			cin>>angka[a];
			total += angka[a];
		}
	rata_rata = total/jumlah_index;
	
	cout<<"Total angka tersebut     = "<<total<<endl;
	cout<<"Rata-rata nilai tersebut = "<<rata_rata<<endl;
}
