#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void XuatMang1Chieu(int a[MAX], int n, char chuoi[255]);
void NhapMang1Chieu(int a[MAX], int &n, char chuoi[255]);
int KiemTraDuongLienTiep(int a[MAX], int Dau, int Cuoi);
int TimDoanConDuongCoTongLonNhat(int a[MAX], int n);
int TinhTongDoan(int a[MAX], int Dau, int Cuoi);
void XuatDoanConDuongTongLonNhat(int a[MAX], int n);