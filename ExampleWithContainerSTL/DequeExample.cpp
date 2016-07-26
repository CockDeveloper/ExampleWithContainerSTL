#include "StdAfx.h"
#include "DequeExample.h"

namespace ContainerExample
{

    DequeExample::DequeExample(void)
    {
    }


    DequeExample::~DequeExample(void)
    {
    }

    void DequeExample::ExampleConstructor(void)
    {

        // constructors used in the same order as described above:
        deque<int> first;                                // empty deque of ints
        cout << "The contents of first are:";
        PrintDequeInt(first);
        deque<int> second (4,100);                       // four ints with value 100
        cout << "The contents of second are:";
        PrintDequeInt(second);
        deque<int> third (second.begin(),second.end());  // iterating through second
        cout << "The contents of third are:";
        PrintDequeInt(third);
        deque<int> fourth (third);                       // a copy of third
        cout << "The contents of fourth are:";
        PrintDequeInt(fourth);

        // the iterator constructor can be used to copy arrays:
        int myints[] = {16,2,77,29};
        deque<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

        cout << "The contents of fifth are:";
        PrintDequeInt(fifth);
    }
}
