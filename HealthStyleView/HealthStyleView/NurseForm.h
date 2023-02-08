#pragma once

namespace HealthStyleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NurseForm
	/// </summary>
	public ref class NurseForm : public System::Windows::Forms::Form
	{
	public:
		NurseForm(void)
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
		~NurseForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::RadioButton^ rbtnNoDisponible;
	private: System::Windows::Forms::RadioButton^ rbtnDisponible;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtSchedule;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ btnDeleteDoctor;
	private: System::Windows::Forms::Button^ btnUpdateDoctor;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::TextBox^ txtSpeciality;
	private: System::Windows::Forms::TextBox^ txtYearsOfWork;
	private: System::Windows::Forms::GroupBox^ gBoxGender;
	private: System::Windows::Forms::RadioButton^ rbtnFemale;
	private: System::Windows::Forms::RadioButton^ rbtnMale;
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnNoDisponible = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnDisponible = (gcnew System::Windows::Forms::RadioButton());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtSchedule = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->btnDeleteDoctor = (gcnew System::Windows::Forms::Button());
			this->btnUpdateDoctor = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->txtSpeciality = (gcnew System::Windows::Forms::TextBox());
			this->txtYearsOfWork = (gcnew System::Windows::Forms::TextBox());
			this->gBoxGender = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnFemale = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnMale = (gcnew System::Windows::Forms::RadioButton());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
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
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->gBoxGender->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtnNoDisponible);
			this->groupBox1->Controls->Add(this->rbtnDisponible);
			this->groupBox1->Location = System::Drawing::Point(94, 295);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(202, 47);
			this->groupBox1->TabIndex = 66;
			this->groupBox1->TabStop = false;
			// 
			// rbtnNoDisponible
			// 
			this->rbtnNoDisponible->AutoSize = true;
			this->rbtnNoDisponible->Location = System::Drawing::Point(103, 19);
			this->rbtnNoDisponible->Name = L"rbtnNoDisponible";
			this->rbtnNoDisponible->Size = System::Drawing::Size(91, 17);
			this->rbtnNoDisponible->TabIndex = 1;
			this->rbtnNoDisponible->TabStop = true;
			this->rbtnNoDisponible->Text = L"No Disponible";
			this->rbtnNoDisponible->UseVisualStyleBackColor = true;
			// 
			// rbtnDisponible
			// 
			this->rbtnDisponible->AutoSize = true;
			this->rbtnDisponible->Location = System::Drawing::Point(6, 19);
			this->rbtnDisponible->Name = L"rbtnDisponible";
			this->rbtnDisponible->Size = System::Drawing::Size(74, 17);
			this->rbtnDisponible->TabIndex = 0;
			this->rbtnDisponible->TabStop = true;
			this->rbtnDisponible->Text = L"Disponible";
			this->rbtnDisponible->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(25, 314);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 13);
			this->label15->TabIndex = 65;
			this->label15->Text = L"Estatus (*)";
			// 
			// txtSchedule
			// 
			this->txtSchedule->Location = System::Drawing::Point(378, 272);
			this->txtSchedule->Name = L"txtSchedule";
			this->txtSchedule->Size = System::Drawing::Size(186, 20);
			this->txtSchedule->TabIndex = 64;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(318, 275);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 13);
			this->label14->TabIndex = 63;
			this->label14->Text = L"Horario (*)";
			// 
			// btnDeleteDoctor
			// 
			this->btnDeleteDoctor->Location = System::Drawing::Point(424, 351);
			this->btnDeleteDoctor->Name = L"btnDeleteDoctor";
			this->btnDeleteDoctor->Size = System::Drawing::Size(96, 23);
			this->btnDeleteDoctor->TabIndex = 62;
			this->btnDeleteDoctor->Text = L"Eliminar";
			this->btnDeleteDoctor->UseVisualStyleBackColor = true;
			// 
			// btnUpdateDoctor
			// 
			this->btnUpdateDoctor->Location = System::Drawing::Point(259, 351);
			this->btnUpdateDoctor->Name = L"btnUpdateDoctor";
			this->btnUpdateDoctor->Size = System::Drawing::Size(98, 23);
			this->btnUpdateDoctor->TabIndex = 61;
			this->btnUpdateDoctor->Text = L"Modificar";
			this->btnUpdateDoctor->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(94, 351);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(98, 23);
			this->btnAdd->TabIndex = 60;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// txtSpeciality
			// 
			this->txtSpeciality->Location = System::Drawing::Point(118, 272);
			this->txtSpeciality->Name = L"txtSpeciality";
			this->txtSpeciality->Size = System::Drawing::Size(178, 20);
			this->txtSpeciality->TabIndex = 59;
			// 
			// txtYearsOfWork
			// 
			this->txtYearsOfWork->Location = System::Drawing::Point(440, 232);
			this->txtYearsOfWork->Name = L"txtYearsOfWork";
			this->txtYearsOfWork->Size = System::Drawing::Size(124, 20);
			this->txtYearsOfWork->TabIndex = 58;
			// 
			// gBoxGender
			// 
			this->gBoxGender->Controls->Add(this->rbtnFemale);
			this->gBoxGender->Controls->Add(this->rbtnMale);
			this->gBoxGender->Location = System::Drawing::Point(94, 216);
			this->gBoxGender->Name = L"gBoxGender";
			this->gBoxGender->Size = System::Drawing::Size(180, 47);
			this->gBoxGender->TabIndex = 57;
			this->gBoxGender->TabStop = false;
			// 
			// rbtnFemale
			// 
			this->rbtnFemale->AutoSize = true;
			this->rbtnFemale->Location = System::Drawing::Point(103, 19);
			this->rbtnFemale->Name = L"rbtnFemale";
			this->rbtnFemale->Size = System::Drawing::Size(71, 17);
			this->rbtnFemale->TabIndex = 1;
			this->rbtnFemale->TabStop = true;
			this->rbtnFemale->Text = L"Femenino";
			this->rbtnFemale->UseVisualStyleBackColor = true;
			// 
			// rbtnMale
			// 
			this->rbtnMale->AutoSize = true;
			this->rbtnMale->Location = System::Drawing::Point(6, 19);
			this->rbtnMale->Name = L"rbtnMale";
			this->rbtnMale->Size = System::Drawing::Size(73, 17);
			this->rbtnMale->TabIndex = 0;
			this->rbtnMale->TabStop = true;
			this->rbtnMale->Text = L"Masculino";
			this->rbtnMale->UseVisualStyleBackColor = true;
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(370, 190);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(194, 20);
			this->dtpBirthday->TabIndex = 56;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(94, 190);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(147, 20);
			this->txtPhoneNumber->TabIndex = 55;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(94, 155);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(470, 20);
			this->txtEmail->TabIndex = 54;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(94, 122);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(470, 20);
			this->txtAddress->TabIndex = 53;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(404, 92);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(160, 20);
			this->txtDNI->TabIndex = 52;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(94, 92);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(202, 20);
			this->txtLastName->TabIndex = 51;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(404, 61);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(160, 20);
			this->txtPassword->TabIndex = 50;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(404, 29);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(160, 20);
			this->txtUsername->TabIndex = 49;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(94, 61);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(202, 20);
			this->txtName->TabIndex = 48;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(318, 64);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 13);
			this->label13->TabIndex = 47;
			this->label13->Text = L"Contraseña (*)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(318, 32);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 13);
			this->label12->TabIndex = 46;
			this->label12->Text = L"Usuario (*)";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(94, 29);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(79, 20);
			this->txtId->TabIndex = 45;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(318, 237);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 13);
			this->label11->TabIndex = 44;
			this->label11->Text = L"Años de experiencia (*)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(25, 275);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 13);
			this->label10->TabIndex = 43;
			this->label10->Text = L"Especialidad (*)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(25, 235);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 13);
			this->label9->TabIndex = 42;
			this->label9->Text = L"Género (*)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(267, 193);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 13);
			this->label8->TabIndex = 41;
			this->label8->Text = L"Fec. Nacimiento (*)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(25, 193);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 13);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Teléfono (*)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(25, 158);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Email (*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 38;
			this->label5->Text = L"Dirección (*)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(318, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 37;
			this->label4->Text = L"DNI (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 36;
			this->label3->Text = L"Apellidos (*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 35;
			this->label2->Text = L"Nombre  (*)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Id (*)";
			// 
			// NurseForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 464);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->txtSchedule);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->btnDeleteDoctor);
			this->Controls->Add(this->btnUpdateDoctor);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtSpeciality);
			this->Controls->Add(this->txtYearsOfWork);
			this->Controls->Add(this->gBoxGender);
			this->Controls->Add(this->dtpBirthday);
			this->Controls->Add(this->txtPhoneNumber);
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
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"NurseForm";
			this->Text = L"NurseForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->gBoxGender->ResumeLayout(false);
			this->gBoxGender->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
