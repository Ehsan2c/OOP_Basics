#include <iostream>
#include "calendar.hpp"

int main(){
    Calendar calendar;
    Event event1("Meeting" , "2023/05/05 14:00", "2023/05/05 15:00");
    Event event2("g" , "2025/05/05 14:20", "2026/05/05 15:00");

    calendar.add_event(event1);
    calendar.add_event(event2);

    std::cout << "------------------------" << std::endl;

    calendar.print();

    event2.print();

    calendar.refresh();

    return 0;
}