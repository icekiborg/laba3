#pragma once
#include <iostream>
using namespace std;
class Land
{
protected:
	int area;
public:
	Land()
	{
		area = 0;
	}
	Land(int s)
	{
		area = s;
	}
};
class Sea
{
protected:
	int area1;
public:
	Sea(int s1)
	{
		area1 = s1;
	}
};
class Island : public Land, public Sea // множественное наследование
{
private:
	char *name;
public:
	Island(int s, int s1, const char *n) : Land(s), Sea(s1)
	{
		name = (char*)n;
	}
	void print()
	{
		cout << "Name: " << name << endl;
		cout << "Area sea: " << area1 << endl;
		cout << "Area land: " << area << endl;
	}
};
class State : public Land // базовый Land
{
protected:
	char *name;
	int kolPeople;
public:
	State()
	{
		name = "";
		kolPeople = 0;
		area = 0;
	}
	State(int s, const char *n, int kol) : Land(s)
	{
		name = (char*)n;
		kolPeople = kol;
	}
	void setState(int s, const char *n, int kol)
	{
		area = s;
		name = (char*)n;
		kolPeople = kol;
	}
	void print()
	{
		cout << "Name: " << name << endl;
		cout << "Area land: " << area << endl;
		cout << "Number of people: " << kolPeople << endl;
	}
};
class Continent
{
private:
	int kolState;
public:
	State *a[10]; // композиция
	Continent(int kol)
	{
		kolState = kol;
		for (int i = 0; i < kol; i++)
		{
			a[i] = new State();
		}
	}
	void show()
	{
		for (int i = 0; i < kolState; i++)
		{
			cout << "State" << i+1 << endl;
			a[i]->print();
		}
	}
};