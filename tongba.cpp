#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int n;
typedef struct sinhvien{
	sinhvien * next;
	string s;
	double dt, dtin, tb;
}Node;
Node*head = NULL;
Node* InsertTail(Node* head,string s,double dt,double dtin){
	Node * n = head;
	Node* m = new Node;
		m->s = s;
		m->dt = dt;
		m->dtin = dtin;
		m->tb = (dt + dtin)/2;
		m->next = NULL;
	if(head == NULL){
		return m;
	}
	while(n->next != NULL) n = n->next;
		n->next = m;
		return head;
}
double Lamtron(double tb){
	if(tb - int(tb) < 0.25) return int(tb);
	if(0.25 <= (tb - (int(tb))) && (tb - int(tb)) <0.75) return int(tb) + 0.5;
	if(0.75 <= (tb - int(tb))) return int(tb) + 1;
}
void print(Node * head){
	Node * n = head;
	while(n!= NULL){
	if(Lamtron(n->tb) >= 8 && n->dt >=7 && n->dtin>=7) cout<<n->s <<"\n";
	n = n->next;}
}
int main(){
	ifstream infile("data.txt");
	infile >> n;
	string s;
	double dt, dtin;
	if(infile.fail()){
		cout << "Can not open file!";
		return 0;
	}
	while(!infile.eof()){
		getline(infile, s);
        for(int i = 1; i <= n; i++){
		getline(infile, s);
		infile>>dt>>dtin;
		head = InsertTail(head, s, dt, dtin);
	}
	}
	print(head);
	return 0;
}
