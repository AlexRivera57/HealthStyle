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
	/// Resumen de DoctorForm
	/// </summary>
	public ref class DoctorForm : public System::Windows::Forms::Form
	{
	public:
		DoctorForm(void)
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
		~DoctorForm()
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
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ txtId;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtName;

	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtLastName;




	private: System::Windows::Forms::TextBox^ txtDNI;
	private: System::Windows::Forms::TextBox^ txtAddress;

	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;





	private: System::Windows::Forms::GroupBox^ gBoxGender;
	private: System::Windows::Forms::RadioButton^ rbtnFemale;



	private: System::Windows::Forms::RadioButton^ rbtnMale;

	private: System::Windows::Forms::TextBox^ txtYearsOfWork;
	private: System::Windows::Forms::TextBox^ txtSpeciality;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdateDoctor;
	private: System::Windows::Forms::Button^ btnDeleteDoctor;





	private: System::Windows::Forms::DataGridView^ dgvDoctor;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ txtSchedule;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ rbtnNoDisponible;

	private: System::Windows::Forms::RadioButton^ rbtnDisponible;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ doctorId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ doctorName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ doctorLastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ doctorSpeciality;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ doctorSchedule;







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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->gBoxGender = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnFemale = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnMale = (gcnew System::Windows::Forms::RadioButton());
			this->txtYearsOfWork = (gcnew System::Windows::Forms::TextBox());
			this->txtSpeciality = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdateDoctor = (gcnew System::Windows::Forms::Button());
			this->btnDeleteDoctor = (gcnew System::Windows::Forms::Button());
			this->dgvDoctor = (gcnew System::Windows::Forms::DataGridView());
			this->doctorId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->doctorName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->doctorLastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->doctorSpeciality = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->doctorSchedule = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtSchedule = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnNoDisponible = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnDisponible = (gcnew System::Windows::Forms::RadioButton());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->gBoxGender->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDoctor))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id (*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(32, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre  (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(32, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellidos (*)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(325, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"DNI (*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(32, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Dirección (*)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(32, 153);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Email (*)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(32, 188);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Teléfono (*)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(274, 188);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Fec. Nacimiento (*)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(32, 230);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Género (*)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(32, 270);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(86, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Escpecialidad (*)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(325, 232);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Años de experiencia (*)";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(101, 24);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(79, 20);
			this->txtId->TabIndex = 11;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(325, 27);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Usuario (*)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(325, 59);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Contraseña (*)";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(101, 56);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(202, 20);
			this->txtName->TabIndex = 14;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(411, 24);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(160, 20);
			this->txtUsername->TabIndex = 15;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(411, 56);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(160, 20);
			this->txtPassword->TabIndex = 16;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(101, 87);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(202, 20);
			this->txtLastName->TabIndex = 17;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(411, 87);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(160, 20);
			this->txtDNI->TabIndex = 18;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(101, 117);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(470, 20);
			this->txtAddress->TabIndex = 19;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(101, 150);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(470, 20);
			this->txtEmail->TabIndex = 20;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(101, 185);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(147, 20);
			this->txtPhoneNumber->TabIndex = 21;
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(377, 185);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(194, 20);
			this->dtpBirthday->TabIndex = 22;
			// 
			// gBoxGender
			// 
			this->gBoxGender->Controls->Add(this->rbtnFemale);
			this->gBoxGender->Controls->Add(this->rbtnMale);
			this->gBoxGender->Location = System::Drawing::Point(101, 211);
			this->gBoxGender->Name = L"gBoxGender";
			this->gBoxGender->Size = System::Drawing::Size(180, 47);
			this->gBoxGender->TabIndex = 23;
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
			// txtYearsOfWork
			// 
			this->txtYearsOfWork->Location = System::Drawing::Point(447, 227);
			this->txtYearsOfWork->Name = L"txtYearsOfWork";
			this->txtYearsOfWork->Size = System::Drawing::Size(124, 20);
			this->txtYearsOfWork->TabIndex = 24;
			// 
			// txtSpeciality
			// 
			this->txtSpeciality->Location = System::Drawing::Point(125, 267);
			this->txtSpeciality->Name = L"txtSpeciality";
			this->txtSpeciality->Size = System::Drawing::Size(178, 20);
			this->txtSpeciality->TabIndex = 25;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(101, 346);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(98, 23);
			this->btnAdd->TabIndex = 26;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &DoctorForm::button1_Click);
			// 
			// btnUpdateDoctor
			// 
			this->btnUpdateDoctor->Location = System::Drawing::Point(266, 346);
			this->btnUpdateDoctor->Name = L"btnUpdateDoctor";
			this->btnUpdateDoctor->Size = System::Drawing::Size(98, 23);
			this->btnUpdateDoctor->TabIndex = 27;
			this->btnUpdateDoctor->Text = L"Modificar";
			this->btnUpdateDoctor->UseVisualStyleBackColor = true;
			this->btnUpdateDoctor->Click += gcnew System::EventHandler(this, &DoctorForm::btnUpdateDoctor_Click);
			// 
			// btnDeleteDoctor
			// 
			this->btnDeleteDoctor->Location = System::Drawing::Point(431, 346);
			this->btnDeleteDoctor->Name = L"btnDeleteDoctor";
			this->btnDeleteDoctor->Size = System::Drawing::Size(96, 23);
			this->btnDeleteDoctor->TabIndex = 28;
			this->btnDeleteDoctor->Text = L"Eliminar";
			this->btnDeleteDoctor->UseVisualStyleBackColor = true;
			this->btnDeleteDoctor->Click += gcnew System::EventHandler(this, &DoctorForm::btnDeleteDoctor_Click);
			// 
			// dgvDoctor
			// 
			this->dgvDoctor->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDoctor->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->doctorId, this->doctorName,
					this->doctorLastName, this->doctorSpeciality, this->doctorSchedule
			});
			this->dgvDoctor->Location = System::Drawing::Point(39, 386);
			this->dgvDoctor->Name = L"dgvDoctor";
			this->dgvDoctor->Size = System::Drawing::Size(536, 159);
			this->dgvDoctor->TabIndex = 29;
			// 
			// doctorId
			// 
			this->doctorId->HeaderText = L"Id";
			this->doctorId->Name = L"doctorId";
			// 
			// doctorName
			// 
			this->doctorName->HeaderText = L"Nombre";
			this->doctorName->Name = L"doctorName";
			// 
			// doctorLastName
			// 
			this->doctorLastName->HeaderText = L"Apellidos";
			this->doctorLastName->Name = L"doctorLastName";
			// 
			// doctorSpeciality
			// 
			this->doctorSpeciality->HeaderText = L"Especialidad";
			this->doctorSpeciality->Name = L"doctorSpeciality";
			// 
			// doctorSchedule
			// 
			this->doctorSchedule->HeaderText = L"Horario";
			this->doctorSchedule->Name = L"doctorSchedule";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(325, 270);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 13);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Horario (*)";
			// 
			// txtSchedule
			// 
			this->txtSchedule->Location = System::Drawing::Point(385, 267);
			this->txtSchedule->Name = L"txtSchedule";
			this->txtSchedule->Size = System::Drawing::Size(186, 20);
			this->txtSchedule->TabIndex = 31;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtnNoDisponible);
			this->groupBox1->Controls->Add(this->rbtnDisponible);
			this->groupBox1->Location = System::Drawing::Point(101, 290);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(202, 47);
			this->groupBox1->TabIndex = 33;
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
			this->label15->Location = System::Drawing::Point(32, 309);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 13);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Estatus (*)";
			// 
			// DoctorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 557);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->txtSchedule);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->dgvDoctor);
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
			this->Name = L"DoctorForm";
			this->Text = L"DoctorForm";
			this->gBoxGender->ResumeLayout(false);
			this->gBoxGender->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDoctor))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Doctor^ d = gcnew Doctor();
		try {
			if (txtUsername->Text->Trim() == "") {
				MessageBox::Show("El nombre del usuario no debe estar vacío.");
				return;
			}
			if (txtPassword->Text->Trim() == "") {
				MessageBox::Show("La contraseña del usuario no debe estar vacío.");
				return;
			}
			if (txtName->Text->Trim() == "") {
				MessageBox::Show("El nombre del doctor no debe estar vacío.");
				return;
			}
			if (txtLastName->Text->Trim() == "") {
				MessageBox::Show("El apellido del doctor no debe estar vacío.");
				return;
			}
			if (txtAddress->Text->Trim() == "") {
				MessageBox::Show("La dirección del doctor no debe estar vacío.");
				return;
			}
			if (txtPhoneNumber->Text->Trim() == "") {
				MessageBox::Show("El teléfono del doctor no debe estar vacío.");
				return;
			}
			if (txtEmail->Text->Trim() == "") {
				MessageBox::Show("La correo del doctor no debe estar vacío.");
				return;
			}
			if (txtDNI->Text->Trim() == "") {
				MessageBox::Show("El DNI del doctor no debe estar vacío.");
				return;
			}

			d->Id = Int32::Parse(txtId->Text);
			d->Username = txtUsername->Text;
			d->Password = txtPassword->Text;
			d->Name = txtName->Text;
			d->LastName = txtLastName->Text;
			d->Gender = rbtnMale->Checked ? 'M' : 'F';
			d->Address = txtAddress->Text;
			d->PhoneNumber = txtPhoneNumber->Text;
			d->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
			d->Email = txtEmail->Text;
			d->Schedule = txtSchedule->Text;
			d->Speciality = txtSpeciality->Text;
			d->DocNumber = txtDNI->Text;
			
			Controller::AddDoctor(d);
			RefreshDGVDoctor();
			btnAdd->Enabled = true;
			ClearControls();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Envíe el error al área de TI.");
			return;
		}
	}

    Void RefreshDGVDoctor(){
	    List <Doctor^>^ doctorList = Controller::QueryAllDoctor();
		dgvDoctor->Rows->Clear();
		if (doctorList != nullptr)
			for (int i = 0; i < doctorList->Count; i++) {
				dgvDoctor->Rows->Add(gcnew array<String^> {
					"" + doctorList[i]->Id,
					doctorList[i]->Name,
					doctorList[i]->LastName,
					doctorList[i]->Speciality,
					doctorList[i]->Schedule
				});
			}
	}

	void ClearControls() {
		txtId->Text = "";
		txtName->Text = "";
		txtLastName->Text = "";
		txtPassword->Text = "";
		txtUsername->Text = "";
		txtAddress->Text = "";
		txtPhoneNumber->Text = "";
		txtEmail->Text = "";
		txtDNI->Text = "";
		txtSchedule->Text = "";
		txtYearsOfWork->Text = "";
		txtSpeciality->Text = "";
	}

