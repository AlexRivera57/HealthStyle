#include "pch.h"
#include "HealthStyleController.h"
using namespace HealthStylePersistance;

int HealthStyleController::Controller::AddDoctor(Doctor^ doctor)
{
    doctor->Status = 'A';
    doctorList->Add(doctor);
    return 1;
}

List<Doctor^>^ HealthStyleController::Controller::QueryAllDoctor()
{
    List<Doctor^>^ activeDoctorList = gcnew List<Doctor^>();
    for (int i = 0; i < doctorList->Count; i++) {
        if (doctorList[i]->Status == 'A') {
            activeDoctorList->Add(doctorList[i]);
        }
    }
    return activeDoctorList;
}

int HealthStyleController::Controller::UpdateDoctor(Doctor^ doctor){
    for (int i = 0; i < doctorList->Count; i++)
        if (doctor->Id == doctorList[i]->Id) {
            doctor->Status = 'A';
            doctorList[i] = doctor;
            return 1;
        }
    return 0;
}

int HealthStyleController::Controller::DeleteDoctor(int doctorId){
    for (int i = 0; i < doctorList->Count; i++)
        if (doctorId == doctorList[i]->Id) {
            doctorList[i]->Status = 'I';
            return 1;
        }
    return 0;
}

Doctor^ HealthStyleController::Controller::QueryDoctorById(int doctorId){
    for (int i = 0; i < doctorList->Count; i++)
        if (doctorId == doctorList[i]->Id)
            return doctorList[i];
    return nullptr;
}

//Historial Controller actions
int HealthStyleController::Controller::AddHistorial(Historial^ historial)
{
    historialList->Add(historial);
    Persistance::PersistBinary("historial.bin", historialList);
    return historial->Id;
}

List<Historial^>^ HealthStyleController::Controller::QueryAllHistorial()
{
    historialList = (List<Historial^>^)Persistance::LoadBinaryData("historial.bin");
    return historialList;
}

int HealthStyleController::Controller::UpdateHistorial(Historial^ historial)
{
    for (int i = 0; i < productList->Count; i++)
        if (historialList[i]->Id == historial->Id) {
            historialList[i] = historial;
            Persistance::PersistBinary("historial.bin", historialList);
            return historial->Id;
        }
    return 0;
}

int HealthStyleController::Controller::DeleteProduct(int historialId)
{
    for (int i = 0; i < historialList->Count; i++)
        if (historialList[i]->Id == historialId) {
            historialList->RemoveAt(i);
            Persistance::PersistBinary("products.bin", productList);
            return historialId;
        }
    return 0;
}
