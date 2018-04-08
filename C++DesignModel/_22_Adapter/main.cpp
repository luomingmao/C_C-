#include "Adapter_class.h"
#include "Adapter_object.h"

#include<iostream>
using namespace std;

int main(int argc, char* argv[])
{
    Adaptee_object* ade_object = new Adaptee_object;
    Target_object* adt_object = new Adapter_object(ade_object);
	adt_object->Request();

	Target_class* adt_class = new Adapter_class;
	adt_class->Request();

    return 0;
}