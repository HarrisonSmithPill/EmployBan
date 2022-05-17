#pragma once
#include <stdlib.h>
#include <fstream>


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
		void SearchMember(void) 
		{
			RemoveMemberLabel1->Visible = false;  //Remove Member
			RemoveMemberLabel2->Visible = false;
			RemoveMemberTB->Visible = false;
			DisplaySalesTB1->Visible = false;     //Current Sales
			DisplaySalesTB2->Visible = false;
			DisplayMembersTB1->Visible = false;   //Current Members
			DisplayMembersTB2->Visible = false;
			EnterNewMemberLabel->Visible = false; //Enter New Member
			label2->Visible = false;
			FirstNameTB->Visible = false;
			label3->Visible = false;
			SecondNameTB->Visible = false;
			label4->Visible = false;
			AgeTB->Visible = false;
			label6->Visible = false;
			IDTB->Visible = false;
			label5->Visible = false;
			DateOfBirthTB->Visible = false;
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
	private: System::Windows::Forms::TextBox^ DisplaySalesTB2;
	private: System::Windows::Forms::TextBox^ DisplaySalesTB1;



	private: System::Windows::Forms::TextBox^ DisplayMembersTB2;
	private: System::Windows::Forms::TextBox^ DisplayMembersTB1;
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
	private: System::Windows::Forms::TextBox^ AddSaleLabel1;
	private: System::Windows::Forms::Label^ AddSaleLabel2;
	private: System::Windows::Forms::TextBox^ SalesIDTB;

	private: System::Windows::Forms::NumericUpDown^ MilkValue;

	private: System::Windows::Forms::ComboBox^ ComboBox1;
	private: System::Windows::Forms::ComboBox^ ComboBox2;
	private: System::Windows::Forms::NumericUpDown^ EggValue;




	private: System::Windows::Forms::ComboBox^ ComboBox3;
	private: System::Windows::Forms::NumericUpDown^ BreadValue;


	private: System::Windows::Forms::Label^ AddSaleLabel3;
	private: System::Windows::Forms::Label^ AddSaleLabel5;



	private: System::Windows::Forms::Label^ AddSaleLabel4;
	private: System::Windows::Forms::NumericUpDown^ DrinksValue;


	private: System::Windows::Forms::ComboBox^ ComboBox4;
private: System::Windows::Forms::NumericUpDown^ MeatValue;


	private: System::Windows::Forms::ComboBox^ ComboBox5;
private: System::Windows::Forms::NumericUpDown^ SweetsValue;


private: System::Windows::Forms::ComboBox^ ComboBox6;

	private: System::Windows::Forms::Label^ AddSaleLabel6;
	private: System::Windows::Forms::Label^ AddSaleLabel7;
private: System::Windows::Forms::Label^ AddSaleLabel8;


private: System::Windows::Forms::Button^ AddToCartBN;
private: System::Windows::Forms::Button^ ViewCartBN;
private: System::Windows::Forms::TextBox^ YourOrderTB;
private: System::Windows::Forms::TextBox^ YourOrderTB2;
private: System::Windows::Forms::Button^ ContinueBN;
private: System::Windows::Forms::Button^ FinishedBN;
private: System::Windows::Forms::NumericUpDown^ AlertValues;
private: System::Windows::Forms::Button^ AlertsBN;
private: System::Windows::Forms::TextBox^ AlertsTB1;
private: System::Windows::Forms::Label^ AlertsLabel1;



private: System::Windows::Forms::MonthCalendar^ AlertsCalender;
private: System::Windows::Forms::Button^ ClearOrdersBN;
private: System::Windows::Forms::TextBox^ AlertsTB2;







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
			this->DisplaySalesTB2 = (gcnew System::Windows::Forms::TextBox());
			this->DisplaySalesTB1 = (gcnew System::Windows::Forms::TextBox());
			this->DisplayMembersTB2 = (gcnew System::Windows::Forms::TextBox());
			this->DisplayMembersTB1 = (gcnew System::Windows::Forms::TextBox());
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
			this->AddSaleLabel1 = (gcnew System::Windows::Forms::TextBox());
			this->AddSaleLabel2 = (gcnew System::Windows::Forms::Label());
			this->SalesIDTB = (gcnew System::Windows::Forms::TextBox());
			this->MilkValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->ComboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->ComboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->EggValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->ComboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->BreadValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->AddSaleLabel3 = (gcnew System::Windows::Forms::Label());
			this->AddSaleLabel5 = (gcnew System::Windows::Forms::Label());
			this->AddSaleLabel4 = (gcnew System::Windows::Forms::Label());
			this->DrinksValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->ComboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->MeatValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->ComboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->SweetsValue = (gcnew System::Windows::Forms::NumericUpDown());
			this->ComboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->AddSaleLabel6 = (gcnew System::Windows::Forms::Label());
			this->AddSaleLabel7 = (gcnew System::Windows::Forms::Label());
			this->AddSaleLabel8 = (gcnew System::Windows::Forms::Label());
			this->AddToCartBN = (gcnew System::Windows::Forms::Button());
			this->ViewCartBN = (gcnew System::Windows::Forms::Button());
			this->YourOrderTB = (gcnew System::Windows::Forms::TextBox());
			this->YourOrderTB2 = (gcnew System::Windows::Forms::TextBox());
			this->ContinueBN = (gcnew System::Windows::Forms::Button());
			this->FinishedBN = (gcnew System::Windows::Forms::Button());
			this->AlertValues = (gcnew System::Windows::Forms::NumericUpDown());
			this->AlertsBN = (gcnew System::Windows::Forms::Button());
			this->AlertsTB1 = (gcnew System::Windows::Forms::TextBox());
			this->AlertsLabel1 = (gcnew System::Windows::Forms::Label());
			this->AlertsCalender = (gcnew System::Windows::Forms::MonthCalendar());
			this->ClearOrdersBN = (gcnew System::Windows::Forms::Button());
			this->AlertsTB2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MilkValue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EggValue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BreadValue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DrinksValue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MeatValue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SweetsValue))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AlertValues))->BeginInit();
			this->SuspendLayout();
			// 
			// RemoveMemberTB
			// 
			this->RemoveMemberTB->Location = System::Drawing::Point(190, 218);
			this->RemoveMemberTB->Name = L"RemoveMemberTB";
			this->RemoveMemberTB->Size = System::Drawing::Size(100, 20);
			this->RemoveMemberTB->TabIndex = 70;
			this->RemoveMemberTB->Visible = false;
			// 
			// RemoveMemberLabel2
			// 
			this->RemoveMemberLabel2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->RemoveMemberLabel2->Enabled = false;
			this->RemoveMemberLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveMemberLabel2->Location = System::Drawing::Point(178, 191);
			this->RemoveMemberLabel2->Multiline = true;
			this->RemoveMemberLabel2->Name = L"RemoveMemberLabel2";
			this->RemoveMemberLabel2->Size = System::Drawing::Size(911, 273);
			this->RemoveMemberLabel2->TabIndex = 69;
			this->RemoveMemberLabel2->Text = L"Enter the ID of the member you wish to remove:\r\n";
			this->RemoveMemberLabel2->Visible = false;
			// 
			// RemoveMemberLabel1
			// 
			this->RemoveMemberLabel1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->RemoveMemberLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->RemoveMemberLabel1->Enabled = false;
			this->RemoveMemberLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RemoveMemberLabel1->Location = System::Drawing::Point(178, 159);
			this->RemoveMemberLabel1->Multiline = true;
			this->RemoveMemberLabel1->Name = L"RemoveMemberLabel1";
			this->RemoveMemberLabel1->Size = System::Drawing::Size(911, 305);
			this->RemoveMemberLabel1->TabIndex = 68;
			this->RemoveMemberLabel1->Text = L"Remove A Member:";
			this->RemoveMemberLabel1->Visible = false;
			// 
			// DisplaySalesTB2
			// 
			this->DisplaySalesTB2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->DisplaySalesTB2->Enabled = false;
			this->DisplaySalesTB2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplaySalesTB2->Location = System::Drawing::Point(180, 191);
			this->DisplaySalesTB2->Multiline = true;
			this->DisplaySalesTB2->Name = L"DisplaySalesTB2";
			this->DisplaySalesTB2->Size = System::Drawing::Size(911, 273);
			this->DisplaySalesTB2->TabIndex = 67;
			this->DisplaySalesTB2->Text = L"Member: John Doe\r\nPrice: $25.60\r\nItems:\r\nFull Cream Milk, 1\r\n12 700g Eggs, 1\r\nWhi"
				L"te Bread Loaf, 2";
			this->DisplaySalesTB2->Visible = false;
			// 
			// DisplaySalesTB1
			// 
			this->DisplaySalesTB1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->DisplaySalesTB1->Cursor = System::Windows::Forms::Cursors::Default;
			this->DisplaySalesTB1->Enabled = false;
			this->DisplaySalesTB1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplaySalesTB1->Location = System::Drawing::Point(179, 159);
			this->DisplaySalesTB1->Multiline = true;
			this->DisplaySalesTB1->Name = L"DisplaySalesTB1";
			this->DisplaySalesTB1->Size = System::Drawing::Size(912, 305);
			this->DisplaySalesTB1->TabIndex = 71;
			this->DisplaySalesTB1->Text = L"Current Sales:\r\n";
			this->DisplaySalesTB1->Visible = false;
			// 
			// DisplayMembersTB2
			// 
			this->DisplayMembersTB2->BackColor = System::Drawing::SystemColors::MenuBar;
			this->DisplayMembersTB2->Enabled = false;
			this->DisplayMembersTB2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayMembersTB2->Location = System::Drawing::Point(179, 191);
			this->DisplayMembersTB2->Multiline = true;
			this->DisplayMembersTB2->Name = L"DisplayMembersTB2";
			this->DisplayMembersTB2->Size = System::Drawing::Size(911, 273);
			this->DisplayMembersTB2->TabIndex = 66;
			this->DisplayMembersTB2->Text = L"ID: 10\r\nMember: John Doe\r\nAge: 24\r\nDate of Birth: 24/04/2000";
			this->DisplayMembersTB2->Visible = false;
			// 
			// DisplayMembersTB1
			// 
			this->DisplayMembersTB1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->DisplayMembersTB1->Cursor = System::Windows::Forms::Cursors::Default;
			this->DisplayMembersTB1->Enabled = false;
			this->DisplayMembersTB1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayMembersTB1->Location = System::Drawing::Point(178, 159);
			this->DisplayMembersTB1->Multiline = true;
			this->DisplayMembersTB1->Name = L"DisplayMembersTB1";
			this->DisplayMembersTB1->Size = System::Drawing::Size(912, 305);
			this->DisplayMembersTB1->TabIndex = 65;
			this->DisplayMembersTB1->Text = L"Current Members:\r\n";
			this->DisplayMembersTB1->Visible = false;
			// 
			// DateOfBirthTB
			// 
			this->DateOfBirthTB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateOfBirthTB->Location = System::Drawing::Point(206, 396);
			this->DateOfBirthTB->Multiline = true;
			this->DateOfBirthTB->Name = L"DateOfBirthTB";
			this->DateOfBirthTB->Size = System::Drawing::Size(257, 27);
			this->DateOfBirthTB->TabIndex = 64;
			this->DateOfBirthTB->Text = L"24/04/2000";
			this->DateOfBirthTB->Visible = false;
			// 
			// IDTB
			// 
			this->IDTB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDTB->Location = System::Drawing::Point(404, 318);
			this->IDTB->Multiline = true;
			this->IDTB->Name = L"IDTB";
			this->IDTB->Size = System::Drawing::Size(171, 27);
			this->IDTB->TabIndex = 63;
			this->IDTB->Text = L"10";
			this->IDTB->Visible = false;
			// 
			// AgeTB
			// 
			this->AgeTB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AgeTB->Location = System::Drawing::Point(206, 318);
			this->AgeTB->Multiline = true;
			this->AgeTB->Name = L"AgeTB";
			this->AgeTB->Size = System::Drawing::Size(171, 27);
			this->AgeTB->TabIndex = 62;
			this->AgeTB->Text = L"24";
			this->AgeTB->Visible = false;
			// 
			// SecondNameTB
			// 
			this->SecondNameTB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SecondNameTB->Location = System::Drawing::Point(404, 244);
			this->SecondNameTB->Multiline = true;
			this->SecondNameTB->Name = L"SecondNameTB";
			this->SecondNameTB->Size = System::Drawing::Size(171, 27);
			this->SecondNameTB->TabIndex = 61;
			this->SecondNameTB->Text = L"Doe";
			this->SecondNameTB->Visible = false;
			// 
			// FirstNameTB
			// 
			this->FirstNameTB->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstNameTB->Location = System::Drawing::Point(206, 244);
			this->FirstNameTB->Multiline = true;
			this->FirstNameTB->Name = L"FirstNameTB";
			this->FirstNameTB->Size = System::Drawing::Size(171, 27);
			this->FirstNameTB->TabIndex = 60;
			this->FirstNameTB->Text = L"John";
			this->FirstNameTB->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(400, 292);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 22);
			this->label6->TabIndex = 58;
			this->label6->Text = L"ID:";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(202, 370);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(261, 22);
			this->label5->TabIndex = 57;
			this->label5->Text = L"Date of Birth:   (DD/MM/YYYY)";
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(202, 292);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(47, 22);
			this->label4->TabIndex = 59;
			this->label4->Text = L"Age:";
			this->label4->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(400, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 22);
			this->label3->TabIndex = 56;
			this->label3->Text = L"Second Name:";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(202, 218);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 22);
			this->label2->TabIndex = 55;
			this->label2->Text = L"First Name:";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Green;
			this->label1->Location = System::Drawing::Point(24, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(371, 57);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Goto Grow Grocery";
			// 
			// ExitBN
			// 
			this->ExitBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ExitBN->Location = System::Drawing::Point(1115, 19);
			this->ExitBN->Name = L"ExitBN";
			this->ExitBN->Size = System::Drawing::Size(78, 57);
			this->ExitBN->TabIndex = 50;
			this->ExitBN->Text = L"Exit";
			this->ExitBN->UseVisualStyleBackColor = true;
			this->ExitBN->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::ExitBN_MouseClick);
			// 
			// RemoveMemberBN
			// 
			this->RemoveMemberBN->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->RemoveMemberBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RemoveMemberBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->RemoveMemberBN->Location = System::Drawing::Point(432, 100);
			this->RemoveMemberBN->Name = L"RemoveMemberBN";
			this->RemoveMemberBN->Size = System::Drawing::Size(114, 53);
			this->RemoveMemberBN->TabIndex = 49;
			this->RemoveMemberBN->Text = L"Remove Member";
			this->RemoveMemberBN->UseVisualStyleBackColor = false;
			this->RemoveMemberBN->Click += gcnew System::EventHandler(this, &Form1::RemoveMemberBN_Click);
			// 
			// AddSalesBN
			// 
			this->AddSalesBN->BackColor = System::Drawing::Color::Honeydew;
			this->AddSalesBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddSalesBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AddSalesBN->Font = (gcnew System::Drawing::Font(L"MS PGothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddSalesBN->Location = System::Drawing::Point(24, 277);
			this->AddSalesBN->Name = L"AddSalesBN";
			this->AddSalesBN->Size = System::Drawing::Size(149, 53);
			this->AddSalesBN->TabIndex = 48;
			this->AddSalesBN->Text = L"Add Sales";
			this->AddSalesBN->UseVisualStyleBackColor = false;
			this->AddSalesBN->Click += gcnew System::EventHandler(this, &Form1::AddSalesBN_Click);
			// 
			// EditMemberBN
			// 
			this->EditMemberBN->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->EditMemberBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditMemberBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->EditMemberBN->Location = System::Drawing::Point(312, 100);
			this->EditMemberBN->Name = L"EditMemberBN";
			this->EditMemberBN->Size = System::Drawing::Size(114, 53);
			this->EditMemberBN->TabIndex = 47;
			this->EditMemberBN->Text = L"Edit Member";
			this->EditMemberBN->UseVisualStyleBackColor = false;
			this->EditMemberBN->Click += gcnew System::EventHandler(this, &Form1::EditMemberBN_Click);
			// 
			// DoneBN
			// 
			this->DoneBN->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->DoneBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DoneBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DoneBN->Location = System::Drawing::Point(179, 502);
			this->DoneBN->Name = L"DoneBN";
			this->DoneBN->Size = System::Drawing::Size(114, 53);
			this->DoneBN->TabIndex = 46;
			this->DoneBN->Text = L"Done";
			this->DoneBN->UseVisualStyleBackColor = false;
			this->DoneBN->Click += gcnew System::EventHandler(this, &Form1::DoneBN_Click);
			// 
			// AddMemberBN
			// 
			this->AddMemberBN->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->AddMemberBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddMemberBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AddMemberBN->Location = System::Drawing::Point(192, 100);
			this->AddMemberBN->Name = L"AddMemberBN";
			this->AddMemberBN->Size = System::Drawing::Size(114, 53);
			this->AddMemberBN->TabIndex = 45;
			this->AddMemberBN->Text = L"Add Member";
			this->AddMemberBN->UseVisualStyleBackColor = false;
			this->AddMemberBN->Click += gcnew System::EventHandler(this, &Form1::AddMemberBN_Click);
			// 
			// SearchMemberBN
			// 
			this->SearchMemberBN->BackColor = System::Drawing::Color::Honeydew;
			this->SearchMemberBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SearchMemberBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SearchMemberBN->Font = (gcnew System::Drawing::Font(L"MS PGothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchMemberBN->Location = System::Drawing::Point(24, 100);
			this->SearchMemberBN->Name = L"SearchMemberBN";
			this->SearchMemberBN->Size = System::Drawing::Size(149, 53);
			this->SearchMemberBN->TabIndex = 44;
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
			this->DisplaySalesBN->Location = System::Drawing::Point(24, 218);
			this->DisplaySalesBN->Name = L"DisplaySalesBN";
			this->DisplaySalesBN->Size = System::Drawing::Size(149, 53);
			this->DisplaySalesBN->TabIndex = 43;
			this->DisplaySalesBN->Text = L"Display Sales";
			this->DisplaySalesBN->UseVisualStyleBackColor = false;
			this->DisplaySalesBN->Click += gcnew System::EventHandler(this, &Form1::DisplaySalesBN_Click);
			// 
			// DisplayMembersBN
			// 
			this->DisplayMembersBN->BackColor = System::Drawing::Color::Honeydew;
			this->DisplayMembersBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DisplayMembersBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DisplayMembersBN->Font = (gcnew System::Drawing::Font(L"MS PGothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DisplayMembersBN->Location = System::Drawing::Point(24, 159);
			this->DisplayMembersBN->Name = L"DisplayMembersBN";
			this->DisplayMembersBN->Size = System::Drawing::Size(149, 53);
			this->DisplayMembersBN->TabIndex = 42;
			this->DisplayMembersBN->Text = L"Display Members";
			this->DisplayMembersBN->UseVisualStyleBackColor = false;
			this->DisplayMembersBN->Click += gcnew System::EventHandler(this, &Form1::DisplayMembersBN_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Location = System::Drawing::Point(-6, -29);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(1225, 130);
			this->textBox2->TabIndex = 54;
			// 
			// EnterNewMemberLabel
			// 
			this->EnterNewMemberLabel->BackColor = System::Drawing::SystemColors::MenuBar;
			this->EnterNewMemberLabel->Cursor = System::Windows::Forms::Cursors::Default;
			this->EnterNewMemberLabel->Enabled = false;
			this->EnterNewMemberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EnterNewMemberLabel->Location = System::Drawing::Point(179, 159);
			this->EnterNewMemberLabel->Multiline = true;
			this->EnterNewMemberLabel->Name = L"EnterNewMemberLabel";
			this->EnterNewMemberLabel->Size = System::Drawing::Size(912, 305);
			this->EnterNewMemberLabel->TabIndex = 52;
			this->EnterNewMemberLabel->Text = L"Enter New member:";
			this->EnterNewMemberLabel->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->textBox3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox3->Location = System::Drawing::Point(-6, 82);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(1225, 571);
			this->textBox3->TabIndex = 53;
			// 
			// AddSaleLabel1
			// 
			this->AddSaleLabel1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->AddSaleLabel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->AddSaleLabel1->Enabled = false;
			this->AddSaleLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddSaleLabel1->Location = System::Drawing::Point(179, 159);
			this->AddSaleLabel1->Multiline = true;
			this->AddSaleLabel1->Name = L"AddSaleLabel1";
			this->AddSaleLabel1->Size = System::Drawing::Size(911, 337);
			this->AddSaleLabel1->TabIndex = 72;
			this->AddSaleLabel1->Text = L"Add a sale:";
			this->AddSaleLabel1->Visible = false;
			// 
			// AddSaleLabel2
			// 
			this->AddSaleLabel2->AutoSize = true;
			this->AddSaleLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddSaleLabel2->Location = System::Drawing::Point(188, 190);
			this->AddSaleLabel2->Name = L"AddSaleLabel2";
			this->AddSaleLabel2->Size = System::Drawing::Size(175, 22);
			this->AddSaleLabel2->TabIndex = 73;
			this->AddSaleLabel2->Text = L"Enter ID of member:";
			this->AddSaleLabel2->Visible = false;
			// 
			// SalesIDTB
			// 
			this->SalesIDTB->Location = System::Drawing::Point(193, 218);
			this->SalesIDTB->Name = L"SalesIDTB";
			this->SalesIDTB->Size = System::Drawing::Size(100, 20);
			this->SalesIDTB->TabIndex = 70;
			this->SalesIDTB->Visible = false;
			// 
			// MilkValue
			// 
			this->MilkValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MilkValue->Location = System::Drawing::Point(363, 277);
			this->MilkValue->Name = L"MilkValue";
			this->MilkValue->Size = System::Drawing::Size(35, 26);
			this->MilkValue->TabIndex = 74;
			this->MilkValue->Visible = false;
			// 
			// ComboBox1
			// 
			this->ComboBox1->DisplayMember = L"None";
			this->ComboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComboBox1->FormattingEnabled = true;
			this->ComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"None", L"Low Fat Milk 1L", L"Low Fat Milk 2L",
					L"Full Cream Milk 1L", L"Full Cream Milk 2L", L"Soy Milk 1L", L"Soy Milk 2L"
			});
			this->ComboBox1->Location = System::Drawing::Point(193, 277);
			this->ComboBox1->Name = L"ComboBox1";
			this->ComboBox1->Size = System::Drawing::Size(163, 26);
			this->ComboBox1->TabIndex = 76;
			this->ComboBox1->Text = L"None";
			this->ComboBox1->Visible = false;
			// 
			// ComboBox2
			// 
			this->ComboBox2->DisplayMember = L"None";
			this->ComboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComboBox2->FormattingEnabled = true;
			this->ComboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"None", L"12 600g Eggs", L"6 600g Eggs", L"12 700g Eggs",
					L"6 700g Eggs", L"12 800g Eggs", L"6 800g Eggs"
			});
			this->ComboBox2->Location = System::Drawing::Point(432, 277);
			this->ComboBox2->Name = L"ComboBox2";
			this->ComboBox2->Size = System::Drawing::Size(163, 26);
			this->ComboBox2->TabIndex = 76;
			this->ComboBox2->Text = L"None";
			this->ComboBox2->Visible = false;
			// 
			// EggValue
			// 
			this->EggValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EggValue->Location = System::Drawing::Point(601, 277);
			this->EggValue->Name = L"EggValue";
			this->EggValue->Size = System::Drawing::Size(35, 26);
			this->EggValue->TabIndex = 74;
			this->EggValue->Visible = false;
			// 
			// ComboBox3
			// 
			this->ComboBox3->DisplayMember = L"None";
			this->ComboBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComboBox3->FormattingEnabled = true;
			this->ComboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"None", L"White Bread Loaf", L"Wholegrain Bread Loaf",
					L"Gluten-free Bread Loaf", L"4 Crumpets"
			});
			this->ComboBox3->Location = System::Drawing::Point(671, 277);
			this->ComboBox3->Name = L"ComboBox3";
			this->ComboBox3->Size = System::Drawing::Size(163, 26);
			this->ComboBox3->TabIndex = 76;
			this->ComboBox3->Text = L"None";
			this->ComboBox3->Visible = false;
			// 
			// BreadValue
			// 
			this->BreadValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BreadValue->Location = System::Drawing::Point(840, 277);
			this->BreadValue->Name = L"BreadValue";
			this->BreadValue->Size = System::Drawing::Size(35, 26);
			this->BreadValue->TabIndex = 74;
			this->BreadValue->Visible = false;
			// 
			// AddSaleLabel3
			// 
			this->AddSaleLabel3->AutoSize = true;
			this->AddSaleLabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddSaleLabel3->Location = System::Drawing::Point(189, 254);
			this->AddSaleLabel3->Name = L"AddSaleLabel3";
			this->AddSaleLabel3->Size = System::Drawing::Size(45, 20);
			this->AddSaleLabel3->TabIndex = 77;
			this->AddSaleLabel3->Text = L"Milk:";
			this->AddSaleLabel3->Visible = false;
			// 
			// AddSaleLabel5
			// 
			this->AddSaleLabel5->AutoSize = true;
			this->AddSaleLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddSaleLabel5->Location = System::Drawing::Point(667, 254);
			this->AddSaleLabel5->Name = L"AddSaleLabel5";
			this->AddSaleLabel5->Size = System::Drawing::Size(62, 20);
			this->AddSaleLabel5->TabIndex = 77;
			this->AddSaleLabel5->Text = L"Bread:";
			this->AddSaleLabel5->Visible = false;
			// 
			// AddSaleLabel4
			// 
			this->AddSaleLabel4->AutoSize = true;
			this->AddSaleLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddSaleLabel4->Location = System::Drawing::Point(429, 254);
			this->AddSaleLabel4->Name = L"AddSaleLabel4";
			this->AddSaleLabel4->Size = System::Drawing::Size(55, 20);
			this->AddSaleLabel4->TabIndex = 77;
			this->AddSaleLabel4->Text = L"Eggs:";
			this->AddSaleLabel4->Visible = false;
			// 
			// DrinksValue
			// 
			this->DrinksValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DrinksValue->Location = System::Drawing::Point(363, 341);
			this->DrinksValue->Name = L"DrinksValue";
			this->DrinksValue->Size = System::Drawing::Size(35, 26);
			this->DrinksValue->TabIndex = 74;
			this->DrinksValue->Visible = false;
			// 
			// ComboBox4
			// 
			this->ComboBox4->DisplayMember = L"None";
			this->ComboBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComboBox4->FormattingEnabled = true;
			this->ComboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"None", L"CocaCola 250ml", L"CocaCola 1L", L"CocaCola Zero 250ml",
					L"CocaCola Zero 1L", L"Fanta 250ml", L"Fanta 1L", L"Sprite 250ml", L"Sprite 1L", L"Solo 250ml", L"Solo 1L", L""
			});
			this->ComboBox4->Location = System::Drawing::Point(193, 341);
			this->ComboBox4->Name = L"ComboBox4";
			this->ComboBox4->Size = System::Drawing::Size(163, 26);
			this->ComboBox4->TabIndex = 76;
			this->ComboBox4->Text = L"None";
			this->ComboBox4->Visible = false;
			// 
			// MeatValue
			// 
			this->MeatValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MeatValue->Location = System::Drawing::Point(601, 341);
			this->MeatValue->Name = L"MeatValue";
			this->MeatValue->Size = System::Drawing::Size(35, 26);
			this->MeatValue->TabIndex = 74;
			this->MeatValue->Visible = false;
			// 
			// ComboBox5
			// 
			this->ComboBox5->DisplayMember = L"None";
			this->ComboBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComboBox5->FormattingEnabled = true;
			this->ComboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"None", L"Frozen Veggies 250g", L"Frozen Lasagna 500g",
					L"Frozen Pizza Meatlovers", L"Frozen Pizza Pinapple", L"Frozen Pizza Margerita", L"Frozen Pie Twin Pack", L"Frozen SausageRoll"
			});
			this->ComboBox5->Location = System::Drawing::Point(431, 341);
			this->ComboBox5->Name = L"ComboBox5";
			this->ComboBox5->Size = System::Drawing::Size(163, 26);
			this->ComboBox5->TabIndex = 76;
			this->ComboBox5->Text = L"None";
			this->ComboBox5->Visible = false;
			// 
			// SweetsValue
			// 
			this->SweetsValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SweetsValue->Location = System::Drawing::Point(841, 341);
			this->SweetsValue->Name = L"SweetsValue";
			this->SweetsValue->Size = System::Drawing::Size(35, 26);
			this->SweetsValue->TabIndex = 74;
			this->SweetsValue->Visible = false;
			// 
			// ComboBox6
			// 
			this->ComboBox6->DisplayMember = L"None";
			this->ComboBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ComboBox6->FormattingEnabled = true;
			this->ComboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"None", L"Red Rippers", L"Red Rippers Family Pack",
					L"Chicos Pack", L"Minties Pack", L"Minties Family Pack", L"Extra Peppermint Gum", L"Extra Spearmint Gum"
			});
			this->ComboBox6->Location = System::Drawing::Point(671, 341);
			this->ComboBox6->Name = L"ComboBox6";
			this->ComboBox6->Size = System::Drawing::Size(163, 26);
			this->ComboBox6->TabIndex = 76;
			this->ComboBox6->Text = L"None";
			this->ComboBox6->Visible = false;
			// 
			// AddSaleLabel6
			// 
			this->AddSaleLabel6->AutoSize = true;
			this->AddSaleLabel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddSaleLabel6->Location = System::Drawing::Point(189, 318);
			this->AddSaleLabel6->Name = L"AddSaleLabel6";
			this->AddSaleLabel6->Size = System::Drawing::Size(65, 20);
			this->AddSaleLabel6->TabIndex = 77;
			this->AddSaleLabel6->Text = L"Drinks:";
			this->AddSaleLabel6->Visible = false;
			// 
			// AddSaleLabel7
			// 
			this->AddSaleLabel7->AutoSize = true;
			this->AddSaleLabel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddSaleLabel7->Location = System::Drawing::Point(429, 318);
			this->AddSaleLabel7->Name = L"AddSaleLabel7";
			this->AddSaleLabel7->Size = System::Drawing::Size(65, 20);
			this->AddSaleLabel7->TabIndex = 77;
			this->AddSaleLabel7->Text = L"Frozen";
			this->AddSaleLabel7->Visible = false;
			// 
			// AddSaleLabel8
			// 
			this->AddSaleLabel8->AutoSize = true;
			this->AddSaleLabel8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddSaleLabel8->Location = System::Drawing::Point(667, 318);
			this->AddSaleLabel8->Name = L"AddSaleLabel8";
			this->AddSaleLabel8->Size = System::Drawing::Size(68, 20);
			this->AddSaleLabel8->TabIndex = 77;
			this->AddSaleLabel8->Text = L"Sweets";
			this->AddSaleLabel8->Visible = false;
			// 
			// AddToCartBN
			// 
			this->AddToCartBN->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->AddToCartBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddToCartBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AddToCartBN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddToCartBN->Location = System::Drawing::Point(349, 411);
			this->AddToCartBN->Name = L"AddToCartBN";
			this->AddToCartBN->Size = System::Drawing::Size(134, 53);
			this->AddToCartBN->TabIndex = 78;
			this->AddToCartBN->Text = L"Add items to cart";
			this->AddToCartBN->UseVisualStyleBackColor = false;
			this->AddToCartBN->Visible = false;
			this->AddToCartBN->Click += gcnew System::EventHandler(this, &Form1::AddToCartBN_Click);
			// 
			// ViewCartBN
			// 
			this->ViewCartBN->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ViewCartBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ViewCartBN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ViewCartBN->Location = System::Drawing::Point(601, 411);
			this->ViewCartBN->Name = L"ViewCartBN";
			this->ViewCartBN->Size = System::Drawing::Size(135, 53);
			this->ViewCartBN->TabIndex = 79;
			this->ViewCartBN->Text = L"View Cart";
			this->ViewCartBN->UseVisualStyleBackColor = false;
			this->ViewCartBN->Visible = false;
			this->ViewCartBN->Click += gcnew System::EventHandler(this, &Form1::ViewCartBN_Click);
			// 
			// YourOrderTB
			// 
			this->YourOrderTB->BackColor = System::Drawing::SystemColors::MenuBar;
			this->YourOrderTB->Cursor = System::Windows::Forms::Cursors::Default;
			this->YourOrderTB->Enabled = false;
			this->YourOrderTB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YourOrderTB->Location = System::Drawing::Point(179, 159);
			this->YourOrderTB->Multiline = true;
			this->YourOrderTB->Name = L"YourOrderTB";
			this->YourOrderTB->Size = System::Drawing::Size(913, 337);
			this->YourOrderTB->TabIndex = 72;
			this->YourOrderTB->Text = L"Your Order:";
			this->YourOrderTB->Visible = false;
			// 
			// YourOrderTB2
			// 
			this->YourOrderTB2->BackColor = System::Drawing::SystemColors::Control;
			this->YourOrderTB2->Enabled = false;
			this->YourOrderTB2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YourOrderTB2->Location = System::Drawing::Point(192, 190);
			this->YourOrderTB2->Multiline = true;
			this->YourOrderTB2->Name = L"YourOrderTB2";
			this->YourOrderTB2->Size = System::Drawing::Size(502, 297);
			this->YourOrderTB2->TabIndex = 80;
			this->YourOrderTB2->Text = L"ID: 10\r\nName: John Doe\r\nPrice: $25.60\r\nItems:\r\nFull Cream Milk 1L, 2\r\n12 700g Egg"
				L"s, 1\r\nWhite Bread Loaf, 2\r\n";
			this->YourOrderTB2->Visible = false;
			// 
			// ContinueBN
			// 
			this->ContinueBN->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ContinueBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ContinueBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ContinueBN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ContinueBN->Location = System::Drawing::Point(722, 190);
			this->ContinueBN->Name = L"ContinueBN";
			this->ContinueBN->Size = System::Drawing::Size(112, 51);
			this->ContinueBN->TabIndex = 81;
			this->ContinueBN->Text = L"Continue Ordering";
			this->ContinueBN->UseVisualStyleBackColor = false;
			this->ContinueBN->Visible = false;
			this->ContinueBN->Click += gcnew System::EventHandler(this, &Form1::ContinueBN_Click);
			// 
			// FinishedBN
			// 
			this->FinishedBN->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->FinishedBN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FinishedBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FinishedBN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FinishedBN->Location = System::Drawing::Point(722, 254);
			this->FinishedBN->Name = L"FinishedBN";
			this->FinishedBN->Size = System::Drawing::Size(112, 51);
			this->FinishedBN->TabIndex = 81;
			this->FinishedBN->Text = L"Complete Order";
			this->FinishedBN->UseVisualStyleBackColor = false;
			this->FinishedBN->Visible = false;
			this->FinishedBN->Click += gcnew System::EventHandler(this, &Form1::FinishedBN_Click);
			// 
			// AlertValues
			// 
			this->AlertValues->Enabled = false;
			this->AlertValues->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AlertValues->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->AlertValues->Location = System::Drawing::Point(1034, 126);
			this->AlertValues->Name = L"AlertValues";
			this->AlertValues->ReadOnly = true;
			this->AlertValues->Size = System::Drawing::Size(30, 26);
			this->AlertValues->TabIndex = 82;
			this->AlertValues->UseWaitCursor = true;
			this->AlertValues->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// AlertsBN
			// 
			this->AlertsBN->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->AlertsBN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AlertsBN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AlertsBN->Location = System::Drawing::Point(953, 126);
			this->AlertsBN->Name = L"AlertsBN";
			this->AlertsBN->Size = System::Drawing::Size(75, 26);
			this->AlertsBN->TabIndex = 83;
			this->AlertsBN->Text = L"Alerts";
			this->AlertsBN->UseVisualStyleBackColor = false;
			this->AlertsBN->Click += gcnew System::EventHandler(this, &Form1::AlertsBN_Click);
			// 
			// AlertsTB1
			// 
			this->AlertsTB1->BackColor = System::Drawing::SystemColors::MenuBar;
			this->AlertsTB1->Cursor = System::Windows::Forms::Cursors::Default;
			this->AlertsTB1->Enabled = false;
			this->AlertsTB1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AlertsTB1->Location = System::Drawing::Point(179, 159);
			this->AlertsTB1->Multiline = true;
			this->AlertsTB1->Name = L"AlertsTB1";
			this->AlertsTB1->Size = System::Drawing::Size(913, 337);
			this->AlertsTB1->TabIndex = 84;
			this->AlertsTB1->Text = L"Alerts:";
			this->AlertsTB1->Visible = false;
			// 
			// AlertsLabel1
			// 
			this->AlertsLabel1->AutoSize = true;
			this->AlertsLabel1->Enabled = false;
			this->AlertsLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AlertsLabel1->Location = System::Drawing::Point(202, 205);
			this->AlertsLabel1->Name = L"AlertsLabel1";
			this->AlertsLabel1->Size = System::Drawing::Size(137, 20);
			this->AlertsLabel1->TabIndex = 85;
			this->AlertsLabel1->Text = L"Alerts for today:";
			this->AlertsLabel1->Visible = false;
			// 
			// AlertsCalender
			// 
			this->AlertsCalender->Location = System::Drawing::Point(857, 168);
			this->AlertsCalender->Name = L"AlertsCalender";
			this->AlertsCalender->TabIndex = 87;
			this->AlertsCalender->Visible = false;
			this->AlertsCalender->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Form1::AlertsCalender_DateChanged);
			// 
			// ClearOrdersBN
			// 
			this->ClearOrdersBN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearOrdersBN->Location = System::Drawing::Point(446, 197);
			this->ClearOrdersBN->Name = L"ClearOrdersBN";
			this->ClearOrdersBN->Size = System::Drawing::Size(190, 36);
			this->ClearOrdersBN->TabIndex = 88;
			this->ClearOrdersBN->Text = L"Clear Orders";
			this->ClearOrdersBN->UseVisualStyleBackColor = true;
			this->ClearOrdersBN->Visible = false;
			this->ClearOrdersBN->Click += gcnew System::EventHandler(this, &Form1::ClearOrdersBN_Click);
			// 
			// AlertsTB2
			// 
			this->AlertsTB2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AlertsTB2->Location = System::Drawing::Point(206, 244);
			this->AlertsTB2->Multiline = true;
			this->AlertsTB2->Name = L"AlertsTB2";
			this->AlertsTB2->Size = System::Drawing::Size(639, 194);
			this->AlertsTB2->TabIndex = 89;
			this->AlertsTB2->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1210, 568);
			this->Controls->Add(this->AlertsTB2);
			this->Controls->Add(this->ClearOrdersBN);
			this->Controls->Add(this->AlertsCalender);
			this->Controls->Add(this->AlertsLabel1);
			this->Controls->Add(this->AlertsTB1);
			this->Controls->Add(this->AlertsBN);
			this->Controls->Add(this->AlertValues);
			this->Controls->Add(this->FinishedBN);
			this->Controls->Add(this->ContinueBN);
			this->Controls->Add(this->YourOrderTB2);
			this->Controls->Add(this->YourOrderTB);
			this->Controls->Add(this->ViewCartBN);
			this->Controls->Add(this->AddToCartBN);
			this->Controls->Add(this->AddSaleLabel4);
			this->Controls->Add(this->AddSaleLabel5);
			this->Controls->Add(this->AddSaleLabel8);
			this->Controls->Add(this->AddSaleLabel7);
			this->Controls->Add(this->AddSaleLabel6);
			this->Controls->Add(this->AddSaleLabel3);
			this->Controls->Add(this->ComboBox3);
			this->Controls->Add(this->ComboBox2);
			this->Controls->Add(this->EggValue);
			this->Controls->Add(this->ComboBox6);
			this->Controls->Add(this->ComboBox5);
			this->Controls->Add(this->ComboBox4);
			this->Controls->Add(this->ComboBox1);
			this->Controls->Add(this->SweetsValue);
			this->Controls->Add(this->BreadValue);
			this->Controls->Add(this->MeatValue);
			this->Controls->Add(this->DrinksValue);
			this->Controls->Add(this->MilkValue);
			this->Controls->Add(this->SalesIDTB);
			this->Controls->Add(this->AddSaleLabel2);
			this->Controls->Add(this->AddSaleLabel1);
			this->Controls->Add(this->RemoveMemberTB);
			this->Controls->Add(this->RemoveMemberLabel2);
			this->Controls->Add(this->RemoveMemberLabel1);
			this->Controls->Add(this->DisplaySalesTB2);
			this->Controls->Add(this->DisplaySalesTB1);
			this->Controls->Add(this->DisplayMembersTB2);
			this->Controls->Add(this->DisplayMembersTB1);
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
			this->Text = L"Goto Grow";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MilkValue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EggValue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BreadValue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DrinksValue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MeatValue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SweetsValue))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AlertValues))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
