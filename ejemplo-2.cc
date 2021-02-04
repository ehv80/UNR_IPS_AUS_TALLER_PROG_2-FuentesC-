// Archivo: ejemplo-2.cc
#include <iostream>

class Q {
		int i;
		static int j;
	public:
		/* constructor */
		Q( int i ){ j++ ; this->i = i ; std::cout << "NACE " << i << "!\n"; }
		/* destructor */
		~Q(){ --j ; std::cout << "MUERE " << i << "!\n"; }
		static int cuantos(){ return j; }
};
int Q::j;	/* Globales
Q a(1), b(2);	 */

int main()
{
	Q * p1 , * p2 , * p3;
	std::cout << Q::cuantos() << "\n"; p1 = new Q(3);
	std::cout << Q::cuantos() << "\n"; p2 = new Q(4);
	std::cout << Q::cuantos() << "\n"; p3 = new Q(5);
	std::cout << Q::cuantos() << "\n";
	std::cout << Q::cuantos() << "\n"; delete p1;
	std::cout << Q::cuantos() << "\n"; delete p2;
	std::cout << Q::cuantos() << "\n"; delete p3;

	return 0;	// Salida OK!
}	
// Archivo: ejemplo-2.cc
