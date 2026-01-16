#include <iostream>
#include <thread>

static bool s_Finished = false;

void DoWork()
{
    using namespace std::literals::chrono_literals;

    while(!s_Finished)
    {
        std::cout << "Working...\n";
        //std::this_thread::sleep_for(100);
    }
}

int main()
{
    std::thread worker(DoWork);

    std::cin.get();
    worker.join();

    std::cin.get();
}