#include <iostream>
#include <chrono>

template <class T>
void p(T t)
{
    using namespace std;
    cout << t << endl;
}
class timer
{
public:
    timer() = default;
    void test_1();
    void sleep()
    {
        for (auto j = 10000000; j != 0; j--)
        {
        }
    };
};
int main()
{
    timer timer1;
    timer1.test_1();
    return 0;
}

void timer::test_1()
{
    using namespace std::chrono;
    // now 表示当前时间到时钟原点的毫秒数
    time_point<system_clock> now = system_clock::now();

    auto elapsed = duration_cast<std::chrono::hours>(now.time_since_epoch());
    std::cout << elapsed.count() << " 小时" << std::endl;
    std::cout << now.time_since_epoch().count() << " 毫秒" << std::endl;
}