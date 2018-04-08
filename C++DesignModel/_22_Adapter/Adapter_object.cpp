#include "Adapter_object.h"

#include <iostream>
using namespace std;

Target_object::Target_object()
{

}

Target_object::~Target_object()
{

}

void Target_object::Request()
{
    cout << "Target_object::Request" << endl;
}

Adaptee_object::Adaptee_object()
{

}

Adaptee_object::~Adaptee_object()
{

}

void Adaptee_object::SpecificRequest()
{
    std::cout << "Adaptee_object::SpecificRequest" << std::endl;
}

Adapter_object::Adapter_object(Adaptee_object* ade)
{
    this->_ade = ade;
}

Adapter_object::~Adapter_object()
{

}

void Adapter_object::Request()
{
    _ade->SpecificRequest();
}