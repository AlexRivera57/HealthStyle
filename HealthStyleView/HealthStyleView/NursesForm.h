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
	/// Resumen de NursesForm
	/// </summary>
	public ref class NursesForm : public System::Windows::Forms::Form
	{
	public:
		NursesForm(void)
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
		~NursesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Id;
	private: System::Windows::Forms::Label^ label1;
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
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::RadioButton^ rbtnDisponible;
	private: System::Windows::Forms::RadioButton^ rbtnNoDisponible;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ txtId;


	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtLastName;
	private: System::Windows::Forms::TextBox^ txtAddress;
	private: System::Windows::Forms::TextBox^ txtEmail;
	private: System::Windows::Forms::TextBox^ txtPhoneNumber;





	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::TextBox^ txtDNI;





	private: System::Windows::Forms::TextBox^ txtYearsOfWork;
	private: System::Windows::Forms::TextBox^ txtSchedule;


	private: System::Windows::Forms::TextBox^ txtPatientsAttended;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnUpdateNurses;
	private: System::Windows::Forms::Button^ btnDeleteNurses;


	private: System::Windows::Forms::DataGridView^ dgvNurses;







	private: System::Windows::Forms::ComboBox^ cmbGender;
	private: System::Windows::Forms::ComboBox^ cmbSpeciality;
	private: System::Windows::Forms::GroupBox^ groupBox1;






	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NurseStatus;



































	protected:

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
			this->Id = (gcnew System::Windows::Forms::Label());
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
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->rbtnDisponible = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnNoDisponible = (gcnew System::Windows::Forms::RadioButton());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtLastName = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtDNI = (gcnew System::Windows::Forms::TextBox());
			this->txtYearsOfWork = (gcnew System::Windows::Forms::TextBox());
			this->txtSchedule = (gcnew System::Windows::Forms::TextBox());
			this->txtPatientsAttended = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnUpdateNurses = (gcnew System::Windows::Forms::Button());
			this->btnDeleteNurses = (gcnew System::Windows::Forms::Button());
			this->dgvNurses = (gcnew System::Windows::Forms::DataGridView());
			this->cmbGender = (gcnew System::Windows::Forms::ComboBox());
			this->cmbSpeciality = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dgvid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NurseStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvNurses))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(36, 34);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(19, 13);
			this->Id->TabIndex = 0;
			this->Id->Text = L"Id:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 65);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellido:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(344, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Usuario:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(344, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Contraseña:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(344, 97);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"DNI:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(36, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Direccion:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 165);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Correo:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(36, 202);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Telefono:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(36, 235);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Genero:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(386, 235);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Años de experiencia:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(271, 202);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Fec. Nacimiento:";
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(364, 202);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(194, 20);
			this->dtpBirthday->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(36, 271);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(70, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Especialidad:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(361, 306);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(44, 13);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Horario:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(36, 306);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(45, 13);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Estatus:";
			// 
			// rbtnDisponible
			// 
			this->rbtnDisponible->AutoSize = true;
			this->rbtnDisponible->Location = System::Drawing::Point(6, 15);
			this->rbtnDisponible->Name = L"rbtnDisponible";
			this->rbtnDisponible->Size = System::Drawing::Size(74, 17);
			this->rbtnDisponible->TabIndex = 27;
			this->rbtnDisponible->TabStop = true;
			this->rbtnDisponible->Text = L"Disponible";
			this->rbtnDisponible->UseVisualStyleBackColor = true;
			// 
			// rbtnNoDisponible
			// 
			this->rbtnNoDisponible->AutoSize = true;
			this->rbtnNoDisponible->Location = System::Drawing::Point(86, 15);
			this->rbtnNoDisponible->Name = L"rbtnNoDisponible";
			this->rbtnNoDisponible->Size = System::Drawing::Size(91, 17);
			this->rbtnNoDisponible->TabIndex = 28;
			this->rbtnNoDisponible->TabStop = true;
			this->rbtnNoDisponible->Text = L"No Disponible";
			this->rbtnNoDisponible->UseVisualStyleBackColor = true;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(385, 271);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(107, 13);
			this->label15->TabIndex = 29;
			this->label15->Text = L"Pacientes Atendidos:";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(93, 31);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(81, 20);
			this->txtId->TabIndex = 30;
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(93, 62);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(234, 20);
			this->txtName->TabIndex = 31;
			// 
			// txtLastName
			// 
			this->txtLastName->Location = System::Drawing::Point(93, 94);
			this->txtLastName->Name = L"txtLastName";
			this->txtLastName->Size = System::Drawing::Size(234, 20);
			this->txtLastName->TabIndex = 32;
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(93, 129);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(466, 20);
			this->txtAddress->TabIndex = 33;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(93, 165);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(466, 20);
			this->txtEmail->TabIndex = 34;
			// 
			// txtPhoneNumber
			// 
			this->txtPhoneNumber->Location = System::Drawing::Point(93, 199);
			this->txtPhoneNumber->Name = L"txtPhoneNumber";
			this->txtPhoneNumber->Size = System::Drawing::Size(128, 20);
			this->txtPhoneNumber->TabIndex = 35;
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(414, 31);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(144, 20);
			this->txtUsername->TabIndex = 36;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(414, 62);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(144, 20);
			this->txtPassword->TabIndex = 37;
			// 
			// txtDNI
			// 
			this->txtDNI->Location = System::Drawing::Point(414, 94);
			this->txtDNI->Name = L"txtDNI";
			this->txtDNI->Size = System::Drawing::Size(144, 20);
			this->txtDNI->TabIndex = 38;
			// 
			// txtYearsOfWork
			// 
			this->txtYearsOfWork->Location = System::Drawing::Point(495, 232);
			this->txtYearsOfWork->Name = L"txtYearsOfWork";
			this->txtYearsOfWork->Size = System::Drawing::Size(69, 20);
			this->txtYearsOfWork->TabIndex = 40;
			// 
			// txtSchedule
			// 
			this->txtSchedule->Location = System::Drawing::Point(420, 303);
			this->txtSchedule->Name = L"txtSchedule";
			this->txtSchedule->Size = System::Drawing::Size(144, 20);
			this->txtSchedule->TabIndex = 41;
			// 
			// txtPatientsAttended
			// 
			this->txtPatientsAttended->Location = System::Drawing::Point(495, 266);
			this->txtPatientsAttended->Name = L"txtPatientsAttended";
			this->txtPatientsAttended->Size = System::Drawing::Size(69, 20);
			this->txtPatientsAttended->TabIndex = 42;
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(102, 350);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 23);
			this->button1->TabIndex = 43;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NursesForm::button1_Click);
			// 
			// btnUpdateNurses
			// 
			this->btnUpdateNurses->Enabled = false;
			this->btnUpdateNurses->Location = System::Drawing::Point(267, 350);
			this->btnUpdateNurses->Name = L"btnUpdateNurses";
			this->btnUpdateNurses->Size = System::Drawing::Size(92, 23);
			this->btnUpdateNurses->TabIndex = 44;
			this->btnUpdateNurses->Text = L"Modificar";
			this->btnUpdateNurses->UseVisualStyleBackColor = true;
			this->btnUpdateNurses->Click += gcnew System::EventHandler(this, &NursesForm::btnUpdateNurses_Click);
			// 
			// btnDeleteNurses
			// 
			this->btnDeleteNurses->Enabled = false;
			this->btnDeleteNurses->Location = System::Drawing::Point(440, 350);
			this->btnDeleteNurses->Name = L"btnDeleteNurses";
			this->btnDeleteNurses->Size = System::Drawing::Size(92, 23);
			this->btnDeleteNurses->TabIndex = 45;
			this->btnDeleteNurses->Text = L"Eliminar";
			this->btnDeleteNurses->UseVisualStyleBackColor = true;
			this->btnDeleteNurses->Click += gcnew System::EventHandler(this, &NursesForm::btnDeleteNurses_Click);
			// 
			// dgvNurses
			// 
			this->dgvNurses->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvNurses->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dgvid, this->Column1,
					this->Column2, this->Column3, this->Column4, this->NurseStatus
			});
			this->dgvNurses->Location = System::Drawing::Point(12, 388);
			this->dgvNurses->Name = L"dgvNurses";
			this->dgvNurses->Size = System::Drawing::Size(588, 121);
			this->dgvNurses->TabIndex = 46;
			this->dgvNurses->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &NursesForm::dgvNurses_CellContentClick);
			// 
			// cmbGender
			// 
			this->cmbGender->FormattingEnabled = true;
			this->cmbGender->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Masculino", L"Femenino" });
			this->cmbGender->Location = System::Drawing::Point(93, 232);
			this->cmbGender->Name = L"cmbGender";
			this->cmbGender->Size = System::Drawing::Size(128, 21);
			this->cmbGender->TabIndex = 47;
			// 
			// cmbSpeciality
			// 
			this->cmbSpeciality->FormattingEnabled = true;
			this->cmbSpeciality->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"General", L"Control del crecimiento y desarrollo del niño",
					L"Control del crecimiento y desarrollo del adolescente", L"Geriatría"
			});
			this->cmbSpeciality->Location = System::Drawing::Point(112, 267);
			this->cmbSpeciality->Name = L"cmbSpeciality";
			this->cmbSpeciality->Size = System::Drawing::Size(247, 21);
			this->cmbSpeciality->TabIndex = 48;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbtnDisponible);
			this->groupBox1->Controls->Add(this->rbtnNoDisponible);
			this->groupBox1->Location = System::Drawing::Point(89, 291);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(180, 41);
			this->groupBox1->TabIndex = 49;
			this->groupBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(615, 24);
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
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &NursesForm::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &NursesForm::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &NursesForm::salirToolStripMenuItem_Click);
			// 
			// dgvid
			// 
			this->dgvid->HeaderText = L"Id";
			this->dgvid->Name = L"dgvid";
			this->dgvid->Width = 40;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 160;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Apellido";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 160;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Especialidad";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 230;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Horario";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 105;
			// 
			// NurseStatus
			// 
			this->NurseStatus->HeaderText = L"Estatus";
			this->NurseStatus->Name = L"NurseStatus";
			this->NurseStatus->Width = 80;
			// 
			// NursesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(615, 521);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->cmbSpeciality);
			this->Controls->Add(this->cmbGender);
			this->Controls->Add(this->dgvNurses);
			this->Controls->Add(this->btnDeleteNurses);
			this->Controls->Add(this->btnUpdateNurses);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtPatientsAttended);
			this->Controls->Add(this->txtSchedule);
			this->Controls->Add(this->txtYearsOfWork);
			this->Controls->Add(this->txtDNI);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtPhoneNumber);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->txtLastName);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->dtpBirthday);
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
			this->Controls->Add(this->Id);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"NursesForm";
			this->Text = L"Enfermería";
			this->Load += gcnew System::EventHandler(this, &NursesForm::NursesForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvNurses))->EndInit();
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
	Nurses^ n = gcnew Nurses();
	try{
		if (txtUsername->Text->Trim() == "") {
			MessageBox::Show("El nombre del usuario no debe estar vacío.");
			return;
		}
		if (txtPassword->Text->Trim() == "") {
			MessageBox::Show("La contraseña del usuario no debe estar vacío.");
			return;
		}
		if (txtName->Text->Trim() == "") {
			MessageBox::Show("El nombre del enfermero/a no debe estar vacío.");
			return;
		}
		if (txtLastName->Text->Trim() == "") {
			MessageBox::Show("El apellido del enfermero/a no debe estar vacío.");
			return;
		}
		if (txtAddress->Text->Trim() == "") {
			MessageBox::Show("La dirección del enfermero/a no debe estar vacío.");
			return;
		}
		if (txtPhoneNumber->Text->Trim() == "") {
			MessageBox::Show("El teléfono del enfermero/a no debe estar vacío.");
			return;
		}
		if (txtEmail->Text->Trim() == "") {
			MessageBox::Show("La correo del enfermero/a no debe estar vacío.");
			return;
		}
		if (txtDNI->Text->Trim() == "") {
			MessageBox::Show("El DNI del enfermero/a no debe estar vacío.");
			return;
		}
		n->Id = Int32::Parse(txtId->Text);
		n->Name = txtName->Text;
		n->LastName = txtLastName->Text;
		n->Username = txtUsername->Text;
		n->Password = txtPassword->Text;
		n->DocNumber = txtDNI->Text;
		n->Address = txtAddress->Text;
		n->Email = txtEmail->Text;
		n->PhoneNumber = txtPhoneNumber->Text;
		n->Schedule = txtSchedule->Text;
		n->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
		n->Status = rbtnDisponible->Checked ? "Disponible" : "No Disponible";
		n->Gender = cmbGender->SelectedItem->ToString();
		n->Speciality = cmbSpeciality->SelectedItem->ToString();
		n->YearsOfWork = Int32::Parse(txtYearsOfWork->Text);
		n->PatiensAttended = Int32::Parse(txtPatientsAttended->Text);
		Controller::AddNurses(n);
		ShowNurses();
		ClearControls();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->ToString(), "Error en el sistema");
		return;
	}
}

