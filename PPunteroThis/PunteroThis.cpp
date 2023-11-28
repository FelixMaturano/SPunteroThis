//#include<iostream>
//
//class Simple 
//{
//private:
//	int m_id{};
//public:
//	Simple(int id) :m_id{ id }
//	{
//	}
//
//	void setID(int id) { m_id = id; }
//	int getID() { return m_id; }
//};
//
//int main()
//{
//
//   Simple simple{ 4 };
//   Simple OtroSimpe{ 6 };
//   OtroSimpe.setID(5);
//
//   std::cout << simple.getID() << '\n';
//   std::cout << OtroSimpe.getID() << '\n';
//	return 0;
//}
///*CONSOLA 
//4
//5*/



//
//#include<iostream>
//
//class Simple
//{
//private:
//	int m_id{};
//public:
//Simple(int id) :m_id{ id }
//	{
//	}
//
//	void setID(int id) { m_id = id; }
//	int getID() { return m_id; }
//};
//
//int main() 
//{
//	Simple A{ 1 }; //this =&A dentro del constructor Simple
//	Simple B{ 2 }; //this =&B dentro del constructor Simple
//	A.setID(3); //this =&A dentro de la funcion miembro serID
//	B.setID(4); //this =&B dentro de la funcion miembro serID
//
//	return 0;
//}
//
///*CONSOLA
//*/



//#include<iostream>
//
//class Cualquiera
//{
//private:
//	int datos;
//public:
//	Cualquiera(int datos)
//	{
//		this->datos = datos;	// this->datos es el mienbro ,
//								//datos es el parametro local
//	}
//
//};

//#include<iostream>
//
//class Calc
//{
//private:
//    int m_valor{ 0 };
//public:
//
//    void sumar(int valor) { m_valor += valor; }
//    void restar(int valor) { m_valor -= valor; }
//    void multiplicar(int valor) { m_valor *= valor; }
//
//    int gerValor() { return m_valor; }
//};
//
//int main() 
//{
//    Calc calc{};
//    calc.sumar(5);
//    calc.restar(3);
//    calc.multiplicar(4);
//
//    std::cout << calc.getValor() << '\n';
//    return 0;
// }/*CONSOLA
//    8   */



#include<iostream>

class Calc {

private:

	int m_valor{};

public:

	Calc& sumar(int valor) { m_valor += valor; return *this; }
	Calc& restar(int valor) { m_valor -= valor; return *this; }
	Calc& multiplicar(int valor) { m_valor *= valor; return *this; }

	int getValor() { return m_valor; }
};

int main() 
{
	Calc calc{};
	calc.sumar(5).restar(3).multiplicar(4);

	std::cout << calc.getValor() << '\n';
	return 0;
}













