#include <list>
#include<vector>
#include<map>
#include<iostream>
#include<string>
#include"Human.h"
using namespace std;
typedef multimap<int, string> MyMap;
typedef MyMap::iterator Iter;

void main()
{
	setlocale(LC_ALL, "Rus");
	//map<int, string> mp;
	/*pair<int, int> p(1, 2);
	mp.insert(p);
	mp.insert(pair<int, int>(3, 4));

	mp.insert(make_pair(5, 6));*/

	//mp[5] = "five";
	//mp[7] = "seven"; // only for map

	//cout << mp[7];

	//Human h("Vasya", 22, "male");
	//Human h1("Petya", 23, "male");
	//map<Human, string> mp;

	//mp.insert(make_pair(h, "+77017385998"));
	//mp.insert(make_pair(h1, "+77017598658"));

	////mp[895].info();
	////map<string, Human>::iterator it=mp.find("+77017385998");

	//for (auto it = mp.begin(); it != mp.end(); it++)
	//{
	//	it->first.info();		
	//	cout << it->second << endl;		
	//}


//	MyMap m;
//
//	m.insert(MyMap::value_type("British", "Garfield"));
//	m.insert(MyMap::value_type("British", "Bobo"));
//	m.insert(MyMap::value_type("Asia", "Gaf"));
//	m.insert(MyMap::value_type("Japan", "Len"));
//	m.insert(MyMap::value_type("British", "Hehe"));
//
//
//	/*for (Iter it = m.begin(); it != m.end(); it++)
//		ñout << it->first << " " << it->second << endl;
//*/
//
//	pair<Iter, Iter> p = m.equal_range("British");
//	cout << endl << "British " << endl;
//	//int cnt = 0;
//	for (Iter it = p.first; it != p.second; it++)
//	{
//		//cnt++;
//		cout << it->second << " ";
//	}
//	cout<<m.count("British");
	/*cout << endl;
	cout << "Count of british dogs " << cnt << endl;*/

	MyMap m;

	m.insert(MyMap::value_type(19, "Vasya"));
	m.insert(MyMap::value_type(20, "Petya"));
	m.insert(MyMap::value_type(21, "Marusya"));
	m.insert(MyMap::value_type(22, "Leula"));
	m.insert(MyMap::value_type(30, "Kiki"));
	m.insert(MyMap::value_type(35, "Bake"));

	auto s= m.lower_bound(22);
	for (Iter it = s; it != end(m); it++)
	{
		cout << it->second << " ";
	}
	system("pause");
}