#include "StdAfx.h"
#include "VectorExample.h"

#include <vector>

namespace ContainerExample
{
    VectorExample::VectorExample(void)
    {
    }


    VectorExample::~VectorExample(void)
    {
    }
    
    void VectorExample::ExampleConstructor(void)
    {
        // constructors used in the same order as described above:
        std::vector<int> first;                                // empty vector of ints
        std::cout << "The contents of vector first are:";
        PrintListInt(first);
        std::vector<int> second (4,100);                       // four ints with value 100
        std::cout << "The contents of vector second are:";
        PrintListInt(second);
        std::vector<int> third (second.begin(),second.end());  // iterating through second
        std::cout << "The contents of vector third are:";
        PrintListInt(third);
        std::vector<int> fourth (third);                       // a copy of third
        std::cout << "The contents of vector fourth are:";
        PrintListInt(fourth);

        // the iterator constructor can also be used to construct from arrays:
        int myints[] = {16,2,77,29};
        std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

        std::cout << "The contents of vector fifth are:";
        PrintListInt(fifth);
    }

}
