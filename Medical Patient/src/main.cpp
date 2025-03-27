#include "hospital.hpp"

int main(){
    Hospital hospital;
    
    Patient patient1("Hamid" , 36 , 80 , 18 , 100);
    Patient patient2("Ahmad" , 5 , 80 , 18 , 180);
    Patient patient3("Ali", 36.0, 80, 18, 100);

    hospital.add_patient(patient1);
    hospital.add_patient(patient2);  
    hospital.add_patient(patient3);

    hospital.print();

    return 0;
}