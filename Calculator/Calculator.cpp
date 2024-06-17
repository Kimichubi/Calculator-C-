#include	<iostream>
using namespace std;


int main() {
	setlocale(LC_ALL, "portuguese");

	float x, y;
	float sum;
	int option;
	do {
		cout << "\nPor favor escolha uma das opções\n 1: Soma\n 2: Subtracão \n 3: Divisão \n 4: Multiplicação \n 0: Sair \n";
		cin >> option;
		switch (option) {
		case 1:
			cout << "Digite o valor a ser somado x: \n";
			cin >> x;
			cout << "Digite o valor a ser somado y: \n";
			cin >> y;
			sum = x + y;
			cout << "Resultado: " << sum;
			break;
		case 2:
			cout << "Digite o valor a ser somado x: \n";
			cin >> x;
			cout << "Digite o valor a ser somado y: \n";
			cin >> y;
			sum = x - y;
			cout << "Resultado: " << sum;
			break;
		case 3:
			cout << "Digite o valor a ser somado x: \n";
			cin >> x;
			cout << "Digite o valor a ser somado y: \n";
			cin >> y;
			sum = x / y;
			cout << "Resultado: " << sum;
			break;
		case 4:
			cout << "Digite o valor a ser somado x: \n";
			cin >> x;
			cout << "Digite o valor a ser somado y: \n";
			cin >> y;
			sum = x * y;
			cout << "Resultado: \n" << sum;
			break;
			cout << "Valor inválido! \n";
		default:
			break;
		}

	} while (option != 0);
	return 0;
}