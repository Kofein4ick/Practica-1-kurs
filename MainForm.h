#pragma once
#include "Logic.h"
#include "Error.h"
#include "Error2.h"
#include "Error3.h"
#include "Error4.h"
namespace Project5
{
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	protected:

	private: System::Windows::Forms::Label^  lable3;




	private: System::Windows::Forms::TextBox^  num3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  Tabl;




	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::NumericUpDown^  num1;
	private: System::Windows::Forms::Label^  label3;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lable3 = (gcnew System::Windows::Forms::Label());
			this->num3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Tabl = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->num1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(334, 473);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(176, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(35, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(291, 34);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите матрицу смежности в одну строку\r\n(без пробелов)";
			// 
			// lable3
			// 
			this->lable3->AutoSize = true;
			this->lable3->Location = System::Drawing::Point(35, 426);
			this->lable3->Name = L"lable3";
			this->lable3->Size = System::Drawing::Size(48, 17);
			this->lable3->TabIndex = 2;
			this->lable3->Text = L"Ответ";
			// 
			// num3
			// 
			this->num3->Location = System::Drawing::Point(334, 426);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(422, 22);
			this->num3->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(35, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Введите кол-во вершин";
			// 
			// Tabl
			// 
			this->Tabl->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->Tabl->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->Tabl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Tabl->GridColor = System::Drawing::SystemColors::Control;
			this->Tabl->Location = System::Drawing::Point(334, 128);
			this->Tabl->Name = L"Tabl";
			this->Tabl->ReadOnly = true;
			this->Tabl->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			this->Tabl->RowTemplate->Height = 24;
			this->Tabl->Size = System::Drawing::Size(306, 131);
			this->Tabl->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(334, 75);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(306, 22);
			this->textBox1->TabIndex = 8;
			// 
			// num1
			// 
			this->num1->Location = System::Drawing::Point(334, 33);
			this->num1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(55, 22);
			this->num1->TabIndex = 9;
			this->num1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(35, 128);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Введенная матрица";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(914, 545);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Tabl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->lable3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Программа";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Tabl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->num1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void show(int N, int **Matrix)//функция вывода матрицы
		{
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					Tabl->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);//вывод номера столбцов
					Tabl->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);//вывод номера строк
					Tabl->Rows[i]-> Cells[j]->Value = Matrix[i][j];//заполнение ячеек
				}
			}
		}//show
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		num3->Text = "";//очистка строки вывода
		int N;//размер матрицы
		//переменные циклов
		int i = 0;
		int j = 0;
		int k = 0;
		int ErrCode = 0;//переменная ошибки
		int start = 0;//начальная вершина
		int countNS = 1;//кол-во вершин в пути(сразу учитываем начальную)
		int countS = 0;// переменная для произведения в матрице А
		int countNE = 0;//переменная для минимального элемента матрицы А
		int count = 0;// кол-во единиц в матрице
		N = System::Convert::ToInt16(num1->Value);//получаем значение
		//объявление динамического массива
		int **Matrix = new int*[N];
		for (i = 0; i < N; i++)
			Matrix[i] = new int[N];
		//заполнение массива
		for (i = 0; i < (N); i++)
		{
			for (j = 0; j < (N); j++)
			{
				if (sizeof(textBox1->Text)<(N*N))
				{
					Error4^ E4 = gcnew Error4();//указатель на окно
					E4->ShowDialog();//вызываем окно ошибки
					break;
				}
				Matrix[i][j] = System::Convert::ToInt16(textBox1->Text[k]) - 48;//вычитаем 48, т.к. при считывание записывается
				                                                                //не численное значение символа, а его юникод.(48-код "0")
				if (Matrix[i][j] != 0)//проверка на корректность
				{
					if (Matrix[i][j] != 1)
					{
						Error2^ E2 = gcnew Error2();//указатель на окно
						E2->ShowDialog();//вызываем окно ошибки
						break;
					}//if
				}//if
				k=k+1;
			}//for j
		}//for i
		Tabl->ColumnCount = N;//создаем столбцы матрицы
		Tabl->RowCount = N;//создаем строки
		show(N, Matrix);//выводим матрицу
		//упорядочиваем строки и столбцы
		Tabl->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		Tabl->AutoResizeColumns();
		int *Array = new int[N + 1];//объявление динамического массива вершин пути
		ErrCode = checkForEulerPath(Matrix, N, countS, countNE, start, count);//проверка на путь
		if (ErrCode != 0)
		{
			Error^ error = gcnew Error();//указатель на окно
			error->ShowDialog();//вызываем окно ошибки
		}//if
		countNS = (count + 2) / 2;//кол-во вершин в пути
		if (countNS > N)//если превосходит изначальный размер
			Array = new int[countNS];
		ErrCode=searchEulerPath(Matrix, N, start, countNS, Array);//поиск пути
		if (ErrCode != 0)
		{
			Error3^ E3 = gcnew Error3();//указатель на окно
			E3->ShowDialog();//вызываем окно ошибки
		}
		for (i = 0; i < countNS; i++)//выводим путь
		{
			num3->Text = num3->Text + System::Convert::ToString(Array[i]);
			num3->Text = num3->Text + System::Convert::ToString(" ");
		}
	
	}
	};
}