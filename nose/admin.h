#pragma once
#include "gestiondeproductos.h"
#include "verproductos.h"
namespace nose {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de admin
	/// </summary>
	public ref class admin : public System::Windows::Forms::Form
	{
	public:
		admin(void)
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
		~admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ btnprovedor;
	private: System::Windows::Forms::Button^ btnver;
	private: System::Windows::Forms::Button^ btnproductos;

	private: System::Windows::Forms::Label^ label1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(admin::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btnprovedor = (gcnew System::Windows::Forms::Button());
			this->btnver = (gcnew System::Windows::Forms::Button());
			this->btnproductos = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->btnprovedor);
			this->groupBox1->Controls->Add(this->btnver);
			this->groupBox1->Controls->Add(this->btnproductos);
			this->groupBox1->Location = System::Drawing::Point(52, 121);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(721, 364);
			this->groupBox1->TabIndex = 2;
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
			this->pictureBox1->Click += gcnew System::EventHandler(this, &admin::pictureBox1_Click);
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
			this->button5->Click += gcnew System::EventHandler(this, &admin::button5_Click);
			// 
			// btnprovedor
			// 
			this->btnprovedor->Font = (gcnew System::Drawing::Font(L"Calisto MT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnprovedor->Location = System::Drawing::Point(16, 209);
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
			this->btnver->Location = System::Drawing::Point(16, 146);
			this->btnver->Name = L"btnver";
			this->btnver->Size = System::Drawing::Size(312, 47);
			this->btnver->TabIndex = 2;
			this->btnver->Text = L"Ver productos";
			this->btnver->UseVisualStyleBackColor = true;
			this->btnver->Click += gcnew System::EventHandler(this, &admin::btnver_Click);
			// 
			// btnproductos
			// 
			this->btnproductos->Font = (gcnew System::Drawing::Font(L"Calisto MT", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnproductos->Location = System::Drawing::Point(16, 80);
			this->btnproductos->Name = L"btnproductos";
			this->btnproductos->Size = System::Drawing::Size(312, 47);
			this->btnproductos->TabIndex = 1;
			this->btnproductos->Text = L"Gestionar productos";
			this->btnproductos->UseVisualStyleBackColor = true;
			this->btnproductos->Click += gcnew System::EventHandler(this, &admin::btnproductos_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Magneto", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(50, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(518, 48);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Menú - Administrador";
			// 
			// admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lavender;
			this->ClientSize = System::Drawing::Size(818, 524);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"admin";
			this->Text = L"admin";
			this->Load += gcnew System::EventHandler(this, &admin::admin_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Hola! Este es tu menú", "Buen dia", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

private: System::Void admin_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnproductos_Click(System::Object^ sender, System::EventArgs^ e) {
	nose::gestiondeproductos^ almacen = gcnew nose::gestiondeproductos();
	almacen->ShowDialog();
}
private: System::Void btnver_Click(System::Object^ sender, System::EventArgs^ e) {
	nose::verproductos^ product = gcnew nose::verproductos();
	product->ShowDialog();
}
};
}
