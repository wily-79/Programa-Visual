#pragma once

namespace ProgramaVisual {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:


		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ NombrePaciente;
	private: System::Windows::Forms::RadioButton^ BotonMujer;



	private: System::Windows::Forms::Label^ TituloNombre;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ BotonHombre;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ EdadPaciente;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::TextBox^ CorreoPaciente;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox5;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RadioButton^ PagadoSi;
	private: System::Windows::Forms::RadioButton^ PagadoNo;


	private: System::Windows::Forms::NumericUpDown^ PrecioConsulta;



	private: System::Windows::Forms::TextBox^ Datitos;
	private: System::Windows::Forms::Button^ BotonAgregar;
	private: System::Windows::Forms::Button^ BotonEliminar;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NombrePaciente = (gcnew System::Windows::Forms::TextBox());
			this->BotonMujer = (gcnew System::Windows::Forms::RadioButton());
			this->TituloNombre = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->BotonHombre = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->EdadPaciente = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->CorreoPaciente = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->PrecioConsulta = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->PagadoSi = (gcnew System::Windows::Forms::RadioButton());
			this->PagadoNo = (gcnew System::Windows::Forms::RadioButton());
			this->Datitos = (gcnew System::Windows::Forms::TextBox());
			this->BotonAgregar = (gcnew System::Windows::Forms::Button());
			this->BotonEliminar = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PrecioConsulta))->BeginInit();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 49.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(141, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(501, 100);
			this->label1->TabIndex = 2;
			this->label1->Text = L"REGISTRO";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// NombrePaciente
			// 
			this->NombrePaciente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NombrePaciente->Location = System::Drawing::Point(85, 13);
			this->NombrePaciente->Name = L"NombrePaciente";
			this->NombrePaciente->Size = System::Drawing::Size(397, 27);
			this->NombrePaciente->TabIndex = 4;
			this->NombrePaciente->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// BotonMujer
			// 
			this->BotonMujer->AccessibleName = L"Genero";
			this->BotonMujer->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->BotonMujer->AutoSize = true;
			this->BotonMujer->Location = System::Drawing::Point(189, 14);
			this->BotonMujer->Name = L"BotonMujer";
			this->BotonMujer->Size = System::Drawing::Size(72, 24);
			this->BotonMujer->TabIndex = 5;
			this->BotonMujer->TabStop = true;
			this->BotonMujer->Text = L"Mujer";
			this->BotonMujer->UseVisualStyleBackColor = true;
			this->BotonMujer->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// TituloNombre
			// 
			this->TituloNombre->AutoSize = true;
			this->TituloNombre->BackColor = System::Drawing::SystemColors::Control;
			this->TituloNombre->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10, System::Drawing::FontStyle::Bold));
			this->TituloNombre->Location = System::Drawing::Point(2, 13);
			this->TituloNombre->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->TituloNombre->Name = L"TituloNombre";
			this->TituloNombre->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TituloNombre->Size = System::Drawing::Size(96, 18);
			this->TituloNombre->TabIndex = 3;
			this->TituloNombre->Text = L"Nombre: ";
			this->TituloNombre->UseMnemonic = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(7, 14);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(85, 18);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Genero:";
			this->label2->UseMnemonic = false;
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// BotonHombre
			// 
			this->BotonHombre->AccessibleName = L"Genero";
			this->BotonHombre->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->BotonHombre->AutoSize = true;
			this->BotonHombre->Location = System::Drawing::Point(99, 14);
			this->BotonHombre->Name = L"BotonHombre";
			this->BotonHombre->Size = System::Drawing::Size(90, 24);
			this->BotonHombre->TabIndex = 5;
			this->BotonHombre->TabStop = true;
			this->BotonHombre->Text = L"Hombre";
			this->BotonHombre->UseVisualStyleBackColor = true;
			this->BotonHombre->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(2, 18);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(74, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Edad: ";
			this->label4->UseMnemonic = false;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// EdadPaciente
			// 
			this->EdadPaciente->Location = System::Drawing::Point(85, 14);
			this->EdadPaciente->MaxLength = 3;
			this->EdadPaciente->Name = L"EdadPaciente";
			this->EdadPaciente->Size = System::Drawing::Size(41, 27);
			this->EdadPaciente->TabIndex = 6;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->BotonHombre);
			this->groupBox1->Controls->Add(this->BotonMujer);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Location = System::Drawing::Point(515, 127);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(287, 53);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox2->Controls->Add(this->NombrePaciente);
			this->groupBox2->Controls->Add(this->TituloNombre);
			this->groupBox2->Location = System::Drawing::Point(11, 127);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(492, 49);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox3->Controls->Add(this->EdadPaciente);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(11, 182);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(127, 44);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox4->Controls->Add(this->CorreoPaciente);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Location = System::Drawing::Point(11, 232);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(492, 49);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Enter += gcnew System::EventHandler(this, &MyForm::groupBox4_Enter);
			// 
			// CorreoPaciente
			// 
			this->CorreoPaciente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CorreoPaciente->Location = System::Drawing::Point(85, 13);
			this->CorreoPaciente->Name = L"CorreoPaciente";
			this->CorreoPaciente->Size = System::Drawing::Size(397, 27);
			this->CorreoPaciente->TabIndex = 4;
			this->CorreoPaciente->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(2, 13);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(85, 18);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Correo:";
			this->label5->UseMnemonic = false;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox5->Controls->Add(this->PrecioConsulta);
			this->groupBox5->Controls->Add(this->label6);
			this->groupBox5->Location = System::Drawing::Point(11, 287);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(309, 49);
			this->groupBox5->TabIndex = 8;
			this->groupBox5->TabStop = false;
			this->groupBox5->Enter += gcnew System::EventHandler(this, &MyForm::groupBox4_Enter);
			// 
			// PrecioConsulta
			// 
			this->PrecioConsulta->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			this->PrecioConsulta->Location = System::Drawing::Point(216, 13);
			this->PrecioConsulta->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			this->PrecioConsulta->Name = L"PrecioConsulta";
			this->PrecioConsulta->Size = System::Drawing::Size(81, 27);
			this->PrecioConsulta->TabIndex = 4;
			this->PrecioConsulta->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(2, 13);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label6->Size = System::Drawing::Size(206, 18);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Costo de consulta:";
			this->label6->UseMnemonic = false;
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox6->Controls->Add(this->label7);
			this->groupBox6->Controls->Add(this->PagadoSi);
			this->groupBox6->Controls->Add(this->PagadoNo);
			this->groupBox6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox6->Location = System::Drawing::Point(515, 283);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(287, 53);
			this->groupBox6->TabIndex = 7;
			this->groupBox6->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 10, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(7, 21);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label7->Size = System::Drawing::Size(118, 18);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Cancelado:";
			this->label7->UseMnemonic = false;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// PagadoSi
			// 
			this->PagadoSi->AccessibleName = L"Genero";
			this->PagadoSi->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->PagadoSi->AutoSize = true;
			this->PagadoSi->Location = System::Drawing::Point(132, 18);
			this->PagadoSi->Name = L"PagadoSi";
			this->PagadoSi->Size = System::Drawing::Size(45, 24);
			this->PagadoSi->TabIndex = 5;
			this->PagadoSi->TabStop = true;
			this->PagadoSi->Text = L"Sí";
			this->PagadoSi->UseVisualStyleBackColor = true;
			this->PagadoSi->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// PagadoNo
			// 
			this->PagadoNo->AccessibleName = L"Genero";
			this->PagadoNo->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->PagadoNo->AutoSize = true;
			this->PagadoNo->Location = System::Drawing::Point(189, 18);
			this->PagadoNo->Name = L"PagadoNo";
			this->PagadoNo->Size = System::Drawing::Size(51, 24);
			this->PagadoNo->TabIndex = 5;
			this->PagadoNo->TabStop = true;
			this->PagadoNo->Text = L"No";
			this->PagadoNo->UseVisualStyleBackColor = true;
			this->PagadoNo->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// Datitos
			// 
			this->Datitos->Location = System::Drawing::Point(27, 437);
			this->Datitos->Name = L"Datitos";
			this->Datitos->Size = System::Drawing::Size(759, 27);
			this->Datitos->TabIndex = 11;
			// 
			// BotonAgregar
			// 
			this->BotonAgregar->Location = System::Drawing::Point(242, 363);
			this->BotonAgregar->Name = L"BotonAgregar";
			this->BotonAgregar->Size = System::Drawing::Size(131, 36);
			this->BotonAgregar->TabIndex = 12;
			this->BotonAgregar->Text = L"AGREGAR";
			this->BotonAgregar->UseVisualStyleBackColor = true;
			// 
			// BotonEliminar
			// 
			this->BotonEliminar->Location = System::Drawing::Point(476, 363);
			this->BotonEliminar->Name = L"BotonEliminar";
			this->BotonEliminar->Size = System::Drawing::Size(131, 36);
			this->BotonEliminar->TabIndex = 12;
			this->BotonEliminar->Text = L"ELIMINAR";
			this->BotonEliminar->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(817, 692);
			this->Controls->Add(this->BotonEliminar);
			this->Controls->Add(this->BotonAgregar);
			this->Controls->Add(this->Datitos);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PrecioConsulta))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void groupBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
}
};
}
