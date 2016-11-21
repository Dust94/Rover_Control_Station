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
			this->SuspendLayout();
			// 
			// NavegacionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->KeyPreview = true;
			this->Name = L"NavegacionForm";
			this->Text = L"NavegacionForm";
			this->Load += gcnew System::EventHandler(this, &NavegacionForm::NavegacionForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void NavegacionForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void NavegacionForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Enter) MessageBox::Show("Se presiono un teclado arrow down");
		else MessageBox::Show("No se presiono nada");
	}
		
	};
}
