#include <iostream>
using namespace std;

//EDUARDO GERMAN RUIZ MAMANI
//CUI 20193061

int main(int argc, char *argv[]) {
	int mult = 5;
	int ini = 1;
	int fin = 100;
	
	cout << "Multiplos de " << mult << " entre " << ini << " y " << fin << ": " << endl;
	for (int i = ini; i <= fin ; i++) {
		if ( i%5 == 0 )
			cout<< i <<" ";
	}
	return 0;
}