private: System::Void SearchMemberBN_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->RemoveMemberLabel1->Visible = false;  //Remove Member
	this->RemoveMemberLabel2->Visible = false;
	this->RemoveMemberTB->Visible = false;
	this->DisplaySalesTB1->Visible = false;     //Current Sales
	this->DisplaySalesTB2->Visible = false;
	this->DisplayMembersTB1->Visible = false;   //Current Members
	this->DisplayMembersTB2->Visible = false;
	this->EnterNewMemberLabel->Visible = false; //Enter New Member
	this->label2->Visible = false;
	this->FirstNameTB->Visible = false;
	this->label3->Visible = false;
	this->SecondNameTB->Visible = false;
	this->label4->Visible = false;
	this->AgeTB->Visible = false;
	this->label6->Visible = false;
	this->IDTB->Visible = false;
	this->label5->Visible = false;
	this->DateOfBirthTB->Visible = false;
	this->AddSaleLabel2->Visible = false;
	this->AddSaleLabel3->Visible = false;
	this->AddSaleLabel4->Visible = false;
	this->AddSaleLabel5->Visible = false;
	this->AddSaleLabel6->Visible = false;
	this->AddSaleLabel7->Visible = false;
	this->AddSaleLabel8->Visible = false;
	this->ComboBox1->Visible = false;
	this->ComboBox2->Visible = false;
	this->ComboBox3->Visible = false;
	this->ComboBox4->Visible = false;
	this->ComboBox5->Visible = false;
	this->ComboBox6->Visible = false;
	this->MilkValue->Visible = false;
	this->EggValue->Visible = false;
	this->BreadValue->Visible = false;
	this->DrinksValue->Visible = false;
	this->MeatValue->Visible = false;
	this->SweetsValue->Visible = false;
	this->SalesIDTB->Visible = false;
	this->AddToCartBN->Visible = false;
	this->ViewCartBN->Visible = false;
	this->AddSaleLabel1->Visible = false;
	this->AlertsCalender->Visible = false;
	this->AlertsTB2->Visible = false;
	this->AlertsTB1->Visible = false;
	this->ClearOrdersBN->Visible = false;
	this->AlertsLabel1->Visible = false;
}

