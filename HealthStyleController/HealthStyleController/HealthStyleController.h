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
		static List<Nurses^>^ nursesList = gcnew List<Nurses^>();
		static List<Patient^>^ patientList = gcnew List<Patient^>();
		static List<Medicines^>^ medicinesList = gcnew List<Medicines^>();
		static List <Quote^>^ salesList = gcnew List<Quote^>(); 
		static List<MedicalHistory^>^ historialList = gcnew List<MedicalHistory^>(); // Variable de clase (global) para la lista de historiales

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
		//
		static int AddNurses(Nurses^ nurse);
		static Nurses^ QueryNursesById(int nurseId);
		static List<Nurses^>^ QueryAllNurses();
		static int UpdateNurses(Nurses^ nurse);
		static int DeleteNurses(int nurseId);
		//
		static int AddHistorial(MedicalHistory^ historial);
		static List<MedicalHistory^>^ QueryAllHistorial();
		static int UpdateHistorial(MedicalHistory^ historial);
		static int DeleteHistorial(int historial);
	};
}
