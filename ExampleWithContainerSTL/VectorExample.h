#pragma once
#include <iostream>
#include <vector>

using namespace std;

namespace ContainerExample
{
    class VectorExample
    {

    public:
        VectorExample(void);
        ~VectorExample(void);
        static void ExampleConstructor(void);

        static void PrintListInt(vector<int> vectorPrint)
        {
            for (vector<int>::iterator it = vectorPrint.begin(); it != vectorPrint.end(); ++it)
                cout << *it << ' ';

            cout << '\n';
        }

    };
}