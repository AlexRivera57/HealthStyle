#include "pch.h"
#include "HealthStyleController.h"

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
