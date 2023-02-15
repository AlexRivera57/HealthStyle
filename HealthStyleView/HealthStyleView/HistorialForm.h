#pragma once

namespace HealthStyleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace HealthStyleModel;
	using namespace HealthStyleController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de HistorialForm
	/// </summary>
	public ref class HistorialForm : public System::Windows::Forms::Form
	{
	public:
		HistorialForm(void)
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
		~HistorialForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label2;

	protected:

	protected:



	private: System::Windows::Forms::Label^ label3;

	protected:



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtHeight;

	private: System::Windows::Forms::TextBox^ txtWeight;
	private: System::Windows::Forms::TextBox^ txtDiseases;


	private: System::Windows::Forms::TextBox^ txtTreatments;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnModify;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvHistorial;






	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtPreviousDiseases;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtBloodType;
	private: System::Windows::Forms::TextBox^ txtMedicines;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Names;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Height;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Weight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BloodType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PreviousDiseases;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CurrentDiseases;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Medicines;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Treatments;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ txtName;














	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HistorialForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtHeight = (gcnew System::Windows::Forms::TextBox());
			this->txtWeight = (gcnew System::Windows::Forms::TextBox());
			this->txtDiseases = (gcnew System::Windows::Forms::TextBox());
			this->txtTreatments = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnModify = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvHistorial = (gcnew System::Windows::Forms::DataGridView());
			this->Names = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Height = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Weight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BloodType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PreviousDiseases = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CurrentDiseases = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Medicines = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Treatments = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtPreviousDiseases = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtBloodType = (gcnew System::Windows::Forms::TextBox());
			this->txtMedicines = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHistorial))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 119);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Height";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 169);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Weight";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(528, 64);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Current Diseases";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(528, 282);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Treatments";
			// 
			// txtHeight
			// 
			this->txtHeight->Location = System::Drawing::Point(204, 112);
			this->txtHeight->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtHeight->Name = L"txtHeight";
			this->txtHeight->Size = System::Drawing::Size(148, 26);
			this->txtHeight->TabIndex = 5;
			// 
			// txtWeight
			// 
			this->txtWeight->Location = System::Drawing::Point(204, 163);
			this->txtWeight->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtWeight->Name = L"txtWeight";
			this->txtWeight->Size = System::Drawing::Size(148, 26);
			this->txtWeight->TabIndex = 6;
			// 
			// txtDiseases
			// 
			this->txtDiseases->Location = System::Drawing::Point(695, 61);
			this->txtDiseases->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtDiseases->Multiline = true;
			this->txtDiseases->Name = L"txtDiseases";
			this->txtDiseases->Size = System::Drawing::Size(228, 72);
			this->txtDiseases->TabIndex = 7;
			// 
			// txtTreatments
			// 
			this->txtTreatments->Location = System::Drawing::Point(695, 282);
			this->txtTreatments->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtTreatments->Multiline = true;
			this->txtTreatments->Name = L"txtTreatments";
			this->txtTreatments->Size = System::Drawing::Size(362, 86);
			this->txtTreatments->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(455, 9);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(163, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"HISTORIAL MEDICO";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(943, 9);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(123, 124);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(62, 413);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(112, 35);
			this->btnAdd->TabIndex = 11;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &HistorialForm::btnAdd_Click);
			// 
			// btnModify
			// 
			this->btnModify->Location = System::Drawing::Point(432, 413);
			this->btnModify->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(112, 35);
			this->btnModify->TabIndex = 12;
			this->btnModify->Text = L"Modify";
			this->btnModify->UseVisualStyleBackColor = true;
			this->btnModify->Click += gcnew System::EventHandler(this, &HistorialForm::btnModify_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(752, 413);
			this->btnDelete->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(112, 35);
			this->btnDelete->TabIndex = 13;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &HistorialForm::btnDelete_Click);
			// 
			// dgvHistorial
			// 
			this->dgvHistorial->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvHistorial->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Names, this->Height,
					this->Weight, this->BloodType, this->PreviousDiseases, this->CurrentDiseases, this->Medicines, this->Treatments
			});
			this->dgvHistorial->Location = System::Drawing::Point(71, 497);
			this->dgvHistorial->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->dgvHistorial->Name = L"dgvHistorial";
			this->dgvHistorial->RowHeadersWidth = 62;
			this->dgvHistorial->Size = System::Drawing::Size(921, 245);
			this->dgvHistorial->TabIndex = 14;
			// 
			// Names
			// 
			this->Names->HeaderText = L"Names";
			this->Names->MinimumWidth = 8;
			this->Names->Name = L"Names";
			this->Names->Width = 130;
			// 
			// Height
			// 
			this->Height->HeaderText = L"Height";
			this->Height->MinimumWidth = 8;
			this->Height->Name = L"Height";
			this->Height->Width = 150;
			// 
			// Weight
			// 
			this->Weight->HeaderText = L"Weight";
			this->Weight->MinimumWidth = 8;
			this->Weight->Name = L"Weight";
			this->Weight->Width = 150;
			// 
			// BloodType
			// 
			this->BloodType->HeaderText = L"BloodType";
			this->BloodType->MinimumWidth = 8;
			this->BloodType->Name = L"BloodType";
			this->BloodType->Width = 150;
			// 
			// PreviousDiseases
			// 
			this->PreviousDiseases->HeaderText = L"Previous Diseases";
			this->PreviousDiseases->MinimumWidth = 8;
			this->PreviousDiseases->Name = L"PreviousDiseases";
			this->PreviousDiseases->Width = 150;
			// 
			// CurrentDiseases
			// 
			this->CurrentDiseases->HeaderText = L"Current Diseases";
			this->CurrentDiseases->MinimumWidth = 8;
			this->CurrentDiseases->Name = L"CurrentDiseases";
			this->CurrentDiseases->Width = 200;
			// 
			// Medicines
			// 
			this->Medicines->HeaderText = L"Medicines";
			this->Medicines->MinimumWidth = 8;
			this->Medicines->Name = L"Medicines";
			this->Medicines->Width = 150;
			// 
			// Treatments
			// 
			this->Treatments->HeaderText = L"Treatments";
			this->Treatments->MinimumWidth = 8;
			this->Treatments->Name = L"Treatments";
			this->Treatments->Width = 200;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 292);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 20);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Previous Diseases";
			// 
			// txtPreviousDiseases
			// 
			this->txtPreviousDiseases->Location = System::Drawing::Point(204, 288);
			this->txtPreviousDiseases->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtPreviousDiseases->Multiline = true;
			this->txtPreviousDiseases->Name = L"txtPreviousDiseases";
			this->txtPreviousDiseases->Size = System::Drawing::Size(228, 69);
			this->txtPreviousDiseases->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(18, 232);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 20);
			this->label7->TabIndex = 18;
			this->label7->Text = L"BloodType";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(528, 176);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 20);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Medicines";
			// 
			// txtBloodType
			// 
			this->txtBloodType->Location = System::Drawing::Point(204, 232);
			this->txtBloodType->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtBloodType->Name = L"txtBloodType";
			this->txtBloodType->Size = System::Drawing::Size(148, 26);
			this->txtBloodType->TabIndex = 20;
			// 
			// txtMedicines
			// 
			this->txtMedicines->Location = System::Drawing::Point(695, 176);
			this->txtMedicines->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->txtMedicines->Multiline = true;
			this->txtMedicines->Name = L"txtMedicines";
			this->txtMedicines->Size = System::Drawing::Size(362, 70);
			this->txtMedicines->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(21, 67);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 20);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Names";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(204, 61);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(306, 26);
			this->txtName->TabIndex = 24;
			// 
			// HistorialForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1092, 772);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtMedicines);
			this->Controls->Add(this->txtBloodType);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtPreviousDiseases);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->dgvHistorial);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnModify);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtTreatments);
			this->Controls->Add(this->txtDiseases);
			this->Controls->Add(this->txtWeight);
			this->Controls->Add(this->txtHeight);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"HistorialForm";
			this->Text = L"Historial Medico";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHistorial))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		MedicalHistory^ medicalHistory = gcnew MedicalHistory();
		medicalHistory->Name = txtName->Text;
		medicalHistory->Height = Convert::ToDouble(txtHeight->Text);
		medicalHistory->Weight = Convert::ToDouble(txtWeight->Text);
		medicalHistory->BloodType = Convert::ToChar(txtBloodType->Text);
		medicalHistory->PreviousDiseases = txtPreviousDiseases->Text;
		medicalHistory->CurrentDiseases = txtDiseases->Text;
		medicalHistory->Medicines = txtMedicines->Text;
		medicalHistory->Treatments = txtTreatments->Text;

		Controller::AddHistorial(medicalHistory);

		ShowHistorial();
	}

		   void ShowHistorial() {
			   List<MedicalHistory^>^ myHistorialList = Controller::QueryAllHistorial();

			   dgvHistorial->Rows->Clear();
			   for (int i = 0; i < myHistorialList->Count; i++) {
				   dgvHistorial->Rows->Add(gcnew array<String^>{
					   myHistorialList[i]->Name,
					   "" + myHistorialList[i]->Height,
						"" +  myHistorialList[i]->Weight,
						   "" + myHistorialList[i]->BloodType,
						   "" + myHistorialList[i]->PreviousDiseases,
						   "" + myHistorialList[i]->CurrentDiseases,
						   "" + myHistorialList[i]->Medicines,
						   "" + myHistorialList[i]->Treatments
				   });
			   }
		   }

		   void CleanControls() {
			   txtName->Clear();
			   txtHeight->Clear();
			   txtWeight->Clear();
			   txtBloodType->Clear();
			   txtPreviousDiseases->Clear();
			   txtDiseases->Clear();
			   txtMedicines->Clear();
			   txtTreatments->Clear();
		   }

	private: System::Void btnModify_Click(System::Object^ sender, System::EventArgs^ e) {
		MedicalHistory^ medicalHistory = gcnew MedicalHistory();
		medicalHistory->Name = txtName->Text;
		medicalHistory->Height = Convert::ToDouble(txtHeight->Text);
		medicalHistory->Weight = Convert::ToDouble(txtWeight->Text);
		medicalHistory->BloodType = Convert::ToChar(txtBloodType->Text);
		medicalHistory->PreviousDiseases = txtPreviousDiseases->Text;
		medicalHistory->CurrentDiseases = txtDiseases->Text;
		medicalHistory->Medicines = txtMedicines->Text;
		medicalHistory->Treatments = txtTreatments->Text;

		Controller::UpdateHistorial(medicalHistory);
		CleanControls();
		ShowHistorial();
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtWeight->Text->Trim() == "") {
			MessageBox::Show("Debe seleccionar un producto");
			return;
		}
		Controller::DeleteHistorial(Convert::ToInt32(txtWeight->Text->Trim()));
		CleanControls();
		ShowHistorial();
	}
	};
}
