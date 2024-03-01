#pragma once

namespace Project2 {

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

	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Button^ button_delen;
	private: System::Windows::Forms::Button^ button_ymno;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button_ravno;


	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button_plus;

	private: System::Windows::Forms::Button^ button_minys;
	private: System::Windows::Forms::Button^ button_dobl;


	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button_cler;

	private:float first_num;
	private:char user_action=' ';
	private:bool is_equal=false;
	private: System::Windows::Forms::Button^ otre;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_delen = (gcnew System::Windows::Forms::Button());
			this->button_ymno = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button_ravno = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_minys = (gcnew System::Windows::Forms::Button());
			this->button_dobl = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button_cler = (gcnew System::Windows::Forms::Button());
			this->otre = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::SystemColors::Highlight;
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_exit->Location = System::Drawing::Point(12, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(42, 31);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(24, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 50);
			this->label1->TabIndex = 1;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button_delen
			// 
			this->button_delen->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_delen->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_delen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_delen->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_delen->Location = System::Drawing::Point(231, 110);
			this->button_delen->Name = L"button_delen";
			this->button_delen->Size = System::Drawing::Size(67, 65);
			this->button_delen->TabIndex = 3;
			this->button_delen->Text = L"/";
			this->button_delen->UseVisualStyleBackColor = false;
			this->button_delen->Click += gcnew System::EventHandler(this, &MyForm::button_delen_Click);
			// 
			// button_ymno
			// 
			this->button_ymno->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_ymno->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_ymno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ymno->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_ymno->Location = System::Drawing::Point(231, 181);
			this->button_ymno->Name = L"button_ymno";
			this->button_ymno->Size = System::Drawing::Size(67, 65);
			this->button_ymno->TabIndex = 4;
			this->button_ymno->Text = L"*";
			this->button_ymno->UseVisualStyleBackColor = false;
			this->button_ymno->Click += gcnew System::EventHandler(this, &MyForm::button_ymno_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(12, 181);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 65);
			this->button4->TabIndex = 5;
			this->button4->Text = L"7";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::buttonNambe_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(85, 181);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(67, 65);
			this->button5->TabIndex = 6;
			this->button5->Text = L"8";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::buttonNambe_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Location = System::Drawing::Point(158, 181);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(67, 65);
			this->button6->TabIndex = 7;
			this->button6->Text = L"9";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttonNambe_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(12, 252);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(67, 65);
			this->button7->TabIndex = 8;
			this->button7->Text = L"4";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttonNambe_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(85, 252);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(67, 65);
			this->button8->TabIndex = 9;
			this->button8->Text = L"5";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::buttonNambe_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(158, 323);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(67, 65);
			this->button9->TabIndex = 10;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::buttonNambe_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Location = System::Drawing::Point(12, 323);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(67, 65);
			this->button10->TabIndex = 11;
			this->button10->Text = L"1";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::buttonNambe_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Location = System::Drawing::Point(85, 323);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(67, 65);
			this->button11->TabIndex = 12;
			this->button11->Text = L"2";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::buttonNambe_Click);
			// 
			// button_ravno
			// 
			this->button_ravno->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_ravno->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_ravno->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_ravno->Location = System::Drawing::Point(231, 394);
			this->button_ravno->Name = L"button_ravno";
			this->button_ravno->Size = System::Drawing::Size(67, 65);
			this->button_ravno->TabIndex = 13;
			this->button_ravno->Text = L"=";
			this->button_ravno->UseVisualStyleBackColor = false;
			this->button_ravno->Click += gcnew System::EventHandler(this, &MyForm::button_ravno_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Location = System::Drawing::Point(158, 252);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(67, 65);
			this->button13->TabIndex = 14;
			this->button13->Text = L"6";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::buttonNambe_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_plus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_plus->Location = System::Drawing::Point(231, 323);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(67, 65);
			this->button_plus->TabIndex = 15;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button_minys
			// 
			this->button_minys->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->button_minys->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_minys->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_minys->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_minys->Location = System::Drawing::Point(231, 252);
			this->button_minys->Name = L"button_minys";
			this->button_minys->Size = System::Drawing::Size(67, 65);
			this->button_minys->TabIndex = 16;
			this->button_minys->Text = L"-";
			this->button_minys->UseVisualStyleBackColor = false;
			this->button_minys->Click += gcnew System::EventHandler(this, &MyForm::button_minys_Click);
			// 
			// button_dobl
			// 
			this->button_dobl->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button_dobl->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_dobl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_dobl->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_dobl->Location = System::Drawing::Point(158, 392);
			this->button_dobl->Name = L"button_dobl";
			this->button_dobl->Size = System::Drawing::Size(67, 65);
			this->button_dobl->TabIndex = 17;
			this->button_dobl->Text = L",";
			this->button_dobl->UseVisualStyleBackColor = false;
			this->button_dobl->Click += gcnew System::EventHandler(this, &MyForm::button_dobl_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button17->Location = System::Drawing::Point(12, 392);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(140, 65);
			this->button17->TabIndex = 18;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::buttonNambe_Click);
			// 
			// button_cler
			// 
			this->button_cler->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button_cler->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_cler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_cler->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button_cler->Location = System::Drawing::Point(12, 110);
			this->button_cler->Name = L"button_cler";
			this->button_cler->Size = System::Drawing::Size(67, 65);
			this->button_cler->TabIndex = 19;
			this->button_cler->Text = L"C";
			this->button_cler->UseVisualStyleBackColor = false;
			this->button_cler->Click += gcnew System::EventHandler(this, &MyForm::button_cler_Click);
			// 
			// otre
			// 
			this->otre->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->otre->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->otre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->otre->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->otre->Location = System::Drawing::Point(85, 110);
			this->otre->Name = L"otre";
			this->otre->Size = System::Drawing::Size(140, 65);
			this->otre->TabIndex = 20;
			this->otre->Text = L"+/-";
			this->otre->UseVisualStyleBackColor = false;
			this->otre->Click += gcnew System::EventHandler(this, &MyForm::otre_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(313, 469);
			this->Controls->Add(this->otre);
			this->Controls->Add(this->button_cler);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button_dobl);
			this->Controls->Add(this->button_minys);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button_ravno);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button_ymno);
			this->Controls->Add(this->button_delen);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"calculator";
			this->ResumeLayout(false);

		}



