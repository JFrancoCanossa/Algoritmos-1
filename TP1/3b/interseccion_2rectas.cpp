#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char **argv) {

	float x, y,m_1, m_2, b_1, b_2;


	cout << "Ingresar valores de la 1ra recta:\n" << endl;
		scanf("%f %f",&m_1, &b_1);
		printf("Valores de 1da Recta: y_1 = %.2f * x + %.2f\n ",m_1, b_1);
	cout << "\nIngresar valores de la 2ra recta:\n" << endl;
		scanf("%f %f",&m_2, &b_2);
		printf("Valores de 2da Recta: y_2 = %.2f * x + %.2f\n ",m_2, b_2);

	cout << "\nIngresar valor de x:" << endl;
		scanf("%f",&x);

	if(m_1==m_2 && b_1==b_2)
	{
		cout << "Las rectas son paralelas e identicas, con infinitos puntos de interseccion" << endl;
	}
	else if(m_1==m_2 && b_1!=b_2)
	{
		cout << "Las rectas son paralelas, diferentes y no hay interseccion." << endl;
	}
	else
	{
		x = (b_2-b_1)/(m_1-m_2);
		y = (m_1*x)+b_1;

	cout << "El punto de interseccion de las rectas es en x: " << x << " e y: " << y << endl;
	}

	cout << "Presione ENTER(INTRO) para finalizar el programa";
	cin.get();
	return 0;
}
