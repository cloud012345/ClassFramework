#include "MyForm.h"
//подключение пространств имен
using namespace System;
using namespace System::Windows::Forms;
//атрибуты для функций
//запуск функции mine в отдельном потоке данных
[STAThreadAttribute]
//стандартная функция + отдельный расширенный класс String(для работы со строками) 
int main(array<String^>^ args) {
//^ = спец символы; очистка данных
//args = название; аргументы
	//Свойства + методы описывеются при наведении курсора на элемент
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	//создать класс form
	ClassFramework::MyForm form;
	//передача по ссылке обекта form
	Application::Run(% form);

}
//Уроки C++ WinForms:
// 1. Разработка программы под Windows на C++ https://www.youtube.com/watch?v=TLqipry1o9s&t=303s
// 2. Создание Windows Формы https://www.youtube.com/watch?v=1N7DKMVtQEo
// 3. Добавление функционала к проекту https://www.youtube.com/watch?v=Fjl8F8WZw0I
// Просмотрено
// 4. Разработка калькулятора. Дизайн https://www.youtube.com/watch?v=mFSLjxEbW2w
// 5. Получение данных и их обработка https://www.youtube.com/watch?v=NJaqyH8AX_E
// 6. Обработка ошибок. Всплывающие окна https://www.youtube.com/watch?v=NhonkUGP2KE
// 7. Доработка всех функций https://www.youtube.com/watch?v=_SlYZDH_sD4
// 8. Заключительная часть https://www.youtube.com/watch?v=qsdCufQV7no