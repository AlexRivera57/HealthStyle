#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace HealthStyleModel;

namespace HealthStyleController {
	public ref class Controller{
	private:
		//static List<Medicines^>^ medicinesList = gcnew List<Medicines^>();
		//
		static List<Doctor^>^ doctorList = gcnew List<Doctor^>();
		static List<Patient^>^ patientList = gcnew List<Patient^>();
		static List<Medicines^>^ medicinesList = gcnew List<Medicines^>();
		static List <Quote^>^ salesList = gcnew List<Quote^>(); // Lista de ventas registradas
	public:
		static int AddMedicine(Medicines^ medicines);
		static Medicines^ QueryMedicineById(int medicineId);
		static List<Medicines^>^ QueryAllMedicines();
		static int UpdateMedicine(Medicines^ medicines);
		static int DeleteMedicine(int medicineId);
		//
		static int AddDoctor(Doctor^ doctor);
		static Doctor^ QueryDoctorById(int doctorId);
		static List<Doctor^>^ QueryAllDoctor();
		static int UpdateDoctor(Doctor^ doctor);
		static int DeleteDoctor(int doctorId);
	};
}
