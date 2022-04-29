#include <iostream>
using namespace std;

//EDUARDO GERMAN RUIZ MAMANI
//CUI 20193061

int main(int argc, char *argv[]) {
	int s = 0;
	int max = 100;
	
	for (int i = 1; i <= max/2 ; i++) {
		s += 2*i;
	}
	
	cout<<"La suma es "<<s;
	return 0;
}

