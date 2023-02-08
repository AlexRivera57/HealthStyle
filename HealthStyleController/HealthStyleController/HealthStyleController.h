#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace HealthStyleModel;

namespace HealthStyleController {
	public ref class Controller{
	private:
		static List<Doctor^>^ doctorList = gcnew List<Doctor^>();
		static List<Patient^>^ patientList = gcnew List<Patient^>();
		static List<Medicines^>^ medicinesList = gcnew List<Medicines^>();
		static List <Quote^>^ salesList = gcnew List<Quote^>(); // Lista de ventas registradas
		static List<Historial^>^ historialList = gcnew List<Historial^>(); // Variable de clase (global) para la lista de historiales
	public:
		static void Init();
		static int AddDoctor(Doctor^ doctor);
		static List<Doctor^>^ QueryAllDoctor();
		static int UpdateDoctor(Doctor^ doctor);
		static int DeleteDoctor(int doctorId);
		static Doctor^ QueryDoctorById(int doctorId);
		
		//Métodos CRUD de Historial Médico (C:Create, R:Request, U:Update, D:Delete)
		static int AddHistorial(Historial^ historial);
		//static Historial^ QueryProductById(int historialId);
		static List<Historial^>^ QueryAllHistorial();
		static int UpdateHistorial(Historial^ historial);
		static int DeleteHistorial(int historial);
	};
}
