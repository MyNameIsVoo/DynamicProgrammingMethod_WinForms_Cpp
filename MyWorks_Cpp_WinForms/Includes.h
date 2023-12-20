#include "iostream"
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <iomanip> /* setprecision */
#include <time.h>
#include "fstream" /* Для работы с текстовыми файлами, запись */

using namespace std;

/* Тут указываются ссылки на файлы которые нужно вызывать в форме */
//------------------------------------------------------------------------------------------------

void InitDynamicMethod(int exampleIndex, bool parallel, int size1, int size2, float* L, float** mas, int Z, int optZ);

//-------------------------------------------------------------------------------------------------
/*Тут функции, которые нужны в методе*/

float Max(float g, float V);
float* m(float g[10][10], float* V, int i, int p, float* Max_Id);
float m2(float g[10][10], float* V, int i, int p, int ID);
float Max3(float Gi, int a);
float Max4(float Gi, float w, float* V, int a, int z);
