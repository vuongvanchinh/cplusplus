#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

int main() {
	typedef struct sinhvien {
		char hoten[25];
		float toan;
		float tin;
		float tb;
		struct sinhvien* next;
	}node;

	node* head = NULL;
	int soSV;
	ifstream infile("data.txt");
	infile >> soSV;
	infile.ignore();
	//cout << soSV;
	for (int i = 0; i < soSV; i++) {
		char name[25];
		infile.getline(name, 25);
		cout << name;
		float diemtoan, diemtin;
		infile >> diemtoan; cout << diemtoan;
		infile >> diemtin; cout << diemtin;
		infile.ignore();

		node* pNew = new node;
		pNew->next = NULL;
		strcpy_s(pNew->hoten, name);
		cout << pNew->hoten;
		pNew->toan = diemtoan;
		pNew->tin = diemtin;
		pNew->tb = (diemtoan + diemtin) / 2;
		if (head == NULL) {
			head = pNew;
		}
		else {
			pNew->next = head;
			head = pNew;
		}
	};
	infile.close();
	//Duyetdanhsach
	cout << "\nDanh sach sinh vien: \n";
	node* p = head;
	while (p != NULL) {
		cout << p->hoten << " ";
		cout << p->toan << ' ' << p->tin << " TB: " << p->tb << endl;
		p = p->next;
	}
	return 0;
}
