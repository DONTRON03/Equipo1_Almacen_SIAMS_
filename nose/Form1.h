#pragma once
#include <iostream>
#include <string>
#include "registrado.h"
#include "registrado.h"
#include "admin.h"
#include "anonimo.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnanonimo;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btncontinuar;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ clave;
	private: System::Windows::Forms::TextBox^ txtusuario;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ txtcontrasena;

	private: System::Windows::Forms::Button^ button1;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnanonimo = (gcnew System::Windows::Forms::Button());
			this->btncontinuar = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->clave = (gcnew System::Windows::Forms::TextBox());
			this->txtusuario = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtcontrasena = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtcontrasena->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnanonimo
			// 
			this->btnanonimo->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnanonimo->Location = System::Drawing::Point(171, 202);
			this->btnanonimo->Name = L"btnanonimo";
			this->btnanonimo->Size = System::Drawing::Size(194, 41);
			this->btnanonimo->TabIndex = 16;
			this->btnanonimo->Text = L"Anonimo";
			this->btnanonimo->UseVisualStyleBackColor = true;
			this->btnanonimo->Click += gcnew System::EventHandler(this, &Form1::btnanonimo_Click);
			// 
			// btncontinuar
			// 
			this->btncontinuar->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btncontinuar->Location = System::Drawing::Point(171, 155);
			this->btncontinuar->Name = L"btncontinuar";
			this->btncontinuar->Size = System::Drawing::Size(194, 41);
			this->btncontinuar->TabIndex = 15;
			this->btncontinuar->Text = L"Continuar";
			this->btncontinuar->UseVisualStyleBackColor = true;
			this->btncontinuar->Click += gcnew System::EventHandler(this, &Form1::btncontinuar_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(94, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 24);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Contraseña";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(126, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 24);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Usuario";
			// 
			// clave
			// 
			this->clave->Location = System::Drawing::Point(207, 108);
			this->clave->Name = L"clave";
			this->clave->PasswordChar = 'x';
			this->clave->Size = System::Drawing::Size(183, 22);
			this->clave->TabIndex = 12;
			this->clave->TextChanged += gcnew System::EventHandler(this, &Form1::clave_TextChanged);
			// 
			// txtusuario
			// 
			this->txtusuario->Location = System::Drawing::Point(207, 68);
			this->txtusuario->Name = L"txtusuario";
			this->txtusuario->Size = System::Drawing::Size(183, 22);
			this->txtusuario->TabIndex = 11;
			this->txtusuario->TextChanged += gcnew System::EventHandler(this, &Form1::txtusuario_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(283, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(201, 41);
			this->label2->TabIndex = 10;
			this->label2->Text = L"MiniSuper";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Magneto", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(98, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(562, 45);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Bienvenido al Almacen del";
			// 
			// txtcontrasena
			// 
			this->txtcontrasena->Controls->Add(this->button1);
			this->txtcontrasena->Controls->Add(this->btnanonimo);
			this->txtcontrasena->Controls->Add(this->btncontinuar);
			this->txtcontrasena->Controls->Add(this->label4);
			this->txtcontrasena->Controls->Add(this->label3);
			this->txtcontrasena->Controls->Add(this->clave);
			this->txtcontrasena->Controls->Add(this->txtusuario);
			this->txtcontrasena->Location = System::Drawing::Point(119, 166);
			this->txtcontrasena->Name = L"txtcontrasena";
			this->txtcontrasena->Size = System::Drawing::Size(525, 339);
			this->txtcontrasena->TabIndex = 19;
			this->txtcontrasena->TabStop = false;
			this->txtcontrasena->Text = L"Login";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(171, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 41);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Salir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(783, 584);
			this->Controls->Add(this->txtcontrasena);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->txtcontrasena->ResumeLayout(false);
			this->txtcontrasena->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btncontinuar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ usuario = txtusuario->Text;
		String^ pasword = clave->Text;

		if (usuario == "admin" && pasword == "admin") {
			nose::admin^ administrador = gcnew nose::admin();
			administrador->ShowDialog();
		}else if(usuario == "usuario" && pasword == "usuario") {
			nose::registrado^ usuarioreg = gcnew nose::registrado();
			usuarioreg->ShowDialog();
		}
	}
	private: System::Void txtusuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ usuario = txtusuario->Text;
	}
	private: System::Void clave_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ pasword = clave->Text;
	}
private: System::Void btnanonimo_Click(System::Object^ sender, System::EventArgs^ e) {
	nose::anonimo^ usuarioanonimo = gcnew nose::anonimo();
	usuarioanonimo->ShowDialog();
}
};
}
