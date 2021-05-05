#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	float v, c;

	cout << "Programa para convertir valores numericos en formato Km/H a Mts/Seg.\nIngresar valor en Km/H: " << endl;
	cin >> v;
	c = v / 3.6;
	cout << "Su valor convertido a Mts/Seg: " << c << endl;
	cout << "Presione Enter(INTRO) para terminar programa.";
	cin.get();
	return 0;
}
