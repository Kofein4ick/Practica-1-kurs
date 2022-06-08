#pragma once
#include <cstdlib>
namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Error3
	/// </summary>
	public ref class Error3 : public System::Windows::Forms::Form
	{
	public:
		Error3(void)
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
		~Error3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(373, 34);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ошибка! Проверьте корректность матрицы смежности!\r\n(Нажмите OK)";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(382, 126);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Error3::button1_Click);
			// 
			// Error3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(519, 176);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Error3";
			this->Text = L"Error3";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		this->Close();//закрываем окно
		exit(3);//завершаем работу программы
	}
	};
}
