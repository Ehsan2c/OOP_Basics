#include <iostream>
#include "calendar.hpp"

void Calendar::add_event(const Event& newEvent){
    for(const Event& event : events){
        if (event.get_name() == newEvent.get_name()) {
            std::cout << "Event " << newEvent.get_name() << " already exists." << std::endl;
            return;
        }
    }
    for(const Event& event : events){
        if(newEvent.conflicts_with(event)){
            std::cout << newEvent.get_name() << " event conflicts with " << event.get_name() << "." << std::endl;
        }
    }
    events.push_back(newEvent);
    std::cout << newEvent.get_name() << " was added successfully." << std::endl;
}

void Calendar::refresh(){
    time_t now = std::time(nullptr);
    for (auto i = events.begin(); i != events.end(); ){
        if (i->get_endTime() < now){
            //std::cout << "Event " << i->get_name() << " has been deleted." << std::endl;
            i = events.erase(i);

        } 
        else {
            ++i;
        }
    }
}

void Calendar::print(){
    if(events.empty()){
        std::cout << "There are no events in the calendar." << std::endl;
    }
    else{
        for(const Event& event : events){
            std::cout << "Name: " << event.get_name() << std::endl;

            time_t sTime = event.get_startTime();
            std::tm* startInfo = std::localtime(&sTime);
            std::cout << "Start Time: " << std::put_time(startInfo, "%Y/%m/%d %H:%M") << std::endl;

            time_t eTime = event.get_endTime();
            std::tm* endInfo = std::localtime(&eTime);
            std::cout << "End Time: " << std::put_time(endInfo, "%Y/%m/%d %H:%M") << std::endl;

            std::cout << "------------------------" << std::endl;
        }
    } 
}
