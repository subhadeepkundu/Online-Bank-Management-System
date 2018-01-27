#pragma once

#include <fstream>
#include "common.h"

namespace VirtualBank {

	using namespace System;
	using namespace System::IO;
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
	private: System::Windows::Forms::Button^  login_button;
	private: System::Windows::Forms::TextBox^  username_input;
	protected: 

	private: System::Windows::Forms::PageSetupDialog^  pageSetupDialog1;
	private: System::Windows::Forms::TextBox^  pwd_input;

	private: System::Windows::Forms::LinkLabel^  userlogin;
	private: System::Windows::Forms::LinkLabel^  adminlogin;
	private: System::Windows::Forms::LinkLabel^  newuser;
	private: System::Windows::Forms::MaskedTextBox^  fnbox;

	private: System::Windows::Forms::Label^  fn;
	private: System::Windows::Forms::Label^  sn;
	private: System::Windows::Forms::MaskedTextBox^  snbox;



	private: System::Windows::Forms::Label^  phn;
	private: System::Windows::Forms::MaskedTextBox^  phnbox;


	private: System::Windows::Forms::Label^  eid;
	private: System::Windows::Forms::MaskedTextBox^  eidbox;



	private: System::Windows::Forms::Label^  initd;
	private: System::Windows::Forms::MaskedTextBox^  initdbox;
	private: System::Windows::Forms::Button^  createaccount_button;




	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  acceptrequest;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox10;
	private: System::Windows::Forms::Label^  pwd;
	private: System::Windows::Forms::MaskedTextBox^  pwdbox;


