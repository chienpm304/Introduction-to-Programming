#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MaxDong 100
#define MaxCot 100

void NhapMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
void XuatMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
//
int KiemTraSoChinhPhuong(int n);
int KiemTraSNT(int n);
int KiemTraHoanChinh(int n);
int KiemTraSoDuongDoiXung(int n);

int TichChinhPhuongNuaDuoiCheoPhu(int a[MaxDong][MaxCot], int n);
int TichNguyenToNuaDuoiCheoPhu(int a[MaxDong][MaxCot], int n);
int TichHoanChinhNuaDuoiCheoPhu(int a[MaxDong][MaxCot], int n);
int TichDoiXungNuaDuoiCheoPhu(int a[MaxDong][MaxCot], int n);
