#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define MaxDong 100
#define MaxCot 100

void NhapMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
void XuatMang2Chieu(int a[MaxDong][MaxCot], int dong, int cot, char chuoi[255]);
int TimMaxIndex(int a[MaxDong][MaxCot], int dong, int cot, int &maxDong, int &maxCot);
int TimMinIndex(int a[MaxDong][MaxCot], int dong, int cot, int &minDong, int &minCot);//tim vi tri min gan cho minDong va minCot , ham tra ve minValue