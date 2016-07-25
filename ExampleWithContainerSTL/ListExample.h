#pragma once
#include <iostream>
#include <list>

using namespace std;

namespace ContainerExample
{

    class ListExample
    {
    public:
        ListExample(void);
        ~ListExample(void);
        static void ExampleConstructor(void);
        static void ExamplePopFront();
        static void ExamplePopBack();

        static void PrintListInt(list<int> listPrint)
        {
            for (list<int>::iterator it = listPrint.begin(); it != listPrint.end(); ++it)
                cout << *it << ' ';

            cout << '\n';

        }

    };

}
