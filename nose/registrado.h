#pragma once
#include <iostream>
#include "gestiondeproductos.h"
#include "gestionarproveedores.h"
#include "verproductos.h"

namespace nose {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de registrado
	/// </summary>
	public ref class registrado : public System::Windows::Forms::Form
	{
	public:
		registrado(void)
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
		~registrado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ presentación;
	protected:

	private: System::Windows::Forms::GroupBox^ groupBox1;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btnprovedores;


	private: System::Windows::Forms::Button^ btnver;
	private: System::Windows::Forms::Button^ btnproductos;





	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(registrado::typeid));
			this->presentación = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btnprovedores = (gcnew System::Windows::Forms::Button());
			this->btnver = (gcnew System::Windows::Forms::Button());
			this->btnproductos = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// presentación
			// 
			this->presentación->AutoSize = true;
			this->presentación->Font = (gcnew System::Drawing::Font(L"Magneto", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->presentación->Location = System::Drawing::Point(12, 26);
			this->presentación->Name = L"presentación";
			this->presentación->Size = System::Drawing::Size(611, 48);
			this->presentación->TabIndex = 0;
			this->presentación->Text = L"Menú - Usuario Registrado";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->btnprovedores);
			this->groupBox1->Controls->Add(this->btnver);
			this->groupBox1->Controls->Add(this->btnproductos);
			this->groupBox1->Location = System::Drawing::Point(27, 107);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(721, 364);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(485, 71);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(213, 192);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &registrado::pictureBox1_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Calisto MT", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(499, 291);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(181, 47);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Salir";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &registrado::button5_Click);
			// 
			// btnprovedores
			// 
			this->btnprovedores->Font = (gcnew System::Drawing::Font(L"Calisto MT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnprovedores->Location = System::Drawing::Point(17, 207);
			this->btnprovedores->Name = L"btnprovedores";
			this->btnprovedores->Size = System::Drawing::Size(312, 70);
			this->btnprovedores->TabIndex = 3;
			this->btnprovedores->Text = L"Gestión proveedores";
			this->btnprovedores->UseVisualStyleBackColor = true;
			this->btnprovedores->Click += gcnew System::EventHandler(this, &registrado::btnprovedores_Click);
			// 
			// btnver
			// 
			this->btnver->Font = (gcnew System::Drawing::Font(L"Calisto MT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnver->Location = System::Drawing::Point(17, 138);
			this->btnver->Name = L"btnver";
			this->btnver->Size = System::Drawing::Size(312, 47);
			this->btnver->TabIndex = 2;
			this->btnver->Text = L"Ver productos";
			this->btnver->UseVisualStyleBackColor = true;
			this->btnver->Click += gcnew System::EventHandler(this, &registrado::btnver_Click);
			// 
			// btnproductos
			// 
			this->btnproductos->Font = (gcnew System::Drawing::Font(L"Calisto MT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnproductos->Location = System::Drawing::Point(17, 71);
			this->btnproductos->Name = L"btnproductos";
			this->btnproductos->Size = System::Drawing::Size(312, 47);
			this->btnproductos->TabIndex = 0;
			this->btnproductos->Text = L"Gestionar productos";
			this->btnproductos->UseVisualStyleBackColor = true;
			this->btnproductos->Click += gcnew System::EventHandler(this, &registrado::btnproductos_Click);
			// 
			// registrado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSlateGray;
			this->ClientSize = System::Drawing::Size(790, 521);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->presentación);
			this->Name = L"registrado";
			this->Text = L"registrado";
			this->Load += gcnew System::EventHandler(this, &registrado::registrado_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void registrado_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Hola! Este es tu menú", "Buen dia", MessageBoxButtons::OK, MessageBoxIcon::Information);
}


private: System::Void btnproductos_Click(System::Object^ sender, System::EventArgs^ e) {
	nose::gestiondeproductos^ almacen = gcnew nose::gestiondeproductos();
	almacen->ShowDialog();
}
private: System::Void btnprovedores_Click(System::Object^ sender, System::EventArgs^ e) {
	nose::gestionarproveedores^ provee = gcnew nose::gestionarproveedores();
	provee->ShowDialog();
}
private: System::Void btnver_Click(System::Object^ sender, System::EventArgs^ e) {
	nose::verproductos^ product = gcnew nose::verproductos();
	product->ShowDialog();
}
};
}
