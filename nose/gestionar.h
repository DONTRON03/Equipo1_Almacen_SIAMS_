#pragma once
#include <iostream>
#include <string>

namespace nose {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de agregar
	/// </summary>
	public ref class agregar : public System::Windows::Forms::Form
	{
	public:
		agregar(void)
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
		~agregar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::PictureBox^ opcsnacks;
	protected:

	private: System::Windows::Forms::PictureBox^ opcfruta;

	private: System::Windows::Forms::PictureBox^ opcbebidas;
	private: System::Windows::Forms::Label^ label1;




	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(agregar::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->opcsnacks = (gcnew System::Windows::Forms::PictureBox());
			this->opcfruta = (gcnew System::Windows::Forms::PictureBox());
			this->opcbebidas = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opcsnacks))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opcfruta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opcbebidas))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(12, 60);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->opcsnacks);
			this->splitContainer1->Panel1->Controls->Add(this->opcfruta);
			this->splitContainer1->Panel1->Controls->Add(this->opcbebidas);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &agregar::splitContainer1_Panel2_Paint);
			this->splitContainer1->Size = System::Drawing::Size(750, 454);
			this->splitContainer1->SplitterDistance = 250;
			this->splitContainer1->TabIndex = 3;
			// 
			// opcsnacks
			// 
			this->opcsnacks->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"opcsnacks.Image")));
			this->opcsnacks->Location = System::Drawing::Point(30, 312);
			this->opcsnacks->Name = L"opcsnacks";
			this->opcsnacks->Size = System::Drawing::Size(182, 124);
			this->opcsnacks->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->opcsnacks->TabIndex = 2;
			this->opcsnacks->TabStop = false;
			// 
			// opcfruta
			// 
			this->opcfruta->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"opcfruta.Image")));
			this->opcfruta->Location = System::Drawing::Point(34, 165);
			this->opcfruta->Name = L"opcfruta";
			this->opcfruta->Size = System::Drawing::Size(182, 124);
			this->opcfruta->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->opcfruta->TabIndex = 1;
			this->opcfruta->TabStop = false;
			// 
			// opcbebidas
			// 
			this->opcbebidas->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"opcbebidas.Image")));
			this->opcbebidas->Location = System::Drawing::Point(30, 27);
			this->opcbebidas->Name = L"opcbebidas";
			this->opcbebidas->Size = System::Drawing::Size(182, 124);
			this->opcbebidas->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->opcbebidas->TabIndex = 0;
			this->opcbebidas->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Magneto", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 25);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Agregar Productos";
			// 
			// agregar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(787, 526);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"agregar";
			this->Text = L"agregar";
			this->Load += gcnew System::EventHandler(this, &agregar::agregar_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opcsnacks))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opcfruta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opcbebidas))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void agregar_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void splitContainer1_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}
