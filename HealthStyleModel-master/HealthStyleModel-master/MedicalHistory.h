
#pragma once
#include "Patient.h"
using namespace System;

namespace HealthStyleModel {
    public ref class MedicalHistory : public Patient {
    public:
        property double Height;
        property double Weight;
        property char BloodType;
        property String^ PreviousDiseases;
        property String^ CurrentDiseases;
        property String^ Medicines;
        property String^ Treatments;
    };
}
