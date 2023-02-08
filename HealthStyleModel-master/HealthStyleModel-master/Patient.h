/**
 * Project Untitled
 */


#pragma once

#include "Person.h"
using namespace System;

namespace HealthStyleModel {
    public ref class Patient : public Person {
    public:
        property char Seguro;
        property String^ DateQuote;
    };
}


