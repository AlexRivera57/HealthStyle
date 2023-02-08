#pragma once

namespace HealthStyleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MedicalHistoryForm
	/// </summary>
	public ref class MedicalHistoryForm : public System::Windows::Forms::Form
	{
	public:
		MedicalHistoryForm(void)
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
		~MedicalHistoryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtAge;
	private: System::Windows::Forms::TextBox^ txtHeight;
	private: System::Windows::Forms::TextBox^ Weight;



	private: System::Windows::Forms::TextBox^ txtBloodType;
	private: System::Windows::Forms::TextBox^ txtPreviusDiseases;
	private: System::Windows::Forms::TextBox^ txtCurrentDiseases;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtMedicinesTaken;
	private: System::Windows::Forms::TextBox^ txtTreatments;
	private: System::Windows::Forms::Button^ AddMedicalHistory;
	private: System::Windows::Forms::Button^ btnUpdateMedicalHistory;
	private: System::Windows::Forms::Button^ btnDeleteHistory;






	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtPatient;

	private: System::Windows::Forms::DataGridView^ dataGridView1;



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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtAge = (gcnew System::Windows::Forms::TextBox());
			this->txtHeight = (gcnew System::Windows::Forms::TextBox());
			this->Weight = (gcnew System::Windows::Forms::TextBox());
			this->txtBloodType = (gcnew System::Windows::Forms::TextBox());
			this->txtPreviusDiseases = (gcnew System::Windows::Forms::TextBox());
			this->txtCurrentDiseases = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtMedicinesTaken = (gcnew System::Windows::Forms::TextBox());
			this->txtTreatments = (gcnew System::Windows::Forms::TextBox());
			this->AddMedicalHistory = (gcnew System::Windows::Forms::Button());
			this->btnUpdateMedicalHistory = (gcnew System::Windows::Forms::Button());
			this->btnDeleteHistory = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtPatient = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(358, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Edad:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(205, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Altura (m):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(358, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Peso (kg):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(35, 62);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tipo de Sangre:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(35, 89);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Enfermedades anteriores:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(35, 178);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(121, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Enfermedades actuales:";
			// 
			// txtAge
			// 
			this->txtAge->Location = System::Drawing::Point(419, 25);
			this->txtAge->Name = L"txtAge";
			this->txtAge->Size = System::Drawing::Size(49, 20);
			this->txtAge->TabIndex = 6;
			// 
			// txtHeight
			// 
			this->txtHeight->Location = System::Drawing::Point(265, 59);
			this->txtHeight->Name = L"txtHeight";
			this->txtHeight->Size = System::Drawing::Size(48, 20);
			this->txtHeight->TabIndex = 7;
			// 
			// Weight
			// 
			this->Weight->Location = System::Drawing::Point(419, 59);
			this->Weight->Name = L"Weight";
			this->Weight->Size = System::Drawing::Size(49, 20);
			this->Weight->TabIndex = 8;
			// 
			// txtBloodType
			// 
			this->txtBloodType->Location = System::Drawing::Point(119, 59);
			this->txtBloodType->Name = L"txtBloodType";
			this->txtBloodType->Size = System::Drawing::Size(37, 20);
			this->txtBloodType->TabIndex = 9;
			// 
			// txtPreviusDiseases
			// 
			this->txtPreviusDiseases->Location = System::Drawing::Point(38, 105);
			this->txtPreviusDiseases->Multiline = true;
			this->txtPreviusDiseases->Name = L"txtPreviusDiseases";
			this->txtPreviusDiseases->Size = System::Drawing::Size(430, 60);
			this->txtPreviusDiseases->TabIndex = 10;
			// 
			// txtCurrentDiseases
			// 
			this->txtCurrentDiseases->Location = System::Drawing::Point(38, 194);
			this->txtCurrentDiseases->Multiline = true;
			this->txtCurrentDiseases->Name = L"txtCurrentDiseases";
			this->txtCurrentDiseases->Size = System::Drawing::Size(430, 60);
			this->txtCurrentDiseases->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(35, 268);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(162, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Medicinas tomadas actualmente:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(35, 358);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Tratamientos";
			// 
			// txtMedicinesTaken
			// 
			this->txtMedicinesTaken->Location = System::Drawing::Point(38, 284);
			this->txtMedicinesTaken->Multiline = true;
			this->txtMedicinesTaken->Name = L"txtMedicinesTaken";
			this->txtMedicinesTaken->Size = System::Drawing::Size(430, 60);
			this->txtMedicinesTaken->TabIndex = 14;
			// 
			// txtTreatments
			// 
			this->txtTreatments->Location = System::Drawing::Point(38, 374);
			this->txtTreatments->Multiline = true;
			this->txtTreatments->Name = L"txtTreatments";
			this->txtTreatments->Size = System::Drawing::Size(430, 60);
			this->txtTreatments->TabIndex = 15;
			// 
			// AddMedicalHistory
			// 
			this->AddMedicalHistory->Location = System::Drawing::Point(81, 451);
			this->AddMedicalHistory->Name = L"AddMedicalHistory";
			this->AddMedicalHistory->Size = System::Drawing::Size(75, 23);
			this->AddMedicalHistory->TabIndex = 16;
			this->AddMedicalHistory->Text = L"Agregar";
			this->AddMedicalHistory->UseVisualStyleBackColor = true;
			// 
			// btnUpdateMedicalHistory
			// 
			this->btnUpdateMedicalHistory->Location = System::Drawing::Point(217, 451);
			this->btnUpdateMedicalHistory->Name = L"btnUpdateMedicalHistory";
			this->btnUpdateMedicalHistory->Size = System::Drawing::Size(75, 23);
			this->btnUpdateMedicalHistory->TabIndex = 17;
			this->btnUpdateMedicalHistory->Text = L"Modificar";
			this->btnUpdateMedicalHistory->UseVisualStyleBackColor = true;
			// 
			// btnDeleteHistory
			// 
			this->btnDeleteHistory->Location = System::Drawing::Point(350, 451);
			this->btnDeleteHistory->Name = L"btnDeleteHistory";
			this->btnDeleteHistory->Size = System::Drawing::Size(75, 23);
			this->btnDeleteHistory->TabIndex = 18;
			this->btnDeleteHistory->Text = L"Eliminar";
			this->btnDeleteHistory->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(35, 28);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Paciente:";
			// 
			// txtPatient
			// 
			this->txtPatient->Location = System::Drawing::Point(93, 25);
			this->txtPatient->Name = L"txtPatient";
			this->txtPatient->Size = System::Drawing::Size(247, 20);
			this->txtPatient->TabIndex = 20;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(38, 495);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(430, 104);
			this->dataGridView1->TabIndex = 21;
			// 
			// MedicalHistoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(508, 611);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->txtPatient);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->btnDeleteHistory);
			this->Controls->Add(this->btnUpdateMedicalHistory);
			this->Controls->Add(this->AddMedicalHistory);
			this->Controls->Add(this->txtTreatments);
			this->Controls->Add(this->txtMedicinesTaken);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtCurrentDiseases);
			this->Controls->Add(this->txtPreviusDiseases);
			this->Controls->Add(this->txtBloodType);
			this->Controls->Add(this->Weight);
			this->Controls->Add(this->txtHeight);
			this->Controls->Add(this->txtAge);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MedicalHistoryForm";
			this->Text = L"MedicalHistoryForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