	private: System::Windows::Forms::Label^  confpwd;
	private: System::Windows::Forms::MaskedTextBox^  confpwdbox;
	private: System::Windows::Forms::LinkLabel^  homelink;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::Windows::Forms::LinkLabel^  linkLabel4;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox6;
	private: System::Windows::Forms::LinkLabel^  linkLabel5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox11;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox12;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::LinkLabel^  linkLabel6;
private: System::Windows::Forms::PictureBox^  pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->login_button = (gcnew System::Windows::Forms::Button());
			this->username_input = (gcnew System::Windows::Forms::TextBox());
			this->pageSetupDialog1 = (gcnew System::Windows::Forms::PageSetupDialog());
			this->pwd_input = (gcnew System::Windows::Forms::TextBox());
			this->userlogin = (gcnew System::Windows::Forms::LinkLabel());
			this->adminlogin = (gcnew System::Windows::Forms::LinkLabel());
			this->newuser = (gcnew System::Windows::Forms::LinkLabel());
			this->fnbox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->fn = (gcnew System::Windows::Forms::Label());
			this->sn = (gcnew System::Windows::Forms::Label());
			this->snbox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->phn = (gcnew System::Windows::Forms::Label());
			this->phnbox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->eid = (gcnew System::Windows::Forms::Label());
			this->eidbox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->initd = (gcnew System::Windows::Forms::Label());
			this->initdbox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->createaccount_button = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->acceptrequest = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox10 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->pwd = (gcnew System::Windows::Forms::Label());
			this->pwdbox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->confpwd = (gcnew System::Windows::Forms::Label());
			this->confpwdbox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->homelink = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox11 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox12 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// login_button
			// 
			this->login_button->Location = System::Drawing::Point(119, 130);
			this->login_button->Name = L"login_button";
			this->login_button->Size = System::Drawing::Size(75, 23);
			this->login_button->TabIndex = 1;
			this->login_button->Text = L"LOGIN";
			this->login_button->UseVisualStyleBackColor = true;
			this->login_button->Visible = false;
			this->login_button->Click += gcnew System::EventHandler(this, &Form1::login_button_Click);
			// 
			// username_input
			// 
			this->username_input->Location = System::Drawing::Point(98, 65);
			this->username_input->Name = L"username_input";
			this->username_input->Size = System::Drawing::Size(100, 20);
			this->username_input->TabIndex = 2;
			this->username_input->Visible = false;
			// 
			// pwd_input
			// 
			this->pwd_input->Location = System::Drawing::Point(98, 96);
			this->pwd_input->Name = L"pwd_input";
			this->pwd_input->Size = System::Drawing::Size(100, 20);
			this->pwd_input->TabIndex = 3;
			this->pwd_input->UseSystemPasswordChar = true;
			this->pwd_input->Visible = false;
			// 
			// userlogin
			// 
			this->userlogin->AutoSize = true;
			this->userlogin->Location = System::Drawing::Point(230, 75);
			this->userlogin->Name = L"userlogin";
			this->userlogin->Size = System::Drawing::Size(58, 13);
			this->userlogin->TabIndex = 4;
			this->userlogin->TabStop = true;
			this->userlogin->Text = L"User Login";
			this->userlogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::userlogin_LinkClicked);
			// 
			// adminlogin
			// 
			this->adminlogin->AutoSize = true;
			this->adminlogin->Location = System::Drawing::Point(230, 106);
			this->adminlogin->Name = L"adminlogin";
			this->adminlogin->Size = System::Drawing::Size(65, 13);
			this->adminlogin->TabIndex = 5;
			this->adminlogin->TabStop = true;
			this->adminlogin->Text = L"Admin Login";
			this->adminlogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::adminlogin_LinkClicked);
			// 
			// newuser
			// 
			this->newuser->AutoSize = true;
			this->newuser->Location = System::Drawing::Point(230, 137);
			this->newuser->Name = L"newuser";
			this->newuser->Size = System::Drawing::Size(54, 13);
			this->newuser->TabIndex = 6;
			this->newuser->TabStop = true;
			this->newuser->Text = L"New User";
			this->newuser->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::newuser_LinkClicked);
			// 
			// fnbox
			// 
			this->fnbox->Location = System::Drawing::Point(111, 12);
			this->fnbox->Name = L"fnbox";
			this->fnbox->Size = System::Drawing::Size(100, 20);
			this->fnbox->TabIndex = 7;
			this->fnbox->Visible = false;
			this->fnbox->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &Form1::fnbox_MaskInputRejected);
			// 
			// fn
			// 
			this->fn->AutoSize = true;
			this->fn->Location = System::Drawing::Point(33, 15);
			this->fn->Name = L"fn";
			this->fn->Size = System::Drawing::Size(57, 13);
			this->fn->TabIndex = 8;
			this->fn->Text = L"First Name";
			this->fn->Visible = false;
			this->fn->Click += gcnew System::EventHandler(this, &Form1::fn_Click);
			// 
			// sn
			// 
			this->sn->AutoSize = true;
			this->sn->Location = System::Drawing::Point(33, 41);
			this->sn->Name = L"sn";
			this->sn->Size = System::Drawing::Size(75, 13);
			this->sn->TabIndex = 10;
			this->sn->Text = L"Second Name";
			this->sn->Visible = false;
			// 
			// snbox
			// 
			this->snbox->Location = System::Drawing::Point(111, 38);
			this->snbox->Name = L"snbox";
			this->snbox->Size = System::Drawing::Size(100, 20);
			this->snbox->TabIndex = 9;
			this->snbox->Visible = false;
			// 
			// phn
			// 
			this->phn->AutoSize = true;
			this->phn->Location = System::Drawing::Point(33, 67);
			this->phn->Name = L"phn";
			this->phn->Size = System::Drawing::Size(37, 13);
			this->phn->TabIndex = 12;
			this->phn->Text = L"Ph No";
			this->phn->Visible = false;
			// 
			// phnbox
			// 
			this->phnbox->Location = System::Drawing::Point(111, 64);
			this->phnbox->Mask = L"9990000000";
			this->phnbox->Name = L"phnbox";
			this->phnbox->Size = System::Drawing::Size(100, 20);
			this->phnbox->TabIndex = 11;
			this->phnbox->Visible = false;
			// 
			// eid
			// 
			this->eid->AutoSize = true;
			this->eid->Location = System::Drawing::Point(33, 93);
			this->eid->Name = L"eid";
			this->eid->Size = System::Drawing::Size(46, 13);
			this->eid->TabIndex = 14;
			this->eid->Text = L"Email ID";
			this->eid->Visible = false;
			// 
			// eidbox
			// 
			this->eidbox->Location = System::Drawing::Point(111, 90);
			this->eidbox->Name = L"eidbox";
			this->eidbox->Size = System::Drawing::Size(100, 20);
			this->eidbox->TabIndex = 13;
			this->eidbox->Visible = false;
			// 
			// initd
			// 
			this->initd->AutoSize = true;
			this->initd->Location = System::Drawing::Point(33, 119);
			this->initd->Name = L"initd";
			this->initd->Size = System::Drawing::Size(70, 13);
			this->initd->TabIndex = 16;
			this->initd->Text = L"Initial Deposit";
			this->initd->Visible = false;
			// 
			// initdbox
			// 
			this->initdbox->Location = System::Drawing::Point(111, 116);
			this->initdbox->Mask = L"0000000000";
			this->initdbox->Name = L"initdbox";
			this->initdbox->Size = System::Drawing::Size(100, 20);
			this->initdbox->TabIndex = 15;
			this->initdbox->Visible = false;
			// 
			// createaccount_button
			// 
			this->createaccount_button->Location = System::Drawing::Point(75, 195);
			this->createaccount_button->Name = L"createaccount_button";
			this->createaccount_button->Size = System::Drawing::Size(102, 23);
			this->createaccount_button->TabIndex = 17;
			this->createaccount_button->Text = L"Create Account";
			this->createaccount_button->UseVisualStyleBackColor = true;
			this->createaccount_button->Visible = false;
			this->createaccount_button->Click += gcnew System::EventHandler(this, &Form1::createaccount_button_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->checkedListBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->acceptrequest);
			this->panel1->Location = System::Drawing::Point(305, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(237, 107);
			this->panel1->TabIndex = 18;
			this->panel1->Visible = false;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(3, 4);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(231, 94);
			this->checkedListBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(382, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Delete Account";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(276, 147);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 3;
			// 
			// acceptrequest
			// 
			this->acceptrequest->Location = System::Drawing::Point(365, 104);
			this->acceptrequest->Name = L"acceptrequest";
			this->acceptrequest->Size = System::Drawing::Size(75, 23);
			this->acceptrequest->TabIndex = 2;
			this->acceptrequest->Text = L"Accept";
			this->acceptrequest->UseVisualStyleBackColor = true;
			this->acceptrequest->Click += gcnew System::EventHandler(this, &Form1::acceptrequest_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(567, 154);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 13);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Email ID";
			this->label7->Visible = false;
			// 
			// maskedTextBox7
			// 
			this->maskedTextBox7->Enabled = false;
			this->maskedTextBox7->Location = System::Drawing::Point(645, 151);
			this->maskedTextBox7->Name = L"maskedTextBox7";
			this->maskedTextBox7->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox7->TabIndex = 26;
			this->maskedTextBox7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(567, 128);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 13);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Ph No";
			this->label8->Visible = false;
			// 
			// maskedTextBox8
			// 
			this->maskedTextBox8->Enabled = false;
			this->maskedTextBox8->Location = System::Drawing::Point(645, 125);
			this->maskedTextBox8->Mask = L"9990000000";
			this->maskedTextBox8->Name = L"maskedTextBox8";
			this->maskedTextBox8->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox8->TabIndex = 24;
			this->maskedTextBox8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(567, 102);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Second Name";
			this->label9->Visible = false;
			// 
			// maskedTextBox9
			// 
			this->maskedTextBox9->Enabled = false;
			this->maskedTextBox9->Location = System::Drawing::Point(645, 99);
			this->maskedTextBox9->Name = L"maskedTextBox9";
			this->maskedTextBox9->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox9->TabIndex = 22;
			this->maskedTextBox9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(567, 76);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"First Name";
			this->label10->Visible = false;
			// 
			// maskedTextBox10
			// 
			this->maskedTextBox10->Enabled = false;
			this->maskedTextBox10->Location = System::Drawing::Point(645, 73);
			this->maskedTextBox10->Name = L"maskedTextBox10";
			this->maskedTextBox10->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox10->TabIndex = 20;
			this->maskedTextBox10->Visible = false;
			// 
			// pwd
			// 
			this->pwd->AutoSize = true;
			this->pwd->Location = System::Drawing::Point(33, 145);
			this->pwd->Name = L"pwd";
			this->pwd->Size = System::Drawing::Size(53, 13);
			this->pwd->TabIndex = 32;
			this->pwd->Text = L"Password";
			this->pwd->Visible = false;
			// 
			// pwdbox
			// 
			this->pwdbox->Location = System::Drawing::Point(111, 142);
			this->pwdbox->Name = L"pwdbox";
			this->pwdbox->Size = System::Drawing::Size(100, 20);
			this->pwdbox->TabIndex = 31;
			this->pwdbox->UseSystemPasswordChar = true;
			this->pwdbox->Visible = false;
			// 
			// confpwd
			// 
			this->confpwd->AutoSize = true;
			this->confpwd->Location = System::Drawing::Point(18, 171);
			this->confpwd->Name = L"confpwd";
			this->confpwd->Size = System::Drawing::Size(91, 13);
			this->confpwd->TabIndex = 34;
			this->confpwd->Text = L"Confirm Password";
			this->confpwd->Visible = false;
			// 
			// confpwdbox
			// 
			this->confpwdbox->Location = System::Drawing::Point(111, 168);
			this->confpwdbox->Name = L"confpwdbox";
			this->confpwdbox->Size = System::Drawing::Size(100, 20);
			this->confpwdbox->TabIndex = 33;
			this->confpwdbox->UseSystemPasswordChar = true;
			this->confpwdbox->Visible = false;
			// 
			// homelink
			// 
			this->homelink->AutoSize = true;
			this->homelink->Location = System::Drawing::Point(238, 52);
			this->homelink->Name = L"homelink";
			this->homelink->Size = System::Drawing::Size(39, 13);
			this->homelink->TabIndex = 35;
			this->homelink->TabStop = true;
			this->homelink->Text = L"HOME";
			this->homelink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::homelink_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Name";
			this->label1->Visible = false;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(43, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Password";
			this->label2->Visible = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(-106, 20);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(77, 13);
			this->linkLabel1->TabIndex = 0;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Update Details";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Location = System::Drawing::Point(169, 8);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(87, 13);
			this->linkLabel3->TabIndex = 21;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Withdraw Money";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel3_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(102, 8);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(61, 13);
			this->linkLabel2->TabIndex = 20;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Add Money";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel2_LinkClicked);
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Location = System::Drawing::Point(-105, 30);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(76, 13);
			this->linkLabel4->TabIndex = 22;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Close Account";
			this->linkLabel4->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel4_LinkClicked);
			// 
			// maskedTextBox6
			// 
			this->maskedTextBox6->Enabled = false;
			this->maskedTextBox6->Location = System::Drawing::Point(97, 164);
			this->maskedTextBox6->Name = L"maskedTextBox6";
			this->maskedTextBox6->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox6->TabIndex = 31;
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->Location = System::Drawing::Point(33, 9);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(65, 13);
			this->linkLabel5->TabIndex = 22;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"View Details";
			this->linkLabel5->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel5_LinkClicked);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(19, 167);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Balance";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(-230, 221);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 33;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(-270, 224);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(26, 13);
			this->label11->TabIndex = 34;
			this->label11->Text = L"UID";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(-130, 179);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 23);
			this->button3->TabIndex = 30;
			this->button3->Text = L"UPDATE";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			// 
			// maskedTextBox11
			// 
			this->maskedTextBox11->Location = System::Drawing::Point(80, 201);
			this->maskedTextBox11->Mask = L"0000000000";
			this->maskedTextBox11->Name = L"maskedTextBox11";
			this->maskedTextBox11->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox11->TabIndex = 31;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(-124, 219);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 23);
			this->button4->TabIndex = 35;
			this->button4->Text = L"CONFIRM CLOSE";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// maskedTextBox12
			// 
			this->maskedTextBox12->Location = System::Drawing::Point(80, 231);
			this->maskedTextBox12->Mask = L"0000000000";
			this->maskedTextBox12->Name = L"maskedTextBox12";
			this->maskedTextBox12->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox12->TabIndex = 37;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(34, 205);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(43, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Amount";
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(34, 235);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 13);
			this->label13->TabIndex = 38;
			this->label13->Text = L"Amount";
			this->label13->Click += gcnew System::EventHandler(this, &Form1::label13_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(186, 203);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 36;
			this->button5->Text = L"Deposit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(186, 229);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 39;
			this->button6->Text = L"Withdraw";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->linkLabel6);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->maskedTextBox12);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->maskedTextBox11);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->maskedTextBox6);
			this->panel2->Controls->Add(this->linkLabel5);
			this->panel2->Controls->Add(this->linkLabel4);
			this->panel2->Controls->Add(this->linkLabel2);
			this->panel2->Controls->Add(this->linkLabel3);
			this->panel2->Controls->Add(this->linkLabel1);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Location = System::Drawing::Point(548, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(283, 305);
			this->panel2->TabIndex = 19;
			this->panel2->Visible = false;
			// 
			// linkLabel6
			// 
			this->linkLabel6->AutoSize = true;
			this->linkLabel6->Location = System::Drawing::Point(139, 30);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(35, 13);
			this->linkLabel6->TabIndex = 40;
			this->linkLabel6->TabStop = true;
			this->linkLabel6->Text = L"BACK";
			this->linkLabel6->Visible = false;
			this->linkLabel6->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel6_LinkClicked);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(313, 130);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(214, 160);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(843, 330);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->maskedTextBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->maskedTextBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->maskedTextBox9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->maskedTextBox10);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->homelink);
			this->Controls->Add(this->confpwd);
			this->Controls->Add(this->confpwdbox);
			this->Controls->Add(this->pwd);
			this->Controls->Add(this->pwdbox);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->createaccount_button);
			this->Controls->Add(this->initd);
			this->Controls->Add(this->initdbox);
			this->Controls->Add(this->eid);
			this->Controls->Add(this->eidbox);
			this->Controls->Add(this->phn);
			this->Controls->Add(this->phnbox);
			this->Controls->Add(this->sn);
			this->Controls->Add(this->snbox);
			this->Controls->Add(this->fn);
			this->Controls->Add(this->fnbox);
			this->Controls->Add(this->newuser);
			this->Controls->Add(this->adminlogin);
			this->Controls->Add(this->userlogin);
			this->Controls->Add(this->pwd_input);
			this->Controls->Add(this->username_input);
			this->Controls->Add(this->login_button);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"eBank";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		

