#pragma once
#include "DoctorForm.h"
#include "QuoteForm.h"
#include "ProfessionalSearchForm.h"
#include "MedicinasForm.h"
#include "NursesForm.h"
namespace HealthStyleView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de HealthStyleMainForm
	/// </summary>
	public ref class HealthStyleMainForm : public System::Windows::Forms::Form
	{
	public:
		HealthStyleMainForm(void)
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
		~HealthStyleMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pacientesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ doctoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ enfermerosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarProfesionalesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ solicitarCitaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ medicinasToolStripMenuItem;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pacientesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->doctoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enfermerosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->medicinasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarProfesionalesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->solicitarCitaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->archivoToolStripMenuItem,
					this->mantenimientoToolStripMenuItem, this->operacionesToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(815, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->pacientesToolStripMenuItem,
					this->doctoresToolStripMenuItem, this->enfermerosToolStripMenuItem, this->medicinasToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// pacientesToolStripMenuItem
			// 
			this->pacientesToolStripMenuItem->Name = L"pacientesToolStripMenuItem";
			this->pacientesToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->pacientesToolStripMenuItem->Text = L"Pacientes";
			// 
			// doctoresToolStripMenuItem
			// 
			this->doctoresToolStripMenuItem->Name = L"doctoresToolStripMenuItem";
			this->doctoresToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->doctoresToolStripMenuItem->Text = L"Doctores";
			this->doctoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &HealthStyleMainForm::doctoresToolStripMenuItem_Click);
			// 
			// enfermerosToolStripMenuItem
			// 
			this->enfermerosToolStripMenuItem->Name = L"enfermerosToolStripMenuItem";
			this->enfermerosToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->enfermerosToolStripMenuItem->Text = L"Enfermeros";
			this->enfermerosToolStripMenuItem->Click += gcnew System::EventHandler(this, &HealthStyleMainForm::enfermerosToolStripMenuItem_Click);
			// 
			// medicinasToolStripMenuItem
			// 
			this->medicinasToolStripMenuItem->Name = L"medicinasToolStripMenuItem";
			this->medicinasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->medicinasToolStripMenuItem->Text = L"Medicinas";
			this->medicinasToolStripMenuItem->Click += gcnew System::EventHandler(this, &HealthStyleMainForm::medicinasToolStripMenuItem_Click);
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->buscarProfesionalesToolStripMenuItem,
					this->solicitarCitaToolStripMenuItem
			});
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// buscarProfesionalesToolStripMenuItem
			// 
			this->buscarProfesionalesToolStripMenuItem->Name = L"buscarProfesionalesToolStripMenuItem";
			this->buscarProfesionalesToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->buscarProfesionalesToolStripMenuItem->Text = L"Buscar profesionales";
			this->buscarProfesionalesToolStripMenuItem->Click += gcnew System::EventHandler(this, &HealthStyleMainForm::buscarProfesionalesToolStripMenuItem_Click);
			// 
			// solicitarCitaToolStripMenuItem
			// 
			this->solicitarCitaToolStripMenuItem->Name = L"solicitarCitaToolStripMenuItem";
			this->solicitarCitaToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->solicitarCitaToolStripMenuItem->Text = L"Solicitar Cita";
			this->solicitarCitaToolStripMenuItem->Click += gcnew System::EventHandler(this, &HealthStyleMainForm::solicitarCitaToolStripMenuItem_Click);
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// HealthStyleMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(815, 378);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"HealthStyleMainForm";
			this->Text = L"HealthStyleMainForm";
			this->Load += gcnew System::EventHandler(this, &HealthStyleMainForm::HealthStyleMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void doctoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		DoctorForm^ doctorForm = gcnew DoctorForm();
		doctorForm->MdiParent = this;
		doctorForm->Show();
	}
private: System::Void solicitarCitaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	QuoteForm^ quoteForm = gcnew QuoteForm();
	quoteForm->MdiParent = this;
	quoteForm->Show();
}
private: System::Void buscarProfesionalesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ProfessionalSearchForm^ professionalSearchForm = gcnew ProfessionalSearchForm();
	professionalSearchForm->MdiParent = this;
	professionalSearchForm->Show();
}
private: System::Void medicinasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MedicinasForm^ medicinasForm = gcnew MedicinasForm();
	medicinasForm->MdiParent = this;
	medicinasForm->Show();
}
private: System::Void HealthStyleMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void enfermerosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	NursesForm^ nursesForm = gcnew NursesForm();
	nursesForm->MdiParent = this;
	nursesForm->Show();
}
};
}
