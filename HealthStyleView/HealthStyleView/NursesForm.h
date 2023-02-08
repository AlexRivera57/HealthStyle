#pragma once

namespace HealthStyleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::RadioButton^ rbtnMale;
	private: System::Windows::Forms::RadioButton^ rbtnFemale;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::DateTimePicker^ dtpBirthday;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::RadioButton^ rbtnDisponible;
	private: System::Windows::Forms::RadioButton^ rbtnNoDisponible;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dgvid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;





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
			this->rbtnMale = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnFemale = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dtpBirthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->rbtnDisponible = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnNoDisponible = (gcnew System::Windows::Forms::RadioButton());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dgvid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// Id
			// 
			this->Id->AutoSize = true;
			this->Id->Location = System::Drawing::Point(36, 37);
			this->Id->Name = L"Id";
			this->Id->Size = System::Drawing::Size(19, 13);
			this->Id->TabIndex = 0;
			this->Id->Text = L"Id:";
			this->Id->Click += gcnew System::EventHandler(this, &NursesForm::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre:";
			this->label1->Click += gcnew System::EventHandler(this, &NursesForm::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(36, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Apellido:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(263, 37);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Usuario:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(263, 69);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(64, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Contraseña:";
			this->label4->Click += gcnew System::EventHandler(this, &NursesForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(263, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"DNI:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(36, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Direccion:";
			this->label6->Click += gcnew System::EventHandler(this, &NursesForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(36, 171);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Correo:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(36, 205);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Telefono:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(36, 238);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Genero:";
			// 
			// rbtnMale
			// 
			this->rbtnMale->AutoSize = true;
			this->rbtnMale->Location = System::Drawing::Point(87, 238);
			this->rbtnMale->Name = L"rbtnMale";
			this->rbtnMale->Size = System::Drawing::Size(73, 17);
			this->rbtnMale->TabIndex = 10;
			this->rbtnMale->TabStop = true;
			this->rbtnMale->Text = L"Masculino";
			this->rbtnMale->UseVisualStyleBackColor = true;
			// 
			// rbtnFemale
			// 
			this->rbtnFemale->AutoSize = true;
			this->rbtnFemale->Location = System::Drawing::Point(166, 238);
			this->rbtnFemale->Name = L"rbtnFemale";
			this->rbtnFemale->Size = System::Drawing::Size(71, 17);
			this->rbtnFemale->TabIndex = 11;
			this->rbtnFemale->TabStop = true;
			this->rbtnFemale->Text = L"Femenino";
			this->rbtnFemale->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(263, 240);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Años de experiencia:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(263, 205);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 13);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Fec. Nacimiento:";
			// 
			// dtpBirthday
			// 
			this->dtpBirthday->Location = System::Drawing::Point(356, 205);
			this->dtpBirthday->Name = L"dtpBirthday";
			this->dtpBirthday->Size = System::Drawing::Size(194, 20);
			this->dtpBirthday->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(36, 273);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(70, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"Especialidad:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(263, 273);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(44, 13);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Horario:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(36, 310);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(45, 13);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Estatus:";
			// 
			// rbtnDisponible
			// 
			this->rbtnDisponible->AutoSize = true;
			this->rbtnDisponible->Location = System::Drawing::Point(86, 310);
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
			this->rbtnNoDisponible->Location = System::Drawing::Point(166, 310);
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
			this->label15->Location = System::Drawing::Point(263, 310);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(107, 13);
			this->label15->TabIndex = 29;
			this->label15->Text = L"Pacientes Atendidos:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(81, 20);
			this->textBox1->TabIndex = 30;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(93, 66);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(128, 20);
			this->textBox2->TabIndex = 31;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(93, 101);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(128, 20);
			this->textBox3->TabIndex = 32;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(93, 136);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(457, 20);
			this->textBox4->TabIndex = 33;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(93, 171);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(457, 20);
			this->textBox5->TabIndex = 34;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(93, 202);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(144, 20);
			this->textBox6->TabIndex = 35;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(334, 34);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(133, 20);
			this->textBox7->TabIndex = 36;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(334, 66);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(133, 20);
			this->textBox8->TabIndex = 37;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(334, 101);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(110, 20);
			this->textBox9->TabIndex = 38;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(112, 270);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(125, 20);
			this->textBox10->TabIndex = 39;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(375, 240);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(81, 20);
			this->textBox11->TabIndex = 40;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(375, 273);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(142, 20);
			this->textBox12->TabIndex = 41;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(375, 310);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(81, 20);
			this->textBox13->TabIndex = 42;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(101, 355);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 43;
			this->button1->Text = L"Agregar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(234, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 44;
			this->button2->Text = L"Modificar";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(371, 355);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 45;
			this->button3->Text = L"Eliminar";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dgvid,
					this->Column1, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 398);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(579, 75);
			this->dataGridView1->TabIndex = 46;
			// 
			// dgvid
			// 
			this->dgvid->HeaderText = L"Id";
			this->dgvid->Name = L"dgvid";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Nombre";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Apellido";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Especialidad";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 130;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Horario";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 110;
			// 
			// NursesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(579, 471);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->rbtnNoDisponible);
			this->Controls->Add(this->rbtnDisponible);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->dtpBirthday);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->rbtnFemale);
			this->Controls->Add(this->rbtnMale);
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
			this->Name = L"NursesForm";
			this->Text = L"NursesForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