#pragma endregion
	private: System::Void userlogin_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 username_input -> Visible = true;
				 pwd_input -> Visible = true;

				 login_button -> Visible = true;

				 userlogin->Visible = false;
				 adminlogin->Visible = false;
				 newuser->Visible = false;
				 label1->Visible = true;
				 label2->Visible = true;
			 }
private: System::Void newuser_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 fn -> Visible = true;
			 sn -> Visible = true;
			 phn -> Visible = true;
			 eid -> Visible = true;
			 initd -> Visible = true;
			 pwd -> Visible = true;
			 confpwd -> Visible = true;
			 adminlogin->Visible = false;
		     userlogin->Visible = false;
			 newuser->Visible = false;

			 fnbox -> Visible = true;
			 snbox -> Visible = true;
			 phnbox -> Visible = true;
			 eidbox -> Visible = true;
			 initdbox -> Visible = true;
			 pwdbox -> Visible = true;
			 confpwdbox -> Visible = true;

			 createaccount_button -> Visible = true;
		 }


private: System::Void login_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(user_or_admin == 0)
			 {
				 

					 String^ fileName = "userdata.txt";
					 StreamReader^ din = File::OpenText(fileName);  
  
					  String^ str;
					  String^ temp;
					  int ij = 0;  
					  while ((str = din->ReadLine()) != nullptr)   
					  {  
						 //count++;
						 //temp = din->ReadLine();
						  if(str == username_input->Text && din->ReadLine() == pwd_input->Text)
						  {
							  
							//MessageBox::Show(temp);
							  MessageBox::Show("Login successful!");
							  checkedListBox1->Items->Add(username_input->Text + " logged in");
							  //curruser = str;
							  ij = 0;

								 panel2 ->Visible = true;
								label6->Visible = false;
							 label11->Visible = false;
							 label12->Visible = false;
							 label13->Visible = false;
							 button4->Visible = false;
							 button5->Visible = false;
							 button6->Visible = false;
							 textBox4->Visible = false;
							 maskedTextBox6->Visible = false;
							 maskedTextBox11->Visible = false;
							 maskedTextBox12->Visible = false;
							 break;
						  }
						  else
						  {
							  ij += 1;
						  }
						  
						  //MessageBox::Show(str);
						 //Console::WriteLine("line {0}: {1}", count, str );  
					  } 
					  if(ij != 0)
					  {
						  MessageBox::Show("Wrong credentials");
					  }
					  din->Close(); 


				 //user code
			 }
			 else if(user_or_admin == 1 && username_input->Text == "admin" && pwd_input->Text == "admin")
			 {
				 user_or_admin = 0;
				 panel1 ->Visible = true;
				 //admin code
			 }
		 }
