#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <windows.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string>

using namespace std;

void Spasi(string K, int &i);
bool cekSubjek(string K, int &i);
bool cekPredikat(string K, int &i);
bool cekObject(string K, int &i);
bool cekKeterangan(string K, int &i);

#endif // HEADER_H_INCLUDED
