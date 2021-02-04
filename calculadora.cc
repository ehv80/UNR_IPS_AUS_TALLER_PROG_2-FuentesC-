// Archivo: calculadora.cc
#include <iostream>

class Expresion{	// CLASE ABSTRACTA
	public:
		virtual int evaluar() = 0;
};		// ÚNICO MÉTODO ABSTRACTO

class Numero : public Expresion{	// CLASE CONCRETA
		int n;	// privado
	public:
		/* constructor */
		Numero( int n ):n(n){}
		// inicializa también así: ":n(n)"
		int evaluar(){ return n; }
};
class Suma : public Expresion {
		Expresion * izq, * der; // privado
	public:
		Suma( Expresion * izq , Expresion * der ):izq(izq),der(der){}
		int evaluar(){ return izq-> evaluar() + der->evaluar(); }
};

int main()
{
	Expresion * expr =
		new Suma(
				new Numero(7) ,
				new Suma(
					new Numero(8) ,
					new Numero(9)
					)
			);
	std::cout << "Esto da " << expr->evaluar() << "\n";
	return 0;
}
// Fin Archivo: calculadora.cc
