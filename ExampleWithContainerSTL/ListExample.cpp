#include "StdAfx.h"
#include "ListExample.h"
#include <iostream>
#include <list>

using namespace std;

namespace ContainerExample
{

    ListExample::ListExample(void)
    {
    }


    ListExample::~ListExample(void)
    {
    }

    void ListExample::ExampleConstructor(void)
    {
        // constructors used in the same order as described above:
        list<int> first;                                // empty list of ints
                                                        // khởi tạo một danh sách trống
        cout << "The contents of first are: ";
        PrintListInt(first);

        list<int> second (4,100);                       // four ints with value 100
                                                        // khởi tạo 4 số int với giá trị 100
        cout << "The contents of second are: ";
        PrintListInt(second);

        list<int> third (second.begin(),second.end());  // iterating through second
                                                        // khởi tạo từ một danh sách khác
        cout << "The contents of third are: ";
        PrintListInt(third);

        list<int> fourth (third);                       // a copy of third
                                                        // sao chép danh sách thứ 3
        cout << "The contents of fourth are: ";
        PrintListInt(fourth);

        // the iterator constructor can also be used to construct from arrays:
        // sử dụng con trỏ khởi tạo từ một mảng có sẵn
        int myints[] = {16,2,77,29};
        list<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
        cout << "The contents of fifth are: ";
        PrintListInt(fifth);
    }

    //void PrintListInt(list<int> listPrint)
    //{
    //    for (list<int>::iterator it = listPrint.begin(); it != listPrint.end(); ++it)
    //        cout << *it << ' ';

    //    cout << '\n';

    //}

}