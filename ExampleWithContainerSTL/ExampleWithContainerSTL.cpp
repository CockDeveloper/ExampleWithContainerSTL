// ExampleWithContainerSTL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ListExample.h"


int _tmain(int argc, _TCHAR* argv[])
{
    //list contructor
    ContainerExample::ListExample::ExampleConstructor();
    //list pop front
    ContainerExample::ListExample::ExamplePopFront();
    //list pop back
    ContainerExample::ListExample::ExamplePopBack();

	return 0;
}

