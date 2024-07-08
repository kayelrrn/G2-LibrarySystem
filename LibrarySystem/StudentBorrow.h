#pragma once

namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentBorrow
	/// </summary>
	public ref class StudentBorrow : public System::Windows::Forms::Form
	{
	public:
		StudentBorrow(void)
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
		~StudentBorrow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button6;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label7;




	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ Btn_Borrow;


	private: System::DirectoryServices::DirectorySearcher^ directorySearcher1;






	private: System::Windows::Forms::ComboBox^ Cbox_Genre;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ Lbl_BookTitle;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ Lbl_Year;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label8;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StudentBorrow::typeid));
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Btn_Borrow = (gcnew System::Windows::Forms::Button());
			this->directorySearcher1 = (gcnew System::DirectoryServices::DirectorySearcher());
			this->Cbox_Genre = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Lbl_BookTitle = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Lbl_Year = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::NavajoWhite;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button6->Location = System::Drawing::Point(841, 0);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(15, 0, 10, 0);
			this->button6->Size = System::Drawing::Size(58, 42);
			this->button6->TabIndex = 12;
			this->button6->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(201, 87);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(894, 82);
			this->panel2->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label7->Location = System::Drawing::Point(279, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(477, 38);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Library Management System";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(434, 107);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(435, 352);
			this->dataGridView1->TabIndex = 24;
			// 
			// Btn_Borrow
			// 
			this->Btn_Borrow->BackColor = System::Drawing::Color::Linen;
			this->Btn_Borrow->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Borrow->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Borrow->Location = System::Drawing::Point(146, 412);
			this->Btn_Borrow->Name = L"Btn_Borrow";
			this->Btn_Borrow->Size = System::Drawing::Size(106, 47);
			this->Btn_Borrow->TabIndex = 25;
			this->Btn_Borrow->Text = L"Borrow";
			this->Btn_Borrow->UseVisualStyleBackColor = false;
			// 
			// directorySearcher1
			// 
			this->directorySearcher1->ClientTimeout = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerPageTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			// 
			// Cbox_Genre
			// 
			this->Cbox_Genre->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cbox_Genre->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cbox_Genre->FormattingEnabled = true;
			this->Cbox_Genre->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->Cbox_Genre->Location = System::Drawing::Point(123, 166);
			this->Cbox_Genre->Name = L"Cbox_Genre";
			this->Cbox_Genre->Size = System::Drawing::Size(204, 28);
			this->Cbox_Genre->TabIndex = 50;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(23, 214);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 21);
			this->label1->TabIndex = 48;
			this->label1->Text = L"Book ID:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(23, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 21);
			this->label2->TabIndex = 47;
			this->label2->Text = L"Genre:";
			// 
			// comboBox1
			// 
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->comboBox1->Location = System::Drawing::Point(123, 207);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(204, 28);
			this->comboBox1->TabIndex = 51;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label5->Location = System::Drawing::Point(23, 368);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 21);
			this->label5->TabIndex = 54;
			this->label5->Text = L"Publication Year:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label4->Location = System::Drawing::Point(23, 332);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 21);
			this->label4->TabIndex = 53;
			this->label4->Text = L"Book Author:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Location = System::Drawing::Point(23, 294);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(105, 21);
			this->label3->TabIndex = 52;
			this->label3->Text = L"Book Title:";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Bisque;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button5->Location = System::Drawing::Point(11, 96);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(15, 0, 10, 0);
			this->button5->Size = System::Drawing::Size(55, 45);
			this->button5->TabIndex = 55;
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// Lbl_BookTitle
			// 
			this->Lbl_BookTitle->AutoSize = true;
			this->Lbl_BookTitle->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_BookTitle->Location = System::Drawing::Point(134, 297);
			this->Lbl_BookTitle->Name = L"Lbl_BookTitle";
			this->Lbl_BookTitle->Size = System::Drawing::Size(81, 17);
			this->Lbl_BookTitle->TabIndex = 56;
			this->Lbl_BookTitle->Text = L"Book Title";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(152, 335);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(100, 17);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Book Author";
			// 
			// Lbl_Year
			// 
			this->Lbl_Year->AutoSize = true;
			this->Lbl_Year->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Lbl_Year->Location = System::Drawing::Point(188, 371);
			this->Lbl_Year->Name = L"Lbl_Year";
			this->Lbl_Year->Size = System::Drawing::Size(127, 17);
			this->Lbl_Year->TabIndex = 58;
			this->Lbl_Year->Text = L"Publication Year";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(120, 253);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(207, 22);
			this->numericUpDown1->TabIndex = 59;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label8->Location = System::Drawing::Point(23, 254);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(91, 21);
			this->label8->TabIndex = 60;
			this->label8->Text = L"Quantity:";
			// 
			// StudentBorrow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(894, 489);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->Lbl_Year);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Lbl_BookTitle);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Cbox_Genre);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Btn_Borrow);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StudentBorrow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentBorrow";
			this->Load += gcnew System::EventHandler(this, &StudentBorrow::StudentBorrow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void StudentBorrow_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
