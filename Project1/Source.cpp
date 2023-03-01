#include "Header.h"

//void NhapMTK(int mt[][MAX], int &n)
//{
//    cout << "nhap cap ma tran: "; 
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << "nhap a[" << i << "][" << j << "]: ";
//			cin >> mt[i][j];
//		}
//	}
//}
//
//void Xuat(int mt[][MAX], int n)
//{
//	cout << n << endl;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << mt[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
int docFile(const char* filename, int mt[][MAX], int& n) {
	FILE* f;
	fopen_s(&f, filename, "rt");
	if (f == NULL) return 0;
	fscanf_s(f, "%d", &n);
	for(int i=0;i<n;i++){
		for (int j = 0; j < n; j++)
		{
			fscanf_s(f, "%d", &mt[i][j]);
		}
	}
	fclose(f);
	return 1;

}
void xuatMT(int mt[][MAX], int n) {
	cout << n << endl;
	for(int i=0;i<n;i++){
		for (int j = 0; j < n; j++)
		{
			cout << mt[i][j] << " ";
		}
	}
	cout << endl;
}

int KiemMau(int mt[][MAX], int n, int v[], int i, int c)
{
	for (int j = 0; j < n; j++)
		if (mt[i][j] && v[j] == c)
			return 0;
	return 1;
}
int Mau(int mt[][MAX], int n, int v[], int color) 
{
	int dinh = 0;
	for(int i=0;i<n;i++)
		if (!v[i] && KiemMau(mt, n, v, i, color))
		{
			v[i] = color;
			dinh++;
		}
	return  dinh;

}
int ToMau(int mt[][MAX], int n, int v[])
{
	for (int i = 0; i < n; i++) {
		v[i] = 0; 
	}
	int somau = 0;
	int  dinh = 0;
	while (dinh < n) {
		somau++;
		dinh += Mau(mt, n, v, somau);
	};
	return somau;
}





