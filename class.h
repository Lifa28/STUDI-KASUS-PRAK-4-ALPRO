#include <iostream>
using namespace std;
class Andi {
	friend ostream& operator<<(ostream&, Andi&);
	friend istream& operator>>(istream&, Andi&);
	public : 
	void proses();
	
	private:
	int pengeluaran_tiap_bln[100];
	int totalpengeluaran;
	int uang_tabungan[100];
	int uangsaku[100];
	int kuliah[100];
	int jajan[100];
	int i;
	int bulan;
	
	//void ga pake return. 
	//int pake return.		
}p;

istream& operator>>(istream&n, Andi&var){
	cout<<"masukkan berapa banyak bulan";
	n>>var.bulan;
	 for (var.i=1; var.i<=var.bulan; var.i++){
		cout<<"Jumlah uang saku bulan ke "<<var.i<<": ";
		n>>var.uangsaku[var.i];
		cout<<"jumlah keperluan kuliah : ";
		n>>var.kuliah[var.i];
		cout<<"Jumlah uang jajan : ";
		n>>var.jajan[var.i];
		cout<<"======================================="<<endl;
	 }
}

void Andi::proses(){
	for(int i=1; i<=bulan; i++){
	 pengeluaran_tiap_bln[i] = kuliah[i]+jajan[i];
	 uang_tabungan[i]=uangsaku[i]-(kuliah[i]+jajan[i]);
	totalpengeluaran = pengeluaran_tiap_bln[1]+ pengeluaran_tiap_bln[2]+ pengeluaran_tiap_bln[3]+ pengeluaran_tiap_bln[4]+ pengeluaran_tiap_bln[5]+ pengeluaran_tiap_bln[6]+ pengeluaran_tiap_bln[7]+ pengeluaran_tiap_bln[8]+ pengeluaran_tiap_bln[9]+ pengeluaran_tiap_bln[10]+ pengeluaran_tiap_bln[11]+ pengeluaran_tiap_bln[12];
	cout <<"-----------------------------------------------"<<endl;
	}
}

ostream& operator<<(ostream&o, Andi&var){
	for( var.i=1; var.i<=var.bulan; var.i++ ){
	cout<<"Total pengeluaran tiap bulan ke "<<var.i<<" : "<<var.pengeluaran_tiap_bln[var.i]<<endl;
	cout<<"Total Uang tabungan : "<<var.uang_tabungan[var.i]<<endl;
	}
	cout<<"Total Pengeluaran Selama 2 bulan : "<<var.totalpengeluaran<<endl;
}


