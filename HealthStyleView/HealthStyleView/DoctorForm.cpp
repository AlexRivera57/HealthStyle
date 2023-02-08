#include "pch.h"
#include "DoctorForm.h"

using namespace HealthStyleView;
using namespace System::Collections::Generic;

Void HealthStyleView::DoctorForm::RefreshDoctorDGV()
{
	List <Doctor^>^ doctorList = Controller::QueryAllDoctor();
	dgvDoctor->Rows->Clear();
	for (int i = 0; i < doctorList->Count; i++) {
		dgvDoctor->Rows->Add(gcnew array<String^> {
			"" + doctorList[i]->Id,
				doctorList[i]->Name,
				doctorList[i]->LastName,
				doctorList[i]->Email,
				doctorList[i]->PhoneNumber,
				doctorList[i]->Schedule,
				doctorList[i]->Speciality,
			"" + doctorList[i]->DocNumber,
			"" + doctorList[i]->YearsOfWork,
		});
	}
	return Void();
}
