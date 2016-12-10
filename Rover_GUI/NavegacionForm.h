#pragma once

namespace Rover_GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NavegacionForm
	/// </summary>
	public ref class NavegacionForm : public System::Windows::Forms::Form
	{
	public:
		NavegacionForm(void)
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
		~NavegacionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lblSpeed;

	private: System::Windows::Forms::Label^  lblDirecction;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblSpeed = (gcnew System::Windows::Forms::Label());
			this->lblDirecction = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 170);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Actual Speed (m/s) :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(91, 211);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Running....";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Actual Direction :";
			// 
			// lblSpeed
			// 
			this->lblSpeed->AutoSize = true;
			this->lblSpeed->Location = System::Drawing::Point(164, 170);
			this->lblSpeed->Name = L"lblSpeed";
			this->lblSpeed->Size = System::Drawing::Size(0, 13);
			this->lblSpeed->TabIndex = 5;
			// 
			// lblDirecction
			// 
			this->lblDirecction->AutoSize = true;
			this->lblDirecction->Location = System::Drawing::Point(164, 127);
			this->lblDirecction->Name = L"lblDirecction";
			this->lblDirecction->Size = System::Drawing::Size(0, 13);
			this->lblDirecction->TabIndex = 6;
			// 
			// NavegacionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lblDirecction);
			this->Controls->Add(this->lblSpeed);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->KeyPreview = true;
			this->Name = L"NavegacionForm";
			this->Text = L"NavegacionForm";
			this->Load += gcnew System::EventHandler(this, &NavegacionForm::NavegacionForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void NavegacionForm_Load(System::Object^  sender, System::EventArgs^  e) {
		lblDirecction->Text = "forward";
		lblSpeed->Text = "1.09";
	}

	private: System::Void NavegacionForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Enter) MessageBox::Show("Se presiono un teclado arrow down");
		else MessageBox::Show("No se presiono nada");
	}
		
	};
}
