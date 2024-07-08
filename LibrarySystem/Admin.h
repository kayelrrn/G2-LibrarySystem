#pragma once
#include "AdminDB.h"
#include "AdminView.h"
#include "AdminAdd.h"

namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
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
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;












	private: System::Windows::Forms::Label^ label7;
















	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Button^ btnDashboard;
	private: System::Windows::Forms::Button^ btnView;
	private: System::Windows::Forms::Button^ btnAdd;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Panel^ Panel_Db;
	private: System::Windows::Forms::PictureBox^ Pb_Exit;



	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Admin::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btnView = (gcnew System::Windows::Forms::Button());
			this->btnDashboard = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Pb_Exit = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Panel_Db = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Exit))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(201, 607);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->btnAdd);
			this->panel3->Controls->Add(this->panel4);
			this->panel3->Controls->Add(this->btnView);
			this->panel3->Controls->Add(this->btnDashboard);
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(204, 607);
			this->panel3->TabIndex = 5;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::NavajoWhite;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(0, 543);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(15, 0, 10, 0);
			this->button5->Size = System::Drawing::Size(201, 52);
			this->button5->TabIndex = 10;
			this->button5->Text = L" Logout";
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::NavajoWhite;
			this->btnAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::SaddleBrown;
			this->btnAdd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAdd.Image")));
			this->btnAdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAdd->Location = System::Drawing::Point(-3, 269);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Padding = System::Windows::Forms::Padding(15, 0, 10, 0);
			this->btnAdd->Size = System::Drawing::Size(206, 52);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L" Add Book";
			this->btnAdd->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Admin::btnAdd_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::BurlyWood;
			this->panel4->Controls->Add(this->label8);
			this->panel4->Location = System::Drawing::Point(0, 71);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(203, 57);
			this->panel4->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(28, 17);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(149, 23);
			this->label8->TabIndex = 5;
			this->label8->Text = L"ADMIN PANEL";
			// 
			// btnView
			// 
			this->btnView->BackColor = System::Drawing::Color::NavajoWhite;
			this->btnView->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnView->FlatAppearance->BorderSize = 0;
			this->btnView->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnView->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnView->ForeColor = System::Drawing::Color::SaddleBrown;
			this->btnView->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnView.Image")));
			this->btnView->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnView->Location = System::Drawing::Point(-3, 216);
			this->btnView->Name = L"btnView";
			this->btnView->Padding = System::Windows::Forms::Padding(15, 0, 10, 0);
			this->btnView->Size = System::Drawing::Size(207, 58);
			this->btnView->TabIndex = 5;
			this->btnView->Text = L" View Book";
			this->btnView->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnView->UseVisualStyleBackColor = false;
			this->btnView->Click += gcnew System::EventHandler(this, &Admin::btnView_Click);
			// 
			// btnDashboard
			// 
			this->btnDashboard->BackColor = System::Drawing::Color::NavajoWhite;
			this->btnDashboard->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnDashboard->FlatAppearance->BorderSize = 0;
			this->btnDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDashboard->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDashboard->ForeColor = System::Drawing::Color::SaddleBrown;
			this->btnDashboard->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnDashboard.Image")));
			this->btnDashboard->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDashboard->Location = System::Drawing::Point(-3, 158);
			this->btnDashboard->Name = L"btnDashboard";
			this->btnDashboard->Padding = System::Windows::Forms::Padding(20, 10, 10, 10);
			this->btnDashboard->Size = System::Drawing::Size(204, 60);
			this->btnDashboard->TabIndex = 2;
			this->btnDashboard->Text = L"  Dashboard";
			this->btnDashboard->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDashboard->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnDashboard->UseVisualStyleBackColor = false;
			this->btnDashboard->Click += gcnew System::EventHandler(this, &Admin::btnDashboard_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(0, 0);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(201, 71);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 3;
			this->pictureBox6->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(108)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->label2->Location = System::Drawing::Point(73, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Dashboard";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(21, 138);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(49, 37);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel2->Controls->Add(this->Pb_Exit);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(201, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(880, 71);
			this->panel2->TabIndex = 1;
			// 
			// Pb_Exit
			// 
			this->Pb_Exit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pb_Exit.BackgroundImage")));
			this->Pb_Exit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Pb_Exit->Location = System::Drawing::Point(824, 12);
			this->Pb_Exit->Name = L"Pb_Exit";
			this->Pb_Exit->Size = System::Drawing::Size(44, 41);
			this->Pb_Exit->TabIndex = 10;
			this->Pb_Exit->TabStop = false;
			this->Pb_Exit->Click += gcnew System::EventHandler(this, &Admin::Pb_Exit_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label7->Location = System::Drawing::Point(189, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(477, 38);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Library Management System";
			// 
			// Panel_Db
			// 
			this->Panel_Db->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Panel_Db->Location = System::Drawing::Point(201, 71);
			this->Panel_Db->Name = L"Panel_Db";
			this->Panel_Db->Size = System::Drawing::Size(880, 536);
			this->Panel_Db->TabIndex = 2;
			this->Panel_Db->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Admin::Panel_Db_Paint);
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(1081, 607);
			this->Controls->Add(this->Panel_Db);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Admin";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Pb_Exit))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void Panel_Db_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	AdminDB^ Dboard = gcnew AdminDB();
	Dboard->TopLevel = false;
	this->Panel_Db->Controls->Add(Dboard);
	Dboard->Show();

}
private: System::Void btnDashboard_Click(System::Object^ sender, System::EventArgs^ e) {
	Panel_Db->Controls->Clear();
}
private: System::Void btnView_Click(System::Object^ sender, System::EventArgs^ e) {
	Panel_Db->Controls->Clear();
	AdminView^ View = gcnew AdminView();
	View->TopLevel = false;
	this->Panel_Db->Controls->Add(View);
	View->Show();
}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	Panel_Db->Controls->Clear();
	AdminAdd^ Add = gcnew AdminAdd();
	Add->TopLevel = false;
	this->Panel_Db->Controls->Add(Add);
	Add->Show();
}
private: System::Void Pb_Exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}

