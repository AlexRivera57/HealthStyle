/**
 * Project Untitled
 */

#pragma once
#include "Employee.h"

using namespace System;

namespace HealthStyleModel {
    public ref class Nurses : public Employee {
    public:
        String^ Speciality;
        int PatiensAttended;
    };
}
