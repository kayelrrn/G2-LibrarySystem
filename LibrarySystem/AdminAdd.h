#pragma once

namespace LibrarySystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminAdd
	/// </summary>
	public ref class AdminAdd : public System::Windows::Forms::Form
	{
	public:
		AdminAdd(void)
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
		~AdminAdd()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ Txt_BookID;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Txt_BookTitle;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ Txt_BookAuthor;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Txt_PYear;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ Cbox_Status;
	private: System::Windows::Forms::Button^ Btn_Add;
	private: System::Windows::Forms::Button^ Btn_Update;
	private: System::Windows::Forms::Button^ Btn_Delete;
	private: System::Windows::Forms::Button^ Btn_Clear;
	private: System::Windows::Forms::DataGridView^ Dtable_Books;
	private: System::Windows::Forms::ComboBox^ Cbox_Genre;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;






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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Txt_BookID = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Txt_BookTitle = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Txt_BookAuthor = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Txt_PYear = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Cbox_Status = (gcnew System::Windows::Forms::ComboBox());
			this->Btn_Add = (gcnew System::Windows::Forms::Button());
			this->Btn_Update = (gcnew System::Windows::Forms::Button());
			this->Btn_Delete = (gcnew System::Windows::Forms::Button());
			this->Btn_Clear = (gcnew System::Windows::Forms::Button());
			this->Dtable_Books = (gcnew System::Windows::Forms::DataGridView());
			this->Cbox_Genre = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dtable_Books))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label2->Location = System::Drawing::Point(41, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 27);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Genre:";
			// 
			// Txt_BookID
			// 
			this->Txt_BookID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_BookID->Location = System::Drawing::Point(159, 93);
			this->Txt_BookID->Name = L"Txt_BookID";
			this->Txt_BookID->Size = System::Drawing::Size(204, 30);
			this->Txt_BookID->TabIndex = 32;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(41, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 27);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Book ID:";
			// 
			// Txt_BookTitle
			// 
			this->Txt_BookTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_BookTitle->Location = System::Drawing::Point(624, 44);
			this->Txt_BookTitle->Name = L"Txt_BookTitle";
			this->Txt_BookTitle->Size = System::Drawing::Size(204, 30);
			this->Txt_BookTitle->TabIndex = 34;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label3->Location = System::Drawing::Point(411, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 27);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Book Title:";
			// 
			// Txt_BookAuthor
			// 
			this->Txt_BookAuthor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_BookAuthor->Location = System::Drawing::Point(624, 93);
			this->Txt_BookAuthor->Name = L"Txt_BookAuthor";
			this->Txt_BookAuthor->Size = System::Drawing::Size(204, 30);
			this->Txt_BookAuthor->TabIndex = 36;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label4->Location = System::Drawing::Point(414, 96);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(160, 27);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Book Author:";
			// 
			// Txt_PYear
			// 
			this->Txt_PYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Txt_PYear->Location = System::Drawing::Point(624, 142);
			this->Txt_PYear->Name = L"Txt_PYear";
			this->Txt_PYear->Size = System::Drawing::Size(204, 30);
			this->Txt_PYear->TabIndex = 38;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label5->Location = System::Drawing::Point(416, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(202, 27);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Publication Year:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label6->Location = System::Drawing::Point(41, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 27);
			this->label6->TabIndex = 39;
			this->label6->Text = L"Status:";
			// 
			// Cbox_Status
			// 
			this->Cbox_Status->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cbox_Status->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cbox_Status->FormattingEnabled = true;
			this->Cbox_Status->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->Cbox_Status->Location = System::Drawing::Point(159, 196);
			this->Cbox_Status->Name = L"Cbox_Status";
			this->Cbox_Status->Size = System::Drawing::Size(204, 28);
			this->Cbox_Status->TabIndex = 40;
			// 
			// Btn_Add
			// 
			this->Btn_Add->BackColor = System::Drawing::Color::Linen;
			this->Btn_Add->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Add->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Add->Location = System::Drawing::Point(391, 197);
			this->Btn_Add->Name = L"Btn_Add";
			this->Btn_Add->Size = System::Drawing::Size(100, 40);
			this->Btn_Add->TabIndex = 41;
			this->Btn_Add->Text = L"ADD";
			this->Btn_Add->UseVisualStyleBackColor = false;
			// 
			// Btn_Update
			// 
			this->Btn_Update->BackColor = System::Drawing::Color::Linen;
			this->Btn_Update->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Update->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Update->Location = System::Drawing::Point(518, 197);
			this->Btn_Update->Name = L"Btn_Update";
			this->Btn_Update->Size = System::Drawing::Size(100, 40);
			this->Btn_Update->TabIndex = 42;
			this->Btn_Update->Text = L"UPDATE";
			this->Btn_Update->UseVisualStyleBackColor = false;
			// 
			// Btn_Delete
			// 
			this->Btn_Delete->BackColor = System::Drawing::Color::Linen;
			this->Btn_Delete->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Delete->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Delete->Location = System::Drawing::Point(633, 197);
			this->Btn_Delete->Name = L"Btn_Delete";
			this->Btn_Delete->Size = System::Drawing::Size(100, 40);
			this->Btn_Delete->TabIndex = 43;
			this->Btn_Delete->Text = L"DELETE";
			this->Btn_Delete->UseVisualStyleBackColor = false;
			// 
			// Btn_Clear
			// 
			this->Btn_Clear->BackColor = System::Drawing::Color::Linen;
			this->Btn_Clear->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Clear->ForeColor = System::Drawing::Color::SaddleBrown;
			this->Btn_Clear->Location = System::Drawing::Point(748, 197);
			this->Btn_Clear->Name = L"Btn_Clear";
			this->Btn_Clear->Size = System::Drawing::Size(100, 40);
			this->Btn_Clear->TabIndex = 44;
			this->Btn_Clear->Text = L"CLEAR";
			this->Btn_Clear->UseVisualStyleBackColor = false;
			// 
			// Dtable_Books
			// 
			this->Dtable_Books->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Dtable_Books->Location = System::Drawing::Point(29, 271);
			this->Dtable_Books->Name = L"Dtable_Books";
			this->Dtable_Books->RowHeadersWidth = 51;
			this->Dtable_Books->RowTemplate->Height = 24;
			this->Dtable_Books->Size = System::Drawing::Size(819, 243);
			this->Dtable_Books->TabIndex = 45;
			// 
			// Cbox_Genre
			// 
			this->Cbox_Genre->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cbox_Genre->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cbox_Genre->FormattingEnabled = true;
			this->Cbox_Genre->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->Cbox_Genre->Location = System::Drawing::Point(159, 48);
			this->Cbox_Genre->Name = L"Cbox_Genre";
			this->Cbox_Genre->Size = System::Drawing::Size(204, 28);
			this->Cbox_Genre->TabIndex = 46;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(159, 145);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(204, 30);
			this->textBox1->TabIndex = 48;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label7->Location = System::Drawing::Point(41, 147);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 27);
			this->label7->TabIndex = 47;
			this->label7->Text = L"Quantity:";
			// 
			// AdminAdd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(880, 536);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Cbox_Genre);
			this->Controls->Add(this->Dtable_Books);
			this->Controls->Add(this->Btn_Clear);
			this->Controls->Add(this->Btn_Delete);
			this->Controls->Add(this->Btn_Update);
			this->Controls->Add(this->Btn_Add);
			this->Controls->Add(this->Cbox_Status);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Txt_PYear);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Txt_BookAuthor);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Txt_BookTitle);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Txt_BookID);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminAdd";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminAdd";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Dtable_Books))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