void ShowNurses() {
	List<Nurses^>^ NursesList = Controller::QueryAllNurses();
	dgvNurses->Rows->Clear();
	for (int i = 0; i < NursesList->Count; i++) {
		dgvNurses->Rows->Add(gcnew array<String^>{
			"" + NursesList[i]->Id,
				NursesList[i]->Name,
				NursesList[i]->LastName,
				NursesList[i]->Speciality,
				NursesList[i]->Schedule,
				NursesList[i]->Status,
		});
	}
}
void ClearControls() {
	txtId->Text = "";
	txtName->Text = "";
	txtLastName->Text = "";
	txtUsername->Text = "";
	txtPassword->Text = "";
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
		   button1->Enabled = false;
		   btnUpdateNurses->Enabled = false;
		   btnDeleteNurses->Enabled = false;
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
		   button1->Enabled = true;
		   btnUpdateNurses->Enabled = true;
		   btnDeleteNurses->Enabled = true;
	   }

private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	btnUpdateNurses->Enabled = false;
	btnDeleteNurses->Enabled = false;
	ClearControls();
}

private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	EnableControls();
	button1->Enabled = false;
	btnUpdateNurses->Enabled = true;
	btnDeleteNurses->Enabled = true;
}

	   void FillCmb() {
		   cmbGender->Items->Clear();
		   cmbSpeciality->Items->Clear();
		   List <String^>^ genderList = Controller::QueryAllGenders();
		   List <String^>^ specialityNurseList = Controller::QueryAllSpecialityNurse();
		   for (int i = 0; i < genderList->Count; i++) {
			   cmbGender->Items->Add(genderList[i]);
		   }
		   for (int i = 0; i < specialityNurseList->Count; i++) {
			   cmbSpeciality->Items->Add(specialityNurseList[i]);
		   }
	   }

