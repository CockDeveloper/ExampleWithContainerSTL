#pragma once
#include <string>

namespace OtherExample
{

    class StringExample
    {
    public:
        StringExample(void);
        ~StringExample(void);
        static void ExampleConstructor(void);
        static void ExampleReverse(void);

    private:
        static std::string Reverse(std::string str);

    };

}
