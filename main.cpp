#include "Quad/QuadEngine.h"
#include <boost/endian/conversion.hpp>
#include <boost/lexical_cast.hpp>
#include <iostream>
void PrintOutVector(std::vector<uint8_t>& in)
{
    std::cout << "Vector Contains: ";
    for (std::vector<uint8_t>::iterator i = in.begin(); i != in.end(); ++i)
        std::cout << static_cast<unsigned int>(*i);
        std::cout << "\n";
}

int main()
{

    QuadEngine quad;
    quad.Boot();


    system("pause");
}   