#include <iostream> <locale>
using namespace std;

// ATIVIDADE 1
/*
int main() {

	locale::global(locale("pt_BR.UTF-8"));

	int vetor[10];

	cout << "Insira os elementos do vetor: " << std::endl;

	for (int i = 0; i < 10; i++) {
		cout << " Elemento " << i + 1 << ":";
		cin >> vetor[i];
	};

	cout << "\nElementos do vetor: " << std::endl;

	for (int i = 0; i < 10; i++) {
		cout << vetor[i] << endl;
	};

	return 0;
}
*/



// ATIVIDADE 2
/*int main() {

	locale::global(locale("pt_BR.UTF-8"));

	const int tamanho = 7;
	int vetor[tamanho];
	int soma = 0;

	cout << "Insira os elementos do vetor: " << std::endl;
	for (int i = 0; i < tamanho; i++) {
		cout << "Elemento " << i + 1 << ":";
		cin >> vetor[i];
		soma += vetor[i];
	}

	cout << "Valor da soma dos elementos do vetor: " << soma << endl;

	return 0;
}
*/


// ATIVIDADE 3
/*
int main() {

	locale::global(locale("pt_BR.UTF-8"));

	int alunos_18 = 3;
	int alunos_17 = 2;
	int alunos_16 = 12;

	int idadeSoma = (18 * alunos_18) + (17 * alunos_17) + (16 * alunos_16);
	int totalALunos = alunos_18 + alunos_17 + alunos_16;

	double mediaIdades = static_cast<double>(idadeSoma) / totalALunos;


	cout << "A média das idades dos alunos é: " << mediaIdades << std::endl;
}
*/


// ATIVIDADE 4
/*
int main() {

	locale::global(locale("pt_BR.UTF-8"));

	int valores[] = { 5,9,7,10,15,23,20,30 };
	int total = 0;

	for (int i = 0; i < sizeof(valores) / sizeof(valores[0]); i++) {
		total += valores[i];
	}

	cout << "O Homem tem um total de " << valores << " em depósitos. " << std::endl;

	return 0;
}
*/



// ATIVIDADE 5
/*
int main() {

	locale::global(locale("pt_BR.UTF-8"));

	locale::global(locale("pt_BR.UTF-8"));

	int vetor[10];
	cout << "Preencha o vetor com 10 Numeros: " << std::endl;

	for (int i = 0; i < 10; i++) {
		cout << "Elemento " << i + 1 << " : ";
		cin >> vetor[i];
	}

	cout << "Escolhe uma dessas opções: " << std::endl;
	cout << "Opção 1: Soma de todos os elementos do vetor." << std::endl;
	cout << "Opção 2: Subtração de todos os elementos do vetor." << std::endl;
	cout << "Opção 3: Faça a multiplicação de todos os elementos do vetor." << std::endl;

	int opcao;
	cout << "Opção:";
	cin >> opcao;


	int resultado;
	switch (opcao)
	{
	case 1:
		resultado = 0;
		for (int i = 0; i < 10; i++) {
			resultado += vetor[i];
		}
		cout << "A soma dos elementos é: " << resultado << std::endl;
		break;

	case 2:
		resultado = vetor[0];
		for (int i = 0; i < 10; i++) {
			resultado -= vetor[i];
		}
		cout << "A subtração dos elementos é: " << resultado << std::endl;
		break;
	case 3:
		resultado = 1;
		for (int i = 0; i < 10; i++) {
			resultado *= vetor[i];
		}
		cout << "A multiplicação dos elementos é: " << resultado << std::endl;
		break;
	default:
		cout << "Opção inválida!";
		break;
	}
	return 0;
}
*/