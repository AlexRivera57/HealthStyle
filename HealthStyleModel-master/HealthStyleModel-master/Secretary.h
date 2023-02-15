/**
 * 
 */

#pragma once

#include "Employee.h"

using namespace System;

namespace HealthStyleModel{
    [Serializable]
    public ref class Secretary: public Employee {
    public: 
        property int NumberOfQuotes;
    };
};
