#include "Header.h"
int main() {
	int n;
	int mt[MAX][MAX];
	int v[MAX];

	/*NhapMTK(mt, n);
	Xuat(mt, n);*/

	docFile("dothi.txt", mt, n);
	xuatMT(mt, n);
	
	cout << "So Mau Da To: " << ToMau(mt,n,v) << endl;
	cout << "Ket qua to mau:\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Dinh " << i + 1 <<" Duoc to mau: " << v[i] << "\n";
	}
	cout << endl;
	return 0;
}