public: Void RefreshDoctorDGV();

private: System::Void btnUpdateDoctor_Click(System::Object^ sender, System::EventArgs^ e) {
	Doctor^ p = gcnew Doctor();
	try {
		if (txtId->Text->Trim() == "") {
			MessageBox::Show("El Id no debe estar vacío.");
			return;
		}
		p->Id = Int32::Parse(txtId->Text);
		p->Gender = rbtnMale->Checked ? 'M' : 'F';
		p->Name = txtName->Text;
		p->LastName = txtLastName->Text;
		p->DocNumber = txtDNI->Text;
		p->Address = txtAddress->Text;
		p->Email = txtEmail->Text;
		p->PhoneNumber = txtPhoneNumber->Text;
		p->Schedule = txtSchedule->Text;
		p->Speciality = txtSpeciality->Text;
		p->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Comparta el error al área de TI.");
		return;
	}

	Controller::UpdateDoctor(p);
	RefreshDoctorDGV();
}
private: System::Void btnDeleteDoctor_Click(System::Object^ sender, System::EventArgs^ e) {
	int doctorId = -1;
	try {
		if (txtId->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ningún cliente seleccionado.");
			return;
		}
		doctorId = Int32::Parse(txtId->Text);
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Comparta el error al área de TI.");
		return;
	}

	Controller::DeleteDoctor(doctorId);
	RefreshDoctorDGV();
}
};
}
