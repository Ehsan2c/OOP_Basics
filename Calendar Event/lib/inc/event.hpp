#ifndef EVENT_HPP
#define EVENT_HPP

#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <iostream>

class Event{
    public:
        Event(const std::string& name2 , const std::string& startTime2 , const std::string& endTime2);
        ~Event();

        std::string get_name() const;
        time_t get_startTime() const;
        time_t get_endTime() const;

        void set_name(const std::string& name2);
        void set_startTime(time_t startTime2);
        void set_endTime(time_t endTime2);

        void print();

        bool conflicts_with(const Event& otherEvent) const;

    private:
        std::string name;
        std::time_t startTime;
        std::time_t endTime;

        time_t convertToTimestamp(const std::string& date){
            std::tm tm = {};
            std::istringstream ss(date);
            ss >> std::get_time(&tm, "%Y/%m/%d %H:%M");
            if(ss.fail()){
                std::cerr << "Invalid date format! Use YYYY/MM/DD HH:MM\n";
                exit(1);
            }
            return std::mktime(&tm);
        }
};

#endif