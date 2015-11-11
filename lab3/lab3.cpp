// lab3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "class.h"
using namespace std;

int setabc(int a[3])
{
	cout << "a ";
	cin >> a[0];
	cout << "b ";
	cin >> a[1];
	cout << "c ";
	cin >> a[2];
	return *a;
}

int setsm(int m[2])
{
	cout << "s ";
	cin >> m[0];
	cout << "m ";
	cin >> m[1];
	return *m;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a[3] , hp, n, m[2], v, w, p, i;
	car A;
	setabc(a);
	setsm(m);
	cout << "set places ";
	cin >> n;
	cout << "hp ";
	cin >> hp;
	cout << "volume ";
	cin >> v;
	A.setplaces(n);
	
	A.setsize(a[0], a[1], a[2]);
	A.setspeed(m[0]);
	A.setweight(m[1]);

	car::engine E;
	E.sethp(hp);
	E.setvolume(v);

	A.getinfo(E);

	train T;
	setabc(a);
	setsm(m);
	cout << "set wagons(<10) ";
	cin >> w;
	cout << "set places ";
	cin >> p;
	T.setsize(a[0], a[1], a[2]);
	T.setspeed(m[0]);
	T.setweight(m[1]);
	T.setwagons(w);

	train::wagon W[10];
	for (i = 0; i < w; i++)
	{
		W[i].setnumber(i+1);
		W[i].setplaces(p);
	}

	cout << "number of wagon";
	cin >> i;
	T.getinfo(W[i-1]);

	express EX;
	setabc(a);
	setsm(m);
	cout << "set places ";
	cin >> n;
	EX.setplaces(n);
	EX.setsize(a[0], a[1], a[2]);
	EX.setspeed(m[0]);
	EX.setweight(m[1]);

	EX.getinfo();
	return 0;
}

