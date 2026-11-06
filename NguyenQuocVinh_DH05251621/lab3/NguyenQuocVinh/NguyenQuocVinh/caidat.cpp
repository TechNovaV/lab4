#include "thuvie.h"
void nhapDaySo(DaySo& ds)
{
	do {
		cout << "Nhap so phan tu: ";
		cin >> ds.n;
	} while (ds.n <= 0);
	for (int i = 0; i < ds.n; i++) {
		cout << "Nhap phan tu thu " << i << " : ";
		cin >> ds.arr[i];
	}
}
void xuatDaySo(DaySo ds)
{
	for (int i = 0; i < ds.n; i++)
		cout << ds.arr[i] << " ";
	cout << endl;
}
bool docDaySo(DaySo& ds,const char* tenFile)
{
	FILE* f;
	f = fopen(tenFile, "r");
	if (f == NULL)
		return false;
	fscanf(f, "%d", &ds.n);
	for (int i = 0; i < ds.n; i++)
		fscanf(f, "%d", &ds.arr[i]);
	fclose(f);
	return true;
}
bool luuDaySo(DaySo ds, const char* tenFile)
{
	FILE* f;
	f = fopen(tenFile, "w");
	if (f == NULL)
		return false;
	fprintf(f, "%d\n", ds.n);
	for (int i = 0; i < ds.n; i++)
		fprintf(f, "%d\t", ds.arr[i]);
	fclose(f);
	return true;
}
int tongDS(DaySo ds)
{
	int tong = 0;
	for (int i = 0; i < ds.n; i++)
		tong += ds.arr[i];
	return tong;
}
int tichDS(DaySo ds)
{
	int tich = 1;
	for (int i = 0; i < ds.n; i++)
		tich *= ds.arr[i];
	return tich;
}
void xuatchan(DaySo ds)
{
	for (int i = 0; i < ds.n; i++)
		if (ds.arr[i] % 2 == 0)
			cout << ds.arr[i] << " ";
	cout << endl;
}
int tongchanDS(DaySo ds) {
	int tong = 0;
	for (int i = 0; i < ds.n; i++) {
		if (ds.arr[i] % 2 == 0)
			tong += ds.arr[i];
	}
	return tong;
}

int tichPTChiSoChan(DaySo ds) {
	int tich = 1;
	for (int i = 0; i < ds.n; i++) {
		if (i % 2 == 0)
			tich *= ds.arr[i];
	}
	return tich;
}


int demPTDuong(DaySo ds)
{
	int dem = 0;
	for (int i = 0; i < ds.n; i++)
	{
		if (ds.arr[i] % 3 == 0 && ds.arr[i] % 5 == 0)
			dem++;
	}
	return dem;
}
bool snt(int n) {
	if (n < 2)return false; \
		for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}return true;
}

int tongnguyenDS(DaySo ds) {
	int tong = 0;
	for (int i = 1; i < ds.n; i++) {
		if (snt(ds.arr[i]))
			tong += ds.arr[i];
	}
	return tong;
}

bool tongshtDS(int n) {
	int s = 0;
	for (int i = 1; i <=n/2; i++)
	{
		if (n % i == 0)
			s +=i ;
	}return s == n && n > 0;
}

int demPTshtDS(DaySo ds){
	int dem = 0;
	for (int i = 0; i < ds.n; i++)
	{
		if (tongshtDS(ds.arr[i]))
			dem++;
	}
	return dem;
}

//lab3
int tim(DaySo ds, int x)
{
	for (int i = ds.n; i>=0; i--)
		if (ds.arr[i] == x)
		return i;
	return -1;
}
int min(DaySo ds)
{
	int x = ds.arr[0];
	for (int i = 1; i < ds.n; i++) {
		if (x > ds.arr[i])
			x = ds.arr[i];
	}
	return x;
}
bool minDuong(DaySo ds, int& min)
{
	bool flag = false;
	for (int i = 0; i < ds.n; i++) {
		if (ds.arr[i] >0)
			if (!flag)
			{
				min = ds.arr[i];
				flag = true;
			}
			else if (min < ds.arr[i])
				min = ds.arr[i];
	}
	return flag;
}

int vtmax(DaySo ds) {
	int vt= 0;
	for (int i = 0; i < ds.n; i++)
		if (ds.arr[i] > ds.n)
			vt = i;
	return vt;
}

int demmax(DaySo ds) {
	int max = ds.arr[vtmax(ds)], dem = 0;
	for (int i = 0; i < ds.n; i++)
		if (ds.arr[i] ==max)
			dem++;
	return dem;
}

