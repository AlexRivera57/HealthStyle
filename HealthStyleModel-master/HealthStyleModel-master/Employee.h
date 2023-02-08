/**
 * Project Untitled
 */
#pragma once

#include "Person.h"
using namespace System;

namespace HealthStyleModel{
    [Serializable]
    public ref class Employee: public Person{
    public: 
        property String^ Username;
        property String^ Password;
        property char Gender;
        property String^ Birthday;
        property String^ Schedule;
        property int YearsOfWork;
    };
}
