#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ RemoveMemberTB;
	protected:
	private: System::Windows::Forms::TextBox^ RemoveMemberLabel2;
	private: System::Windows::Forms::TextBox^ RemoveMemberLabel1;
	private: System::Windows::Forms::TextBox^ DisplaySalesTB;
	private: System::Windows::Forms::TextBox^ DisplayMembersTB;
	private: System::Windows::Forms::TextBox^ DisplayMembersOrSalesLabel;
	private: System::Windows::Forms::TextBox^ DateOfBirthTB;
	private: System::Windows::Forms::TextBox^ IDTB;
	private: System::Windows::Forms::TextBox^ AgeTB;
	private: System::Windows::Forms::TextBox^ SecondNameTB;
	private: System::Windows::Forms::TextBox^ FirstNameTB;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ExitBN;
	private: System::Windows::Forms::Button^ RemoveMemberBN;
	private: System::Windows::Forms::Button^ AddSalesBN;
	private: System::Windows::Forms::Button^ EditMemberBN;
	private: System::Windows::Forms::Button^ DoneBN;
	private: System::Windows::Forms::Button^ AddMemberBN;
	private: System::Windows::Forms::Button^ SearchMemberBN;
	private: System::Windows::Forms::Button^ DisplaySalesBN;
	private: System::Windows::Forms::Button^ DisplayMembersBN;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ EnterNewMemberLabel;
	private: System::Windows::Forms::TextBox^ textBox3;

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
			this->RemoveMemberTB = (gcnew System::Windows::Forms::TextBox());
			this->RemoveMemberLabel2 = (gcnew System::Windows::Forms::TextBox());
			this->RemoveMemberLabel1 = (gcnew System::Windows::Forms::TextBox());
			this->DisplaySalesTB = (gcnew System::Windows::Forms::TextBox());
			this->DisplayMembersTB = (gcnew System::Windows::Forms::TextBox());
			this->DisplayMembersOrSalesLabel = (gcnew System::Windows::Forms::TextBox());
			this->DateOfBirthTB = (gcnew System::Windows::Forms::TextBox());
			this->IDTB = (gcnew System::Windows::Forms::TextBox());
			this->AgeTB = (gcnew System::Windows::Forms::TextBox());
			this->SecondNameTB = (gcnew System::Windows::Forms::TextBox());
			this->FirstNameTB = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ExitBN = (gcnew System::Windows::Forms::Button());
			this->RemoveMemberBN = (gcnew System::Windows::Forms::Button());
			this->AddSalesBN = (gcnew System::Windows::Forms::Button());
			this->EditMemberBN = (gcnew System::Windows::Forms::Button());
			this->DoneBN = (gcnew System::Windows::Forms::Button());
			this->AddMemberBN = (gcnew System::Windows::Forms::Button());
			this->SearchMemberBN = (gcnew System::Windows::Forms::Button());
			this->DisplaySalesBN = (gcnew System::Windows::Forms::Button());
			this->DisplayMembersBN = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->EnterNewMemberLabel = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// RemoveMemberTB
			// 
			this->RemoveMemberTB->Location = System::Drawing::Point(191, 212);
			this->RemoveMemberTB->Name = L"RemoveMemberTB";
			this->RemoveMemberTB->Size = System::Drawing::Size(100, 20);
			this->RemoveMemberTB->TabIndex = 40;
			// 
			// RemoveMemberLabel2
			// 
			this->RemoveMemberLabel2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->RemoveMemberLabel2->Enabled = false;
			this->RemoveMemberLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveMemberLabel2->Location = System::Drawing::Point(179, 185);
			this->RemoveMemberLabel2->Multiline = true;
			this->RemoveMemberLabel2->Name = L"RemoveMemberLabel2";
			this->RemoveMemberLabel2->Size = System::Drawing::Size(911, 273);
			this->RemoveMemberLabel2->TabIndex = 39;
			this->RemoveMemberLabel2->Text = L"Enter the ID of the member you wish to remove:\r\n";
			// 
			// RemoveMemberLabel1
			// 
			this->RemoveMemberLabel1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->RemoveMemberLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->RemoveMemberLabel1->Enabled = false;
			this->RemoveMemberLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveMemberLabel1->Location = System::Drawing::Point(178, 153);
			this->RemoveMemberLabel1->Multiline = true;
			this->RemoveMemberLabel1->Name = L"RemoveMemberLabel1";
			this->RemoveMemberLabel1->Size = System::Drawing::Size(911, 305);
			this->RemoveMemberLabel1->TabIndex = 38;
			this->RemoveMemberLabel1->Text = L"Remove A Member:";
			// 
			// DisplaySalesTB
			// 
			this->DisplaySalesTB->BackColor = System::Drawing::SystemColors::MenuBar;
			this->DisplaySalesTB->Enabled = false;
			this->DisplaySalesTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplaySalesTB->Location = System::Drawing::Point(179, 185);
			this->DisplaySalesTB->Multiline = true;
			this->DisplaySalesTB->Name = L"DisplaySalesTB";
			this->DisplaySalesTB->Size = System::Drawing::Size(911, 273);
			this->DisplaySalesTB->TabIndex = 37;
			this->DisplaySalesTB->Text = L"Member: John Doe\r\nItems: Milk, Eggs, Bread, etc.";
			// 
			// DisplayMembersTB
			// 
			this->DisplayMembersTB->BackColor = System::Drawing::SystemColors::MenuBar;
			this->DisplayMembersTB->Enabled = false;
			this->DisplayMembersTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayMembersTB->Location = System::Drawing::Point(180, 185);
			this->DisplayMembersTB->Multiline = true;
			this->DisplayMembersTB->Name = L"DisplayMembersTB";
			this->DisplayMembersTB->Size = System::Drawing::Size(911, 273);
			this->DisplayMembersTB->TabIndex = 36;
			this->DisplayMembersTB->Text = L"ID: 10\r\nMember: John Doe\r\nAge: 24\r\nDate of Birth: 24/04/2000";
			// 
			// DisplayMembersOrSalesLabel
			// 
			this->DisplayMembersOrSalesLabel->BackColor = System::Drawing::SystemColors::MenuBar;
			this->DisplayMembersOrSalesLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->DisplayMembersOrSalesLabel->Enabled = false;
			this->DisplayMembersOrSalesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DisplayMembersOrSalesLabel->Location = System::Drawing::Point(179, 153);
			this->DisplayMembersOrSalesLabel->Multiline = true;
			this->DisplayMembersOrSalesLabel->Name = L"DisplayMembersOrSalesLabel";
			this->DisplayMembersOrSalesLabel->Size = System::Drawing::Size(912, 305);
			this->DisplayMembersOrSalesLabel->TabIndex = 35;
			this->DisplayMembersOrSalesLabel->Text = L"Current Members:\r\n";
			// 
			// DateOfBirthTB
			// 
			this->DateOfBirthTB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateOfBirthTB->Location = System::Drawing::Point(207, 390);
			this->DateOfBirthTB->Multiline = true;
			this->DateOfBirthTB->Name = L"DateOfBirthTB";
			this->DateOfBirthTB->Size = System::Drawing::Size(257, 27);
			this->DateOfBirthTB->TabIndex = 34;
			this->DateOfBirthTB->Text = L"24/04/2000";
			// 
			// IDTB
			// 
			this->IDTB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDTB->Location = System::Drawing::Point(405, 312);
			this->IDTB->Multiline = true;
			this->IDTB->Name = L"IDTB";
			this->IDTB->Size = System::Drawing::Size(171, 27);
			this->IDTB->TabIndex = 33;
			this->IDTB->Text = L"10";
			// 
			// AgeTB
			// 
			this->AgeTB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AgeTB->Location = System::Drawing::Point(207, 312);
			this->AgeTB->Multiline = true;
			this->AgeTB->Name = L"AgeTB";
			this->AgeTB->Size = System::Drawing::Size(171, 27);
			this->AgeTB->TabIndex = 32;
			this->AgeTB->Text = L"24";
			// 
			// SecondNameTB
			// 
			this->SecondNameTB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SecondNameTB->Location = System::Drawing::Point(405, 238);
			this->SecondNameTB->Multiline = true;
			this->SecondNameTB->Name = L"SecondNameTB";
			this->SecondNameTB->Size = System::Drawing::Size(171, 27);
			this->SecondNameTB->TabIndex = 31;
			this->SecondNameTB->Text = L"Doe";
			// 
			// FirstNameTB
			// 
			this->FirstNameTB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstNameTB->Location = System::Drawing::Point(207, 238);
			this->FirstNameTB->Multiline = true;
			this->FirstNameTB->Name = L"FirstNameTB";
			this->FirstNameTB->Size = System::Drawing::Size(171, 27);
			this->FirstNameTB->TabIndex = 30;
			this->FirstNameTB->Text = L"John";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(401, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 22);
			this->label6->TabIndex = 28;
			this->label6->Text = L"ID:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(203, 364);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(261, 22);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Date of Birth:   (DD/MM/YYYY)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(203, 286);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 22);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Age:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(401, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 22);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Second Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(203, 212);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 22);
			this->label2->TabIndex = 25;
			this->label2->Text = L"First Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Green;
			this->label1->Location = System::Drawing::Point(25, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(371, 57);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Goto Grow Grocery";
			// 
			// ExitBN
			// 
			this->ExitBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ExitBN->Location = System::Drawing::Point(1116, 13);
			this->ExitBN->Name = L"ExitBN";
			this->ExitBN->Size = System::Drawing::Size(78, 57);
			this->ExitBN->TabIndex = 20;
			this->ExitBN->Text = L"Exit";
			this->ExitBN->UseVisualStyleBackColor = true;
			// 
			// RemoveMemberBN
			// 
			this->RemoveMemberBN->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->RemoveMemberBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveMemberBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RemoveMemberBN->Location = System::Drawing::Point(433, 94);
			this->RemoveMemberBN->Name = L"RemoveMemberBN";
			this->RemoveMemberBN->Size = System::Drawing::Size(114, 53);
			this->RemoveMemberBN->TabIndex = 19;
			this->RemoveMemberBN->Text = L"Remove Member";
			this->RemoveMemberBN->UseVisualStyleBackColor = false;
			// 
			// AddSalesBN
			// 
			this->AddSalesBN->BackColor = System::Drawing::Color::Honeydew;
			this->AddSalesBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddSalesBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AddSalesBN->Font = (gcnew System::Drawing::Font(L"MS PGothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddSalesBN->Location = System::Drawing::Point(25, 271);
			this->AddSalesBN->Name = L"AddSalesBN";
			this->AddSalesBN->Size = System::Drawing::Size(149, 53);
			this->AddSalesBN->TabIndex = 18;
			this->AddSalesBN->Text = L"Add Sales";
			this->AddSalesBN->UseVisualStyleBackColor = false;
			// 
			// EditMemberBN
			// 
			this->EditMemberBN->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->EditMemberBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditMemberBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->EditMemberBN->Location = System::Drawing::Point(313, 94);
			this->EditMemberBN->Name = L"EditMemberBN";
			this->EditMemberBN->Size = System::Drawing::Size(114, 53);
			this->EditMemberBN->TabIndex = 17;
			this->EditMemberBN->Text = L"Edit Member";
			this->EditMemberBN->UseVisualStyleBackColor = false;
			// 
			// DoneBN
			// 
			this->DoneBN->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DoneBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DoneBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DoneBN->Location = System::Drawing::Point(180, 489);
			this->DoneBN->Name = L"DoneBN";
			this->DoneBN->Size = System::Drawing::Size(114, 53);
			this->DoneBN->TabIndex = 16;
			this->DoneBN->Text = L"Done";
			this->DoneBN->UseVisualStyleBackColor = false;
			// 
			// AddMemberBN
			// 
			this->AddMemberBN->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->AddMemberBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddMemberBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AddMemberBN->Location = System::Drawing::Point(193, 94);
			this->AddMemberBN->Name = L"AddMemberBN";
			this->AddMemberBN->Size = System::Drawing::Size(114, 53);
			this->AddMemberBN->TabIndex = 15;
			this->AddMemberBN->Text = L"Add Member";
			this->AddMemberBN->UseVisualStyleBackColor = false;
			// 
			// SearchMemberBN
			// 
			this->SearchMemberBN->BackColor = System::Drawing::Color::Honeydew;
			this->SearchMemberBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SearchMemberBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SearchMemberBN->Font = (gcnew System::Drawing::Font(L"MS PGothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchMemberBN->Location = System::Drawing::Point(25, 94);
			this->SearchMemberBN->Name = L"SearchMemberBN";
			this->SearchMemberBN->Size = System::Drawing::Size(149, 53);
			this->SearchMemberBN->TabIndex = 14;
			this->SearchMemberBN->Text = L"Search Member";
			this->SearchMemberBN->UseVisualStyleBackColor = false;
			// 
			// DisplaySalesBN
			// 
			this->DisplaySalesBN->BackColor = System::Drawing::Color::Honeydew;
			this->DisplaySalesBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DisplaySalesBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DisplaySalesBN->Font = (gcnew System::Drawing::Font(L"MS PGothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplaySalesBN->Location = System::Drawing::Point(25, 212);
			this->DisplaySalesBN->Name = L"DisplaySalesBN";
			this->DisplaySalesBN->Size = System::Drawing::Size(149, 53);
			this->DisplaySalesBN->TabIndex = 13;
			this->DisplaySalesBN->Text = L"Display Sales";
			this->DisplaySalesBN->UseVisualStyleBackColor = false;
			// 
			// DisplayMembersBN
			// 
			this->DisplayMembersBN->BackColor = System::Drawing::Color::Honeydew;
			this->DisplayMembersBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DisplayMembersBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DisplayMembersBN->Font = (gcnew System::Drawing::Font(L"MS PGothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayMembersBN->Location = System::Drawing::Point(25, 153);
			this->DisplayMembersBN->Name = L"DisplayMembersBN";
			this->DisplayMembersBN->Size = System::Drawing::Size(149, 53);
			this->DisplayMembersBN->TabIndex = 12;
			this->DisplayMembersBN->Text = L"Display Members";
			this->DisplayMembersBN->UseVisualStyleBackColor = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(-5, -35);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(1225, 130);
			this->textBox2->TabIndex = 24;
			// 
			// EnterNewMemberLabel
			// 
			this->EnterNewMemberLabel->BackColor = System::Drawing::SystemColors::MenuBar;
			this->EnterNewMemberLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->EnterNewMemberLabel->Enabled = false;
			this->EnterNewMemberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnterNewMemberLabel->Location = System::Drawing::Point(180, 153);
			this->EnterNewMemberLabel->Multiline = true;
			this->EnterNewMemberLabel->Name = L"EnterNewMemberLabel";
			this->EnterNewMemberLabel->Size = System::Drawing::Size(912, 305);
			this->EnterNewMemberLabel->TabIndex = 22;
			this->EnterNewMemberLabel->Text = L"Enter New member:";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(-5, 76);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(1225, 571);
			this->textBox3->TabIndex = 23;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1205, 561);
			this->Controls->Add(this->RemoveMemberTB);
			this->Controls->Add(this->RemoveMemberLabel2);
			this->Controls->Add(this->RemoveMemberLabel1);
			this->Controls->Add(this->DisplaySalesTB);
			this->Controls->Add(this->DisplayMembersTB);
			this->Controls->Add(this->DisplayMembersOrSalesLabel);
			this->Controls->Add(this->DateOfBirthTB);
			this->Controls->Add(this->IDTB);
			this->Controls->Add(this->AgeTB);
			this->Controls->Add(this->SecondNameTB);
			this->Controls->Add(this->FirstNameTB);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ExitBN);
			this->Controls->Add(this->RemoveMemberBN);
			this->Controls->Add(this->AddSalesBN);
			this->Controls->Add(this->EditMemberBN);
			this->Controls->Add(this->DoneBN);
			this->Controls->Add(this->AddMemberBN);
			this->Controls->Add(this->SearchMemberBN);
			this->Controls->Add(this->DisplaySalesBN);
			this->Controls->Add(this->DisplayMembersBN);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->EnterNewMemberLabel);
			this->Controls->Add(this->textBox3);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
