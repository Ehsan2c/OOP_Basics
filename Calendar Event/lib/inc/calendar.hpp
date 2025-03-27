#ifndef CALENDAR_HPP
#define CALENDAR_HPP

#include <vector>
#include <string>
#include <ctime>
#include "event.hpp"

class Calendar{
    public:
        void add_event(const Event& newEvent);
        void refresh();
        void print();
    private:
        std::vector<Event> events;
};

#endif