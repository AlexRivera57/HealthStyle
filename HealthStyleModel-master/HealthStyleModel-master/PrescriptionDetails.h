/**
 * 
 */

#pragma once

#include "Prescription.h"

using namespace System;
 
namespace HealthStyleModel{
    public ref class PrescriptionDetails {
    public: 
        property int Id;
        property int Quantity;
        property double SubTotal;
        property double UnitPrice;
    };
};

