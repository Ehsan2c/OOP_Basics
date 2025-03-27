#ifndef PATIENT_HPP
#define PATIENT_HPP

#include <string>

class Patient{
    public:
        Patient(const std::string& name2 , double bodyTemperature2 , int heartRate2 , int respiratoryRate2 , int bloodPressure2);
        ~Patient();

        std::string get_name() const;
        double get_bodyTemperature() const;
        int get_heartRate() const;
        int get_respiratoryRate() const;
        int get_bloodPressure() const;

        void set_name(const std::string& name2);
        void set_bodyTemperature(double bodyTemperature2);
        void set_heartRate(int heartRate2);
        void set_respiratoryRate(int respiratoryRate2);
        void set_bloodPressure(int bloodPressure2);

        void print();

        void validateVitals() const;

        std::string getInfo() const;

    private:
        std::string name;
        double bodyTemperature;
        int heartRate;
        int respiratoryRate;
        int bloodPressure;

        std::string encryptedData;

        std::string encryptData(const std::string& data);
        std::string decryptData() const;
};

#endif