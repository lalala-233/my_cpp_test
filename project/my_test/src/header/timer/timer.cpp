#include <chrono>
#include <iostream>

template <class T>
void p(T t)
{
    using namespace std;
    cout << t << endl;
}

class timer
{
  public:
    using clock = std::chrono::steady_clock;
    clock::time_point now = clock::now();
    static clock::time_point all;

    ~timer();
};

timer::~timer()
{
    all += clock::now() - now;
};
