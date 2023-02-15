#pragma once

namespace HealthStyleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace HealthStyleController;
	using namespace HealthStyleModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de ProfessionalSearchForm
	/// </summary>
	public ref class ProfessionalSearchForm : public System::Windows::Forms::Form
	{
	public:
		ProfessionalSearchForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ProfessionalSearchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::DataGridView^ dgvProfessionals;
	private: System::Windows::Forms::ComboBox^ cmbSpecialities;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProfessionalId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Profession;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProfesionalName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProfessionalLastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProfessionalSpeciality;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProfessionalSchedule;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProfessionalStatus;

























	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->dgvProfessionals = (gcnew System::Windows::Forms::DataGridView());
			this->cmbSpecialities = (gcnew System::Windows::Forms::ComboBox());
			this->ProfessionalId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Profession = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProfesionalName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProfessionalLastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProfessionalSpeciality = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProfessionalSchedule = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProfessionalStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProfessionals))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(75, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Especialidad:";
			// 
			// btnSearch
			// 
			this->btnSearch->Location = System::Drawing::Point(135, 92);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(97, 23);
			this->btnSearch->TabIndex = 5;
			this->btnSearch->Text = L"Buscar";
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &ProfessionalSearchForm::btnSearch_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(294, 92);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(96, 23);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancelar";
			this->btnCancel->UseVisualStyleBackColor = true;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(151, 28);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(253, 20);
			this->txtName->TabIndex = 7;
			// 
			// dgvProfessionals
			// 
			this->dgvProfessionals->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvProfessionals->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->ProfessionalId,
					this->Profession, this->ProfesionalName, this->ProfessionalLastName, this->ProfessionalSpeciality, this->ProfessionalSchedule,
					this->ProfessionalStatus
			});
			this->dgvProfessionals->Location = System::Drawing::Point(12, 138);
			this->dgvProfessionals->Name = L"dgvProfessionals";
			this->dgvProfessionals->Size = System::Drawing::Size(551, 152);
			this->dgvProfessionals->TabIndex = 9;
			// 
			// cmbSpecialities
			// 
			this->cmbSpecialities->FormattingEnabled = true;
			this->cmbSpecialities->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"General", L"Pediatría", L"Cardiología",
					L"Ginecología", L"Control del crecimiento y desarrollo del niño", L"Control del crecimiento y desarrollo del adolescente", L"Geriatría"
			});
			this->cmbSpecialities->Location = System::Drawing::Point(152, 59);
			this->cmbSpecialities->Name = L"cmbSpecialities";
			this->cmbSpecialities->Size = System::Drawing::Size(252, 21);
			this->cmbSpecialities->TabIndex = 10;
			// 
			// ProfessionalId
			// 
			this->ProfessionalId->HeaderText = L"Id";
			this->ProfessionalId->Name = L"ProfessionalId";
			this->ProfessionalId->Width = 40;
			// 
			// Profession
			// 
			this->Profession->HeaderText = L"Profesión";
			this->Profession->Name = L"Profession";
			// 
			// ProfesionalName
			// 
			this->ProfesionalName->HeaderText = L"Name";
			this->ProfesionalName->Name = L"ProfesionalName";
			this->ProfesionalName->Width = 120;
			// 
			// ProfessionalLastName
			// 
			this->ProfessionalLastName->HeaderText = L"Apellido";
			this->ProfessionalLastName->Name = L"ProfessionalLastName";
			this->ProfessionalLastName->Width = 120;
			// 
			// ProfessionalSpeciality
			// 
			this->ProfessionalSpeciality->HeaderText = L"Especialidad";
			this->ProfessionalSpeciality->Name = L"ProfessionalSpeciality";
			this->ProfessionalSpeciality->Width = 220;
			// 
			// ProfessionalSchedule
			// 
			this->ProfessionalSchedule->HeaderText = L"Horario";
			this->ProfessionalSchedule->Name = L"ProfessionalSchedule";
			this->ProfessionalSchedule->Width = 120;
			// 
			// ProfessionalStatus
			// 
			this->ProfessionalStatus->HeaderText = L"Estatus";
			this->ProfessionalStatus->Name = L"ProfessionalStatus";
			this->ProfessionalStatus->Width = 90;
			// 
			// ProfessionalSearchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 302);
			this->Controls->Add(this->cmbSpecialities);
			this->Controls->Add(this->dgvProfessionals);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSearch);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ProfessionalSearchForm";
			this->Text = L"Búsqueda de profesionales";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvProfessionals))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		int i = 0, j = 0;
		if (txtName->Text->Trim() != "") {
			List<Doctor^>^ doctorList = Controller::QueryDoctorByNameOrLastName(txtName->Text->Trim());
			List<Nurses^>^ nursesList = Controller::QueryNursesByNameOrLastName(txtName->Text->Trim());
			//Se borran los datos del grid.
			dgvProfessionals->Rows->Clear();
			for ( i; i < doctorList->Count; i++) {
				dgvProfessionals->Rows->Add(gcnew array<String^> {
					"" + doctorList[i]->Id,
						"Doctor/a",
						doctorList[i]->Name,
						doctorList[i]->LastName,
						doctorList[i]->Speciality,
						doctorList[i]->Schedule,
						doctorList[i]->Status,
				});
			}
			for (j; j < nursesList->Count; j++) {
				dgvProfessionals->Rows->Add(gcnew array<String^> {
					"" + nursesList[j]->Id,
						"Enfemero/a",
						nursesList[j]->Name,
						nursesList[j]->LastName,
						nursesList[j]->Speciality,
						nursesList[j]->Schedule,
						nursesList[j]->Status,
				});
			}
			txtName->Text = "";
			cmbSpecialities->ResetText();
		}
		else {
			List<Doctor^>^ doctorList = Controller::QueryDoctorBySpeciality(cmbSpecialities->SelectedItem->ToString());
			List<Nurses^>^ nursesList = Controller::QueryNursesBySpeciality(cmbSpecialities->SelectedItem->ToString());
			dgvProfessionals->Rows->Clear();
			for (i; i < doctorList->Count; i++) {
				dgvProfessionals->Rows->Add(gcnew array<String^> {
					"" + doctorList[i]->Id,
						"Doctor/a",
						doctorList[i]->Name,
						doctorList[i]->LastName,
						doctorList[i]->Speciality,
						doctorList[i]->Schedule,
						doctorList[i]->Status,
				});
			}
			for (j; j < nursesList->Count; j++) {
				dgvProfessionals->Rows->Add(gcnew array<String^> {
					"" + nursesList[j]->Id,
						"Enfemero/a",
						nursesList[j]->Name,
						nursesList[j]->LastName,
						nursesList[j]->Speciality,
						nursesList[j]->Schedule,
						nursesList[j]->Status,
				});
			}
			txtName->Text = "";
			cmbSpecialities->ResetText();
		}
	}
};
}
