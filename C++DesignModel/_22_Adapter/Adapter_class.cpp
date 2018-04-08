#include "Adapter_class.h"

#include <iostream>

Target_class::Target_class()
{

}

Target_class::~Target_class()
{

}

void Target_class::Request()
{
    std::cout << "Target_class::Request" << std::endl;
}

Adaptee_class::Adaptee_class()
{

}

Adaptee_class::~Adaptee_class()
{

}

void Adaptee_class::SpecificRequest()
{
    std::cout << "Adaptee_class::SpecificRequest" << std::endl;
}

Adapter_class::Adapter_class()
{

}

Adapter_class::~Adapter_class()
{

}

void Adapter_class::Request()
{
    this->SpecificRequest();
}