private: System::Void AddSalesBN_Click(System::Object^ sender, System::EventArgs^ e) {
	this->RemoveMemberLabel1->Visible = false;  //Remove Member
	this->RemoveMemberLabel2->Visible = false;
	this->RemoveMemberTB->Visible = false;
	this->DisplaySalesTB1->Visible = false;     //Current Sales
	this->DisplaySalesTB2->Visible = false;
	this->DisplayMembersTB2->Visible = false;   //Current Members
	this->DisplayMembersTB1->Visible = false;
	this->EnterNewMemberLabel->Visible = false; //Enter New Member
	this->label2->Visible = false;
	this->FirstNameTB->Visible = false;
	this->label3->Visible = false;
	this->SecondNameTB->Visible = false;
	this->label4->Visible = false;
	this->AgeTB->Visible = false;
	this->label6->Visible = false;
	this->IDTB->Visible = false;
	this->label5->Visible = false;
	this->DateOfBirthTB->Visible = false;
	this->AddSaleLabel2->Visible = true;
	this->AddSaleLabel3->Visible = true;
	this->AddSaleLabel4->Visible = true;
	this->AddSaleLabel5->Visible = true;
	this->AddSaleLabel6->Visible = true;
	this->AddSaleLabel7->Visible = true;
	this->AddSaleLabel8->Visible = true;
	this->ComboBox1->Visible = true;
	this->ComboBox2->Visible = true;
	this->ComboBox3->Visible = true;
	this->ComboBox4->Visible = true;
	this->ComboBox5->Visible = true;
	this->ComboBox6->Visible = true;
	this->MilkValue->Visible = true;
	this->EggValue->Visible = true;
	this->BreadValue->Visible = true;
	this->DrinksValue->Visible = true;
	this->MeatValue->Visible = true;
	this->SweetsValue->Visible = true;
	this->SalesIDTB->Visible = true;
	this->AddToCartBN->Visible = true;
	this->ViewCartBN->Visible = true;
	this->AddSaleLabel1->Visible = true;
	this->AlertsCalender->Visible = false;
	this->AlertsTB2->Visible = false;
	this->AlertsTB1->Visible = false;
	this->ClearOrdersBN->Visible = false;
	this->AlertsLabel1->Visible = false;
}
private: System::Void DisplayMembersBN_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->RemoveMemberLabel1->Visible = false;  //Remove Member
	this->RemoveMemberLabel2->Visible = false;
	this->RemoveMemberTB->Visible = false;
	this->DisplaySalesTB1->Visible = false;     //Current Sales
	this->DisplaySalesTB2->Visible = false;
	this->DisplayMembersTB2->Visible = true;   //Current Members
	this->DisplayMembersTB1->Visible = true;
	this->EnterNewMemberLabel->Visible = false; //Enter New Member
	this->label2->Visible = false;
	this->FirstNameTB->Visible = false;
	this->label3->Visible = false;
	this->SecondNameTB->Visible = false;
	this->label4->Visible = false;
	this->AgeTB->Visible = false;
	this->label6->Visible = false;
	this->IDTB->Visible = false;
	this->label5->Visible = false;
	this->DateOfBirthTB->Visible = false;
	this->AddSaleLabel2->Visible = false;
	this->AddSaleLabel3->Visible = false;
	this->AddSaleLabel4->Visible = false;
	this->AddSaleLabel5->Visible = false;
	this->AddSaleLabel6->Visible = false;
	this->AddSaleLabel7->Visible = false;
	this->AddSaleLabel8->Visible = false;
	this->ComboBox1->Visible = false;
	this->ComboBox2->Visible = false;
	this->ComboBox3->Visible = false;
	this->ComboBox4->Visible = false;
	this->ComboBox5->Visible = false;
	this->ComboBox6->Visible = false;
	this->MilkValue->Visible = false;
	this->EggValue->Visible = false;
	this->BreadValue->Visible = false;
	this->DrinksValue->Visible = false;
	this->MeatValue->Visible = false;
	this->SweetsValue->Visible = false;
	this->SalesIDTB->Visible = false;
	this->AddToCartBN->Visible = false;
	this->ViewCartBN->Visible = false;
	this->AddSaleLabel1->Visible = false;
	this->AlertsCalender->Visible = false;
	this->AlertsTB2->Visible = false;
	this->AlertsTB1->Visible = false;
	this->ClearOrdersBN->Visible = false;
	this->AlertsLabel1->Visible = false;
}
private: System::Void DoneBN_Click(System::Object^ sender, System::EventArgs^ e) {
	
	

	
}
private: System::Void DisplaySalesBN_Click(System::Object^ sender, System::EventArgs^ e) {
	this->RemoveMemberLabel1->Visible = false;  //Remove Member
	this->RemoveMemberLabel2->Visible = false;
	this->RemoveMemberTB->Visible = false;
	this->DisplayMembersTB1->Visible = false;   //Current Members
	this->DisplayMembersTB2->Visible = false;
	this->EnterNewMemberLabel->Visible = false; //Enter New Member
	this->label2->Visible = false;
	this->FirstNameTB->Visible = false;
	this->label3->Visible = false;
	this->SecondNameTB->Visible = false;
	this->label4->Visible = false;
	this->AgeTB->Visible = false;
	this->label6->Visible = false;
	this->IDTB->Visible = false;
	this->label5->Visible = false;
	this->DateOfBirthTB->Visible = false;
	this->DisplaySalesTB2->Visible = true;     //Current Sales
	this->DisplaySalesTB1->Visible = true;
	this->AddSaleLabel2->Visible = false;
	this->AddSaleLabel3->Visible = false;
	this->AddSaleLabel4->Visible = false;
	this->AddSaleLabel5->Visible = false;
	this->AddSaleLabel6->Visible = false;
	this->AddSaleLabel7->Visible = false;
	this->AddSaleLabel8->Visible = false;
	this->ComboBox1->Visible = false;
	this->ComboBox2->Visible = false;
	this->ComboBox3->Visible = false;
	this->ComboBox4->Visible = false;
	this->ComboBox5->Visible = false;
	this->ComboBox6->Visible = false;
	this->MilkValue->Visible = false;
	this->EggValue->Visible = false;
	this->BreadValue->Visible = false;
	this->DrinksValue->Visible = false;
	this->MeatValue->Visible = false;
	this->SweetsValue->Visible = false;
	this->SalesIDTB->Visible = false;
	this->AddToCartBN->Visible = false;
	this->ViewCartBN->Visible = false;
	this->AddSaleLabel1->Visible = false;
	this->AlertsCalender->Visible = false;
	this->AlertsTB2->Visible = false;
	this->AlertsTB1->Visible = false;
	this->ClearOrdersBN->Visible = false;
	this->AlertsLabel1->Visible = false;
}
private: System::Void RemoveMemberBN_Click(System::Object^ sender, System::EventArgs^ e) {
	this->RemoveMemberTB->Visible = true;
	this->RemoveMemberLabel2->Visible = true;  //Remove Member
	this->RemoveMemberLabel1->Visible = true;
	this->DisplayMembersTB1->Visible = false;   //Current Members
	this->DisplayMembersTB2->Visible = false;
	this->EnterNewMemberLabel->Visible = false; //Enter New Member
	this->label2->Visible = false;
	this->FirstNameTB->Visible = false;
	this->label3->Visible = false;
	this->SecondNameTB->Visible = false;
	this->label4->Visible = false;
	this->AgeTB->Visible = false;
	this->label6->Visible = false;
	this->IDTB->Visible = false;
	this->label5->Visible = false;
	this->DateOfBirthTB->Visible = false;
	this->DisplaySalesTB1->Visible = false;     //Current Sales
	this->DisplaySalesTB2->Visible = false;
	this->AddSaleLabel2->Visible = false;
	this->AddSaleLabel3->Visible = false;
	this->AddSaleLabel4->Visible = false;
	this->AddSaleLabel5->Visible = false;
	this->AddSaleLabel6->Visible = false;
	this->AddSaleLabel7->Visible = false;
	this->AddSaleLabel8->Visible = false;
	this->ComboBox1->Visible = false;
	this->ComboBox2->Visible = false;
	this->ComboBox3->Visible = false;
	this->ComboBox4->Visible = false;
	this->ComboBox5->Visible = false;
	this->ComboBox6->Visible = false;
	this->MilkValue->Visible = false;
	this->EggValue->Visible = false;
	this->BreadValue->Visible = false;
	this->DrinksValue->Visible = false;
	this->MeatValue->Visible = false;
	this->SweetsValue->Visible = false;
	this->SalesIDTB->Visible = false;
	this->AddToCartBN->Visible = false;
	this->ViewCartBN->Visible = false;
	this->AddSaleLabel1->Visible = false;
	this->AlertsCalender->Visible = false;
	this->AlertsTB2->Visible = false;
	this->AlertsTB1->Visible = false;
	this->ClearOrdersBN->Visible = false;
	this->AlertsLabel1->Visible = false;
}
private: System::Void AddMemberBN_Click(System::Object^ sender, System::EventArgs^ e) {
	this->RemoveMemberLabel1->Visible = false;  //Remove Member
	this->RemoveMemberLabel2->Visible = false;
	this->RemoveMemberTB->Visible = false;
	this->DisplaySalesTB1->Visible = false;     //Current Sales
	this->DisplaySalesTB2->Visible = false;
	this->DisplayMembersTB1->Visible = false;   //Current Members
	this->DisplayMembersTB2->Visible = false;
	this->EnterNewMemberLabel->Visible = true; //Enter New Member
	this->label2->Visible = true;
	this->FirstNameTB->Visible = true;
	this->label3->Visible = true;
	this->SecondNameTB->Visible = true;
	this->label4->Visible = true;
	this->AgeTB->Visible = true;
	this->label6->Visible = true;
	this->IDTB->Visible = true;
	this->label5->Visible = true;
	this->DateOfBirthTB->Visible = true;
	this->AlertsCalender->Visible = false;
	this->AlertsTB2->Visible = false;
	this->AlertsTB1->Visible = false;
	this->ClearOrdersBN->Visible = false;
	this->AlertsLabel1->Visible = false;
	this->FirstNameTB->Text = L"";
	this->SecondNameTB->Text = L"";
	this->AgeTB->Text = L"";
	this->IDTB->Text = L"";
	this->DateOfBirthTB->Text = L"";
	this->EnterNewMemberLabel->Text = L"Enter new member: ";
}
private: System::Void EditMemberBN_Click(System::Object^ sender, System::EventArgs^ e) {
	this->RemoveMemberLabel1->Visible = false;  //Remove Member
	this->RemoveMemberLabel2->Visible = false;
	this->RemoveMemberTB->Visible = false;
	this->DisplaySalesTB1->Visible = false;     //Current Sales
	this->DisplaySalesTB2->Visible = false;
	this->DisplayMembersTB1->Visible = false;   //Current Members
	this->DisplayMembersTB2->Visible = false;
	this->EnterNewMemberLabel->Visible = true; //Enter New Member
	this->label2->Visible = true;
	this->FirstNameTB->Visible = true;
	this->label3->Visible = true;
	this->SecondNameTB->Visible = true;
	this->label4->Visible = true;
	this->AgeTB->Visible = true;
	this->label6->Visible = true;
	this->IDTB->Visible = true;
	this->label5->Visible = true;
	this->DateOfBirthTB->Visible = true;
	this->AddSaleLabel2->Visible = false;
	this->AddSaleLabel3->Visible = false;
	this->AddSaleLabel4->Visible = false;
	this->AddSaleLabel5->Visible = false;
	this->AddSaleLabel6->Visible = false;
	this->AddSaleLabel7->Visible = false;
	this->AddSaleLabel8->Visible = false;
	this->ComboBox1->Visible = false;
	this->ComboBox2->Visible = false;
	this->ComboBox3->Visible = false;
	this->ComboBox4->Visible = false;
	this->ComboBox5->Visible = false;
	this->ComboBox6->Visible = false;
	this->MilkValue->Visible = false;
	this->EggValue->Visible = false;
	this->BreadValue->Visible = false;
	this->DrinksValue->Visible = false;
	this->MeatValue->Visible = false;
	this->SweetsValue->Visible = false;
	this->SalesIDTB->Visible = false;
	this->AddToCartBN->Visible = false;
	this->ViewCartBN->Visible = false;
	this->AddSaleLabel1->Visible = false;
	this->AlertsCalender->Visible = false;
	this->AlertsTB2->Visible = false;
	this->AlertsTB1->Visible = false;
	this->ClearOrdersBN->Visible = false;
	this->AlertsLabel1->Visible = false;

	this->FirstNameTB->Text = L"";
	this->SecondNameTB->Text = L"";
	this->AgeTB->Text = L"";
	this->IDTB->Text = L"";
	this->DateOfBirthTB->Text = L"";
	this->EnterNewMemberLabel->Text = L"Edit member: ";
}

