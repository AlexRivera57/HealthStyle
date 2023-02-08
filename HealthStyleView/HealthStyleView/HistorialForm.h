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

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombres;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Height;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Weight;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Diseases;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Treatments;





	protected:

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
			this->Nombres = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Height = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Weight = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Diseases = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Treatments = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHistorial))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(115, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Height";
			this->label1->Click += gcnew System::EventHandler(this, &HistorialForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(115, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Weight";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(115, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Diseases";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(115, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Treatments";
			// 
			// txtHeight
			// 
			this->txtHeight->Location = System::Drawing::Point(205, 71);
			this->txtHeight->Name = L"txtHeight";
			this->txtHeight->Size = System::Drawing::Size(100, 20);
			this->txtHeight->TabIndex = 5;
			// 
			// txtWeight
			// 
			this->txtWeight->Location = System::Drawing::Point(205, 108);
			this->txtWeight->Name = L"txtWeight";
			this->txtWeight->Size = System::Drawing::Size(100, 20);
			this->txtWeight->TabIndex = 6;
			// 
			// txtDiseases
			// 
			this->txtDiseases->Location = System::Drawing::Point(205, 150);
			this->txtDiseases->Multiline = true;
			this->txtDiseases->Name = L"txtDiseases";
			this->txtDiseases->Size = System::Drawing::Size(153, 48);
			this->txtDiseases->TabIndex = 7;
			// 
			// txtTreatments
			// 
			this->txtTreatments->Location = System::Drawing::Point(205, 214);
			this->txtTreatments->Multiline = true;
			this->txtTreatments->Name = L"txtTreatments";
			this->txtTreatments->Size = System::Drawing::Size(243, 57);
			this->txtTreatments->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(269, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"HISTORIAL MEDICO";
			this->label5->Click += gcnew System::EventHandler(this, &HistorialForm::label5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(541, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(211, 205);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(131, 315);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 11;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &HistorialForm::btnAdd_Click);
			// 
			// btnModify
			// 
			this->btnModify->Location = System::Drawing::Point(373, 315);
			this->btnModify->Name = L"btnModify";
			this->btnModify->Size = System::Drawing::Size(75, 23);
			this->btnModify->TabIndex = 12;
			this->btnModify->Text = L"Modify";
			this->btnModify->UseVisualStyleBackColor = true;
			this->btnModify->Click += gcnew System::EventHandler(this, &HistorialForm::btnModify_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(570, 315);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(75, 23);
			this->btnDelete->TabIndex = 13;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &HistorialForm::btnDelete_Click);
			// 
			// dgvHistorial
			// 
			this->dgvHistorial->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvHistorial->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Nombres,
					this->Height, this->Weight, this->Diseases, this->Treatments
			});
			this->dgvHistorial->Location = System::Drawing::Point(37, 368);
			this->dgvHistorial->Name = L"dgvHistorial";
			this->dgvHistorial->Size = System::Drawing::Size(772, 205);
			this->dgvHistorial->TabIndex = 14;
			// 
			// Nombres
			// 
			this->Nombres->HeaderText = L"Nombres";
			this->Nombres->Name = L"Nombres";
			this->Nombres->Width = 130;
			// 
			// Height
			// 
			this->Height->HeaderText = L"Height";
			this->Height->Name = L"Height";
			// 
			// Weight
			// 
			this->Weight->HeaderText = L"Weight";
			this->Weight->Name = L"Weight";
			// 
			// Diseases
			// 
			this->Diseases->HeaderText = L"Diseases";
			this->Diseases->Name = L"Diseases";
			this->Diseases->Width = 200;
			// 
			// Treatments
			// 
			this->Treatments->HeaderText = L"Treatments";
			this->Treatments->Name = L"Treatments";
			this->Treatments->Width = 200;
			// 
			// HistorialForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(862, 585);
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
			this->IsMdiContainer = true;
			this->Name = L"HistorialForm";
			this->Text = L"Historial Medico";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHistorial))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Historial^ historial = gcnew Historial();
	Historial->Height = Convert::ToDouble(txtHeight->Text);
	Historial->Weight = Convert::ToDouble(txtWeight->Text);
	Historial->Diseases = txtDiseases->Text;
	Historial->Treatments = txtTreatments->Text;

	Controller::AddHistorial(historial);

	ShowHistorial();
}

	   void ShowHistorial() {
		   List<Historial^>^ myHistorialList = Controller::QueryAllHistorial();

		   dgvHistorial->Rows->Clear();
		   for (int i = 0; i < myHistorialList->Count; i++) {
			   dgvHistorial->Rows->Add(gcnew array<String^>{
				   "" + myHistorialList[i]->Height,
					   myHistorialList[i]->Weight,
					   "" + myHistorialList[i]->Diseases,
					   "" + myHistorialList[i]->Treatments
			   });
		   }
	   }

	   void CleanControls() {
		   txtHeight->Clear();
		   txtWeight->Clear();
		   txtDiseases->Clear();
		   txtTreatments->Clear();
	   }

private: System::Void btnModify_Click(System::Object^ sender, System::EventArgs^ e) {
	Historial^ historial = gcnew Historial();
	Historial->Height = Convert::ToDouble(txtHeight->Text);
	Historial->Weight = Convert::ToDouble(txtWeight->Text);
	Historial->Diseases = txtDiseases->Text;
	Historial->Treatments = txtTreatments->Text;

	Controller::UpdateHistorial(historial);
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
