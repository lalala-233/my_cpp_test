#include <iostream>
#include <chrono>
#include <vector>

template <class T>
void p(T t)
{
    using namespace std;
    cout << t << endl;
}

class timer
{
public:
    timer();
    ~timer();
    auto get_time();

private:
    std::chrono::time_point<std::chrono::steady_clock> m_start{
        std::chrono::steady_clock::now()};
};

timer::timer() = default;
timer::~timer()
{
    using namespace std::chrono;
    auto end = steady_clock::now();
    auto time = end - m_start;
    p(time);
};
int a{};

int main()
{
    using namespace std;

    using namespace std::chrono;
    return 0;
}