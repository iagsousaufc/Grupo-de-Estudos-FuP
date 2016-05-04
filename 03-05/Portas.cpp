#include <iostream>

using namespace std;

int main(){

	long long int n, porta, a, b;

	cout << "Informe a porta: ";
	cin >> n;
	
	a = 1;
	b = 1;
	
	if (n == 1 || n == 2){
		porta = 1;
	} else{
		for (int i = 3; i <= n; i++){
			porta = a + b;
			a = b;
			b = porta;
		}
	}

	cout << "Numero da porta: " << porta << endl;
	return 0;
}
