#pragma once

namespace ClassFramework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_clon;
	protected:

	private: System::Windows::Forms::Button^ button_main;



	protected:

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::CheckBox^ checkBox;
	private: System::Windows::Forms::TextBox^ textBox;



	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label_clon = (gcnew System::Windows::Forms::Label());
			this->button_main = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox = (gcnew System::Windows::Forms::CheckBox());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label_clon
			// 
			this->label_clon->AutoSize = true;
			this->label_clon->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label_clon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label_clon->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label_clon->Location = System::Drawing::Point(12, 9);
			this->label_clon->Name = L"label_clon";
			this->label_clon->Size = System::Drawing::Size(51, 20);
			this->label_clon->TabIndex = 0;
			this->label_clon->Text = L"label1";
			// 
			// button_main
			// 
			this->button_main->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_main->Location = System::Drawing::Point(16, 50);
			this->button_main->Name = L"button_main";
			this->button_main->Size = System::Drawing::Size(200, 39);
			this->button_main->TabIndex = 1;
			this->button_main->Text = L"нажми мен€";
			this->button_main->UseVisualStyleBackColor = true;
			this->button_main->Click += gcnew System::EventHandler(this, &MyForm::button_main_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 103);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(126, 24);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// checkBox
			// 
			this->checkBox->AutoSize = true;
			this->checkBox->Location = System::Drawing::Point(16, 133);
			this->checkBox->Name = L"checkBox";
			this->checkBox->Size = System::Drawing::Size(113, 24);
			this->checkBox->TabIndex = 3;
			this->checkBox->Text = L"checkBox1";
			this->checkBox->UseVisualStyleBackColor = true;
			this->checkBox->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_CheckedChanged);
			// 
			// textBox
			// 
			this->textBox->Location = System::Drawing::Point(16, 212);
			this->textBox->Name = L"textBox";
			this->textBox->Size = System::Drawing::Size(100, 26);
			this->textBox->TabIndex = 4;
			this->textBox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(607, 560);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->checkBox);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button_main);
			this->Controls->Add(this->label_clon);
			this->Name = L"MyForm";
			this->Text = L"MyFormCloud";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_main_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label_clon->Text = "Some new";
	}
private: System::Void checkBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//окно, размер, изменить
	if (this->checkBox->Checked)
		this->button_main->Width = 300;
	else
		this->button_main->Width = 200;

}

private: System::Void textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//кнопка, цвет, изменить через ввод в поле текста
	if (this->textBox->Text == "Blue")
		this->button_main->BackColor = Color::Blue;
	else if (this->textBox->Text == "Red")
		this->button_main->BackColor = Color::Red;
}
};
}
