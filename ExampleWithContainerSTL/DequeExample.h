#pragma once
#include <iostream>
#include <deque>

using namespace std;

namespace ContainerExample
{

    class DequeExample
    {

    public:
        DequeExample(void);
        ~DequeExample(void);

        static void ExampleConstructor(void);

        static void PrintDequeInt(deque<int> dequePrint)
        {
            for (deque<int>::iterator it = dequePrint.begin(); it != dequePrint.end(); ++it)
                cout << *it << ' ';

            cout << '\n';
        }

    };
}