private: System::Void NursesForm_Load(System::Object^ sender, System::EventArgs^ e) {
	ShowNurses();
}

	private: System::Void dgvNurses_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dgvNurses->CurrentCell != nullptr &&
			dgvNurses->CurrentCell->Value != nullptr &&
			dgvNurses->CurrentCell->Value->ToString() != "") {
			int selectedrowindex = dgvNurses->SelectedCells[0]->RowIndex;
			DataGridViewRow^ selectedRow = dgvNurses->Rows[selectedrowindex];
			String^ a = selectedRow->Cells[0]->Value->ToString();

			int NurseId = Int32::Parse(a);
			Nurses^ n = Controller::QueryNursesById(NurseId);

			txtId->Text = "" + n->Id;
			txtName->Text = n->Name;
			txtLastName->Text = n->LastName;
			txtUsername->Text = n->Username;
			txtPassword->Text = n->Password;
			txtSchedule->Text = n->Schedule;
			txtDNI->Text = n->DocNumber;
			txtAddress->Text = n->Address;
			txtEmail->Text = n->Email;
			txtPhoneNumber->Text = n->PhoneNumber;

			for (int i = 0; i < cmbGender->Items->Count; i++) {
				if (cmbGender->Items[i]->ToString()->CompareTo(n->Gender) == 0) {
					cmbGender->SelectedIndex = i;
					break;
				}
			}
			for (int i = 0; i < cmbSpeciality->Items->Count; i++) {
				if (cmbSpeciality->Items[i]->ToString()->CompareTo(n->Speciality) == 0) {
					cmbSpeciality->SelectedIndex = i;
					break;
				}
			}

			txtYearsOfWork->Text = "" + n->YearsOfWork;
			txtPatientsAttended->Text = "" + n->PatiensAttended;
			dtpBirthday->Value = DateTime::Parse(n->Birthday);
			rbtnDisponible->Checked = n->Gender == "Disponible";
			rbtnNoDisponible->Checked = n->Gender == "No Disponible";
		}
	}

