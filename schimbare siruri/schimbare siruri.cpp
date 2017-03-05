//Nicorici Adrian, 22.03.2014
// Se considera un sir a de maxim 30 de numere intregi. Sa se scrie un program care inlocuieste numerele sirului conform relatiei :a[i]=a[i]-min(a) 

#include <iostream>
using namespace std;

void citire(int n,int k[30]);
int minim(int n,int k[30]);
void schimbare(int n,int k[30]);
void afisare(int n,int k[30]);


void citire(int n,int k[30]){
	int i;
	for(i=0;i<n;i++){
		cout << "sir[" << i << "]=";
		cin >> k[i];
	}
}

int minim(int n,int k[30]){
	int min=0,i=0;
	min=k[i];
	for(i=0;i<n;i++){
		if(min>k[i]){
			min=k[i];
		}
	}
	return min;
}

void schimbare(int n,int k[30]){
	int i,min;
	min=minim(n,k);
	cout << "min sir:" << min << endl;
	for(i=0;i<n;i++){
		k[i]=k[i]-min;
	}
}


void afisare(int n,int k[30]){
	int i;
	cout << "Vectorul schimbate conform relatiei a[i]:=a[i]-min(a):" << endl;
	for(i=0;i<n;i++){
		cout << "sir[" << i << "]= " ;
		cout << k[i];
		cout << endl;
	}
}

int main(){
	int n,sir[30];
	cout << "Introduceti un nr:" << endl;
	cin >> n;
	cout << "Introduceti elementele vectorului:" << endl;
	citire(n,sir);
	minim(n,sir);
	schimbare(n,sir);
	afisare(n,sir);

	system("pause");
	return 0;
}