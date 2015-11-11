#include "Header.h"
int main()
{
	char name[10];
	int kolPeople;
	int area;
	Island *a = new Island(12, 43, "Island1");
	a->print();
	State *b = new State(12, "Belarus", 1000000);
	b->print();
	Continent *c = new Continent(3);
	for (int i = 0; i < 3; i++)
	{
		cout << "Print data " << endl;
		cin >> name >> kolPeople >> area;
		c->a[i]->setState(area, name, kolPeople);
	}
	c->show();
	system("pause");
}