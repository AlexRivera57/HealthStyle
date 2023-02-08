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

Medicines^ HealthStyleController::Controller::QueryMedicineById(int medicineId)
{
    // medicinesList = (List<Medicines^>^)Persistance::LoadData("medicinas.txt");
    medicinesList = (List<Medicines^>^)Persistance::LoadXMLData("medicines.xml");
    //medicinesList = (List<Medicines^>^)Persistance::LoadBinaryData("medicines.bin");
    for (int i = 0; i < medicinesList->Count; i++)
        if (medicinesList[i]->Id == medicineId)
            return medicinesList[i];
    return nullptr;
}

List<Medicines^>^ HealthStyleController::Controller::QueryAllMedicines()
{
    //medicinesList = (List<Medicines^>^)Persistance::LoadData("medicines.txt");
    medicinesList = (List<Medicines^>^)Persistance::LoadXMLData("medicines.xml");
    //medicinesList = (List<Medicines^>^)Persistance::LoadBinaryData("medicines.bin");
    return medicinesList;
}

int HealthStyleController::Controller::UpdateMedicine(Medicines^ medicines)
{
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

int HealthStyleController::Controller::DeleteMedicine(int medicineId)
{
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

int HealthStyleController::Controller::AddDoctor(Doctor^ doctor)
{
    doctor->Status = 'A';
    doctorList->Add(doctor);
    Persistance::PersistXML("doctor.xml", doctorList);
    return doctor->Id;
}

Doctor^ HealthStyleController::Controller::QueryDoctorById(int doctorId)
{
    doctorList = (List<Doctor^>^)Persistance::LoadXMLData("doctor.xml");
    for (int i = 0; i < doctorList->Count; i++)
        if (doctorList[i]->Id == doctorId)
            return doctorList[i];
    return nullptr;
}

List<Doctor^>^ HealthStyleController::Controller::QueryAllDoctor()
{
    List<Doctor^>^ activeDoctorList = gcnew List<Doctor^>();
    for (int i = 0; i < doctorList->Count; i++) {
        if (doctorList[i]->Status == 'A') {
            activeDoctorList->Add(doctorList[i]);
        }
    }
    activeDoctorList = (List<Doctor^>^)Persistance::LoadXMLData("doctor.xml");
    return activeDoctorList;
}

int HealthStyleController::Controller::UpdateDoctor(Doctor^ doctor){
    for (int i = 0; i < doctorList->Count; i++)
        if (doctor->Id == doctorList[i]->Id) {
            doctor->Status = 'A';
            doctorList[i] = doctor;
            Persistance::PersistXML("doctor.xml", doctorList);
            return 1;
        }
    return 0;
}

int HealthStyleController::Controller::DeleteDoctor(int doctorId){
    for (int i = 0; i < doctorList->Count; i++)
        if (doctorId == doctorList[i]->Id) {
            doctorList[i]->Status = 'I';
            Persistance::PersistXML("doctor.xml", doctorList);
            return 1;
        }
    return 0;
}