private: System::Void createaccount_button_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if(pwdbox->Text == confpwdbox->Text)
			 {

				 System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter("userdata.txt", true);
			 
				 sw->WriteLine("~");
				 sw->WriteLine(fnbox->Text);
				 sw->WriteLine(pwdbox->Text);
				 sw->WriteLine(snbox->Text);
				 sw->WriteLine(phnbox->Text);
				 sw->WriteLine(eidbox->Text);
				 sw->WriteLine(initdbox->Text);
			 
			 
				 sw->Close();  
				 MessageBox::Show("Record stored!");
				 checkedListBox1->Items->Add(fnbox->Text + " " + snbox->Text + " created a new account");
			 }
			 else
				 {
					 MessageBox::Show("Passwords don't match!");
			 }//ifstream
		 }
private: System::Void homelink_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 //MessageBox::Show(Convert::ToString(user_or_admin));
			 user_or_admin = 0;
			 userlogin->Visible = true;
			 adminlogin->Visible = true;
			 newuser->Visible = true;
			 username_input->Visible = false;
			 pwd_input->Visible = false;
			 label1->Visible = false;
			 label2->Visible = false;
			 panel1->Visible = false;
			 panel2->Visible = false;
			 login_button->Visible = false;
			 fn->Visible = false;
			 sn->Visible = false;
			 phn->Visible = false;
			 initd->Visible = false;
			eid->Visible = false;
			pwd->Visible = false;
			confpwd->Visible = false;
			createaccount_button->Visible = false;
			fnbox->Visible = false;
			snbox->Visible = false;
			 phnbox->Visible = false;
			eidbox->Visible = false;
			 initdbox->Visible = false;
			 pwdbox->Visible = false;
			 confpwdbox->Visible = false;
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void fn_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void fnbox_MaskInputRejected(System::Object^  sender, System::Windows::Forms::MaskInputRejectedEventArgs^  e) {
		 }
