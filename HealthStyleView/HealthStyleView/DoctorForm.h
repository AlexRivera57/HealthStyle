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



	private: System::Windows::Forms::TextBox^ txtYearsOfWork;

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
	private: System::Windows::Forms::TextBox^ txtPatientsAttended;







	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::ComboBox^ cmbGender;
	private: System::Windows::Forms::ComboBox^ cmbSpeciality;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ doctorId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ doctorName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ doctorLastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ doctorSpeciality;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ doctorSchedule;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DoctorStatus;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;

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
			this->txtYearsOfWork = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdateDoctor = (gcnew System::Windows::Forms::Button());
			this->btnDeleteDoctor = (gcnew System::Windows::Forms::Button());
			this->dgvDoctor = (gcnew System::Windows::Forms::DataGridView());
			this->doctorId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->doctorName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->doctorLastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->doctorSpeciality = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->doctorSchedule = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DoctorStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->txtSchedule = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnNoDisponible = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnDisponible = (gcnew System::Windows::Forms::RadioButton());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtPatientsAttended = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->cmbGender = (gcnew System::Windows::Forms::ComboBox());
			this->cmbSpeciality = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDoctor))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id (*)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Nombre  (*)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(29, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Apellidos (*)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(327, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"DNI (*)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(29, 137);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Dirección (*)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(29, 172);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Email (*)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(29, 211);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Teléfono (*)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(271, 211);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(97, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Fec. Nacimiento (*)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(29, 248);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Género (*)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(29, 280);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(86, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Escpecialidad (*)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(327, 245);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Años de experiencia (*)";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(98, 36);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(79, 20);
			this->txtId->TabIndex = 11;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(327, 39);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(56, 13);
			this->label12->TabIndex = 12;
			this->label12->Text = L"Usuario (*)";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(327, 70);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Contraseña (*)";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(98, 67);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(194, 20);
			this->txtName->TabIndex = 14;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(413, 36);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(160, 20);
			this->txtUsername->TabIndex = 15;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(413, 67);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(160, 20);
			this->txtPassword->TabIndex = 16;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(98, 100);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(194, 20);
			this->txtLastName->TabIndex = 17;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(413, 100);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(160, 20);
			this->txtDNI->TabIndex = 18;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(98, 134);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(475, 20);
			this->txtAddress->TabIndex = 19;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(98, 169);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(475, 20);
			this->txtEmail->TabIndex = 20;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(98, 208);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(147, 20);
			this->txtPhoneNumber->TabIndex = 21;
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(374, 208);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(199, 20);
			this->dtpBirthday->TabIndex = 22;
			// 
			// txtYearsOfWork
			// 
			this->txtYearsOfWork->Location = System::Drawing::Point(451, 241);
			this->txtYearsOfWork->Name = L"txtYearsOfWork";
			this->txtYearsOfWork->Size = System::Drawing::Size(81, 20);
			this->txtYearsOfWork->TabIndex = 24;
			// 
			// btnAdd
			// 
			this->btnAdd->Enabled = false;
			this->btnAdd->Location = System::Drawing::Point(98, 363);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(98, 23);
			this->btnAdd->TabIndex = 26;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &DoctorForm::button1_Click);
			// 
			// btnUpdateDoctor
			// 
			this->btnUpdateDoctor->Enabled = false;
			this->btnUpdateDoctor->Location = System::Drawing::Point(263, 363);
			this->btnUpdateDoctor->Name = L"btnUpdateDoctor";
			this->btnUpdateDoctor->Size = System::Drawing::Size(98, 23);
			this->btnUpdateDoctor->TabIndex = 27;
			this->btnUpdateDoctor->Text = L"Modificar";
			this->btnUpdateDoctor->UseVisualStyleBackColor = true;
			this->btnUpdateDoctor->Click += gcnew System::EventHandler(this, &DoctorForm::btnUpdateDoctor_Click);
			// 
			// btnDeleteDoctor
			// 
			this->btnDeleteDoctor->Enabled = false;
			this->btnDeleteDoctor->Location = System::Drawing::Point(419, 363);
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
			this->dgvDoctor->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->doctorId, this->doctorName,
					this->doctorLastName, this->doctorSpeciality, this->doctorSchedule, this->DoctorStatus
			});
			this->dgvDoctor->Location = System::Drawing::Point(12, 403);
			this->dgvDoctor->Name = L"dgvDoctor";
			this->dgvDoctor->Size = System::Drawing::Size(596, 90);
			this->dgvDoctor->TabIndex = 29;
			this->dgvDoctor->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DoctorForm::dgvDoctor_CellClick);
			// 
			// doctorId
			// 
			this->doctorId->HeaderText = L"Id";
			this->doctorId->Name = L"doctorId";
			this->doctorId->Width = 40;
			// 
			// doctorName
			// 
			this->doctorName->HeaderText = L"Nombre";
			this->doctorName->Name = L"doctorName";
			this->doctorName->Width = 160;
			// 
			// doctorLastName
			// 
			this->doctorLastName->HeaderText = L"Apellidos";
			this->doctorLastName->Name = L"doctorLastName";
			this->doctorLastName->Width = 160;
			// 
			// doctorSpeciality
			// 
			this->doctorSpeciality->HeaderText = L"Especialidad";
			this->doctorSpeciality->Name = L"doctorSpeciality";
			this->doctorSpeciality->Width = 80;
			// 
			// doctorSchedule
			// 
			this->doctorSchedule->HeaderText = L"Horario";
			this->doctorSchedule->Name = L"doctorSchedule";
			this->doctorSchedule->Width = 110;
			// 
			// DoctorStatus
			// 
			this->DoctorStatus->HeaderText = L"Estatus";
			this->DoctorStatus->Name = L"DoctorStatus";
			this->DoctorStatus->Width = 80;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(327, 280);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 13);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Horario (*)";
			// 
			// txtSchedule
			// 
			this->txtSchedule->Location = System::Drawing::Point(413, 277);
			this->txtSchedule->Name = L"txtSchedule";
			this->txtSchedule->Size = System::Drawing::Size(160, 20);
			this->txtSchedule->TabIndex = 31;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtnNoDisponible);
			this->groupBox1->Controls->Add(this->rbtnDisponible);
			this->groupBox1->Location = System::Drawing::Point(98, 300);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(194, 47);
			this->groupBox1->TabIndex = 33;
			this->groupBox1->TabStop = false;
			// 
			// rbtnNoDisponible
			// 
			this->rbtnNoDisponible->AutoSize = true;
			this->rbtnNoDisponible->Location = System::Drawing::Point(86, 19);
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
			this->label15->Location = System::Drawing::Point(29, 322);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 13);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Estatus (*)";
			// 
			// txtPatientsAttended
			// 
			this->txtPatientsAttended->Location = System::Drawing::Point(451, 318);
			this->txtPatientsAttended->Name = L"txtPatientsAttended";
			this->txtPatientsAttended->Size = System::Drawing::Size(81, 20);
			this->txtPatientsAttended->TabIndex = 44;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(329, 322);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(107, 13);
			this->label16->TabIndex = 43;
			this->label16->Text = L"Pacientes Atendidos:";
			// 
			// cmbGender
			// 
			this->cmbGender->FormattingEnabled = true;
			this->cmbGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->cmbGender->Location = System::Drawing::Point(98, 242);
			this->cmbGender->Name = L"cmbGender";
			this->cmbGender->Size = System::Drawing::Size(147, 21);
			this->cmbGender->TabIndex = 48;
			// 
			// cmbSpeciality
			// 
			this->cmbSpeciality->FormattingEnabled = true;
			this->cmbSpeciality->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"General", L"Pediatría", L"Cardiología", L"Ginecología" });
			this->cmbSpeciality->Location = System::Drawing::Point(121, 277);
			this->cmbSpeciality->Name = L"cmbSpeciality";
			this->cmbSpeciality->Size = System::Drawing::Size(171, 21);
			this->cmbSpeciality->TabIndex = 49;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(620, 24);
			this->menuStrip1->TabIndex = 50;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &DoctorForm::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &DoctorForm::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &DoctorForm::salirToolStripMenuItem_Click);
			// 
			// DoctorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 510);
			this->Controls->Add(this->cmbSpeciality);
			this->Controls->Add(this->cmbGender);
			this->Controls->Add(this->txtPatientsAttended);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->txtSchedule);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->dgvDoctor);
			this->Controls->Add(this->btnDeleteDoctor);
			this->Controls->Add(this->btnUpdateDoctor);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtYearsOfWork);
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
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"DoctorForm";
			this->Text = L"Doctores";
			this->Load += gcnew System::EventHandler(this, &DoctorForm::DoctorForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDoctor))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

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
		d->Name = txtName->Text;
		d->LastName = txtLastName->Text;
		d->Username = txtUsername->Text;
		d->Password = txtPassword->Text;
		d->DocNumber = txtDNI->Text;
		d->Address = txtAddress->Text;
		d->Email = txtEmail->Text;
		d->PhoneNumber = txtPhoneNumber->Text;
		d->Schedule = txtSchedule->Text;
		d->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
		d->Status = rbtnDisponible->Checked ? "Disponible" : "No Disponible";
		d->Gender = cmbGender->SelectedItem->ToString();
		d->Speciality = cmbSpeciality->SelectedItem->ToString();
		d->YearsOfWork = Int32::Parse(txtYearsOfWork->Text);
		d->PatiensAttended = Int32::Parse(txtPatientsAttended->Text);			
		Controller::AddDoctor(d);
		RefreshDoctorDGV();
		ClearControls();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "Envíe el error al área de TI.");
			return;
		}
	}

	   Void RefreshDoctorDGV() {
		   List <Doctor^>^ doctorList = Controller::QueryAllDoctor();
		   dgvDoctor->Rows->Clear();
		   if (doctorList != nullptr)
			   for (int i = 0; i < doctorList->Count; i++) {
				   dgvDoctor->Rows->Add(gcnew array<String^> {
					   "" + doctorList[i]->Id,
						   doctorList[i]->Name,
						   doctorList[i]->LastName,
						   doctorList[i]->Speciality,
						   doctorList[i]->Schedule,
						   doctorList[i]->Status,
				   });
			   }
	   }

	   Void DisableControls() {
		   txtId->ReadOnly = true;
		   txtName->ReadOnly = true;
		   txtLastName->ReadOnly = true;
		   txtUsername->ReadOnly = true;
		   txtPassword->ReadOnly = true;
		   txtDNI->ReadOnly = true;
		   txtAddress->ReadOnly = true;
		   txtEmail->ReadOnly = true;
		   txtPhoneNumber->ReadOnly = true;
		   txtSchedule->ReadOnly = true;
		   txtYearsOfWork->ReadOnly = true;
		   txtPatientsAttended->ReadOnly = true;
		   btnAdd->Enabled = false;
		   btnUpdateDoctor->Enabled = false;
		   btnDeleteDoctor->Enabled = false;
	   }
	   Void EnableControls() {
		   txtId->ReadOnly = false;
		   txtName->ReadOnly = false;
		   txtLastName->ReadOnly = false;
		   txtUsername->ReadOnly = false;
		   txtPassword->ReadOnly = false;
		   txtDNI->ReadOnly = false;
		   txtAddress->ReadOnly = false;
		   txtEmail->ReadOnly = false;
		   txtPhoneNumber->ReadOnly = false;
		   txtSchedule->ReadOnly = false;
		   txtYearsOfWork->ReadOnly = false;
		   txtPatientsAttended->ReadOnly = false;
		   btnAdd->Enabled = true;
		   btnUpdateDoctor->Enabled = true;
		   btnDeleteDoctor->Enabled = true;
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
		txtPatientsAttended->Text = "";
		cmbSpeciality->ResetText();
		cmbGender->ResetText();
		rbtnDisponible->Checked = false;
		rbtnNoDisponible->Checked = false;

	}

