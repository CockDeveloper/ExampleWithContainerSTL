#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

namespace OtherExample
{

    class StringExample
    {
    public:
        StringExample(void);
        ~StringExample(void);
        static void ExampleConstructor(void);
        static void ExampleReverse(void);
        static void ExampleInputStringStream(void);
        static void ExampleInputStringStreamForNumber(void);
        static void ExampleInputStringStreamParseInts(void);

    private:
        static string Reverse(string str);
        static vector<int> parseInts(string str)
        {
            stringstream strInput (str);
            vector<int> ret;
            int element;

            while(strInput >> element)
            {
                ret.push_back(element);
                char skip;
                strInput >> skip;
            }

            return ret;
        }

    };

}
