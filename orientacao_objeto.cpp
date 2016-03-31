#include "veiculo.hpp"

// Funcao principal do sistema
int main(int argc, char **argv)
{
	// Variaveis locais
	string texto;
	float valor;
	int numero;

	// Exemplo de manipulacao de objetos - estatica
	Veiculo veiculo;
	cout << "Informe a marca do veiculo:" << endl;
	cin >> texto;
	veiculo.setMarca(texto);

	cout << "Informe o modelo do veiculo:" << endl;
	cin >> texto;
	veiculo.setModelo(texto);

	cout << "Informe o preco do veiculo:" << endl;
	cin >> valor;
	veiculo.setPreco(valor);

	cout << "Dados do veiculo: ";
	cout << veiculo.getMarca() << " - ";
	cout << veiculo.getModelo() << " - ";
	cout << veiculo.getPreco() << endl << endl;

	// Exemplo de manipulacao de objetos - dinamica + heranca
	Carro *carro;
	carro = new Carro();

	cout << "Informe a marca do carro:" << endl;
	cin >> texto;
	carro->setMarca(texto);

	cout << "Informe o modelo do carro:" << endl;
	cin >> texto;
	carro->setModelo(texto);

	cout << "Informe o preco do carro:" << endl;
	cin >> valor;
	carro->setPreco(valor);

	cout << "Informe o tipo de cambio do carro:" << endl;
	cin >> numero;
	carro->setTipoCambio(numero);

	cout << "Informe o numero de assentos do carro:" << endl;
	cin >> numero;
	carro->setNumeroAssentos(numero);

	cout << "Dados  do carro: ";
	cout << carro->getMarca() << " - ";
	cout << carro->getModelo() << " - ";
	cout << carro->getPreco() << " - ";
	cout << carro->getTipoCambio() << " - ";
	cout << carro->getNumeroAssentos() << endl << endl;
	delete carro;

	// // Exemplo de manipulacao de objetos - dinamica + heranca
	Moto *moto;
	moto = new Moto("Moto teste", "Modelo teste", 30000.5, 600);

	cout << "Dados da moto: ";
	cout << moto->getMarca() << " - ";
	cout << moto->getModelo() << " - ";
	cout << moto->getPreco() << " - ";
	cout << moto->getCilindradas() << endl << endl;
	delete moto;

	// Exemplo de alocacao/desalocacao dinamica de arrays de Objetos
	Moto *vetor_motos;
	vetor_motos = new Moto[10];
	delete [] vetor_motos;

	return 0;
}
