#pragma once
#include "verproductos.h"
namespace nose {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de anonimo
	/// </summary>
	public ref class anonimo : public System::Windows::Forms::Form
	{
	public:
		anonimo(void)
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
		~anonimo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btnprovedor;
	private: System::Windows::Forms::Button^ btnver;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(anonimo::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btnprovedor = (gcnew System::Windows::Forms::Button());
			this->btnver = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Magneto", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(54, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(389, 48);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Menú - Anonimo";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->btnprovedor);
			this->groupBox1->Controls->Add(this->btnver);
			this->groupBox1->Location = System::Drawing::Point(56, 107);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(721, 364);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(477, 75);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(213, 192);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &anonimo::pictureBox1_Click);
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
			this->button5->Click += gcnew System::EventHandler(this, &anonimo::button5_Click);
			// 
			// btnprovedor
			// 
			this->btnprovedor->Font = (gcnew System::Drawing::Font(L"Calisto MT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnprovedor->Location = System::Drawing::Point(6, 191);
			this->btnprovedor->Name = L"btnprovedor";
			this->btnprovedor->Size = System::Drawing::Size(312, 47);
			this->btnprovedor->TabIndex = 3;
			this->btnprovedor->Text = L"Ver proveedores";
			this->btnprovedor->UseVisualStyleBackColor = true;
			// 
			// btnver
			// 
			this->btnver->Font = (gcnew System::Drawing::Font(L"Calisto MT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnver->Location = System::Drawing::Point(6, 128);
			this->btnver->Name = L"btnver";
			this->btnver->Size = System::Drawing::Size(312, 47);
			this->btnver->TabIndex = 2;
			this->btnver->Text = L"Ver productos";
			this->btnver->UseVisualStyleBackColor = true;
			this->btnver->Click += gcnew System::EventHandler(this, &anonimo::btnver_Click);
			// 
			// anonimo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(845, 513);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"anonimo";
			this->Text = L"anonimo";
			this->Load += gcnew System::EventHandler(this, &anonimo::anonimo_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void anonimo_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Hola! Este es tu menú", "Buen dia", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void btnver_Click(System::Object^ sender, System::EventArgs^ e) {
	nose::verproductos^ product = gcnew nose::verproductos();
	product->ShowDialog();
}
};
}
