#include "Composite.hpp"  
	
Composite::Composite():
Componet(),
chirldrens(vector<Componet*>())
{
	this->name = "composite";
}
	
Composite::~Composite()
{
	for(int i = 0;i < chirldrens.size(); i++){
        delete chirldrens[i];
    }
}

 void Composite::add(const Componet &newComponet){
     Componet * com = &newComponet;
     this->chirldrens.push_back(&newComponet);

 }
	 void Composite::remove(const Componet &componet){

     }
	 Componet * Composite::getChild(int index) const{

     }
	 void Composite::operation() {

     }