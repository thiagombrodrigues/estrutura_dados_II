#include <iostream>
#include <string>

using namespace std;

// Modela a classe Veiculo
class Veiculo
{
	// Atributos da classe
 	protected:
 		string marca;
 		string modelo;
 		float preco;

 	private:
		int teste;

 	// Metodos da classe
	public:

		// Construtor
		Veiculo()
		{
			marca = "";
			modelo = "";
			preco = 0.0;
		};

		// Construtor com parametros - polimorfismo do tipo sobrecarga
		Veiculo(string mc, string md, float pr)
		{
			marca = mc;
			modelo = md;
			preco = pr;
		};

		// Metodo destrutor
		~Veiculo()
		{
			cout << "Deletando instancia de Veiculo." << endl;
		};

		// Metodo para retornar marca - acoplamento
		string getMarca()
		{

			return marca;
		};

		// Metodo para setar valor de marca - acoplamento
		void setMarca(string mc)
		{
			marca = mc;
		};

		// Metodo para retornar modelo - acoplamento
		string getModelo()
		{

			return modelo;
		};

		// Metodo para setar valor de modelo - acoplamento
		void setModelo(string md)
		{
			modelo = md;
		}

		// Metodo para retornar preco - acoplamento
		float getPreco()
		{
			return preco;
		};

		// Metodo para setar preco - acoplamento
		void setPreco(float pr)
		{
			preco = pr;
		};


		// Metodos para teste de visibilidade de atributos
		int getTeste()
		{
			return teste;
		};
		
		// Metodos para teste de visibilidade de atributos
		void setTeste(int ts)
		{
			teste = ts;
		};

		bool andarVeiculo(int velocidade)
		{


			////
			return true;
		};
};




// Modela a classe Carro, que herda as caracteristicas de Veiculo
class Carro:public Veiculo
{
	// Atributos da classe
 	private:
 		int tipoCambio;
 		int numeroAssentos;

 	// Metodos da classe
	public:

		// Construtor
		Carro()
		{
			
		};

		// Construtor com parametros - polimorfismo do tipo sobrecarga
		Carro(string mc, string md, float pr, int tc, int na)
		{
			marca = mc;
			modelo = md;
			preco = pr;

			tipoCambio = tc;
			numeroAssentos = na;

			// teste = "teste";
			// setTeste(10);
		};

		// Metodo destrutor
		~Carro()
		{
			
		};

		int getTipoCambio()
		{
			return tipoCambio;
		};
		
		void setTipoCambio(int tc)
		{
			tipoCambio = tc;
		};

		int getNumeroAssentos()
		{
			return numeroAssentos;
		};

		void setNumeroAssentos(int nc)
		{
			numeroAssentos = nc;
		};
};



// Modela a classe Moto, que herda as caracteristicas de Veiculo
class Moto:public Veiculo
{
	// Atributos da classe
 	private:
 		int cilindradas;

 	// Metodos da classe
	public:

		// Construtor
		Moto()
		{
			
		};

		// Construtor com parametros - polimorfismo do tipo sobrecarga
		Moto(string mc, string md, float pr, int cl)
		{
			marca = mc;
			modelo = md;
			preco = pr;

			cilindradas = cl;
		};

		// Metodo destrutor
		~Moto()
		{
			cout << "Deletando moto" << endl;
			
		};

		int getCilindradas()
		{
			return cilindradas;
		};

		void setCilindradas(int cl)
		{
			cilindradas = cl;
		};
};