#pragma endregion

	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
		   private: System::Void buttonNambe_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   this->label1->ForeColor = Color::White;
			   Button^ button = safe_cast<Button^>(sender);

			   if (this->label1->Text == "0"||is_equal)
			   {
				   this->label1->Text = button->Text;
				   is_equal = false;
			   }
			   else
			   {
				   this->label1->Text = this->label1->Text + button->Text;
			   }
		   }

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) 
	{}
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		math_action('+');
	}
private: System::Void button_minys_Click(System::Object^ sender, System::EventArgs^ e)
{
	math_action('-');
}
private: System::Void button_ymno_Click(System::Object^ sender, System::EventArgs^ e) 
{
	math_action('*');
}
private: System::Void button_delen_Click(System::Object^ sender, System::EventArgs^ e) 
{
	math_action('/');
}

	private: System::Void math_action(char action)
	{
		this->first_num =System::Convert::ToDouble(this->label1->Text);
		this->user_action = action;
		this->label1->Text = "0";
	}
private: System::Void button_ravno_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (user_action == ' ')
		return;
	
	float second = System::Convert::ToDouble(this->label1->Text);
	float res;
	switch (this->user_action)
	{
	case'+':res = this->first_num + second; break;
	case'-':res = this->first_num - second; break;
	case'*':res = this->first_num * second; break;
	case'/': 
		if (second == 0)
		{
			this->label1->ForeColor = Color::Red;
			res = 0;

			MessageBox::Show(this, "ƒействие невозможно","Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
			res = this->first_num / second;
		break;
	}
	this->is_equal = true;
	this->label1->Text = System::Convert::ToString(res);
}
private: System::Void button_cler_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->label1->Text = "0";
	this->label1->ForeColor = Color::White;
	this->first_num = 0;
	this->user_action = ' ';
	is_equal = false;

}
private: System::Void otre_Click(System::Object^ sender, System::EventArgs^ e) 
{
	float num = System::Convert::ToDouble(this->label1->Text);
	num *= -1;
	this->label1->Text = Convert::ToString(num);
}
private: System::Void button_dobl_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ text = this->label1->Text;
	if(!text->Contains(","))
	this->label1->Text = this->label1->Text + ",";
}
private: System::Void button_coren_Click(System::Object^ sender, System::EventArgs^ e) 
{
}

};
}
