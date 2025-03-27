#include <iostream>
#include "hospital.hpp"

void Hospital::add_patient(const Patient& patient){
    for(Patient& p : patients){
        if(p.get_name() == patient.get_name()){
            std::cout << patient.get_name() << " already exists." << std::endl;
            return;
        }
    }
    patients.push_back(patient);
    std::cout << patient.get_name() << " was added successfully." << std::endl;
}

void Hospital::print(){
    if(patients.empty()){
        std::cout << "There are no patients to display." << std::endl;
        return;
    }
    for(Patient& patient : patients){
        std::cout << patient.getInfo() << std::endl;
        std::cout << "---------------------------------" << std::endl;
    }
}
