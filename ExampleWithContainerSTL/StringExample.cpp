#include "StdAfx.h"
#include "StringExample.h"
#include <iostream>
#include <string>

using namespace std;

namespace OtherExample
{

    StringExample::StringExample(void)
    {
    }


    StringExample::~StringExample(void)
    {
    }

    void StringExample::ExampleConstructor(void)
    {
        string s0 ("Initial string");

        // constructors used in the same order as described above:
        string s1;
        string s2 (s0);
        string s3 (s0, 8, 3);
        string s4 ("A character sequence", 6);
        string s5 ("Another character sequence");
        string s6a (10, 'x');
        string s6b (10, 42);      // 42 is the ASCII code for '*'
        string s7 (s0.begin(), s0.begin()+7);

        cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3;
        cout << "\ns4: " << s4 << "\ns5: " << s5 << "\ns6a: " << s6a;
        cout << "\ns6b: " << s6b << "\ns7: " << s7 << '\n';
    }

    void StringExample::ExampleReverse(void)
    {
        string s0 ("Initial string");
        cout << s0 << endl << StringExample::Reverse(s0) << endl;
    }

    string StringExample::Reverse(string str)
    {
        string ret(str.rbegin(), str.rend());
        return ret;
    }
}