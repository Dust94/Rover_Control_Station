#pragma once

namespace Rover_GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Rover_Library;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for ConfigForm
	/// </summary>
	public ref class ConfigForm : public System::Windows::Forms::Form
	{
	public:
		//Valores por defecto de los parametros de Control:
		const float default_KpR = 1.5;
		const float default_KiR = 2;
		const float default_KdR = 2.4;
		const float default_KpL = 1.5;
		const float default_KiL = 2;
		//Parametros de Control que acceden al objeto Motor:
		float local_KpR;
		float local_KiR;
		float local_KdR;
		float local_KpL;
		float local_KiL;
		float local_KdL;

	private: System::Windows::Forms::Button^  btnDefaultValues;
	public:
		const float default_KdL = 2.4;

		ConfigForm(void)
		{
			InitializeComponent();
			Configuracion_Inicial();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ConfigForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;




	private: System::Windows::Forms::TextBox^  txtKpR;
	private: System::Windows::Forms::TextBox^  txtKiR;
	private: System::Windows::Forms::TextBox^  txtKdR;











	private: System::Windows::Forms::TextBox^  txtKdL;

	private: System::Windows::Forms::TextBox^  txtKiL;

	private: System::Windows::Forms::TextBox^  txtKpL;





	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  btnAceptar;
	private: System::Windows::Forms::ComboBox^  cmbKiTiR;
	private: System::Windows::Forms::ComboBox^  cmbKdTdR;
	private: System::Windows::Forms::ComboBox^  cmbKdTdL;
	private: System::Windows::Forms::ComboBox^  cmbKiTiL;
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
			this->txtKpR = (gcnew System::Windows::Forms::TextBox());
			this->txtKiR = (gcnew System::Windows::Forms::TextBox());
			this->txtKdR = (gcnew System::Windows::Forms::TextBox());
			this->txtKdL = (gcnew System::Windows::Forms::TextBox());
			this->txtKiL = (gcnew System::Windows::Forms::TextBox());
			this->txtKpL = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btnAceptar = (gcnew System::Windows::Forms::Button());
			this->cmbKiTiR = (gcnew System::Windows::Forms::ComboBox());
			this->cmbKdTdR = (gcnew System::Windows::Forms::ComboBox());
			this->cmbKdTdL = (gcnew System::Windows::Forms::ComboBox());
			this->cmbKiTiL = (gcnew System::Windows::Forms::ComboBox());
			this->btnDefaultValues = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Parámetros de Control: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Kp :";
			// 
			// txtKpR
			// 
			this->txtKpR->Location = System::Drawing::Point(59, 56);
			this->txtKpR->Name = L"txtKpR";
			this->txtKpR->Size = System::Drawing::Size(41, 20);
			this->txtKpR->TabIndex = 6;
			// 
			// txtKiR
			// 
			this->txtKiR->Location = System::Drawing::Point(161, 56);
			this->txtKiR->Name = L"txtKiR";
			this->txtKiR->Size = System::Drawing::Size(41, 20);
			this->txtKiR->TabIndex = 7;
			// 
			// txtKdR
			// 
			this->txtKdR->Location = System::Drawing::Point(267, 56);
			this->txtKdR->Name = L"txtKdR";
			this->txtKdR->Size = System::Drawing::Size(41, 20);
			this->txtKdR->TabIndex = 8;
			// 
			// txtKdL
			// 
			this->txtKdL->Location = System::Drawing::Point(267, 118);
			this->txtKdL->Name = L"txtKdL";
			this->txtKdL->Size = System::Drawing::Size(41, 20);
			this->txtKdL->TabIndex = 18;
			// 
			// txtKiL
			// 
			this->txtKiL->Location = System::Drawing::Point(161, 118);
			this->txtKiL->Name = L"txtKiL";
			this->txtKiL->Size = System::Drawing::Size(41, 20);
			this->txtKiL->TabIndex = 17;
			// 
			// txtKpL
			// 
			this->txtKpL->Location = System::Drawing::Point(59, 118);
			this->txtKpL->Name = L"txtKpL";
			this->txtKpL->Size = System::Drawing::Size(41, 20);
			this->txtKpL->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(27, 121);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(26, 13);
			this->label11->TabIndex = 11;
			this->label11->Text = L"Kp :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(29, 31);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Rueda Derecha :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(27, 89);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(91, 13);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Rueda Izquierda :";
			// 
			// btnAceptar
			// 
			this->btnAceptar->Location = System::Drawing::Point(233, 290);
			this->btnAceptar->Name = L"btnAceptar";
			this->btnAceptar->Size = System::Drawing::Size(75, 23);
			this->btnAceptar->TabIndex = 23;
			this->btnAceptar->Text = L"Aceptar";
			this->btnAceptar->UseVisualStyleBackColor = true;
			this->btnAceptar->Click += gcnew System::EventHandler(this, &ConfigForm::btnAceptar_Click);
			// 
			// cmbKiTiR
			// 
			this->cmbKiTiR->FormattingEnabled = true;
			this->cmbKiTiR->Location = System::Drawing::Point(117, 55);
			this->cmbKiTiR->Name = L"cmbKiTiR";
			this->cmbKiTiR->Size = System::Drawing::Size(38, 21);
			this->cmbKiTiR->TabIndex = 24;
			// 
			// cmbKdTdR
			// 
			this->cmbKdTdR->FormattingEnabled = true;
			this->cmbKdTdR->Location = System::Drawing::Point(223, 56);
			this->cmbKdTdR->Name = L"cmbKdTdR";
			this->cmbKdTdR->Size = System::Drawing::Size(38, 21);
			this->cmbKdTdR->TabIndex = 25;
			// 
			// cmbKdTdL
			// 
			this->cmbKdTdL->FormattingEnabled = true;
			this->cmbKdTdL->Location = System::Drawing::Point(223, 119);
			this->cmbKdTdL->Name = L"cmbKdTdL";
			this->cmbKdTdL->Size = System::Drawing::Size(38, 21);
			this->cmbKdTdL->TabIndex = 27;
			// 
			// cmbKiTiL
			// 
			this->cmbKiTiL->FormattingEnabled = true;
			this->cmbKiTiL->Location = System::Drawing::Point(117, 118);
			this->cmbKiTiL->Name = L"cmbKiTiL";
			this->cmbKiTiL->Size = System::Drawing::Size(38, 21);
			this->cmbKiTiL->TabIndex = 26;
			// 
			// btnDefaultValues
			// 
			this->btnDefaultValues->Location = System::Drawing::Point(32, 290);
			this->btnDefaultValues->Name = L"btnDefaultValues";
			this->btnDefaultValues->Size = System::Drawing::Size(123, 23);
			this->btnDefaultValues->TabIndex = 28;
			this->btnDefaultValues->Text = L"Valores por Defecto";
			this->btnDefaultValues->UseVisualStyleBackColor = true;
			this->btnDefaultValues->Click += gcnew System::EventHandler(this, &ConfigForm::btnDefaultValues_Click);
			// 
			// ConfigForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(373, 325);
			this->Controls->Add(this->btnDefaultValues);
			this->Controls->Add(this->cmbKdTdL);
			this->Controls->Add(this->cmbKiTiL);
			this->Controls->Add(this->cmbKdTdR);
			this->Controls->Add(this->cmbKiTiR);
			this->Controls->Add(this->btnAceptar);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtKdL);
			this->Controls->Add(this->txtKiL);
			this->Controls->Add(this->txtKpL);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtKdR);
			this->Controls->Add(this->txtKiR);
			this->Controls->Add(this->txtKpR);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"ConfigForm";
			this->Text = L"ConfigForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		void Configuracion_Inicial(void) {
			List <String^> ^ OpcionParametroControl = gcnew List<String^>();
			OpcionParametroControl->Add("Ki :");
			OpcionParametroControl->Add("Ti :");
			OpcionParametroControl->Add("Kd :");
			OpcionParametroControl->Add("Td :");

			//Añadiendo Opciones Ki/Ti y Kd/Td a la rueda Derecha
			cmbKiTiR->Items->Add(OpcionParametroControl[0]);
			cmbKiTiR->Items->Add(OpcionParametroControl[1]);
			cmbKdTdR->Items->Add(OpcionParametroControl[2]);
			cmbKdTdR->Items->Add(OpcionParametroControl[3]);

			//Añadiendo Opciones Ki/Ti y Kd/Td a la rueda Izquierda
			cmbKiTiL->Items->Add(OpcionParametroControl[0]);
			cmbKiTiL->Items->Add(OpcionParametroControl[1]);
			cmbKdTdL->Items->Add(OpcionParametroControl[2]);
			cmbKdTdL->Items->Add(OpcionParametroControl[3]);	

			SetDefaultControlParameters();
		} //FIN Configuracion_Inicial()

		void SetDefaultControlParameters(void) {
			//Seleciono por defecto las opciones Ki, Kd:
			cmbKiTiR->SelectedIndex = 0;
			cmbKdTdR->SelectedIndex = 0;
			cmbKiTiL->SelectedIndex = 0;
			cmbKdTdL->SelectedIndex = 0;

			//Selecciono por defecto los valores de Kp, ki y Kd:
			String^ pSpecifier = String::Format("{0}{1}", "F", 2);
			txtKpR->Text = default_KpR.ToString(pSpecifier);
			txtKiR->Text = default_KiR.ToString(pSpecifier);
			txtKdR->Text = default_KdR.ToString(pSpecifier);
			txtKpL->Text = default_KpL.ToString(pSpecifier);
			txtKiL->Text = default_KiL.ToString(pSpecifier);
			txtKdL->Text = default_KdL.ToString(pSpecifier);
		} // Fin SetDefaultControlParameters()

		bool validacionEmpty() {
			if (txtKpR->Text == String::Empty) return false;
			if (txtKiR->Text == String::Empty) return false;
			if (txtKdR->Text == String::Empty) return false;
			if (txtKpL->Text == String::Empty) return false;
			if (txtKiL->Text == String::Empty) return false;
			if (txtKdL->Text == String::Empty) return false;
			return true;
		} // Fin validacionEmpty()

		bool validacionFormat() {
			bool flag = true;
			try {
				local_KpR = (float)Double::Parse(txtKpR->Text);
				flag *= true;}
			catch (FormatException^) { flag *= false; }

			try {
				local_KiR = (float)Double::Parse(txtKiR->Text);
				flag *= true;}
			catch (FormatException^) { flag *= false; }

			try {
				local_KdR = (float)Double::Parse(txtKdR->Text);
				flag *= true;}
			catch (FormatException^) { flag *= false; }

			try {
				local_KpL = (float)Double::Parse(txtKpL->Text);
				flag *= true;}
			catch (FormatException^) { flag *= false; }

			try {
				local_KiL = (float)Double::Parse(txtKiL->Text);
				flag *= true;}
			catch (FormatException^) { flag *= false; }

			try {
				local_KdL = (float)Double::Parse(txtKdL->Text);
				flag *= true;}
			catch (FormatException^) { flag *= false; }

			return flag;
		} //Fin validacionFormat()

	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void btnAceptar_Click(System::Object^  sender, System::EventArgs^  e) {
	Motor^ motorR = gcnew Motor();
	Motor^ motorL = gcnew Motor();
		
	if (validacionEmpty() && validacionFormat()){
		//Asignacion de Parametros de la rueda Derecha:
		motorR->Kp = local_KpR;
		if (cmbKiTiR->Text == "Ki :") {
			motorR->Ki = local_KiR;}
		else if (cmbKiTiR->Text == "Ti :") {
			motorR->Ki = local_KiR*local_KpR;}
		if (cmbKdTdR->Text == "Kd :") {
			motorR->Kd = local_KdR;}
		else if (cmbKdTdR->Text == "Td :") {
			motorR->Kd = local_KdR*local_KpR;}

		//Asignacion de Parametros de la rueda Izquierda:
		motorL->Kp = local_KpL;
		if (cmbKiTiL->Text == "Ki :") {
			motorL->Ki = local_KiL;}
		else if (cmbKiTiL->Text == "Ti :") {
			motorL->Ki = local_KiL*local_KpL;}
		if (cmbKdTdL->Text == "Kd :") {
			motorL->Kd = local_KdL;}
		else if (cmbKdTdL->Text == "Td :") {
			motorL->Kd = local_KdL*local_KpL;}

		MessageBox::Show("Correcto Ingreso de Valores");
	} // Fin If Validacion
	else {
		if (!validacionEmpty()) MessageBox::Show("Falta llenar alguno de los parametros de Control");
		if (!validacionFormat() && validacionEmpty()) MessageBox::Show("Formato no valido para alguno de los parametros de Control. Por favor, ingrese un formato valido");
	}
	 
} //Fin de Boton Aceptar
private: System::Void btnDefaultValues_Click(System::Object^  sender, System::EventArgs^  e) {
	SetDefaultControlParameters();
}
};
}
