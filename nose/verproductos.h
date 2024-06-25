#pragma once

namespace nose {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de verproductos
	/// </summary>
	public ref class verproductos : public System::Windows::Forms::Form
	{
	public:
		verproductos(void)
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
		~verproductos()
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
	private: System::Windows::Forms::Button^ button1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prod = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cant = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->precio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->categoria = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->id, this->prod,
					this->cant, this->precio, this->categoria
			});
			this->dataGridView1->Location = System::Drawing::Point(27, 99);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(788, 426);
			this->dataGridView1->TabIndex = 1;
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(305, 552);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Salir.";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &verproductos::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Magneto", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(21, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 32);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Productos";
			// 
			// verproductos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(854, 613);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"verproductos";
			this->Text = L"verproductos";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
};
}
