#pragma once

void Example_1(ofstream &out, bool parallel, int size1, int size2, float* xi, float** mas);
void Example_2(ofstream &out, int size1, int size2, int Z, int optZ, float* xi, float** mas);

void InitDynamicMethod(int exampleIndex, bool parallel, int size1, int size2, float* xi, float** mas, int Z, int optZ)
{
	clock_t Time = clock();
	ofstream out("Data.txt", ios::out);

	out << "\t\tМетод динамического программирования для решения задач математического программирования" << endl << endl;

	if (exampleIndex == 0)
		Example_1(out, parallel, size1, size2, xi, mas);
	else
		Example_2(out, size1, size2, Z, optZ, xi, mas);

	double EndTime = (clock() - (double)Time) / CLOCKS_PER_SEC;
	out << "\n\n\t\t Время выполнения: " << EndTime << endl;

	out.close();
}

void Example_1(ofstream &out, bool paraller, int size1, int size2, float* xi, float** mas)
{
	out << "\t" << (paraller ? "Параллельное решение задачи" : "Последовательное решение задачи") << endl << endl;

	int sizegx = size1;
	int sizez = size2;

	float Gi[10][10], * Xi = new float[sizegx];

	for (int i = 0; i < sizegx; i++)
		Xi[i] = xi[i];
	for (int i = 0; i < sizegx; i++)
		for (int j = 0; j < sizegx + 1; j++)
			Gi[i][j] = mas[i][j];

	int x1[5], x2[5], x3[5], x4[5], x[5];
	float V1[6], V2[6], V3[6], V4[6], maxIDs[2];
	int k = 0, z = sizez - 1, ID = 1;

	out << "\t" << "Ограничения";
	for (int j = 0; j < sizegx; j++)
		out << "\n\tg1[" << j << "] = " << Gi[0][j] << "\tg2[" << j << "] = " << Gi[1][j] << "\tg3[" << j << "] = " << Gi[2][j] << "\tg4[" << j << "] = " << Gi[3][j];
	out << "\n\n";

	if (paraller)
	{
		V1[0] = Gi[0][0];
		V2[0] = Gi[1][0] + V1[0];
		V3[0] = Gi[2][0] + V2[0];
		V4[0] = Gi[3][0] + V3[0];

		x1[0] = Xi[0];
		x2[0] = 0;
		x3[0] = 0;
		x4[0] = 0;
		out << "\tx1 = " << x1[0] << "\tx2 = " << x2[0] << "\tx3 = " << x3[0] << "\tx4 = " << x4[0] << endl;

		for (int i = 1; i < sizegx; i++)
		{
			// V1
			V1[i] = Max(Gi[0][i], V1[i - 1]);
			x1[i] = Xi[i];

			// V2
			m(Gi, V1, i, 1, maxIDs);
			V2[i] = maxIDs[0];
			ID = (int)maxIDs[1];
			x2[i] = (int)ID == 0 ? 0 : int(ID);

			// V3
			m(Gi, V2, i, 2, maxIDs);
			V3[i] = maxIDs[0];
			ID = (int)maxIDs[1];
			x3[i] = ID == 0 ? 0 : int(ID);

			// V4
			m(Gi, V3, i, 3, maxIDs);
			V4[i] = maxIDs[0];
			ID = (int)maxIDs[1];
			x4[i] = ID == 0 ? 0 : int(ID);

			// Xi
			out << "\tx1 = " << x1[i] << "\tx2 = " << x2[i] << "\tx3 = " << x3[i] << "\tx4 = " << x4[i] << endl;
		}
		delete[]Xi;
	}
	else
	{
		V1[0] = Gi[0][0];
		x1[0] = Xi[0];
		out << "\tx1 = " << x1[0];

		for (int i = 1; i < sizegx; i++)
		{
			x1[i] = Xi[i];
			V1[i] = Max(Gi[0][i], V1[i - 1]);
			out << "\tx1 = " << x1[i];
		}
		delete[]Xi;

		out << "\n";
		V2[0] = Gi[1][0] + V1[0];
		x2[0] = 0;
		out << "\tx2 = " << x2[0];
		for (int i = 1; i < sizez; i++)
		{
			m(Gi, V1, i, 1, maxIDs);
			V2[i] = maxIDs[0];
			ID = (int)maxIDs[1];

			x2[i] = (int)ID == 0 ? 0 : int(ID);
			out << "\tx2 = " << x2[i];
		}

		out << "\n";
		V3[0] = Gi[2][0] + V2[0];
		x3[0] = 0;
		out << "\tx3 = " << x3[0];
		for (int i = 1; i < sizez; i++)
		{
			m(Gi, V2, i, 2, maxIDs);
			V3[i] = maxIDs[0];
			ID = (int)maxIDs[1];

			x3[i] = ID == 0 ? 0 : int(ID);
			out << "\tx3 = " << x3[i];
		}

		out << "\n";
		V4[0] = Gi[3][0] + V3[0];
		x4[0] = 0;
		out << "\tx4 = " << x4[0];
		for (int i = 1; i < sizez; i++)
		{
			m(Gi, V3, i, 3, maxIDs);
			V4[i] = maxIDs[0];
			ID = (int)maxIDs[1];

			x4[i] = ID == 0 ? 0 : int(ID);
			out << "\tx4 = " << x4[i];
		}
		out << "\n";
	}

	for (int j = 0; j < sizez; j++)
		out << "\n\tV1[" << j << "] = " << V1[j] << "\tV2[" << j << "] = " << V2[j] << "\tV3[" << j << "] = " << V3[j] << "\tV4[" << j << "] = " << V4[j];
	out << "\n\n";

	x[0] = x4[z];
	z = z - x[0];
	out << "\n\tz = " << z << "\t x4 = " << x[0];

	x[1] = x3[z];
	z = z - x[1];
	out << "\n\tz = " << z << "\t x3 = " << x[1];

	x[2] = x2[z];
	z = z - x[2];
	out << "\n\tz = " << z << "\t x2 = " << x[2];

	x[3] = x1[z];
	z = z - x[3];
	out << "\n\tz = " << z << "\t x1 = " << x[3];
}

