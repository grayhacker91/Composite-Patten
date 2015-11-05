#pragma once
#include<iostream>
#include"Graphic.h"

using namespace std;

class Circle :public Graphic {
public:
	Circle() {};
	void print() {
		cout << "¿ø" << endl;
	}
};