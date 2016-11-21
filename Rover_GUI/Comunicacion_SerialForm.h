#pragma once

namespace Rover_GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Comunicacion_SerialForm
	/// </summary>
	public ref class Comunicacion_SerialForm : public System::Windows::Forms::Form
	{
	public:
		Comunicacion_SerialForm(void)
		{
			InitializeComponent();
			findPorts();
			SetDefaultConfiguration();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Comunicacion_SerialForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  cmbPorts;
	private: System::IO::Ports::SerialPort^  _serialPort;
	private: System::Windows::Forms::Button^  btnActualizarPuertos;
	private: System::Windows::Forms::Button^  btnConectar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  cmbBaudRate;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblMessageConfiguracion;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtPariedad;
	private: System::Windows::Forms::TextBox^  txtDatos;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtParada;

	private: System::Windows::Forms::Label^  label5;



	private: System::ComponentModel::IContainer^  components;
	protected:

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
			this->cmbPorts = (gcnew System::Windows::Forms::ComboBox());
			this->_serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
			this->btnActualizarPuertos = (gcnew System::Windows::Forms::Button());
			this->btnConectar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cmbBaudRate = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblMessageConfiguracion = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtPariedad = (gcnew System::Windows::Forms::TextBox());
			this->txtDatos = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtParada = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// cmbPorts
			// 
			this->cmbPorts->FormattingEnabled = true;
			this->cmbPorts->Location = System::Drawing::Point(175, 27);
			this->cmbPorts->Name = L"cmbPorts";
			this->cmbPorts->Size = System::Drawing::Size(121, 21);
			this->cmbPorts->TabIndex = 0;
			// 
			// btnActualizarPuertos
			// 
			this->btnActualizarPuertos->Location = System::Drawing::Point(29, 27);
			this->btnActualizarPuertos->Name = L"btnActualizarPuertos";
			this->btnActualizarPuertos->Size = System::Drawing::Size(121, 28);
			this->btnActualizarPuertos->TabIndex = 1;
			this->btnActualizarPuertos->Text = L"Actualizar Puertos";
			this->btnActualizarPuertos->UseVisualStyleBackColor = true;
			this->btnActualizarPuertos->Click += gcnew System::EventHandler(this, &Comunicacion_SerialForm::btnActualizarPuertos_Click);
			// 
			// btnConectar
			// 
			this->btnConectar->Location = System::Drawing::Point(314, 27);
			this->btnConectar->Name = L"btnConectar";
			this->btnConectar->Size = System::Drawing::Size(75, 23);
			this->btnConectar->TabIndex = 2;
			this->btnConectar->Text = L"Conectar";
			this->btnConectar->UseVisualStyleBackColor = true;
			this->btnConectar->Click += gcnew System::EventHandler(this, &Comunicacion_SerialForm::btnConectar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 79);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(360, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"------------------------------------------------- Configuracion: ----------------"
				L"----------------------------";
			// 
			// cmbBaudRate
			// 
			this->cmbBaudRate->FormattingEnabled = true;
			this->cmbBaudRate->Location = System::Drawing::Point(118, 111);
			this->cmbBaudRate->Name = L"cmbBaudRate";
			this->cmbBaudRate->Size = System::Drawing::Size(121, 21);
			this->cmbBaudRate->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Baud Rate :";
			this->label2->Click += gcnew System::EventHandler(this, &Comunicacion_SerialForm::label2_Click);
			// 
			// lblMessageConfiguracion
			// 
			this->lblMessageConfiguracion->AutoSize = true;
			this->lblMessageConfiguracion->Location = System::Drawing::Point(197, 190);
			this->lblMessageConfiguracion->Name = L"lblMessageConfiguracion";
			this->lblMessageConfiguracion->Size = System::Drawing::Size(99, 13);
			this->lblMessageConfiguracion->TabIndex = 6;
			this->lblMessageConfiguracion->Text = L"Valores por defecto";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(248, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Pariedad :";
			// 
			// txtPariedad
			// 
			this->txtPariedad->Location = System::Drawing::Point(343, 114);
			this->txtPariedad->Name = L"txtPariedad";
			this->txtPariedad->Size = System::Drawing::Size(100, 20);
			this->txtPariedad->TabIndex = 8;
			// 
			// txtDatos
			// 
			this->txtDatos->Location = System::Drawing::Point(118, 153);
			this->txtDatos->Name = L"txtDatos";
			this->txtDatos->Size = System::Drawing::Size(100, 20);
			this->txtDatos->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(23, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Bits de Datos :";
			this->label4->Click += gcnew System::EventHandler(this, &Comunicacion_SerialForm::label4_Click);
			// 
			// txtParada
			// 
			this->txtParada->Location = System::Drawing::Point(343, 149);
			this->txtParada->Name = L"txtParada";
			this->txtParada->Size = System::Drawing::Size(100, 20);
			this->txtParada->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(248, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Bit de Parada :";
			// 
			// Comunicacion_SerialForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(529, 330);
			this->Controls->Add(this->txtParada);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtDatos);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtPariedad);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblMessageConfiguracion);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cmbBaudRate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnConectar);
			this->Controls->Add(this->btnActualizarPuertos);
			this->Controls->Add(this->cmbPorts);
			this->Name = L"Comunicacion_SerialForm";
			this->Text = L"Comunicacion_SerialForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: 
		//Find Avaible Ports
		void findPorts(void) {
			array<String^>^ serial_ports = gcnew array<String^>{};
			try{
				// Get a list of serial port names.
				serial_ports = SerialPort::GetPortNames();
				for (int i = 0; i < serial_ports->Length; i++) {
					cmbPorts->Items->Add(serial_ports[i]);}
				//cmbPorts->Items->AddRange(serial_ports);				
			}
			catch (Win32Exception^ ex){
				MessageBox::Show("No se han encontrado Puertos Serial");
				Console::WriteLine(ex->Message);
			}
		} //Fin findPorts()

		void LlenarBaudRate(void) {
			List <String^> ^ BaudRateList = gcnew List<String^>();
			BaudRateList->Add("2400");
			BaudRateList->Add("4800");
			BaudRateList->Add("9600");
			BaudRateList->Add("14400");
			BaudRateList->Add("921600");

			for (int i = 0; i < BaudRateList->Count; i++) {
				cmbBaudRate->Items->Add(BaudRateList[i]);
			}
			//Seleciono por defecto el valor de 9600 Baudios
			cmbBaudRate->SelectedIndex = 2;
		} //Fin LlenarBaudRate()
		void SetDefaultConfiguration(void) {
			LlenarBaudRate();
			txtPariedad->Text = defaultPortParity.ToString();
			txtDatos->Text = defaultPortDataBits.ToString();
			txtParada->Text = defaultPortStopBits.ToString();
		}
		//Parametros Por defecto para Configuracion Serial:
		Parity defaultPortParity;
		Int32 defaultPortDataBits;
		StopBits defaultPortStopBits;

	private: System::Void btnActualizarPuertos_Click(System::Object^  sender, System::EventArgs^  e) {
		findPorts();
	}
	private: System::Void btnConectar_Click(System::Object^  sender, System::EventArgs^  e) {
		lblMessageConfiguracion->Text = String::Empty;
		if (this->cmbPorts->Text == String::Empty)
			lblMessageConfiguracion->Text = "Selecciona un Puerto Serial";
		else {
			try {
				// Nos aseguramos que el puerto no este abierto	
				if (!_serialPort->IsOpen) {
					
					_serialPort->PortName = cmbPorts->Text;
					_serialPort->BaudRate = Int32::Parse(cmbBaudRate->Text);
					//Bit de Pariedad:
					if (txtPariedad->Text == String::Empty) {
						_serialPort->Parity = defaultPortParity;}
					else{
						_serialPort->Parity = (Parity)Enum::Parse(Parity::typeid, txtPariedad->Text);}
					
					//Bits de Datos:
					if (txtDatos->Text == String::Empty) {
						_serialPort->DataBits = defaultPortDataBits;}
					else {
						_serialPort->DataBits = Int32::Parse(txtDatos->Text);}
					
					//Bit de Parada:
					if (txtDatos->Text == String::Empty) {
						_serialPort->StopBits = defaultPortStopBits;}
					else {
						_serialPort->StopBits = (StopBits)Enum::Parse(StopBits::typeid, txtDatos->Text);}

					//Abrimos la comunicacion con el puerto Serial seleccionado:
					_serialPort->Open();
				}else lblMessageConfiguracion->Text = "Port isn't openned";
			} //Fin Try
			catch (UnauthorizedAccessException^) {
				this->lblMessageConfiguracion->Text = "UnauthorizedAccess";
			} //Fin Catch
		} // Fin Else

	} // Fin del boton Conectar

private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
