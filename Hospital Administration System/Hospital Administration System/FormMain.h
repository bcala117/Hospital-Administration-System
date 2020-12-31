#pragma once

namespace HospitalAdministrationSystem 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for FormMain
	/// </summary>
	public ref class FormMain : public System::Windows::Forms::Form
	{
	public:
		FormMain(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormMain();
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	protected:
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::ListView^  listView_Notifications;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage_Patients;
	private: System::Windows::Forms::TabPage^  tabPage_Doctors;
	private: System::Windows::Forms::TabPage^  tabPage_Nurses;
	private: System::Windows::Forms::TabPage^  tabPage_Other;
	private: System::Windows::Forms::TabControl^  tabControl_Main;
	private: System::Windows::Forms::TabPage^  tabPage_Staff;
	private: System::Windows::Forms::TabPage^  tabPage_Inventory;
	private: System::Windows::Forms::TabPage^  tabPage_Rooms;
	private: System::Windows::Forms::ListView^  listView_Patients;

	private: System::Windows::Forms::ColumnHeader^  columnName;
	private: System::Windows::Forms::ColumnHeader^  columnId;
	private: System::Windows::Forms::ColumnHeader^  columnRoom;
	private: System::Windows::Forms::ColumnHeader^  columnDoctor;
	private: System::Windows::Forms::ColumnHeader^  columnNurse;
	private: System::Windows::Forms::ColumnHeader^  columnAilment;
	private: System::Windows::Forms::ColumnHeader^  columnInsurance;
	private: System::Windows::Forms::ColumnHeader^  columnBilling;
	private: System::Windows::Forms::ListView^  listView_Doctors;

	private: System::Windows::Forms::ColumnHeader^  columnHeader_Name;
	private: System::Windows::Forms::ColumnHeader^  columnHeader_EmployeeID;
	private: System::Windows::Forms::ColumnHeader^  columnHeader_ClockedIn;
	private: System::Windows::Forms::ColumnHeader^  columnHeader_WorkHours;
	private: System::Windows::Forms::ColumnHeader^  columnHeader_Specialization;
	private: System::Windows::Forms::ColumnHeader^  columnHeader_NumPatients;
	private: System::Windows::Forms::ListView^  listView_Nurses;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ListView^  listView_Other;

	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::ColumnHeader^  columnHeader9;
	private: System::Windows::Forms::ColumnHeader^  columnHeader10;
	private: System::Windows::Forms::ColumnHeader^  columnHeader11;
	private: System::Windows::Forms::ListView^  listView_Inventory;

	private: System::Windows::Forms::ColumnHeader^  columnHeader_ItemName;
	private: System::Windows::Forms::ColumnHeader^  columnHeader_ItemQuantity;
	private: System::Windows::Forms::ColumnHeader^  columnHeader_ItemPrice;
	private: System::Windows::Forms::ColumnHeader^  columnHeader_Description;

	private: System::Windows::Forms::ListView^  listView_Rooms;

	private: System::Windows::Forms::ColumnHeader^  columnHeader12;
	private: System::Windows::Forms::ColumnHeader^  columnHeader13;
	private: System::Windows::Forms::ColumnHeader^  columnHeader14;
















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMain::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->listView_Notifications = (gcnew System::Windows::Forms::ListView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage_Patients = (gcnew System::Windows::Forms::TabPage());
			this->listView_Patients = (gcnew System::Windows::Forms::ListView());
			this->columnName = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnId = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnRoom = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnDoctor = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnNurse = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnAilment = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnInsurance = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnBilling = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage_Doctors = (gcnew System::Windows::Forms::TabPage());
			this->listView_Doctors = (gcnew System::Windows::Forms::ListView());
			this->columnHeader_Name = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader_EmployeeID = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader_ClockedIn = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader_WorkHours = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader_Specialization = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader_NumPatients = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage_Nurses = (gcnew System::Windows::Forms::TabPage());
			this->listView_Nurses = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage_Other = (gcnew System::Windows::Forms::TabPage());
			this->listView_Other = (gcnew System::Windows::Forms::ListView());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabControl_Main = (gcnew System::Windows::Forms::TabControl());
			this->tabPage_Staff = (gcnew System::Windows::Forms::TabPage());
			this->tabPage_Inventory = (gcnew System::Windows::Forms::TabPage());
			this->listView_Inventory = (gcnew System::Windows::Forms::ListView());
			this->columnHeader_ItemName = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader_ItemQuantity = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader_ItemPrice = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader_Description = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage_Rooms = (gcnew System::Windows::Forms::TabPage());
			this->listView_Rooms = (gcnew System::Windows::Forms::ListView());
			this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader13 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
			this->toolStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage_Patients->SuspendLayout();
			this->tabPage_Doctors->SuspendLayout();
			this->tabPage_Nurses->SuspendLayout();
			this->tabPage_Other->SuspendLayout();
			this->tabControl_Main->SuspendLayout();
			this->tabPage_Staff->SuspendLayout();
			this->tabPage_Inventory->SuspendLayout();
			this->tabPage_Rooms->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripDropDownButton1 });
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1318, 27);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripDropDownButton1.Image")));
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(75, 24);
			this->toolStripDropDownButton1->Text = L"Options";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->listView_Notifications);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox2->Location = System::Drawing::Point(1056, 27);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(262, 825);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Notifications";
			// 
			// listView_Notifications
			// 
			this->listView_Notifications->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView_Notifications->Location = System::Drawing::Point(3, 18);
			this->listView_Notifications->Name = L"listView_Notifications";
			this->listView_Notifications->Size = System::Drawing::Size(256, 804);
			this->listView_Notifications->TabIndex = 0;
			this->listView_Notifications->UseCompatibleStateImageBehavior = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 149);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Info";
			// 
			// label4
			// 
			this->label4->Dock = System::Windows::Forms::DockStyle::Top;
			this->label4->Location = System::Drawing::Point(3, 87);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(194, 23);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Doctors: 0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->Location = System::Drawing::Point(3, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 23);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Patients: 0";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Location = System::Drawing::Point(3, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 23);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Total Staff: 0";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Location = System::Drawing::Point(3, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(194, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Total Occupancy";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage_Patients);
			this->tabControl1->Controls->Add(this->tabPage_Doctors);
			this->tabControl1->Controls->Add(this->tabPage_Nurses);
			this->tabControl1->Controls->Add(this->tabPage_Other);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(821, 784);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage_Patients
			// 
			this->tabPage_Patients->Controls->Add(this->listView_Patients);
			this->tabPage_Patients->Location = System::Drawing::Point(4, 25);
			this->tabPage_Patients->Name = L"tabPage_Patients";
			this->tabPage_Patients->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Patients->Size = System::Drawing::Size(813, 755);
			this->tabPage_Patients->TabIndex = 0;
			this->tabPage_Patients->Text = L"Patients";
			this->tabPage_Patients->UseVisualStyleBackColor = true;
			// 
			// listView_Patients
			// 
			this->listView_Patients->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->columnName,
					this->columnId, this->columnRoom, this->columnDoctor, this->columnNurse, this->columnAilment, this->columnInsurance, this->columnBilling
			});
			this->listView_Patients->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView_Patients->GridLines = true;
			this->listView_Patients->Location = System::Drawing::Point(3, 3);
			this->listView_Patients->Name = L"listView_Patients";
			this->listView_Patients->Size = System::Drawing::Size(807, 749);
			this->listView_Patients->TabIndex = 0;
			this->listView_Patients->UseCompatibleStateImageBehavior = false;
			this->listView_Patients->View = System::Windows::Forms::View::Details;
			// 
			// columnName
			// 
			this->columnName->Text = L"Patient Name";
			this->columnName->Width = 142;
			// 
			// columnId
			// 
			this->columnId->Text = L"Patient ID";
			this->columnId->Width = 78;
			// 
			// columnRoom
			// 
			this->columnRoom->Text = L"Room";
			this->columnRoom->Width = 69;
			// 
			// columnDoctor
			// 
			this->columnDoctor->Text = L"Doctor";
			this->columnDoctor->Width = 134;
			// 
			// columnNurse
			// 
			this->columnNurse->Text = L"Nurse";
			this->columnNurse->Width = 150;
			// 
			// columnAilment
			// 
			this->columnAilment->Text = L"Ailment";
			this->columnAilment->Width = 155;
			// 
			// columnInsurance
			// 
			this->columnInsurance->DisplayIndex = 7;
			this->columnInsurance->Text = L"Insurance";
			this->columnInsurance->Width = 105;
			// 
			// columnBilling
			// 
			this->columnBilling->DisplayIndex = 6;
			this->columnBilling->Text = L"Bill";
			this->columnBilling->Width = 99;
			// 
			// tabPage_Doctors
			// 
			this->tabPage_Doctors->Controls->Add(this->listView_Doctors);
			this->tabPage_Doctors->Location = System::Drawing::Point(4, 25);
			this->tabPage_Doctors->Name = L"tabPage_Doctors";
			this->tabPage_Doctors->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Doctors->Size = System::Drawing::Size(813, 755);
			this->tabPage_Doctors->TabIndex = 1;
			this->tabPage_Doctors->Text = L"Doctors";
			this->tabPage_Doctors->UseVisualStyleBackColor = true;
			// 
			// listView_Doctors
			// 
			this->listView_Doctors->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader_Name,
					this->columnHeader_EmployeeID, this->columnHeader_ClockedIn, this->columnHeader_WorkHours, this->columnHeader_Specialization,
					this->columnHeader_NumPatients
			});
			this->listView_Doctors->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView_Doctors->FullRowSelect = true;
			this->listView_Doctors->GridLines = true;
			this->listView_Doctors->Location = System::Drawing::Point(3, 3);
			this->listView_Doctors->Name = L"listView_Doctors";
			this->listView_Doctors->Size = System::Drawing::Size(807, 749);
			this->listView_Doctors->TabIndex = 0;
			this->listView_Doctors->UseCompatibleStateImageBehavior = false;
			this->listView_Doctors->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader_Name
			// 
			this->columnHeader_Name->Text = L"Name";
			this->columnHeader_Name->Width = 189;
			// 
			// columnHeader_EmployeeID
			// 
			this->columnHeader_EmployeeID->Text = L"Employee ID";
			this->columnHeader_EmployeeID->Width = 165;
			// 
			// columnHeader_ClockedIn
			// 
			this->columnHeader_ClockedIn->Text = L"Clocked In";
			this->columnHeader_ClockedIn->Width = 123;
			// 
			// columnHeader_WorkHours
			// 
			this->columnHeader_WorkHours->Text = L"Hours Worked";
			this->columnHeader_WorkHours->Width = 112;
			// 
			// columnHeader_Specialization
			// 
			this->columnHeader_Specialization->Text = L"Specialization";
			this->columnHeader_Specialization->Width = 195;
			// 
			// columnHeader_NumPatients
			// 
			this->columnHeader_NumPatients->Text = L"Patient Count";
			this->columnHeader_NumPatients->Width = 97;
			// 
			// tabPage_Nurses
			// 
			this->tabPage_Nurses->Controls->Add(this->listView_Nurses);
			this->tabPage_Nurses->Location = System::Drawing::Point(4, 25);
			this->tabPage_Nurses->Name = L"tabPage_Nurses";
			this->tabPage_Nurses->Size = System::Drawing::Size(813, 755);
			this->tabPage_Nurses->TabIndex = 2;
			this->tabPage_Nurses->Text = L"Nurses";
			this->tabPage_Nurses->UseVisualStyleBackColor = true;
			// 
			// listView_Nurses
			// 
			this->listView_Nurses->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6
			});
			this->listView_Nurses->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView_Nurses->FullRowSelect = true;
			this->listView_Nurses->GridLines = true;
			this->listView_Nurses->Location = System::Drawing::Point(0, 0);
			this->listView_Nurses->Name = L"listView_Nurses";
			this->listView_Nurses->Size = System::Drawing::Size(813, 755);
			this->listView_Nurses->TabIndex = 1;
			this->listView_Nurses->UseCompatibleStateImageBehavior = false;
			this->listView_Nurses->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Name";
			this->columnHeader1->Width = 189;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Employee ID";
			this->columnHeader2->Width = 165;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Clocked In";
			this->columnHeader3->Width = 123;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Hours Worked";
			this->columnHeader4->Width = 112;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Specialization";
			this->columnHeader5->Width = 195;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Patient Count";
			this->columnHeader6->Width = 97;
			// 
			// tabPage_Other
			// 
			this->tabPage_Other->Controls->Add(this->listView_Other);
			this->tabPage_Other->Location = System::Drawing::Point(4, 25);
			this->tabPage_Other->Name = L"tabPage_Other";
			this->tabPage_Other->Size = System::Drawing::Size(813, 755);
			this->tabPage_Other->TabIndex = 3;
			this->tabPage_Other->Text = L"Other";
			this->tabPage_Other->UseVisualStyleBackColor = true;
			// 
			// listView_Other
			// 
			this->listView_Other->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader7,
					this->columnHeader8, this->columnHeader9, this->columnHeader10, this->columnHeader11
			});
			this->listView_Other->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView_Other->FullRowSelect = true;
			this->listView_Other->GridLines = true;
			this->listView_Other->Location = System::Drawing::Point(0, 0);
			this->listView_Other->Name = L"listView_Other";
			this->listView_Other->Size = System::Drawing::Size(813, 755);
			this->listView_Other->TabIndex = 1;
			this->listView_Other->UseCompatibleStateImageBehavior = false;
			this->listView_Other->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Name";
			this->columnHeader7->Width = 189;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Employee ID";
			this->columnHeader8->Width = 165;
			// 
			// columnHeader9
			// 
			this->columnHeader9->Text = L"Clocked In";
			this->columnHeader9->Width = 123;
			// 
			// columnHeader10
			// 
			this->columnHeader10->Text = L"Hours Worked";
			this->columnHeader10->Width = 112;
			// 
			// columnHeader11
			// 
			this->columnHeader11->Text = L"Years Experience";
			this->columnHeader11->Width = 126;
			// 
			// tabControl_Main
			// 
			this->tabControl_Main->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl_Main->Controls->Add(this->tabPage_Staff);
			this->tabControl_Main->Controls->Add(this->tabPage_Inventory);
			this->tabControl_Main->Controls->Add(this->tabPage_Rooms);
			this->tabControl_Main->Location = System::Drawing::Point(218, 30);
			this->tabControl_Main->Name = L"tabControl_Main";
			this->tabControl_Main->SelectedIndex = 0;
			this->tabControl_Main->Size = System::Drawing::Size(835, 819);
			this->tabControl_Main->TabIndex = 5;
			// 
			// tabPage_Staff
			// 
			this->tabPage_Staff->Controls->Add(this->tabControl1);
			this->tabPage_Staff->Location = System::Drawing::Point(4, 25);
			this->tabPage_Staff->Name = L"tabPage_Staff";
			this->tabPage_Staff->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Staff->Size = System::Drawing::Size(827, 790);
			this->tabPage_Staff->TabIndex = 0;
			this->tabPage_Staff->Text = L"Staff";
			this->tabPage_Staff->UseVisualStyleBackColor = true;
			// 
			// tabPage_Inventory
			// 
			this->tabPage_Inventory->Controls->Add(this->listView_Inventory);
			this->tabPage_Inventory->Location = System::Drawing::Point(4, 25);
			this->tabPage_Inventory->Name = L"tabPage_Inventory";
			this->tabPage_Inventory->Padding = System::Windows::Forms::Padding(3);
			this->tabPage_Inventory->Size = System::Drawing::Size(827, 790);
			this->tabPage_Inventory->TabIndex = 1;
			this->tabPage_Inventory->Text = L"Inventory";
			this->tabPage_Inventory->UseVisualStyleBackColor = true;
			// 
			// listView_Inventory
			// 
			this->listView_Inventory->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader_ItemName,
					this->columnHeader_ItemQuantity, this->columnHeader_ItemPrice, this->columnHeader_Description
			});
			this->listView_Inventory->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView_Inventory->GridLines = true;
			this->listView_Inventory->Location = System::Drawing::Point(3, 3);
			this->listView_Inventory->Name = L"listView_Inventory";
			this->listView_Inventory->Size = System::Drawing::Size(821, 784);
			this->listView_Inventory->TabIndex = 0;
			this->listView_Inventory->UseCompatibleStateImageBehavior = false;
			this->listView_Inventory->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader_ItemName
			// 
			this->columnHeader_ItemName->Text = L"Item Name";
			this->columnHeader_ItemName->Width = 286;
			// 
			// columnHeader_ItemQuantity
			// 
			this->columnHeader_ItemQuantity->Text = L"Quantity";
			this->columnHeader_ItemQuantity->Width = 95;
			// 
			// columnHeader_ItemPrice
			// 
			this->columnHeader_ItemPrice->Text = L"Price";
			this->columnHeader_ItemPrice->Width = 123;
			// 
			// columnHeader_Description
			// 
			this->columnHeader_Description->Text = L"Description";
			this->columnHeader_Description->Width = 329;
			// 
			// tabPage_Rooms
			// 
			this->tabPage_Rooms->Controls->Add(this->listView_Rooms);
			this->tabPage_Rooms->Location = System::Drawing::Point(4, 25);
			this->tabPage_Rooms->Name = L"tabPage_Rooms";
			this->tabPage_Rooms->Size = System::Drawing::Size(827, 790);
			this->tabPage_Rooms->TabIndex = 2;
			this->tabPage_Rooms->Text = L"Rooms";
			this->tabPage_Rooms->UseVisualStyleBackColor = true;
			// 
			// listView_Rooms
			// 
			this->listView_Rooms->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader12,
					this->columnHeader13, this->columnHeader14
			});
			this->listView_Rooms->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView_Rooms->GridLines = true;
			this->listView_Rooms->Location = System::Drawing::Point(0, 0);
			this->listView_Rooms->Name = L"listView_Rooms";
			this->listView_Rooms->Size = System::Drawing::Size(827, 790);
			this->listView_Rooms->TabIndex = 1;
			this->listView_Rooms->UseCompatibleStateImageBehavior = false;
			this->listView_Rooms->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader12
			// 
			this->columnHeader12->Text = L"Room Number";
			this->columnHeader12->Width = 109;
			// 
			// columnHeader13
			// 
			this->columnHeader13->Text = L"Maximum Occupancy";
			this->columnHeader13->Width = 147;
			// 
			// columnHeader14
			// 
			this->columnHeader14->Text = L"Total Occupancy";
			this->columnHeader14->Width = 123;
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1318, 852);
			this->Controls->Add(this->tabControl_Main);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->toolStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"FormMain";
			this->Text = L"Hospital Administration System";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FormMain::FormMain_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage_Patients->ResumeLayout(false);
			this->tabPage_Doctors->ResumeLayout(false);
			this->tabPage_Nurses->ResumeLayout(false);
			this->tabPage_Other->ResumeLayout(false);
			this->tabControl_Main->ResumeLayout(false);
			this->tabPage_Staff->ResumeLayout(false);
			this->tabPage_Inventory->ResumeLayout(false);
			this->tabPage_Rooms->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
	private: System::Void FormMain_Load(System::Object^  sender, System::EventArgs^  e);
};
}
