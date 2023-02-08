/**
 * 
 */

#pragma once

#include "Employee.h"

using namespace System;

namespace HealthStyleModel{
    public ref class Secretary: public Employee {
    public: 
        property int NumberOfQuotes;
    };
};
