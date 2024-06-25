#pragma once

namespace nose {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de gestiondeproductos
	/// </summary>
	public ref class gestiondeproductos : public System::Windows::Forms::Form
	{
	public:
		gestiondeproductos(void)
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
		~gestiondeproductos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ prod;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cant;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ precio;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ categoria;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ btnagragar;
	private: System::Windows::Forms::Button^ btnborrar;
	private: System::Windows::Forms::Button^ btnsalir;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gestiondeproductos::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prod = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cant = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->categoria = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->btnagragar = (gcnew System::Windows::Forms::Button());
			this->btnborrar = (gcnew System::Windows::Forms::Button());
			this->btnsalir = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->id, this->prod,
					this->cant, this->precio, this->categoria
			});
			this->dataGridView1->Location = System::Drawing::Point(29, 342);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(788, 211);
			this->dataGridView1->TabIndex = 0;
			// 
			// id
			// 
			this->id->HeaderText = L"ID:";
			this->id->MinimumWidth = 6;
			this->id->Name = L"id";
			this->id->Width = 125;
			// 
			// prod
			// 
			this->prod->HeaderText = L"Producto:";
			this->prod->MinimumWidth = 6;
			this->prod->Name = L"prod";
			this->prod->Width = 125;
			// 
			// cant
			// 
			this->cant->HeaderText = L"Cantidad:";
			this->cant->MinimumWidth = 6;
			this->cant->Name = L"cant";
			this->cant->Width = 125;
			// 
			// precio
			// 
			this->precio->HeaderText = L"Precio:";
			this->precio->MinimumWidth = 6;
			this->precio->Name = L"precio";
			this->precio->Width = 125;
			// 
			// categoria
			// 
			this->categoria->HeaderText = L"Categoria:";
			this->categoria->MinimumWidth = 6;
			this->categoria->Name = L"categoria";
			this->categoria->Width = 125;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(37, 123);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(288, 22);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(37, 188);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(288, 22);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(37, 260);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(288, 22);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(405, 123);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(288, 22);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(405, 188);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(288, 22);
			this->textBox5->TabIndex = 5;
			// 
			// btnagragar
			// 
			this->btnagragar->Location = System::Drawing::Point(417, 239);
			this->btnagragar->Name = L"btnagragar";
			this->btnagragar->Size = System::Drawing::Size(261, 42);
			this->btnagragar->TabIndex = 6;
			this->btnagragar->Text = L"Añadir";
			this->btnagragar->UseVisualStyleBackColor = true;
			// 
			// btnborrar
			// 
			this->btnborrar->Location = System::Drawing::Point(835, 367);
			this->btnborrar->Name = L"btnborrar";
			this->btnborrar->Size = System::Drawing::Size(261, 42);
			this->btnborrar->TabIndex = 7;
			this->btnborrar->Text = L"Eliminar";
			this->btnborrar->UseVisualStyleBackColor = true;
			// 
			// btnsalir
			// 
			this->btnsalir->Location = System::Drawing::Point(835, 477);
			this->btnsalir->Name = L"btnsalir";
			this->btnsalir->Size = System::Drawing::Size(261, 42);
			this->btnsalir->TabIndex = 8;
			this->btnsalir->Text = L"Salir";
			this->btnsalir->UseVisualStyleBackColor = true;
			this->btnsalir->Click += gcnew System::EventHandler(this, &gestiondeproductos::btnsalir_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(829, 64);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(253, 234);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(33, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 22);
			this->label1->TabIndex = 10;
			this->label1->Text = L"ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 163);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 22);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Producto:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(33, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(99, 22);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Cantidad:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(401, 98);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 22);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Precio:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calisto MT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(401, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 22);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Categoria:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Magneto", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(31, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(356, 36);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Gestión de productos";
			// 
			// gestiondeproductos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1108, 580);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnsalir);
			this->Controls->Add(this->btnborrar);
			this->Controls->Add(this->btnagragar);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"gestiondeproductos";
			this->Text = L"gestiondeproductos";
			this->Load += gcnew System::EventHandler(this, &gestiondeproductos::gestiondeproductos_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void gestiondeproductos_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnsalir_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