private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	btnUpdateDoctor->Enabled = false;
	btnDeleteDoctor->Enabled = false;
	ClearControls();
}
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	btnAdd->Enabled = false;
	btnUpdateDoctor->Enabled = true;
	btnDeleteDoctor->Enabled = true;
}

	   void FillCmb() {
		   cmbGender->Items->Clear();
		   cmbSpeciality->Items->Clear();
		   List <String^>^ genderList = Controller::QueryAllGenders();
		   List <String^>^ specialityDoctorList = Controller::QueryAllSpecialityDoctor();
		   for (int i = 0; i < genderList->Count; i++) {
			   cmbGender->Items->Add(genderList[i]);
		   }
		   for (int i = 0; i < specialityDoctorList->Count; i++) {
			   cmbSpeciality->Items->Add(specialityDoctorList[i]);
		   }
	   }

private: System::Void DoctorForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshDoctorDGV();
}

private: System::Void dgvDoctor_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e){
	if (dgvDoctor->CurrentCell != nullptr &&
		dgvDoctor->CurrentCell->Value != nullptr &&
		dgvDoctor->CurrentCell->Value->ToString() != "") {
		int selectedrowindex = dgvDoctor->SelectedCells[0]->RowIndex;
		DataGridViewRow^ selectedRow = dgvDoctor->Rows[selectedrowindex];
		String^ a = selectedRow->Cells[0]->Value->ToString();

		int DoctorId = Int32::Parse(a);
		Doctor^ p = Controller::QueryDoctorById(DoctorId);

		txtId->Text = "" + p->Id;
		txtName->Text = p->Name;
		txtLastName->Text = p->LastName;
		txtUsername->Text = p->Username;
		txtPassword->Text = p->Password;
		txtSchedule->Text = p->Schedule;
		txtDNI->Text = p->DocNumber;
		txtAddress->Text = p->Address;
		txtEmail->Text = p->Email;
		txtPhoneNumber->Text = p->PhoneNumber;

		for (int i = 0; i < cmbGender->Items->Count; i++) {
			if (cmbGender->Items[i]->ToString()->CompareTo(p->Gender) == 0) {
				cmbGender->SelectedIndex = i;
				break;
			}
		}
		for (int i = 0; i < cmbSpeciality->Items->Count; i++) {
			if (cmbSpeciality->Items[i]->ToString()->CompareTo(p->Speciality) == 0) {
				cmbSpeciality->SelectedIndex = i;
				break;
			}
		}

		txtYearsOfWork->Text = "" + p->YearsOfWork;
		txtPatientsAttended->Text = "" + p->PatiensAttended;
		dtpBirthday->Value = DateTime::Parse(p->Birthday);
		rbtnDisponible->Checked = p->Gender == "Disponible";
		rbtnNoDisponible->Checked = p->Gender == "No Disponible";
	}
}

