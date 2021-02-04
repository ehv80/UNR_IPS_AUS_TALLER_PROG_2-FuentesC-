// Archivo: miembros-compartidos.cc
#include <iostream>

struct S{
	int i;
	S( int i ){ S::i = i; std::cout << "NACE " << i << " !\n"; }
	~S(){ std::cout << "MUERE " << i << " !\n"; }
	void f(){ std::cout << i << "\n"; }
};
S a(3), b(4), c(5), * pa = &a, * pb = &b , * pc = &c;	
// Tanto a, como b, como c, tienen su propio "int i"
int main()
{
	a.f();
	pa->f();
	
	b.f();
	pb->f();
	
	c.f();
	pc->f();
	
	return 0;	//Salida OK!
}
// Fin Archivo: miembros-compartidos.cc
