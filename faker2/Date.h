#pragma once

#include <string>

class Date
{
public:

    /**
     * @brief Generates a random year.
     *
     * @returns unsigned int from 1000 to 3000.
     *
     * @code
     * Date::year() // "1996"
     * @endcode
     */
    static unsigned int year();

    /**
     * @brief Generates a random month.
     *
     * @returns unsigned int from 1 to 12.
     *
     * @code
     * Date::month() // "3"
     * @endcode
     */
    static unsigned int month();

    /**
     * @brief Generates a random hour.
     *
     * @returns unsigned int from 0 to 23.
     *
     * @code
     * Date::hour() // "2"
     * @endcode
     */
    static unsigned int hour();

    /**
     * @brief Generates a random minute.
     *
     * @returns unsigned int from 0 to 59.
     *
     * @code
     * Date::minute() // "30"
     * @endcode
     */
    static unsigned int minute();

    /**
     * @brief Generates a random second.
     *
     * @returns unsigned int from 0 to 59.
     *
     * @code
     * Date::second() // "30"
     * @endcode
     */
    static unsigned int second();

    /**
     * @brief Generates a random time.
     *
     * @returns string from 1:00 to 12:59.
     *
     * @code
     * Date::time() // "11:25"
     * @endcode
     */
    static std::string time();

    /**
     * @brief Generates a random day of the month.
     *
     * @returns unsigned int from 1 to 31;
     *
     * @code
     * Date::dayOfMonth() // "5"
     * @endcode
     */
    static unsigned int dayOfMonth();

    /**
     * @brief Generates a random day of the week.
     *
     * @returns unsigned int from 1 to 7.
     *
     * @code
     * Date::dayOfWeek() // "3"
     * @endcode
     */
    static unsigned int dayOfWeek();

    /**
     * @brief Generates a random timezone.
     *
     * @returns string of abbreviated timezone.
     *
     * @code
     * Date::timezone() // "EST"
     * @endcode
     */
    static std::string timezone();
};