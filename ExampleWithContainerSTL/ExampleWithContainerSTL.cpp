// ExampleWithContainerSTL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ListExample.h"
#include "VectorExample.h"


int _tmain(int argc, _TCHAR* argv[])
{
    //list contructor
    ContainerExample::ListExample::ExampleConstructor();
    //list pop front
    ContainerExample::ListExample::ExamplePopFront();
    //list pop back
    ContainerExample::ListExample::ExamplePopBack();


    //vector contructor
    ContainerExample::VectorExample::ExampleConstructor();

	return 0;
}

