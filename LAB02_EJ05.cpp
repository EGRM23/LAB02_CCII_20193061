#include <iostream>
using namespace std;

//EDUARDO GERMAN RUIZ MAMANI
//CUI 20193061

int main(int argc, char *argv[]) {
	int n, cont, max, min, med=0;
	
	cout << "Cantidad a ingresar: ";
	cin >> n;

	
	for (int i = 1 ; i <= n ; i++ ) {
		cout << "Numero: ";
		cin >> cont;
		
		if ( i == 1 ) {
			max = cont;
			min = cont;
		}
		
		if ( max < cont )
			max = cont;
		
		if ( min > cont )
			min = cont;
		
		med += cont;
	}
	
	cout << "NUMERO MAYOR: " << max << endl;
	cout << "NUMERO MENOR: " << min << endl;
	cout << "MEDIA: " << (double)med/n;
	return 0;
}

