#pragma once
#include "Register.h"


namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Register(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		
		Register(Form^ obj1) {
			obj = obj1;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Txt_Fname;
	private: System::Windows::Forms::TextBox^ Txt_Lname;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Txt_Studentno;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ Dtp_Bdate;




	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Txt_Cpass;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Button^ btnBack;








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Txt_Fname = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Lname = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Txt_Studentno = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Dtp_Bdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Txt_Cpass = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Linen;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(466, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(440, 489);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(56, 70);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(350, 362);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(134, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 54);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Register";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(23, 164);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 23);
			this->label2->TabIndex = 10;
			this->label2->Text = L"First Name";
			// 
			// Txt_Fname
			// 
			this->Txt_Fname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Fname->Location = System::Drawing::Point(27, 190);
			this->Txt_Fname->Name = L"Txt_Fname";
			this->Txt_Fname->Size = System::Drawing::Size(195, 30);
			this->Txt_Fname->TabIndex = 15;
			// 
			// Txt_Lname
			// 
			this->Txt_Lname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Lname->Location = System::Drawing::Point(242, 190);
			this->Txt_Lname->Name = L"Txt_Lname";
			this->Txt_Lname->Size = System::Drawing::Size(195, 30);
			this->Txt_Lname->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label5->Location = System::Drawing::Point(238, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 23);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Last Name";
			// 
			// Txt_Studentno
			// 
			this->Txt_Studentno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Studentno->Location = System::Drawing::Point(27, 268);
			this->Txt_Studentno->Name = L"Txt_Studentno";
			this->Txt_Studentno->Size = System::Drawing::Size(195, 30);
			this->Txt_Studentno->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Location = System::Drawing::Point(23, 242);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(170, 23);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Student Number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label4->Location = System::Drawing::Point(238, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(101, 23);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Birthdate";
			// 
			// Dtp_Bdate
			// 
			this->Dtp_Bdate->CustomFormat = L"yyyy-MM-dd";
			this->Dtp_Bdate->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dtp_Bdate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->Dtp_Bdate->Location = System::Drawing::Point(242, 268);
			this->Dtp_Bdate->Name = L"Dtp_Bdate";
			this->Dtp_Bdate->Size = System::Drawing::Size(195, 31);
			this->Dtp_Bdate->TabIndex = 26;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(27, 343);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(195, 30);
			this->textBox2->TabIndex = 28;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label6->Location = System::Drawing::Point(23, 317);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 23);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Password";
			// 
			// Txt_Cpass
			// 
			this->Txt_Cpass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Cpass->Location = System::Drawing::Point(242, 343);
			this->Txt_Cpass->Name = L"Txt_Cpass";
			this->Txt_Cpass->Size = System::Drawing::Size(195, 30);
			this->Txt_Cpass->TabIndex = 30;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label7->Location = System::Drawing::Point(238, 317);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(190, 23);
			this->label7->TabIndex = 29;
			this->label7->Text = L"Confirm Password";
			// 
			// btnRegister
			// 
			this->btnRegister->BackColor = System::Drawing::Color::Linen;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::Color::SaddleBrown;
			this->btnRegister->Location = System::Drawing::Point(104, 428);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(280, 32);
			this->btnRegister->TabIndex = 31;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = false;
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::Bisque;
			this->btnBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnBack->FlatAppearance->BorderSize = 0;
			this->btnBack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::Color::SaddleBrown;
			this->btnBack->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBack.Image")));
			this->btnBack->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnBack->Location = System::Drawing::Point(-3, 0);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Padding = System::Windows::Forms::Padding(10);
			this->btnBack->Size = System::Drawing::Size(67, 55);
			this->btnBack->TabIndex = 33;
			this->btnBack->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnBack->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &Register::btnBack_Click);
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(918, 513);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->Txt_Cpass);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Dtp_Bdate);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Txt_Studentno);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Txt_Lname);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Txt_Fname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Register";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void Register_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {

	this->Hide();
	obj->Show();
}
};
}
