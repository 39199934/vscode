#ifndef COMPOSITE_H
#define COMPOSITE_H
#pragma once
#include "Componet.hpp"
#include <vector>
#include <string>
using namespace std;
class Composite : public Componet
{
private:
	vector<Componet *> chirldrens;
public:
	Composite();
	~Composite();


	 void add(const Componet &newComponet);
	 void remove(const Componet &componet);
	 Componet *getChild(int index) const;
	 void operation() ;
};
#endif