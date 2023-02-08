/**
 *
 */
#pragma once

#include "Employee.h"
using namespace System;

namespace HealthStyleModel{
    public ref class Pharmacist : public Employee {
    public:
        property int MedicinesDelivered;
        property int MedicinesSold;
    };
}


