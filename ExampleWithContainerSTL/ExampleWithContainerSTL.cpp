// ExampleWithContainerSTL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ListExample.h"
#include "VectorExample.h"
#include "DequeExample.h"
#include "StringExample.h"


int _tmain(int argc, _TCHAR* argv[])
{
    //list constructor
    ContainerExample::ListExample::ExampleConstructor();
    //list pop front
    ContainerExample::ListExample::ExamplePopFront();
    //list pop back
    ContainerExample::ListExample::ExamplePopBack();


    //vector constructor
    ContainerExample::VectorExample::ExampleConstructor();

    //deque constructor
    ContainerExample::DequeExample::ExampleConstructor();

    //string constructor
    OtherExample::StringExample::ExampleConstructor();

    //string contructor
    OtherExample::StringExample::ExampleReverse();

    //string input value
    OtherExample::StringExample::ExampleInputStringStream();

    //string input value for number
    OtherExample::StringExample::ExampleInputStringStreamForNumber();

	return 0;
}

