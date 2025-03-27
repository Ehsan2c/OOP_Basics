#include "gps.hpp"
#include <iostream>

GPS::GPS(double latitude2 , double longitude2) : latitude(latitude2) , longitude(longitude2) {

    if(latitude2 < -90 || latitude2 > 90){
        std::cerr << "Latitude should be between -90 and 90." << std::endl;  
        exit(0);  
    }

    if(longitude2 < -180 || longitude2 > 180){
        std::cerr << "Longitude should be between -180 and 180." << std::endl;    
        exit(0);
    }
}

double GPS::get_latitude() const{
    return latitude;
}

double GPS::get_longitude() const{
    return longitude;
}

void GPS::set_latitude(double latitude2){
    if(latitude2 >= -90 && latitude2 <= 90){
        latitude = latitude2;
    }
    else{
        std::cerr << "Latitude should be between -90 and 90." << std::endl;
        exit(0);
    }
}

void GPS::set_longitude(double longitude2){
    if(longitude2 >= -180 && longitude2 <= 180){
        longitude = longitude2;
    }
    else{
        std::cerr << "Longitude should be between -180 and 180." << std::endl;
        exit(0);
    }
}

GPS::~GPS(){
    std::cout << "Last position: Latitude: " << latitude << " , Longitude: " << longitude << std::endl;
    exit(0);
}