private: System::Void adminlogin_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 user_or_admin = 1;
			 username_input -> Visible = true;
				 pwd_input -> Visible = true;
				 label1-> Visible = true;
					 label2-> Visible = true;
				 login_button -> Visible = true;

				 userlogin->Visible = false;
				 adminlogin->Visible = false;
				 newuser->Visible = false;
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 label7-> Visible = true;
				 label8-> Visible = true;
				 label9-> Visible = true;
				 label10-> Visible = true;
				 maskedTextBox10-> Visible = true;
				 maskedTextBox9-> Visible = true;
				 maskedTextBox8-> Visible = true;
				 maskedTextBox7-> Visible = true;
				 button3-> Visible = true;

				 linkLabel6->Visible = true;

				 linkLabel1->Visible = false;
				 linkLabel2->Visible = false;
				 linkLabel3->Visible = false;
				 linkLabel4->Visible = false;
				 linkLabel5->Visible = false;

				 

		 }
private: System::Void linkLabel5_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		label10-> Visible = true;
		label9-> Visible = true;
		label8-> Visible = true;
		label7-> Visible = true;
			 label6-> Visible = true;
			 maskedTextBox10-> Visible = true;
			 maskedTextBox9-> Visible = true;
			 maskedTextBox8-> Visible = true;
			 maskedTextBox7-> Visible = true;
			 maskedTextBox6-> Visible = true;

			 linkLabel6->Visible = true;

			 linkLabel1->Visible = false;
				 linkLabel2->Visible = false;
				 linkLabel3->Visible = false;
				 linkLabel4->Visible = false;
				 linkLabel5->Visible = false;

				 String^ fileName = "userdata.txt";
					 StreamReader^ din = File::OpenText(fileName);  
  
					  String^ str;
					  //String^ copy;
					  int ij = 1;  
					  while ((str = din->ReadLine()) != nullptr && ij != 0)   
					  {  
						 //count++;
						  if(str == username_input->Text)
						  {
							  maskedTextBox10->Text = str;
							 ij = 0;
						  }
						  else
						  {
							  ij += 1;
						  }
						  
						  //MessageBox::Show(str);
						 //Console::WriteLine("line {0}: {1}", count, str );  
					  } 
					  str = din->ReadLine();
						  maskedTextBox9->Text = str;
						  str = din->ReadLine();
							  maskedTextBox8->Text = str;
						  str = din->ReadLine();
							  maskedTextBox7->Text = str;
						  str = din->ReadLine();
							  maskedTextBox6->Text = str;
					  //MessageBox::Show(copy);
					  //maskedTextBox10->Text = str;
					  din->Close(); 

		 }
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 label12-> Visible = true;
			 maskedTextBox11-> Visible = true;
			 button5-> Visible = true;

			 linkLabel6->Visible = true;

			 linkLabel1->Visible = false;

			 linkLabel1->Visible = false;
				 linkLabel2->Visible = false;
				 linkLabel3->Visible = false;
				 linkLabel4->Visible = false;
				 linkLabel5->Visible = false;
		 }
