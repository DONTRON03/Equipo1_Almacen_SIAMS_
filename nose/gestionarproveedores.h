#pragma once

namespace nose {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de gestionarproveedores
	/// </summary>
	public ref class gestionarproveedores : public System::Windows::Forms::Form
	{
	public:
		gestionarproveedores(void)
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
		~gestionarproveedores()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label6;
	protected:
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ btnsalir;
	private: System::Windows::Forms::Button^ btnborrar;
	private: System::Windows::Forms::Button^ btnagragar;
	private: System::Windows::Forms::TextBox^ textBox5;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ proveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ prod;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ categ;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gestionarproveedores::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnsalir = (gcnew System::Windows::Forms::Button());
			this->btnborrar = (gcnew System::Windows::Forms::Button());
			this->btnagragar = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->proveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prod = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->categ = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Magneto", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(24, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(379, 36);
			this->label6->TabIndex = 31;
			this->label6->Text = L"Gestión de Provedores";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(26, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 22);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Categoria:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 22);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Producto:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 22);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Nombre del proveedor:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(822, 64);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 285);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// btnsalir
			// 
			this->btnsalir->Location = System::Drawing::Point(828, 477);
			this->btnsalir->Name = L"btnsalir";
			this->btnsalir->Size = System::Drawing::Size(261, 42);
			this->btnsalir->TabIndex = 24;
			this->btnsalir->Text = L"Salir";
			this->btnsalir->UseVisualStyleBackColor = true;
			// 
			// btnborrar
			// 
			this->btnborrar->Location = System::Drawing::Point(828, 367);
			this->btnborrar->Name = L"btnborrar";
			this->btnborrar->Size = System::Drawing::Size(261, 42);
			this->btnborrar->TabIndex = 23;
			this->btnborrar->Text = L"Eliminar";
			this->btnborrar->UseVisualStyleBackColor = true;
			this->btnborrar->Click += gcnew System::EventHandler(this, &gestionarproveedores::btnborrar_Click);
			// 
			// btnagragar
			// 
			this->btnagragar->Location = System::Drawing::Point(387, 123);
			this->btnagragar->Name = L"btnagragar";
			this->btnagragar->Size = System::Drawing::Size(261, 42);
			this->btnagragar->TabIndex = 22;
			this->btnagragar->Text = L"Añadir";
			this->btnagragar->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(30, 255);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(288, 22);
			this->textBox5->TabIndex = 21;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(30, 188);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(288, 22);
			this->textBox2->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(30, 123);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(288, 22);
			this->textBox1->TabIndex = 17;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->proveedor,
					this->prod, this->categ
			});
			this->dataGridView1->Location = System::Drawing::Point(22, 342);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(788, 211);
			this->dataGridView1->TabIndex = 16;
			// 
			// proveedor
			// 
			this->proveedor->HeaderText = L"Nombre del proveedor";
			this->proveedor->MinimumWidth = 6;
			this->proveedor->Name = L"proveedor";
			this->proveedor->Width = 125;
			// 
			// prod
			// 
			this->prod->HeaderText = L"producto";
			this->prod->MinimumWidth = 6;
			this->prod->Name = L"prod";
			this->prod->Width = 125;
			// 
			// categ
			// 
			this->categ->HeaderText = L"Categoria";
			this->categ->MinimumWidth = 6;
			this->categ->Name = L"categ";
			this->categ->Width = 125;
			// 
			// gestionarproveedores
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1111, 580);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnsalir);
			this->Controls->Add(this->btnborrar);
			this->Controls->Add(this->btnagragar);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"gestionarproveedores";
			this->Text = L"gestionarproveedores";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnborrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
