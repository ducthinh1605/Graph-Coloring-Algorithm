#pragma once
#pragma once
#include<iostream>
#define MAX 20
using namespace std;
//void NhapMTK(int mt[][MAX],int &n);
//void Xuat(int mt[][MAX], int n);
int docFile(const char* filename, int mt[][MAX], int& n);
void xuatMT(int mt[][MAX], int n);


int KiemMau(int mt[][MAX], int n, int v[], int i, int c);
int Mau(int mt[][MAX], int n, int v[], int color);
int ToMau(int mt[][MAX], int n, int v[]);

