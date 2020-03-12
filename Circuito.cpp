#include<iostream>
using namespace std;
class Circuito
{
	protected:
		int a, b, s;
	public: 
		Circuito()
		{
			a=0;
			b=0;
			s=0;
		}
		Circuito(int x, int y)
		{
			a=x;
			b=y;
			s=0;
		}
		~Circuito()
		{
		}
		void set_dados()
		{
			cout<<"\nInsira o primeiro valor: ";
			cin>>a;
			cout<<"\nInsira o segundo valor: ";
			cin>>b;
		}
};
class And_C:public Circuito
{
	public:
		int saida ()
		{
			if (a==1 and b==1)
				return 1;
			else
				return 0;
		}
};
class Or_C:public Circuito
{ 
	public:
		int saida(int a, int b)
		{
			if (a==0 and b==0)
				return 0;
			else
				return 1;
		}
};
class Not_C:public Circuito
{
	public:
		int saida(int a)
		{
			if (a==0)
				return 1;
			else
				return 0;
		}
};
int main()
{
	int s,s1,s2;
	And_C A, B;
	Or_C C;
	Not_C D;
	
	A.set_dados();
	B.set_dados();
	
	s = A.saida();
	s1 = B.saida();
	
	cout << "\n Saida de A=" << s;
	cout << "\n Saida de B=" << s1;
	s2 = C.saida(s,s1);
	cout << "\n A saida de C = " << s2;
	
	cout<<"\nA saida not e: " << D.saida(s2);
	return 0;
}
