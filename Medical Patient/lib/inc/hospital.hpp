#ifndef HOSPITAL_HPP
#define HOSPITAL_HPP

#include <vector>
#include "patient.hpp"

class Hospital{
    public:
        void add_patient(const Patient& patient);
        void print();

    private:
        std::vector<Patient> patients;
};

#endif