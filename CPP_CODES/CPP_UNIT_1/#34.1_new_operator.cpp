// Memory Management Operator (1)
#include<iostream.h>
#include<conio.h>
class character
{
	char *p;
	public:
		void call()
		{
			p = new char[4];
			p = "hello";
		}
		void disp()
		{
			cout << p << endl;
		}
};
void main()
{
	clrscr();
	character  c;
	c.call();
	c.disp();
}