int vtmin(DaySo ds) {
	int vt = 0;
	for (int i = 0; i < ds.n; i++)
		if (ds.arr[i] < ds.n)
			vt = i;
	return vt;
}

int ssnt(DaySo ds) {
	int s = 0;
	for (int i = 0; i < ds.n; i++)
		if (snt(ds.arr[i]))
			s += ds.arr[i];
	return s;
}

bool sntmin(DaySo ds, int& min)
{
	bool flag = false;
	for (int i = 0; i < ds.n; i++) {
		if (snt(ds.arr[i]))
			if (!flag)
			{
				min = ds.arr[i];
				flag = true;
			}
			else if (min > ds.arr[i])
				min = ds.arr[i];
	}
	return flag;
}

int demkhacnhau(DaySo ds) {
	int dem = 0;
	for (int i = 0; i < ds.n; i++)
	{
		bool trung = false;
		for (int j = 0; j < i; j++)if (ds.arr[j]==ds.arr[i])
		{
			trung = true;
			break;
		}
		if (!trung)dem++;
	}
	return dem;
}

int demsht(DaySo ds) {
	int dem = 0;
	for (int i = 0; i < ds.n; i++)
		if (tongshtDS(ds.arr[i]))
			dem++;
	return dem;
}

bool shtmax(DaySo ds, int& max)
{
	bool flag = false;
	for (int i = 0; i < ds.n; i++) {
		if (tongshtDS(ds.arr[i]))
			if (!flag)
			{
				max = ds.arr[i];
				flag = true;
			}
			else if (max > ds.arr[i])
				max = ds.arr[i];
	}
	return flag;
}

bool docDaySo(DaySo& ds, char* tenFile) {
	FILE* f;
	f = fopen(tenFile, "rb");
	if (f == NULL)
		return false;
	fread(&ds, sizeof(DaySo), 1, f);
	fclose(f);
	return true;
}

bool luuDaySo(DaySo ds, char* tenFile) {
	FILE* f;
	f = fopen(tenFile, "wb");
	if (f == NULL)
		return false;
	fwrite(&ds, sizeof(DaySo), 1, f);
	fclose(f);
	return true;
}

bool chenXVaoViTri(DaySo& a, int viTri, int x) {
	if (a.n == KTM || viTri < 0 || viTri > a.n)
		return false;
	for (int i = a.n; i > viTri; i--)
		a.arr[i] = a.arr[i - 1];
	a.arr[viTri] = x; 
	a.n++;
	return true;
}

bool xoaPhanTu(DaySo& a, int viTri) {
	if (viTri < 0 || viTri >= a.n)
		return false;
	for (int i = viTri; i < a.n - 1; i++)
		a.arr[i] = a.arr[i + 1];
	a.n--;
	return true;
}

void bubbleSort(DaySo& a)
{
	for (int i = 0; i < a.n - 1; i++)
		for (int j = a.n - 1; j > i; j--)
			if (a.arr[j] < a.arr[j - 1])
				swap(a.arr[j], a.arr[j - 1]);
}
bool themDau(DaySo& a, int x) {
	return chenXVaoViTri(a, 0, x);
}

bool themCuoi(DaySo& a, int x) {
	return chenXVaoViTri(a, a.n, x);
}

void giamdan(DaySo& a)
{
	for (int i = 0; i < a.n - 1; i++)
		for (int j = a.n - 1; j > i; j--)
			if (a.arr[j] > a.arr[j - 1])
				swap(a.arr[j], a.arr[j - 1]);
}


bool tronDS(DaySo a, DaySo b, DaySo c){
	if (a.n == 0 && b.n == 0)
		return false;
	int i = 0, j = 0, k = 0;
	while (i < a.n && j < b.n)
		if (a.arr[i]<b.arr[j])
		{
			c.arr[k] = a.arr[i];
			i++;
		}
		else {
			c.arr[k] = b.arr[j];
			j++;
		}
	while (i < a.n) c.arr[k] = a.arr[i]; k++; i++;
	while (j < b.n) c.arr[k] = b.arr[j]; k++; j++;
	return true;
}

bool tachDS(DaySo a, int index, DaySo& b, DaySo& c) {
	if (index < 0 || index > a.n) return false;
	else { b.n = 0; 
	c.n = 0; 
	int i = 0;
	while (i < index) { b.arr[b.n] = a.arr[i]; b.n++; i++; }
	while (i < a.n) { c.arr[c.n] = a.arr[i]; c.n++; i++; }
	}
	return true;
}