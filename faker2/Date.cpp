#include <chrono>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <sstream>

#include "Date.h"
#include "TimezoneNames.h"
// #include "Helper.h"

unsigned int Date::year()
{
    unsigned int year = 1000 + (rand() % 3000);
    return year;
}

unsigned int Date::month()
{
    unsigned int month = 1 + (rand() % 12);
    return month;
}

unsigned int Date::hour()
{
    unsigned int hour = (rand() & 23);
    return hour;
}

unsigned int Date::minute()
{
    unsigned int minute = (rand() % 59);
    return minute;
}

unsigned int Date::second()
{
    unsigned int second = (rand() % 59);
    return second;
}

std::string Date::time()
{
    int hour = 1 + (rand() % 12);
    int minute = 1 + (rand() % 59);
    std::string time;
    {
        std::stringstream ss;
        ss << std::setw(2) << std::setfill('0') << hour << ":" << std::setw(2) << std::setfill('0') << minute;
        time = ss.str();
    }
    return time;
}

unsigned int Date::dayOfMonth()
{
    unsigned int dayOfMonth = 1 + (rand() % 31);
    return dayOfMonth;
}

unsigned int Date::dayOfWeek()
{
    unsigned int dayOfWeek = 1 + (rand() % 7);
    return dayOfWeek;
}

std::string Date::timezone()
{
    int index = rand() % timezoneNames.size() - 1;
    return timezoneNames[index];
    // return Helper::arrayElement<std::string>(timezoneNames);
}