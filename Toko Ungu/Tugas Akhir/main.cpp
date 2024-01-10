#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main()
{
	string id = "Admin";
	string pass = "1234";

	string inputid;
	string inputpass;

	do {
		system("cls");
		cout << "Masukan Username : ";
		cin >> inputid;

		cout << "Masukan Password : ";
		cin >> inputpass;
	} while (inputid != id || inputpass != pass);

	int jmlbeli, bayar, harga[100], jumlah[100], subtotal[100], total = 0, kembalian;
	string namabarang[100];

	system("cls");
	cout << setw(19) << "Toko Ungu" << endl;
	cout << "=================================" << endl;
	cout << setw(3) << "No" << setw(20) << "Nama Barang" << setw(9) << "Harga" << endl;
	cout << setw(3) << "1" << setw(20) << "Aqua" << setw(9) << "3000" << endl;
	cout << setw(3) << "2" << setw(20) << "Beras" << setw(9) << "13000" << endl;
	cout << setw(3) << "3" << setw(20) << "Gula" << setw(9) << "12000" << endl;
	cout << setw(3) << "4" << setw(20) << "Minyak" << setw(9) << "21000" << endl;
	cout << setw(3) << "5" << setw(20) << "Tepung" << setw(9) << "5000" << endl;
	cout << "=================================" << endl;
	cout << "Berapa banyak yang dibeli : ";
	cin >> jmlbeli;

	for (int i = 0; i < jmlbeli; i++) {
		cout << endl;
		cout << "Masukan Barang Ke " << i + 1 << endl;
		cout << endl;
		cout << "Nama Barang : ";
		cin >> namabarang[i];
		cout << "Jumlah      : ";
		cin >> jumlah[i];
		cout << "Harga       : ";
		cin >> harga[i];
		subtotal[i] = jumlah[i] * harga[i];
		total += subtotal[i];
	}

	system("cls");
	cout << setw(20) << "Toko Ungu" << endl;
	cout << "===============================" << endl;
	cout << setw(3) << "No" << setw(12) << "Nama Barang" << setw(6) << "Harga" << setw(9) << "SubTotal" << endl;
	for (int i = 0; i < jmlbeli; i++) {
		cout << setw(3)<< i + 1 << setw(12) << namabarang[i] << setw(6) << harga[i] << setw(9) << subtotal[i] << endl;
	}
	cout << "Total Harga : " << total << endl;
	cout << setw(23)<<"Uang Yang Dibayarkan : ";
	cin >> bayar;
	kembalian = bayar - total;
	cout << setw(12) << "Uang Kembalian : " << kembalian << endl;
	cout << "================================" << endl;
	cout << setw(32) << "Terima Kasih Telah Berbelanja" << endl;
	cout << setw(31) << "Semoga Hari Anda Menyenangkan" << endl;

	
	return 0;

}