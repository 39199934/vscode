#include "Componet.hpp"  
// #include <iostream>
// using namespace std;
Componet::Componet()
{
	name = "Componet";
}
	
Componet::~Componet()
{
	
}
void Componet::add(const Componet& newComponet)  {
    
}

void Componet::remove(const Componet& componet)  {
    
}

Componet* Componet::getChild(int index) const  {
    return nullptr;
}

void Componet::Componet::viewName() const {
    cout<<this->name;
}
