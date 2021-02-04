// Archivo: funciones-dentro-de-estrucutras.cc
#include <iostream>

struct S {	// S es el nombre de la estructura
	int i;

	// declara una función dentro de la estructura
	void f(){ std::cout << i << "\n"; }
};

int main()
{
	// Para declarar una variable del tipo "struct S"
	// en C++ basta con poner: 	S nombre-variable
	// sin necesidad de poner struct.
	S a, b;

	a.i = 10;// el operador "." es el selector de miembro de la estructura
	b.i = 20;
	a.f();	// aquí invoca a la función "f" de la "struct S" llamada "a"
	b.f();
	return 0;	//salida OK!
} 
// Fin Archivo: funciones-dentro-de-estrucutras.cc
