#include "Leaf.hpp"  
	#include <iostream>
    using namespace std;
Leaf::Leaf():
    Componet()
{
	this->name ="leaf";
}
	
Leaf::~Leaf()
{
	
}

void Leaf::operation(){
    cout<< "in leaf operation"<<endl;
}