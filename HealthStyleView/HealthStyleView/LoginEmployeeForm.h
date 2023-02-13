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
	/// Summary for LoginEmployeeForm
	/// </summary>
	public ref class LoginEmployeeForm : public System::Windows::Forms::Form
	{
	public:
		LoginEmployeeForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginEmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::TextBox^ txtUsername;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ btnSignIn;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ radioButtonEmp;
	private: System::Windows::Forms::RadioButton^ radioButtonPat;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginEmployeeForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButtonEmp = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonPat = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(155, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(603, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME TO HEALTH STYLE MODEL";
			this->label1->Click += gcnew System::EventHandler(this, &LoginEmployeeForm::label1_Click);
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(384, 151);
			this->txtUsername->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(190, 26);
			this->txtUsername->TabIndex = 3;
			this->txtUsername->TextChanged += gcnew System::EventHandler(this, &LoginEmployeeForm::txtUsername_TextChanged);
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(384, 206);
			this->txtPassword->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(190, 26);
			this->txtPassword->TabIndex = 4;
			this->txtPassword->TextChanged += gcnew System::EventHandler(this, &LoginEmployeeForm::txtPassword_TextChanged);
			// 
			// btnSignIn
			// 
			this->btnSignIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSignIn->Location = System::Drawing::Point(406, 334);
			this->btnSignIn->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Size = System::Drawing::Size(107, 46);
			this->btnSignIn->TabIndex = 5;
			this->btnSignIn->Text = L"Sign In";
			this->btnSignIn->UseVisualStyleBackColor = true;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &LoginEmployeeForm::btnSignIn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(261, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 22);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(264, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 22);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Password";
			// 
			// radioButtonEmp
			// 
			this->radioButtonEmp->AutoSize = true;
			this->radioButtonEmp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonEmp->Location = System::Drawing::Point(384, 254);
			this->radioButtonEmp->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->radioButtonEmp->Name = L"radioButtonEmp";
			this->radioButtonEmp->Size = System::Drawing::Size(104, 24);
			this->radioButtonEmp->TabIndex = 10;
			this->radioButtonEmp->TabStop = true;
			this->radioButtonEmp->Text = L"Employee";
			this->radioButtonEmp->UseVisualStyleBackColor = true;
			this->radioButtonEmp->CheckedChanged += gcnew System::EventHandler(this, &LoginEmployeeForm::radioButtonEmp_CheckedChanged);
			// 
			// radioButtonPat
			// 
			this->radioButtonPat->AutoSize = true;
			this->radioButtonPat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButtonPat->Location = System::Drawing::Point(384, 286);
			this->radioButtonPat->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->radioButtonPat->Name = L"radioButtonPat";
			this->radioButtonPat->Size = System::Drawing::Size(84, 24);
			this->radioButtonPat->TabIndex = 11;
			this->radioButtonPat->TabStop = true;
			this->radioButtonPat->Text = L"Patient";
			this->radioButtonPat->UseVisualStyleBackColor = true;
			this->radioButtonPat->CheckedChanged += gcnew System::EventHandler(this, &LoginEmployeeForm::radioButtonPat_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-241, -10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(573, 582);
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(304, -10);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(586, 464);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// LoginEmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(845, 448);
			this->Controls->Add(this->radioButtonPat);
			this->Controls->Add(this->radioButtonEmp);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnSignIn);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"LoginEmployeeForm";
			this->Text = L"LoginEmployeeForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txtPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void txtPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyData == Keys::Enter)
			btnSignIn->PerformClick();
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void btnSignIn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtUsername->Text->Trim() == "") {
		MessageBox::Show("The Username space must not be blank");
		return;
	}
	else if (txtPassword->Text->Trim() == "") {
		MessageBox::Show("The Password space must not be blank");
		return;
	}
	else {
		MessageBox::Show("WELCOME :D");
	}


}
private: System::Void txtUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButtonEmp_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButtonPat_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

