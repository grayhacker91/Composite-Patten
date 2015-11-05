#pragma once
#include<iostream>
#include"Graphic.h"
#include<list>

using namespace std;

class CompositeGraphic :public Graphic {
private:
	list<Graphic*> *children;
public:
	CompositeGraphic() {
		children = new list<Graphic*>();
	}
	void print() {
		for (list<Graphic*>::iterator it = children->begin(); it != children->end(); it++) {
			(*it)->print();
		}
	}
	void add(Graphic *child) {
		children->push_back(child);
	}
	void remove(Graphic *child) {
		children->remove(child);
	}
};