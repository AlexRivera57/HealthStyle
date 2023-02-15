/**
 * Project Untitled
 */

#pragma once
#include "Employee.h"

using namespace System;

namespace HealthStyleModel {
    [Serializable]
    public ref class Nurses : public Employee {
    public:
        String^ Speciality;
        int PatiensAttended;
    };
}