private: System::Void btnDeleteNurses_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtId->Text->Trim()->Equals(""))
		MessageBox::Show("No se puede eliminar porque no hay ningún enfemero seleccionado.");
	else
		Controller::DeleteNurses(Int32::Parse(txtId->Text));
	ShowNurses();
	ClearControls();
}

private: System::Void btnUpdateNurses_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dgvNurses->CurrentCell != nullptr &&
		dgvNurses->CurrentCell->Value != nullptr &&
		dgvNurses->CurrentCell->Value->ToString() != "" &&
		!txtId->Text->Trim()->Equals("")) {
		
        Nurses^ n = gcnew Nurses();
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
				MessageBox::Show("El nombre del enfermero/a no debe estar vacío.");
				return;
			}
			if (txtLastName->Text->Trim() == "") {
				MessageBox::Show("El apellido del enfermero/a no debe estar vacío.");
				return;
			}
			if (txtAddress->Text->Trim() == "") {
				MessageBox::Show("La dirección del enfermero/a no debe estar vacío.");
				return;
			}
			if (txtPhoneNumber->Text->Trim() == "") {
				MessageBox::Show("El teléfono del enfermero/a no debe estar vacío.");
				return;
			}
			if (txtEmail->Text->Trim() == "") {
				MessageBox::Show("La correo del enfermero/a no debe estar vacío.");
				return;
			}
			if (txtDNI->Text->Trim() == "") {
				MessageBox::Show("El DNI del enfermero/a no debe estar vacío.");
				return;
			}
			n->Id = Int32::Parse(txtId->Text);
			n->Name = txtName->Text;
			n->LastName = txtLastName->Text;
			n->Username = txtUsername->Text;
			n->Password = txtPassword->Text;
			n->DocNumber = txtDNI->Text;
			n->Address = txtAddress->Text;
			n->Email = txtEmail->Text;
			n->PhoneNumber = txtPhoneNumber->Text;
			n->Schedule = txtSchedule->Text;
			n->Birthday = dtpBirthday->Value.ToString("yyyy-MM-dd");
			n->Status = rbtnDisponible->Checked ? "Disponible" : "No Disponible";
			n->Gender = cmbGender->SelectedItem->ToString();
			n->Speciality = cmbSpeciality->SelectedItem->ToString();
			n->YearsOfWork = Int32::Parse(txtYearsOfWork->Text);
			n->PatiensAttended = Int32::Parse(txtPatientsAttended->Text);

			Controller::UpdateNurses(n);
			ShowNurses();
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
