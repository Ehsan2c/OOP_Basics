#include <iostream>
#include "event.hpp"

bool Event::conflicts_with(const Event& otherEvent) const {
    return (startTime < otherEvent.endTime && endTime > otherEvent.startTime);
}

Event::Event(const std::string& name2 , const std::string& startTime2 , const std::string& endTime2) : name(name2) , startTime(convertToTimestamp(startTime2)) , endTime(convertToTimestamp(endTime2)) {}

std::string Event::get_name() const{
    return name;
}

time_t Event::get_startTime() const{
    return startTime;
}

time_t Event::get_endTime() const{
    return endTime;
}

void Event::set_name(const std::string& name2){
    name = name2;
}

void Event::set_startTime(time_t startTime2){
    startTime = startTime2;
}

void Event::set_endTime(time_t endTime2){
    endTime = endTime2;
}

void Event::print(){
    std::cout << "Name: " << name << std::endl;

    time_t sTime = startTime;
    std::tm* startInfo = std::localtime(&sTime);
    std::cout << "Start Time: " << std::put_time(startInfo, "%Y/%m/%d %H:%M") << std::endl;

    time_t eTime = endTime;
    std::tm* endInfo = std::localtime(&eTime);
    std::cout << "End Time: " << std::put_time(endInfo, "%Y/%m/%d %H:%M") << std::endl;

    std::cout << "------------------------" << std::endl;
}

Event::~Event(){
    if(!name.empty()){
        time_t now = std::time(nullptr);
        if(get_endTime() < now){
            std::cout << "Event " << name << " has been deleted." << std::endl;
        }
    }
}