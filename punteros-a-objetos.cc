// Archivo: punteros-a-objetos.cc
#include <iostream>

struct S{
	int i;
	// constructor de estructura
	S( int i ){ S::i = i; std::cout << "NACE! " << i << " !\n"; }
	// destructor de estructura
	~S(){ std::cout << "MUERE " << i << " !\n"; }
	void f(){ std::cout << ' ' << i << "\n"; }
};

int main()
{
	S a( 2 ) , * pa = &a;
	a.f();	// usa la función mediante el nombre de la estructura
	pa->f();// usa la función mediante el puntero a estructura
	return 0;
}
// Archivo: Fin punteros-a-objetos.cc
