#include <iostream>
using namespace std;

//EDUARDO GERMAN RUIZ MAMANI
//CUI 20193061

int main(int argc, char *argv[]) {
	int cantprimos = 50;
	int listprim[50];
	int n = 2;
	int d = 2;

	for (int i = 1 ; i <= cantprimos ; i++) {
		while (d <= n/2) {
			if (n%d == 0)
				d = n/2;
			d++;
		}
	}
	
	return 0;
}

