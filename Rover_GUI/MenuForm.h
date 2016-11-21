#pragma once
#include "Comunicacion_SerialForm.h"
#include "ConfigForm.h"

namespace Rover_GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuForm
	/// </summary>
	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
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
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnConfigurar;
	protected:
	private: System::Windows::Forms::Button^  btnNavegar;
	private: System::Windows::Forms::Button^  btnComunicacion;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::ComponentModel::IContainer^  components;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnConfigurar = (gcnew System::Windows::Forms::Button());
			this->btnNavegar = (gcnew System::Windows::Forms::Button());
			this->btnComunicacion = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->SuspendLayout();
			// 
			// btnConfigurar
			// 
			this->btnConfigurar->Location = System::Drawing::Point(105, 76);
			this->btnConfigurar->Name = L"btnConfigurar";
			this->btnConfigurar->Size = System::Drawing::Size(88, 26);
			this->btnConfigurar->TabIndex = 0;
			this->btnConfigurar->Text = L"Configurar";
			this->btnConfigurar->UseVisualStyleBackColor = true;
			this->btnConfigurar->Click += gcnew System::EventHandler(this, &MenuForm::btnConfigurar_Click);
			// 
			// btnNavegar
			// 
			this->btnNavegar->Location = System::Drawing::Point(105, 30);
			this->btnNavegar->Name = L"btnNavegar";
			this->btnNavegar->Size = System::Drawing::Size(88, 27);
			this->btnNavegar->TabIndex = 1;
			this->btnNavegar->Text = L"Navegar";
			this->btnNavegar->UseVisualStyleBackColor = true;
			// 
			// btnComunicacion
			// 
			this->btnComunicacion->Location = System::Drawing::Point(105, 117);
			this->btnComunicacion->Name = L"btnComunicacion";
			this->btnComunicacion->Size = System::Drawing::Size(88, 30);
			this->btnComunicacion->TabIndex = 2;
			this->btnComunicacion->Text = L"Comunicación";
			this->btnComunicacion->UseVisualStyleBackColor = true;
			this->btnComunicacion->Click += gcnew System::EventHandler(this, &MenuForm::btnComunicacion_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btnComunicacion);
			this->Controls->Add(this->btnNavegar);
			this->Controls->Add(this->btnConfigurar);
			this->Name = L"MenuForm";
			this->Text = L"MenuForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnComunicacion_Click(System::Object^  sender, System::EventArgs^  e) {
		Comunicacion_SerialForm^ pform = gcnew Comunicacion_SerialForm();
		pform->Show();
	}
	private: System::Void btnConfigurar_Click(System::Object^  sender, System::EventArgs^  e) {
		ConfigForm^ pform = gcnew ConfigForm();
		pform->Show();
	}
	};
}
