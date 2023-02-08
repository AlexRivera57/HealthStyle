/**
 * Project Untitled
 */
#pragma once

using namespace System;

namespace HealthStyleModel {
    public ref class MedicalHistory {
    public:
        property String^ Patient;
        property int Age;
        property double Height;
        property double Weight;
        property String^ BloodType;
        property String^ PreviusDiseases;
        property String^ CurrentsDiseases;
        property String^ Medicines;
        property String^ Treatmens;

    };
}
