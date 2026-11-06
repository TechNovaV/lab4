#include "thuvie.h"
int main()
{
	//DaySo x;
	//int m;
	////nhapDaySo(x);
	////cout << "Day so vua nhap la: " << endl;
	////xuatDaySo(x);
	////cout << "Tong cac phan tu cua day so la: ";
	////cout << tongDS(x) << endl;
	////if (luuDaySo(x, "dayso.txt"))
	////	cout << "Day so da duoc luu" << endl;
	////else
	////	cout << "Luu khong thanh cong" << endl;
	//if (docDaySo(x, "dayso.txt")) {
	//	//cout << "Day so da duoc doc" << endl;
	//	//xuatDaySo(x);
	//	//cout << "Tich cac phan tu cua day so la: " << tichDS(x) << endl;
	//	//cout << "So pt la: "<< demPTDuong(x) << endl;
	//	//cout << "so chan trog day: " << endl;
	//	//xuatchan(x);
	//	//cout << "Tong cac phan tu chan cua day so la: "<<tongchanDS(x) << endl;
	//	//cout << "CHI so la: " << tichPTChiSoChan(x) << endl;
	//	//cout << "Tong cac phan tu  so la: " << tongnguyenDS(x) << endl;
	//	//cout << "So pt la: " << demPTshtDS(x) << endl;
	//	if (minDuong(x, m) == true)
	//		cout << "mind " << m << endl;
	//	cout << vtmax(x)<<endl;
	//	cout << demmax(x) <<endl;
	//	cout << vtmin(x) <<endl;
	//	cout << ssnt(x) << endl;
	//	if (sntmin(x, m) == true)
	//		cout << "sntmin " << m << endl;
	//	cout << demkhacnhau(x) << endl;
	//	cout << demsht(x) << endl;
	//	if (shtmax(x, m) == true)
	//		cout << "sntmax " << m << endl;
	//}	
	//else
	//	cout << "Doc khong thanh cong" << endl;
	DaySo x,j,n, x1, x2;
	//nhapDaySo(x);
	//cout << "Day so vua nhap la: " << endl;
	if (docDaySo(x, "dayso.bin")) {
		xuatDaySo(x);
		int so, viTri;
		cout << "Nhap so can them: ";
		cin >> so;
		cout << "Nhap vi tri can them: ";
		cin >> viTri;
		if (chenXVaoViTri(x, viTri, so))
		{
			cout << "Chen vao thanh cong" << endl;
			cout << "Day so sau khi chen la: ";
			xuatDaySo(x);
		}
		else
			cout << "Chen khong duoc" << endl;
		cout << "Nhap vi tri can xoa: ";
		cin >> so;
		if (xoaPhanTu(x, so))
		{
			cout << "Xoa thanh cong" << endl;
			cout << "Day so sau khi xoa la: ";
			xuatDaySo(x);
		}
		else
			cout << "Xoa khong duoc" << endl;
		int y;
		cout << "Nhap so can them dau: ";
		cin >> y;
		if (themDau(x, y)) {
        cout << "Sau khi them dau: ";
        xuatDaySo(x);
    } else
        cout << "Them dau khong duoc" << endl;

    cout << "Nhap so can them cuoi: ";
    cin >> y;
    if (themCuoi(x, y)) {
        cout << "Sau khi them cuoi: ";
        xuatDaySo(x);
    } else
        cout << "Them cuoi khong duoc" << endl;

	giamdan(x);
	cout << "ds giam dan la : " << endl;
	xuatDaySo(x);
	bubbleSort(x);
	cout << "Day so sau khi sap xep la: "<<endl;
	xuatDaySo(x);
	
	nhapDaySo(n);
	bubbleSort(n);
	bubbleSort(x);
	cout << "nhapdsy: "<<endl;
	xuatDaySo(n); 
	
	if (tronDS(x, n, j)) {
		cout << "\n ronthanhcong ";
		xuatDaySo(j);}
	else
		cout << "\n tranthatbai";

	if (tachDS(x,2,x1,x2))
	{
		cout << "\ntach thanh cong";
		cout << "\ndsx1: "; xuatDaySo(x1);
		cout << "\ndsx1: "; xuatDaySo(x2);
	}
	}
	else
		cout << "Doc khong thanh cong" << endl;
	return 0;
}