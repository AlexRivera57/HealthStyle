#include "pch.h"
#include "HealthStyleController.h"
using namespace HealthStylePersistance;

int HealthStyleController::Controller::AddMedicine(Medicines^ medicines)
{
    medicinesList->Add(medicines);
    //Persistance::Persist("medicines.txt", medicinesList);
    Persistance::PersistXML("medicines.xml", medicinesList);
    //Persistance::PersistBinary("medicines.bin", medicinesList);
    return medicines->Id;
}

Medicines^ HealthStyleController::Controller::QueryMedicineById(int medicineId){
    // medicinesList = (List<Medicines^>^)Persistance::LoadData("medicinas.txt");
    medicinesList = (List<Medicines^>^)Persistance::LoadXMLData("medicines.xml");
    //medicinesList = (List<Medicines^>^)Persistance::LoadBinaryData("medicines.bin");
    for (int i = 0; i < medicinesList->Count; i++)
        if (medicinesList[i]->Id == medicineId)
            return medicinesList[i];
    return nullptr;
}

List<Medicines^>^ HealthStyleController::Controller::QueryAllMedicines(){
    //medicinesList = (List<Medicines^>^)Persistance::LoadData("medicines.txt");
    medicinesList = (List<Medicines^>^)Persistance::LoadXMLData("medicines.xml");
    //medicinesList = (List<Medicines^>^)Persistance::LoadBinaryData("medicines.bin");
    return medicinesList;
}

int HealthStyleController::Controller::UpdateMedicine(Medicines^ medicines){
    for (int i = 0; i < medicinesList->Count; i++)
        if (medicinesList[i]->Id == medicines->Id) {
            medicinesList[i] = medicines;
            //Persistance::Persist("medicines.txt", medicinesList);
            Persistance::PersistXML("medicines.xml", medicinesList);
            //Persistance::PersistBinary("medicines.bin", medicinesList);
            return medicines->Id;
        }
    return 0;
}

int HealthStyleController::Controller::DeleteMedicine(int medicineId){
    for (int i = 0; i < medicinesList->Count; i++)
        if (medicinesList[i]->Id == medicineId) {
            medicinesList->RemoveAt(i);
            //Persistance::Persist("medicines.txt", medicinesList);
            Persistance::PersistXML("medicines.xml", medicinesList);
            //Persistance::PersistBinary("medicines.bin", medicinesList);
            return medicineId;
        }
    return 0;
}

int HealthStyleController::Controller::AddDoctor(Doctor^ doctor){
    doctorList->Add(doctor);
    Persistance::PersistXML("doctor.xml", doctorList);
    return doctor->Id;
}

Doctor^ HealthStyleController::Controller::QueryDoctorById(int doctorId){
    doctorList = (List<Doctor^>^)Persistance::LoadXMLData("doctor.xml");
    for (int i = 0; i < doctorList->Count; i++)
        if (doctorList[i]->Id == doctorId)
            return doctorList[i];
    return nullptr;
}

List<Doctor^>^ HealthStyleController::Controller::QueryAllDoctor(){
    doctorList = (List<Doctor^>^)Persistance::LoadXMLData("doctor.xml");
    return doctorList;
}

int HealthStyleController::Controller::UpdateDoctor(Doctor^ doctor){
    for (int i = 0; i < medicinesList->Count; i++)
        if (doctorList[i]->Id == doctor->Id) {
            doctorList[i] = doctor;
            Persistance::PersistXML("doctor.xml", doctorList);
            return doctor->Id;
        }
    return 0;
}

int HealthStyleController::Controller::DeleteDoctor(int doctorId){
    for (int i = 0; i < doctorList->Count; i++)
        if (doctorList[i]->Id == doctorId) {
            doctorList->RemoveAt(i);
            Persistance::PersistXML("doctor.xml", doctorList);
            return doctorId;
        }
}

int HealthStyleController::Controller::AddNurses(Nurses^ nurse){
    nursesList->Add(nurse);
    return nurse->Id;
}

Nurses^ HealthStyleController::Controller::QueryNursesById(int nurseId){
    for (int i = 0; i < nursesList->Count; i++) {
        if (nursesList[i]->Id == nurseId) {
            return nursesList[i];
        }
    }
    return nullptr;
}

List<Nurses^>^ HealthStyleController::Controller::QueryAllNurses(){
    return nursesList;
}

int HealthStyleController::Controller::UpdateNurses(Nurses^ nurse){
    for (int i = 0; i < nursesList->Count; i++) {
        if (nursesList[i]->Id == nurse->Id) {
            nursesList[i] = nurse;
            return nurse->Id;
        }
    }
    return 0;
}

int HealthStyleController::Controller::DeleteNurses(int nurseId){
    for(int i=0; i < nursesList->Count; i++){
        if (nursesList[i]->Id == nurseId) {
            nursesList->RemoveAt(i);
            return nurseId;
        }
    }
    return 0;
}

//Medical History controller actions;
int HealthStyleController::Controller::AddHistorial(MedicalHistory^ historial)
{
    historialList->Add(historial);
    //Persistance::PersistBinary("historial.bin", historialList);
    return historial->Id;
}

List<MedicalHistory^>^ HealthStyleController::Controller::QueryAllHistorial()
{
    //historialList = (List<MedicalHistory^>^)Persistance::LoadBinaryData("historial.bin");
    return historialList;
}

int HealthStyleController::Controller::UpdateHistorial(MedicalHistory^ historial)
{
    for (int i = 0; i < historialList->Count; i++)
        if (historialList[i]->Id == historial->Id) {
            historialList[i] = historial;
            //Persistance::PersistBinary("historial.bin", historialList);
            return historial->Id;
        }
    return 0;
}

int HealthStyleController::Controller::DeleteHistorial(int historialId)
{
    for (int i = 0; i < historialList->Count; i++)
        if (historialList[i]->Weight == historialId) {
            historialList->RemoveAt(i);
            //Persistance::PersistBinary("historial.bin", historialList);
            return historialId;
        }
    return 0;
}
