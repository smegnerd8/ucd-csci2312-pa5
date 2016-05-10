//
// Created by Drew Smegner on 5/10/16.
//

#ifndef UCD_CSCI2312_PA5_IMPL_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_IMPL_LESS_FUNCTOR_H
#include <cstring>

namespace CS2312{

    template <typename T>
    class less
    {
    public:
        bool operator() (const T& a, const T& b)
        {return a<b;};
    };

    template <>
    class less<std::string> {
    public:
        bool operator()(const std::string &a, const std::string &b) { return a < b; };
    };

     template <>
             class less<const char*>
             {
             public:
                 bool operator () (const char* a, const char* b){
                     return (std::strcmp(a,b)<0);
                 };
             };
    }

#endif //UCD_CSCI2312_PA5_IMPL_LESS_FUNCTOR_H