private: System::Void linkLabel3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 maskedTextBox12-> Visible = true;
			 label13-> Visible = true;
			
			 button6-> Visible = true;

			 linkLabel6->Visible = true;

			 linkLabel1->Visible = false;
				 linkLabel2->Visible = false;
				 linkLabel3->Visible = false;
				 linkLabel4->Visible = false;
				 linkLabel5->Visible = false;

		 }
private: System::Void linkLabel4_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
		button4-> Visible = true;
		label11-> Visible = true;
		textBox4-> Visible = true;

		linkLabel6->Visible = true;

		linkLabel1->Visible = false;
				 linkLabel2->Visible = false;
				 linkLabel3->Visible = false;
				 linkLabel4->Visible = false;
				 linkLabel5->Visible = false;
		 }
private: System::Void linkLabel6_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 label7-> Visible = false;
				 label8-> Visible = false;
				 label9-> Visible = false;
				 label10-> Visible = false;
				 maskedTextBox10-> Visible = false;
				 maskedTextBox9-> Visible = false;
				 maskedTextBox8-> Visible = false;
				 maskedTextBox7-> Visible = false;
				 button3-> Visible = false;


				 label12-> Visible = false;
			 maskedTextBox11-> Visible = false;
			 button5-> Visible = false;

			 maskedTextBox12-> Visible = false;
			 label13-> Visible = false;
			
			 button6-> Visible = false;

			 label10-> Visible = false;
		label9-> Visible = false;
		label8-> Visible = false;
		label7-> Visible = false;
			 label6-> Visible = false;
			 maskedTextBox10-> Visible = false;
			 maskedTextBox9-> Visible = false;
			 maskedTextBox8-> Visible = false;
			 maskedTextBox7-> Visible = false;
			 maskedTextBox6-> Visible = false;

			 button4-> Visible = false;
		label11-> Visible = false;
		textBox4-> Visible = false;

		linkLabel1->Visible = true;
				 linkLabel2->Visible = true;
				 linkLabel3->Visible = true;
				 linkLabel4->Visible = true;
				 linkLabel5->Visible = true;

		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 String^ fileName = "userdata.txt";
					 StreamReader^ din = File::OpenText(fileName);  
  
					  String^ str;
					  //String^ copy;
					  int ij = 1;  
					  while ((str = din->ReadLine()) != nullptr && ij != 0)   
					  {  
						 //count++;
						  if(str == username_input->Text)
						  {
							  maskedTextBox10->Text = str;
							 ij = 0;
						  }
						  else
						  {
							  ij += 1;
						  }
						  
						  //MessageBox::Show(str);
						 //Console::WriteLine("line {0}: {1}", count, str );  
					  } 
						  //maskedTextBox9->Text = str;
						  str = din->ReadLine();
							  //maskedTextBox8->Text = str;
						  str = din->ReadLine();
						  str = din->ReadLine();
						  str = din->ReadLine();
						  MessageBox::Show("Your old balance is "+str);
						  int oldbal = Convert::ToInt32(str);
							  //maskedTextBox7->Text = str;
						//din->WriteLine(maskedTextBox11->Text);
						  String^ news = maskedTextBox11->Text;
						  int newbal = Convert::ToInt32(news) + oldbal;
						  String^ finalbal = Convert::ToString(newbal);
						MessageBox::Show("Your New balance is "+finalbal);
						checkedListBox1->Items->Add(username_input->Text + " added a sum of "+ news);
						maskedTextBox6->Text = finalbal;
						label6->Visible = true;
						maskedTextBox6->Visible = true;
						  //str = din->ReadLine();
							  //maskedTextBox6->Text = str;
					  //MessageBox::Show(copy);
					  //maskedTextBox10->Text = str;
					  din->Close(); 

			 
		 }