private: System::Void btnDeleteDoctor_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (txtId->Text->Trim() == "") {
			MessageBox::Show("No se puede eliminar porque no hay ningún doctor seleccionado.");
			return;
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Comparta el error al área de TI.");
		return;
	}

	Controller::DeleteDoctor(Int32::Parse(txtId->Text));
	RefreshDoctorDGV();
	ClearControls();
}

private: System::Void btnUpdateDoctor_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvDoctor->CurrentCell != nullptr &&
		dgvDoctor->CurrentCell->Value != nullptr &&
		dgvDoctor->CurrentCell->Value->ToString() != "" &&
		!txtId->Text->Trim()->Equals("")) {
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
			d->Name = txtName->Text;
			d->LastName = txtLastName->Text;
			d->Username = txtUsername->Text;
			d->Password = txtPassword->Text;
			d->DocNumber = txtDNI->Text;
			d->Address = txtAddress->Text;
			d->Email = txtEmail->Text;
			d->PhoneNumber = txtPhoneNumber->Text;
			d->Schedule = txtSchedule->Text;
			d->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
			d->Status = rbtnDisponible->Checked ? "Disponible" : "No Disponible";
			d->Gender = cmbGender->SelectedItem->ToString();
			d->Speciality = cmbSpeciality->SelectedItem->ToString();
			d->YearsOfWork = Int32::Parse(txtYearsOfWork->Text);
			d->PatiensAttended = Int32::Parse(txtPatientsAttended->Text);
			Controller::UpdateDoctor(d);
			RefreshDoctorDGV();
			ClearControls();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->ToString(), "No se pudo guardar por error en los datos.");
			return;
		}
	}


}

};
}
