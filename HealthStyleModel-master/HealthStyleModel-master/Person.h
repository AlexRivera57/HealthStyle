/**
 * 
 */
#pragma once
using namespace System;

namespace HealthStyleModel {
    [Serializable]
    public ref class Person {
    public:
        property int Id;
        property String^ Name;
        property String^ LastName;
        property String^ DocNumber;
        property String^ Address;
        property String^ PhoneNumber;
        property String^ Email;
        property String^ Status;
    };
}