private: System::Void acceptrequest_Click(System::Object^  sender, System::EventArgs^  e) {
			 
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

			 String^ fileName = "userdata.txt";
					 StreamReader^ din = File::OpenText(fileName);  
  
					  String^ str;
					  //String^ copy;
					  int ij = 1;  
					  while ((str = din->ReadLine()) != nullptr && ij != 0)   
					  {  
						 //count++;
						  if(str == username_input->Text)
						  {
							  maskedTextBox10->Text = str;
							 ij = 0;
						  }
						  else
						  {
							  ij += 1;
						  }
						  
						  //MessageBox::Show(str);
						 //Console::WriteLine("line {0}: {1}", count, str );  
					  } 
						  //maskedTextBox9->Text = str;
						  str = din->ReadLine();
							  //maskedTextBox8->Text = str;
						  str = din->ReadLine();
						  str = din->ReadLine();
						  str = din->ReadLine();
						  MessageBox::Show("Your old balance is "+str);
						  int oldbal = Convert::ToInt32(str);
							  //maskedTextBox7->Text = str;
						//din->WriteLine(maskedTextBox11->Text);
						  String^ news = maskedTextBox12->Text;
						  int newbal =  oldbal - Convert::ToInt32(news) ;
						  String^ finalbal = Convert::ToString(newbal);
						MessageBox::Show("Your New balance is "+finalbal);
						checkedListBox1->Items->Add(username_input->Text + " withdrew a sum of "+ news);
						maskedTextBox6->Text = finalbal;
						label6->Visible = true;
						maskedTextBox6->Visible = true;
						  //str = din->ReadLine();
							  //maskedTextBox6->Text = str;
					  //MessageBox::Show(copy);
					  //maskedTextBox10->Text = str;
					  din->Close(); 

		 }
};
}

