#pragma once
#include <Windows.h>

namespace MyWorksCppWinForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для DynamicProgrammingMethod
	/// </summary>
	public ref class DynamicProgrammingMethod : public System::Windows::Forms::Form
	{
	public:
		DynamicProgrammingMethod(void)
		{
			InitializeComponent();

			InitExamples();
			dataGridView1->ReadOnly = true;
			dataGridView2->ReadOnly = true;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~DynamicProgrammingMethod()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->ItemSize = System::Drawing::Size(90, 18);
			this->tabControl1->Location = System::Drawing::Point(12, 165);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(620, 513);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->dataGridView2);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(612, 487);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Исходные данные";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 193);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ограничения";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(6, 209);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(600, 272);
			this->dataGridView2->TabIndex = 3;
			this->dataGridView2->CellValidating += gcnew System::Windows::Forms::DataGridViewCellValidatingEventHandler(this, &DynamicProgrammingMethod::dataGridView2_CellValidating);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Целевая функция (fx)";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 30);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(600, 150);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellValidating += gcnew System::Windows::Forms::DataGridViewCellValidatingEventHandler(this, &DynamicProgrammingMethod::dataGridView1_CellValidating);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(612, 487);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Решение";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(6, 6);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(600, 475);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(156, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Количество итераций";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Количество ограничений";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(6, 118);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->MinimumSize = System::Drawing::Size(1, 0);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(90, 20);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(159, 118);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(90, 20);
			this->numericUpDown2->TabIndex = 5;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(477, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 50);
			this->button2->TabIndex = 7;
			this->button2->Text = L"РЕШИТЬ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DynamicProgrammingMethod::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(620, 147);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->numericUpDown4);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Location = System::Drawing::Point(123, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(474, 64);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Для примера №2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(192, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(166, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Оптимальное решение на шаге";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(195, 38);
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(90, 20);
			this->numericUpDown4->TabIndex = 15;
			this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(14, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Z";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(6, 38);
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(90, 20);
			this->numericUpDown3->TabIndex = 13;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Location = System::Drawing::Point(6, 82);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(185, 17);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"Параллельное решение задачи";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(13, 42);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(75, 17);
			this->checkBox2->TabIndex = 9;
			this->checkBox2->Text = L"Пример 2";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &DynamicProgrammingMethod::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(13, 19);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(75, 17);
			this->checkBox1->TabIndex = 8;
			this->checkBox1->Text = L"Пример 1";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &DynamicProgrammingMethod::checkBox1_CheckedChanged);
			// 
			// DynamicProgrammingMethod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 690);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"DynamicProgrammingMethod";
			this->Text = L"DynamicProgrammingMethod";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int size1 = Convert::ToInt32(numericUpDown1->Value);
		int size2 = Convert::ToInt32(numericUpDown2->Value);

		float* L = new float[size1];
		float** mas = new float* [size2];
		for (int i = 0; i < size2; i++)
			mas[i] = new float[size1];

		for (int i = 0; i < dataGridView1->ColumnCount; i++)
			L[i] = Convert::ToDouble(dataGridView1->Rows[0]->Cells[i]->Value);
		for (int i = 0; i < size2; i++)
			for (int j = 0; j < size1; j++)
				mas[i][j] = Convert::ToDouble(dataGridView2->Rows[i]->Cells[j]->Value);

		InitDynamicMethod(checkBox1->Checked ? 0 : 1, checkBox3->Checked, size1, size2, L, mas, Convert::ToInt32(numericUpDown3->Value), Convert::ToInt32(numericUpDown4->Value));

		richTextBox1->Clear();
		richTextBox1->Text = System::IO::File::ReadAllText("Data.txt", System::Text::Encoding::GetEncoding(1251));

		for (int i = 0; i < size2; i++)
			delete[] mas[i]; 
		delete[] L;
	}

	private: System::Void InitExamples()
	{
		numericUpDown1->Value = checkBox1->Checked ? 5 : 3;
		numericUpDown2->Value = checkBox1->Checked ? 5 : 3;

		int size1 = Convert::ToInt32(numericUpDown1->Value);
		int size2 = Convert::ToInt32(numericUpDown2->Value);

		dataGridView1->ColumnCount = size1;
		dataGridView1->RowCount = 1;
		dataGridView2->ColumnCount = size1;
		dataGridView2->RowCount = size2;

		//Название таблицы в верхнем левом углу
		dataGridView1->TopLeftHeaderCell->Value = "Ограничения";
		dataGridView2->TopLeftHeaderCell->Value = "Коэффициенты";

		for (int i = 0; i < size1; i++)
		{
			dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridView1->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
			if (checkBox2->Checked == true && checkBox2->Checked == false)
				for (int j = 0; j < size1 + 1; j++)
					dataGridView2->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			if (checkBox2->Checked == true && checkBox2->Checked == false)
				for (int j = 0; j < size1; j++)
					dataGridView2->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
		}

		if (checkBox1->Checked == true)
		{
			float mas[4][5] = { { 0, 0.2, 0.25, 0.4, 0.6 }, { 0, 0.15, 0.3, 0.45, 0.55 }, { 0, 0.1, 0.3, 0.55, 0.7 }, { 0, 0.22, 0.4, 0.5, 0.6 } };

			for (int i = 0; i < dataGridView1->ColumnCount; i++)
				dataGridView1->Rows[0]->Cells[i]->Value = i;
			for (int i = 0; i < dataGridView2->Rows->Count - 1; i++)
				for (int j = 0; j < dataGridView2->Rows->Count; j++)
					dataGridView2->Rows[i]->Cells[j]->Value = mas[i][j];
		}
		else if (checkBox2->Checked == true)
		{
			float mas2[2][3] = { { 2, 3, 4 }, { 10, 20, 30 } };

			for (int i = 0; i < dataGridView1->ColumnCount; i++)
				dataGridView1->Rows[0]->Cells[i]->Value = i;
			for (int i = 0; i < dataGridView2->Rows->Count - 1; i++)
				for (int j = 0; j < dataGridView2->Rows->Count; j++)
					dataGridView2->Rows[i]->Cells[j]->Value = mas2[i][j];
		}

		dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView1->AutoResizeColumns();
		dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView2->AutoResizeColumns();
	}

	private: System::Void dataGridView1_CellValidating(System::Object^ sender, System::Windows::Forms::DataGridViewCellValidatingEventArgs^ e) 
	{
		if (dataGridView1->Rows[e->RowIndex]->IsNewRow)
			return;
		
		int newInteger;
		if (!Int32::TryParse(e->FormattedValue->ToString(), newInteger))
		{
			dataGridView1->Rows[e->RowIndex]->ErrorText = "Введите число в поле";
			e->Cancel = true;
		}
	}

	private: System::Void dataGridView2_CellValidating(System::Object^ sender, System::Windows::Forms::DataGridViewCellValidatingEventArgs^ e) 
	{
		if (dataGridView2->Rows[e->RowIndex]->IsNewRow)
			return;
	
		int newInteger;
		if (!Int32::TryParse(e->FormattedValue->ToString(), newInteger))
		{
			dataGridView2->Rows[e->RowIndex]->ErrorText = "Введите число в поле";
			e->Cancel = true;
		}
	}
	
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		checkBox2->Checked = !checkBox1->Checked;

		InitExamples();
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		checkBox1->Checked = !checkBox2->Checked;

		InitExamples();
	}
};
}
