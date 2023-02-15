/**
 *
 */
#pragma once

#include "Employee.h"
using namespace System;

namespace HealthStyleModel{
    [Serializable]
    public ref class Pharmacist : public Employee {
    public:
        property int MedicinesDelivered;
        property int MedicinesSold;
    };
}


