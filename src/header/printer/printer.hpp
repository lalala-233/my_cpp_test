#pragma once

namespace my_cpp // 声明（declaration）
{
class printer
{
public:
    template <class T>
    printer& operator<(T o);

    template <class T>
    printer& operator<<(T o);
};

} // namespace my_cpp

// Define（定义）

#include <iostream>

namespace my_cpp
{
template <class T>
printer& printer::operator<(T o)
{
    std::cout << (o);
    return *this;
}

template <class T>
printer& printer::operator<<(T o)
{
    std::cout << (o) << std::endl;
    return *this;
}
} // namespace my_cpp