private: System::Void AddToCartBN_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("Order Saved!");

	this->ComboBox1->Text = L"None";
	this->ComboBox2->Text = L"None";
	this->ComboBox3->Text = L"None";
	this->ComboBox4->Text = L"None";
	this->ComboBox5->Text = L"None";
	this->ComboBox6->Text = L"None";
	
	this->MilkValue->Value = 0;
	this->EggValue->Value = 0;
	this->BreadValue->Value = 0;
	this->DrinksValue->Value = 0;
	this->MeatValue->Value = 0;
	this->SweetsValue->Value = 0;
	}
private: System::Void Form1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (MessageBox::Show("Do you really want to exit?", "Goto Grow", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		Application::Exit();

	}
}
private: System::Void ExitBN_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (MessageBox::Show("Do you really want to exit?", "Goto Grow", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {

		Application::Exit(); 

	}
}
private: System::Void ViewCartBN_Click(System::Object^ sender, System::EventArgs^ e) {
	this->YourOrderTB2->Visible = true;
	this->FinishedBN->Visible = true;
	this->ContinueBN->Visible = true;
	this->YourOrderTB->Visible = true;
	this->AddSaleLabel2->Visible = false;
	this->AddSaleLabel3->Visible = false;
	this->AddSaleLabel4->Visible = false;
	this->AddSaleLabel5->Visible = false;
	this->AddSaleLabel6->Visible = false;
	this->AddSaleLabel7->Visible = false;
	this->AddSaleLabel8->Visible = false;
	this->ComboBox1->Visible = false;
	this->ComboBox2->Visible = false;
	this->ComboBox3->Visible = false;
	this->ComboBox4->Visible = false;
	this->ComboBox5->Visible = false;
	this->ComboBox6->Visible = false;
	this->MilkValue->Visible = false;
	this->EggValue->Visible = false;
	this->BreadValue->Visible = false;
	this->DrinksValue->Visible = false;
	this->MeatValue->Visible = false;
	this->SweetsValue->Visible = false;
	this->SalesIDTB->Visible = false;
	this->AddToCartBN->Visible = false;
	this->ViewCartBN->Visible = false;
	this->AddSaleLabel1->Visible = false;



}
private: System::Void ContinueBN_Click(System::Object^ sender, System::EventArgs^ e) {
	this->YourOrderTB->Visible = false;
	this->YourOrderTB2->Visible = false;
	this->FinishedBN->Visible = false;
	this->ContinueBN->Visible = false;
	this->AddSaleLabel2->Visible = true;
	this->AddSaleLabel3->Visible = true;
	this->AddSaleLabel4->Visible = true;
	this->AddSaleLabel5->Visible = true;
	this->AddSaleLabel6->Visible = true;
	this->AddSaleLabel7->Visible = true;
	this->AddSaleLabel8->Visible = true;
	this->ComboBox1->Visible = true;
	this->ComboBox2->Visible = true;
	this->ComboBox3->Visible = true;
	this->ComboBox4->Visible = true;
	this->ComboBox5->Visible = true;
	this->ComboBox6->Visible = true;
	this->MilkValue->Visible = true;
	this->EggValue->Visible = true;
	this->BreadValue->Visible = true;
	this->DrinksValue->Visible = true;
	this->MeatValue->Visible = true;
	this->SweetsValue->Visible = true;
	this->SalesIDTB->Visible = true;
	this->AddToCartBN->Visible = true;
	this->ViewCartBN->Visible = true;
	this->AddSaleLabel1->Visible = true;
}
private: System::Void FinishedBN_Click(System::Object^ sender, System::EventArgs^ e) {
	

	this->SalesIDTB->Text = L"";
	this->ComboBox1->Text = L"None";
	this->ComboBox2->Text = L"None";
	this->ComboBox3->Text = L"None";
	this->ComboBox4->Text = L"None";
	this->ComboBox5->Text = L"None";
	this->ComboBox6->Text = L"None";

	this->MilkValue->Value = 0;
	this->EggValue->Value = 0;
	this->BreadValue->Value = 0;
	this->DrinksValue->Value = 0;
	this->MeatValue->Value = 0;
	this->SweetsValue->Value = 0;

	MessageBox::Show("Order Completed!");

	this->YourOrderTB->Visible = false;
	this->YourOrderTB2->Visible = false;
	this->FinishedBN->Visible = false;
	this->ContinueBN->Visible = false;
	this->AddSaleLabel2->Visible = true;
	this->AddSaleLabel3->Visible = true;
	this->AddSaleLabel4->Visible = true;
	this->AddSaleLabel5->Visible = true;
	this->AddSaleLabel6->Visible = true;
	this->AddSaleLabel7->Visible = true;
	this->AddSaleLabel8->Visible = true;
	this->ComboBox1->Visible = true;
	this->ComboBox2->Visible = true;
	this->ComboBox3->Visible = true;
	this->ComboBox4->Visible = true;
	this->ComboBox5->Visible = true;
	this->ComboBox6->Visible = true;
	this->MilkValue->Visible = true;
	this->EggValue->Visible = true;
	this->BreadValue->Visible = true;
	this->DrinksValue->Visible = true;
	this->MeatValue->Visible = true;
	this->SweetsValue->Visible = true;
	this->SalesIDTB->Visible = true;
	this->AddToCartBN->Visible = true;
	this->ViewCartBN->Visible = true;
	this->AddSaleLabel1->Visible = true;
}
private: System::Void AlertsBN_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AlertsCalender->Visible = true;
	this->ClearOrdersBN->Visible = true;
	this->AlertsLabel1->Visible = true;
	this->AlertsTB2->Visible = true;
	this->AlertsTB1->Visible = true;
}
private: System::Void ClearOrdersBN_Click(System::Object^ sender, System::EventArgs^ e) {
	this->AlertsTB2->Text = L" ";
}
private: System::Void AlertsCalender_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	this->AlertsTB2->Text = L"18/5/22, John Doe, $25.60";

	//if AlertsCalender_DateChanged == AlertsCalender_TodaysDate {
	// this->AlertsTB2->Text = L"18/5/22, John Doe, $25.60";
	//}
}
};
};

