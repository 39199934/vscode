#ifndef COMPONET_H
#define COMPONET_H
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Componet
{
private:
public:
	Componet();
	virtual ~Componet();

protected:
	string name;

public:
	virtual void add(const Componet &newComponet);
	virtual void remove(const Componet &componet);
	virtual Componet *getChild(int index) const;
	virtual void operation() = 0;
	void viewName() const;
};
#endif