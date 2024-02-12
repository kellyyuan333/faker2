#include <iostream>
#include "Date.h"
using namespace std;

namespace faker {
    int main()
    {
    const auto year = Date::year();
    const auto month = Date::month();
    const auto hour = Date::hour();
    const auto minute = Date::minute();
    const auto second = Date::second();
    const auto time = Date::time();
    const auto dayOfMonth = Date::dayOfMonth();
    const auto dayOfWeek = Date::dayOfWeek();
    const auto timezone = Date::timezone();

    std::cout << "year: " << year << std::endl;  
    std::cout << "month: " << month << std::endl; 
    std::cout << "hour: " << hour << std::endl;
    std::cout << "minute: " << minute << std::endl;
    std::cout << "second: " << second << std::endl;
    std::cout << "time: " << time << std::endl;
    std::cout << "day of the month: " << dayOfMonth << std::endl;
    std::cout << "day of the week: " << dayOfWeek << std::endl;
    std::cout << "timezone: " << timezone << std::endl;

    return 0;
    } 
};
