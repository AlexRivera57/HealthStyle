#pragma once

namespace HealthStyleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PatientForm
	/// </summary>
	public ref class PatientForm : public System::Windows::Forms::Form
	{
	public:
		PatientForm(void)
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
		~PatientForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtEmail;
	protected:
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ gBoxGender;
	private: System::Windows::Forms::RadioButton^ rbtnFemale;
	private: System::Windows::Forms::RadioButton^ rbtnMale;
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PatientId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PatientName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PatientLastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PatientDNI;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PatientSecure;
	private: System::Windows::Forms::Button^ btnDeleteDoctor;
	private: System::Windows::Forms::Button^ btnUpdateDoctor;
	private: System::Windows::Forms::Button^ btnAdd;

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
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gBoxGender = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnFemale = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnMale = (gcnew System::Windows::Forms::RadioButton());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->PatientId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PatientName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PatientLastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PatientDNI = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PatientSecure = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDeleteDoctor = (gcnew System::Windows::Forms::Button());
			this->btnUpdateDoctor = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->gBoxGender->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(94, 152);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(470, 20);
			this->txtEmail->TabIndex = 36;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(94, 119);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(470, 20);
			this->txtAddress->TabIndex = 35;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(404, 89);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(160, 20);
			this->txtDNI->TabIndex = 34;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(94, 89);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(202, 20);
			this->txtLastName->TabIndex = 33;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(404, 58);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(160, 20);
			this->txtPassword->TabIndex = 32;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(404, 26);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(160, 20);
			this->txtUsername->TabIndex = 31;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(94, 58);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(202, 20);
			this->txtName->TabIndex = 30;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(318, 61);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 13);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Contraseña (*)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(318, 29);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 13);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Usuario (*)";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(94, 26);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(79, 20);
			this->txtId->TabIndex = 27;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Email (*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 122);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 25;
			this->label5->Text = L"Dirección (*)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(318, 92);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"DNI (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Apellidos (*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Nombre  (*)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Id (*)";
			// 
			// gBoxGender
			// 
			this->gBoxGender->Controls->Add(this->rbtnFemale);
			this->gBoxGender->Controls->Add(this->rbtnMale);
			this->gBoxGender->Location = System::Drawing::Point(94, 213);
			this->gBoxGender->Name = L"gBoxGender";
			this->gBoxGender->Size = System::Drawing::Size(98, 47);
			this->gBoxGender->TabIndex = 43;
			this->gBoxGender->TabStop = false;
			// 
			// rbtnFemale
			// 
			this->rbtnFemale->AutoSize = true;
			this->rbtnFemale->Location = System::Drawing::Point(56, 19);
			this->rbtnFemale->Name = L"rbtnFemale";
			this->rbtnFemale->Size = System::Drawing::Size(39, 17);
			this->rbtnFemale->TabIndex = 1;
			this->rbtnFemale->TabStop = true;
			this->rbtnFemale->Text = L"No";
			this->rbtnFemale->UseVisualStyleBackColor = true;
			// 
			// rbtnMale
			// 
			this->rbtnMale->AutoSize = true;
			this->rbtnMale->Location = System::Drawing::Point(6, 19);
			this->rbtnMale->Name = L"rbtnMale";
			this->rbtnMale->Size = System::Drawing::Size(34, 17);
			this->rbtnMale->TabIndex = 0;
			this->rbtnMale->TabStop = true;
			this->rbtnMale->Text = L"Si";
			this->rbtnMale->UseVisualStyleBackColor = true;
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(370, 187);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(194, 20);
			this->dtpBirthday->TabIndex = 42;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(94, 187);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(147, 20);
			this->txtPhoneNumber->TabIndex = 41;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(25, 232);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 13);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Seguro (*)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(267, 190);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 13);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Fec. Nacimiento (*)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 190);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 13);
			this->label7->TabIndex = 37;
			this->label7->Text = L"Teléfono (*)";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->PatientId,
					this->PatientName, this->PatientLastName, this->PatientDNI, this->PatientSecure
			});
			this->dataGridView1->Location = System::Drawing::Point(28, 307);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(536, 146);
			this->dataGridView1->TabIndex = 44;
			// 
			// PatientId
			// 
			this->PatientId->HeaderText = L"Id";
			this->PatientId->Name = L"PatientId";
			// 
			// PatientName
			// 
			this->PatientName->HeaderText = L"Nombre";
			this->PatientName->Name = L"PatientName";
			// 
			// PatientLastName
			// 
			this->PatientLastName->HeaderText = L"Apellidos";
			this->PatientLastName->Name = L"PatientLastName";
			// 
			// PatientDNI
			// 
			this->PatientDNI->HeaderText = L"DNI";
			this->PatientDNI->Name = L"PatientDNI";
			// 
			// PatientSecure
			// 
			this->PatientSecure->HeaderText = L"Seguro";
			this->PatientSecure->Name = L"PatientSecure";
			// 
			// btnDeleteDoctor
			// 
			this->btnDeleteDoctor->Location = System::Drawing::Point(405, 266);
			this->btnDeleteDoctor->Name = L"btnDeleteDoctor";
			this->btnDeleteDoctor->Size = System::Drawing::Size(96, 23);
			this->btnDeleteDoctor->TabIndex = 47;
			this->btnDeleteDoctor->Text = L"Eliminar";
			this->btnDeleteDoctor->UseVisualStyleBackColor = true;
			// 
			// btnUpdateDoctor
			// 
			this->btnUpdateDoctor->Location = System::Drawing::Point(240, 266);
			this->btnUpdateDoctor->Name = L"btnUpdateDoctor";
			this->btnUpdateDoctor->Size = System::Drawing::Size(98, 23);
			this->btnUpdateDoctor->TabIndex = 46;
			this->btnUpdateDoctor->Text = L"Modificar";
			this->btnUpdateDoctor->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(75, 266);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(98, 23);
			this->btnAdd->TabIndex = 45;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// PatientForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(607, 479);
			this->Controls->Add(this->btnDeleteDoctor);
			this->Controls->Add(this->btnUpdateDoctor);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->gBoxGender);
			this->Controls->Add(this->dtpBirthday);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"PatientForm";
			this->Text = L"PatientForm";
			this->gBoxGender->ResumeLayout(false);
			this->gBoxGender->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