void Example_2(ofstream &out, int size1, int size2, int Z, int optZ, float* xi, float** mas)
{
	int sizegx = size1;
	int sizez = size2;
	int z = Z;

	float Gi[10][10];

	for (int i = 0; i < sizegx; i++)
		for (int j = 0; j < sizegx; j++)
			Gi[i][j] = mas[i][j];

	float V1[11], V2[11], V3[11];
	int k = 0, kol = 0, alpha = 0, j = 1, X[3][11], x[11];

	out << "\t\tИсходные данные" << endl;
	for (int j = 0; j < sizegx; j++)
		out << "\n\tn = " << j + 1 << "\tw[" << j << "] = " << Gi[0][j] << "\tc[" << j << "] = " << Gi[1][j];
	out << "\n\nz = " << z << endl;

	do
	{
		if (kol == z + 1)
		{
			kol = 0;
			j++;
			out << "\n\n";
		}

		if (j == 1)
		{
			alpha = kol / Gi[0][0];
			X[0][kol] = alpha;
			if (kol == 0 || kol == 1)
				V1[kol] = Max(0, Gi[1][0] * alpha);
			else
				V1[kol] = Max3(Gi[1][0], alpha);

			out << "\n\tz = " << kol << "\t alpha[" << kol << "] = " << alpha << "\tV1 = " << V1[kol] << "\tx1[" << kol << "] = " << X[0][kol];
		}

		if (j == 2)
		{
			alpha = kol / Gi[0][1];
			X[1][kol] = alpha;
			V2[kol] = Max4(Gi[1][1], Gi[0][1], V1, alpha, kol);

			out << "\n\tz = " << kol << "\t alpha[" << kol << "] = " << alpha << "\tV2 = " << V2[kol] << "\tx2[" << kol << "] = " << X[1][kol];
		}

		if (j == 3)
		{
			alpha = kol / Gi[0][2];
			X[2][kol] = alpha;
			V3[kol] = Max4(Gi[1][2], Gi[0][2], V2, alpha, kol);

			out << "\n\tz = " << kol << "\t alpha[" << kol << "] = " << alpha << "\tV3 = " << V3[kol] << "\tx3[" << kol << "] = " << X[2][kol];
		}

		kol++;
	} while (j < 4);

	z = optZ;
	for (int i = 0, j = sizez - 1; i < sizez; i++, j--)
	{
		x[i] = X[j][z];
		z = z - Gi[0][2] * x[i];
		out << "\n\tx = " << x[i] << "\tz = " << z;
	}
}
