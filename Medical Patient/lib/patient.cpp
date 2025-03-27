#include <iostream>
#include "patient.hpp"

Patient::Patient(const std::string& name2 , double bodyTemperature2 , int heartRate2 , int respiratoryRate2 , int bloodPressure2) : name(name2) , bodyTemperature(bodyTemperature2) ,heartRate(heartRate2) , respiratoryRate(respiratoryRate2) , bloodPressure(bloodPressure2) {
    validateVitals();
}

Patient::~Patient(){
    if(encryptedData.empty() && encryptedData != encryptData(getInfo())){
        //std::cout << name << "'s data has been encrypted." << std::endl;
        encryptedData = encryptData(getInfo());
    }
}

std::string Patient::encryptData(const std::string& data){
    std::string encrypted = data;
    char key = 'K';
    for (size_t i = 0; i < encrypted.size(); i++){
        encrypted[i] = encrypted[i] ^ key;
    }
    return encrypted;
}

std::string Patient::decryptData() const{
    std::string decrypted = encryptedData;
    char key = 'K';
    for (size_t i = 0; i < decrypted.size(); i++){
        decrypted[i] = decrypted[i] ^ key;
    }
    return decrypted;
}

std::string Patient::getInfo() const{
    std::string info = "Name: " + name + " , Body temperature: " + std::to_string(bodyTemperature) +
                       " , Heart rate: " + std::to_string(heartRate) +
                       " , Respiratory rate: " + std::to_string(respiratoryRate) +
                       " , Blood pressure: " + std::to_string(bloodPressure);
    return info;
}

std::string Patient::get_name() const{
    return name;
}

double Patient::get_bodyTemperature() const{
    return bodyTemperature;
}

int Patient::get_heartRate() const{
    return heartRate;
}

int Patient::get_respiratoryRate() const{
    return respiratoryRate;

}

int Patient::get_bloodPressure() const{
    return bloodPressure;
}

void Patient::set_name(const std::string& name2){
    name = name2;
}

void Patient::set_bodyTemperature(double bodyTemperature2){
    bodyTemperature = bodyTemperature2;
}

void Patient::set_heartRate(int heartRate2){
    heartRate = heartRate2;
}

void Patient::set_respiratoryRate(int respiratoryRate2){
    respiratoryRate = respiratoryRate2;
}

void Patient::set_bloodPressure(int bloodPressure2){
    bloodPressure = bloodPressure2;
}

void Patient::validateVitals() const{   
    if(bodyTemperature < 36.0 || bodyTemperature > 37.5){
        std::cout << name << "'s body temperature is not normal." << std::endl;
    }
    if(heartRate < 60 || heartRate > 100){
        std::cout << name << "'s heart rate is not normal." << std::endl;
    }
    if(respiratoryRate < 16 || respiratoryRate > 20){
        std::cout << name << "'s respiratory rate is not normal." << std::endl;
    }
    if(bloodPressure < 80 || bloodPressure > 120){
        std::cout << name << "'s blood pressure is not normal." << std::endl;
    }
}

void Patient::print(){
    if(!encryptedData.empty() && encryptedData != getInfo()){
        std::cout << name << "'s data is encrypted." << std::endl;
        return;
    }
    std::cout << getInfo() << std::endl;
    std::cout << "---------------------------------" << std::endl;
}
