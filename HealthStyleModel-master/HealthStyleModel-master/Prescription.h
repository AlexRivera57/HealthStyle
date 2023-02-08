/**
 * Project Untitled
 */
#pragma once

using namespace System;

namespace HealthStyleModel{
    public ref class Prescription {
    public: 
        String^ Date;
        String^ Description;
        double Total;
        String^ PacientName;
        String^ DoctorName;
    };
}


