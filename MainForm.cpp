#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;
//запускаем приложение, вызываем окно;программа завершается по завершению работы приложения(закрытие пользователем или ошибка)
void Main(array< String ^> ^ args) 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project5::MyForm form;
	Application::Run(%form);
}
