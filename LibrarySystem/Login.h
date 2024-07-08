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
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ Cbox_Module;
	private: System::Windows::Forms::TextBox^ Txt_Password;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Txt_Username;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ btnContinue;
	private: System::Windows::Forms::Button^ Btn_Clear;

	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ linkReg;
	private: System::Windows::Forms::Button^ Btn_Exit;






	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Cbox_Module = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Txt_Username = (gcnew System::Windows::Forms::TextBox());
			this->Txt_Password = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnContinue = (gcnew System::Windows::Forms::Button());
			this->Btn_Clear = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkReg = (gcnew System::Windows::Forms::LinkLabel());
			this->Btn_Exit = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(45, 84);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(350, 350);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Linen;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(453, 489);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(618, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 54);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Login";
			// 
			// Cbox_Module
			// 
			this->Cbox_Module->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cbox_Module->FormattingEnabled = true;
			this->Cbox_Module->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Student", L"Admin" });
			this->Cbox_Module->Location = System::Drawing::Point(526, 153);
			this->Cbox_Module->Name = L"Cbox_Module";
			this->Cbox_Module->Size = System::Drawing::Size(321, 31);
			this->Cbox_Module->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(520, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 34);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Module";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Location = System::Drawing::Point(520, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(166, 34);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Username";
			// 
			// Txt_Username
			// 
			this->Txt_Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Username->Location = System::Drawing::Point(526, 254);
			this->Txt_Username->Name = L"Txt_Username";
			this->Txt_Username->Size = System::Drawing::Size(321, 30);
			this->Txt_Username->TabIndex = 5;
			// 
			// Txt_Password
			// 
			this->Txt_Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_Password->Location = System::Drawing::Point(526, 350);
			this->Txt_Password->Name = L"Txt_Password";
			this->Txt_Password->Size = System::Drawing::Size(321, 30);
			this->Txt_Password->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label4->Location = System::Drawing::Point(520, 302);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 34);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Password";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(548, 396);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Don\'t Have An Account\?";
			// 
			// btnContinue
			// 
			this->btnContinue->BackColor = System::Drawing::Color::Linen;
			this->btnContinue->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnContinue->ForeColor = System::Drawing::Color::SaddleBrown;
			this->btnContinue->Location = System::Drawing::Point(758, 440);
			this->btnContinue->Name = L"btnContinue";
			this->btnContinue->Size = System::Drawing::Size(89, 32);
			this->btnContinue->TabIndex = 11;
			this->btnContinue->Text = L"Login";
			this->btnContinue->UseVisualStyleBackColor = false;
			this->btnContinue->Click += gcnew System::EventHandler(this, &Login::btnContinue_Click);
			// 
			// Btn_Clear
			// 
			this->Btn_Clear->BackColor = System::Drawing::Color::Linen;
			this->Btn_Clear->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Clear->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Clear->Location = System::Drawing::Point(526, 439);
			this->Btn_Clear->Name = L"Btn_Clear";
			this->Btn_Clear->Size = System::Drawing::Size(89, 32);
			this->Btn_Clear->TabIndex = 12;
			this->Btn_Clear->Text = L"Clear";
			this->Btn_Clear->UseVisualStyleBackColor = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->Location = System::Drawing::Point(0, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(100, 23);
			this->linkLabel1->TabIndex = 0;
			// 
			// linkReg
			// 
			this->linkReg->AutoSize = true;
			this->linkReg->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkReg->LinkColor = System::Drawing::Color::SaddleBrown;
			this->linkReg->Location = System::Drawing::Point(731, 396);
			this->linkReg->Name = L"linkReg";
			this->linkReg->Size = System::Drawing::Size(70, 17);
			this->linkReg->TabIndex = 13;
			this->linkReg->TabStop = true;
			this->linkReg->Text = L"Register";
			this->linkReg->VisitedLinkColor = System::Drawing::Color::Tomato;
			this->linkReg->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::linkReg_LinkClicked);
			// 
			// Btn_Exit
			// 
			this->Btn_Exit->BackColor = System::Drawing::Color::Bisque;
			this->Btn_Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Btn_Exit->FlatAppearance->BorderSize = 0;
			this->Btn_Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Exit->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Exit->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Exit.Image")));
			this->Btn_Exit->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Btn_Exit->Location = System::Drawing::Point(859, 3);
			this->Btn_Exit->Name = L"Btn_Exit";
			this->Btn_Exit->Padding = System::Windows::Forms::Padding(15, 0, 10, 0);
			this->Btn_Exit->Size = System::Drawing::Size(61, 42);
			this->Btn_Exit->TabIndex = 14;
			this->Btn_Exit->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Btn_Exit->UseVisualStyleBackColor = false;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(918, 513);
			this->Controls->Add(this->Btn_Exit);
			this->Controls->Add(this->linkReg);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->Btn_Clear);
			this->Controls->Add(this->btnContinue);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Txt_Password);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Txt_Username);
			this->Controls->Add(this->Cbox_Module);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: System::Void btnContinue_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void linkReg_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	this->Hide();
	Register^ obj1 = gcnew Register(this);
	obj1->Show();
}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
