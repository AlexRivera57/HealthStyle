/**
 * Project Untitled
 */

#pragma once
#include "Employee.h"

using namespace System;

namespace HealthStyleModel {
    public ref class Doctor : public Employee {
    public:
        property String^ Speciality;
        property int PatiensAttended;
    };
}

