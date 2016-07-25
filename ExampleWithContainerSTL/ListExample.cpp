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

    void ListExample::ExamplePopFront()
    {
        list<int> mylist;
        mylist.push_back (100);
        mylist.push_back (200);
        mylist.push_back (300);

        PrintListInt(mylist);

        cout << "Popping out the elements in mylist:";
        //Xóa từng phần tử trong danh sách myList;
        while (!mylist.empty())
        {
            cout << ' ' << mylist.front();
            mylist.pop_front();
        }

        cout << "\nFinal size of mylist is " << mylist.size() << '\n';
    }

    void ListExample::ExamplePopBack()
    {
        list<int> mylist;
        int sum (0);
        mylist.push_back (100);
        mylist.push_back (200);
        mylist.push_back (300);

        PrintListInt(mylist);
        //Xóa từng phần tử đằng sau danh sách
        while (!mylist.empty())
        {
            sum+=mylist.back();
            mylist.pop_back();
        }

        cout << "The elements of mylist summed " << sum << '\n';
    }
}