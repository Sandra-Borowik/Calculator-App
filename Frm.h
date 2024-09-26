h#pragma once

#include <math.h>


namespace kalkulator {
    enum Operator {
        Plus, Minus, Razy, Podzielic, Brak
    };
    enum Funkcja {
        Pierwiastkowanie, Kwadrat, Odwrotnosc, Procent
    };


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Frm
	/// </summary>
	public ref class Frm : public System::Windows::Forms::Form
	{
	public:
		Frm(void)
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
		~Frm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
    private: System::Windows::Forms::Button^ button24;
    private: System::Windows::Forms::Button^ przecinek;
    private: System::Windows::Forms::Button^ bttn0;
    private: System::Windows::Forms::Button^ pls_min;
    private: System::Windows::Forms::Button^ dodwanie;
    private: System::Windows::Forms::Button^ bttn3;
    private: System::Windows::Forms::Button^ bttn2;
    private: System::Windows::Forms::Button^ bttn1;
    private: System::Windows::Forms::Button^ odejmowanie;
    private: System::Windows::Forms::Button^ bttn6;
    private: System::Windows::Forms::Button^ bttn5;
    private: System::Windows::Forms::Button^ bttn4;
    private: System::Windows::Forms::Button^ mnozenie;
    private: System::Windows::Forms::Button^ bttn9;
    private: System::Windows::Forms::Button^ bttn8;
    private: System::Windows::Forms::Button^ bttn7;
    private: System::Windows::Forms::Button^ dzielenie;
    private: System::Windows::Forms::Button^ pierwiastek;
    private: System::Windows::Forms::Button^ potega;
    private: System::Windows::Forms::Button^ ulamek;
    private: System::Windows::Forms::Button^ back;
    private: System::Windows::Forms::Button^ bttnc;
    private: System::Windows::Forms::Button^ bttnce;
    private: System::Windows::Forms::Button^ procent;
    private: System::Windows::Forms::Label^ display1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::ComponentModel::IContainer^ components;

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
            this->components = (gcnew System::ComponentModel::Container());
            this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->przecinek = (gcnew System::Windows::Forms::Button());
            this->bttn0 = (gcnew System::Windows::Forms::Button());
            this->pls_min = (gcnew System::Windows::Forms::Button());
            this->dodwanie = (gcnew System::Windows::Forms::Button());
            this->bttn3 = (gcnew System::Windows::Forms::Button());
            this->bttn2 = (gcnew System::Windows::Forms::Button());
            this->bttn1 = (gcnew System::Windows::Forms::Button());
            this->odejmowanie = (gcnew System::Windows::Forms::Button());
            this->bttn6 = (gcnew System::Windows::Forms::Button());
            this->bttn5 = (gcnew System::Windows::Forms::Button());
            this->bttn4 = (gcnew System::Windows::Forms::Button());
            this->mnozenie = (gcnew System::Windows::Forms::Button());
            this->bttn9 = (gcnew System::Windows::Forms::Button());
            this->bttn8 = (gcnew System::Windows::Forms::Button());
            this->bttn7 = (gcnew System::Windows::Forms::Button());
            this->dzielenie = (gcnew System::Windows::Forms::Button());
            this->pierwiastek = (gcnew System::Windows::Forms::Button());
            this->potega = (gcnew System::Windows::Forms::Button());
            this->ulamek = (gcnew System::Windows::Forms::Button());
            this->back = (gcnew System::Windows::Forms::Button());
            this->bttnc = (gcnew System::Windows::Forms::Button());
            this->bttnce = (gcnew System::Windows::Forms::Button());
            this->procent = (gcnew System::Windows::Forms::Button());
            this->display1 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tableLayoutPanel1->SuspendLayout();
            this->tableLayoutPanel2->SuspendLayout();
            this->tableLayoutPanel3->SuspendLayout();
            this->SuspendLayout();
            // 
            // contextMenuStrip1
            // 
            this->contextMenuStrip1->Name = L"contextMenuStrip1";
            this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
            // 
            // tableLayoutPanel1
            // 
            this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel1->ColumnCount = 4;
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                25)));
            this->tableLayoutPanel1->Controls->Add(this->button24, 3, 5);
            this->tableLayoutPanel1->Controls->Add(this->przecinek, 2, 5);
            this->tableLayoutPanel1->Controls->Add(this->bttn0, 1, 5);
            this->tableLayoutPanel1->Controls->Add(this->pls_min, 0, 5);
            this->tableLayoutPanel1->Controls->Add(this->dodwanie, 3, 4);
            this->tableLayoutPanel1->Controls->Add(this->bttn3, 2, 4);
            this->tableLayoutPanel1->Controls->Add(this->bttn2, 1, 4);
            this->tableLayoutPanel1->Controls->Add(this->bttn1, 0, 4);
            this->tableLayoutPanel1->Controls->Add(this->odejmowanie, 3, 3);
            this->tableLayoutPanel1->Controls->Add(this->bttn6, 2, 3);
            this->tableLayoutPanel1->Controls->Add(this->bttn5, 1, 3);
            this->tableLayoutPanel1->Controls->Add(this->bttn4, 0, 3);
            this->tableLayoutPanel1->Controls->Add(this->mnozenie, 3, 2);
            this->tableLayoutPanel1->Controls->Add(this->bttn9, 2, 2);
            this->tableLayoutPanel1->Controls->Add(this->bttn8, 1, 2);
            this->tableLayoutPanel1->Controls->Add(this->bttn7, 0, 2);
            this->tableLayoutPanel1->Controls->Add(this->dzielenie, 3, 1);
            this->tableLayoutPanel1->Controls->Add(this->pierwiastek, 2, 1);
            this->tableLayoutPanel1->Controls->Add(this->potega, 1, 1);
            this->tableLayoutPanel1->Controls->Add(this->ulamek, 0, 1);
            this->tableLayoutPanel1->Controls->Add(this->back, 3, 0);
            this->tableLayoutPanel1->Controls->Add(this->bttnc, 2, 0);
            this->tableLayoutPanel1->Controls->Add(this->bttnce, 1, 0);
            this->tableLayoutPanel1->Controls->Add(this->procent, 0, 0);
            this->tableLayoutPanel1->Location = System::Drawing::Point(1, 81);
            this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(1);
            this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
            this->tableLayoutPanel1->RowCount = 6;
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
            this->tableLayoutPanel1->Size = System::Drawing::Size(258, 314);
            this->tableLayoutPanel1->TabIndex = 1;
            // 
            // button24
            // 
            this->button24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button24->BackColor = System::Drawing::SystemColors::Desktop;
            this->button24->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->button24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->button24->Location = System::Drawing::Point(194, 262);
            this->button24->Margin = System::Windows::Forms::Padding(2);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(62, 50);
            this->button24->TabIndex = 23;
            this->button24->Text = L"=";
            this->button24->UseVisualStyleBackColor = false;
            this->button24->Click += gcnew System::EventHandler(this, &Frm::button24_Click);
            // 
            // przecinek
            // 
            this->przecinek->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->przecinek->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->przecinek->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->przecinek->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->przecinek->Location = System::Drawing::Point(130, 262);
            this->przecinek->Margin = System::Windows::Forms::Padding(2);
            this->przecinek->Name = L"przecinek";
            this->przecinek->Size = System::Drawing::Size(60, 50);
            this->przecinek->TabIndex = 22;
            this->przecinek->Text = L",";
            this->przecinek->UseVisualStyleBackColor = false;
            this->przecinek->Click += gcnew System::EventHandler(this, &Frm::przecinek_Click);
            // 
            // bttn0
            // 
            this->bttn0->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bttn0->BackColor = System::Drawing::SystemColors::ControlDark;
            this->bttn0->Font = (gcnew System::Drawing::Font(L"AmdtSymbols", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bttn0->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->bttn0->Location = System::Drawing::Point(66, 262);
            this->bttn0->Margin = System::Windows::Forms::Padding(2);
            this->bttn0->Name = L"bttn0";
            this->bttn0->Size = System::Drawing::Size(60, 50);
            this->bttn0->TabIndex = 21;
            this->bttn0->Text = L"0";
            this->bttn0->UseVisualStyleBackColor = false;
            this->bttn0->Click += gcnew System::EventHandler(this, &Frm::numery);
            // 
            // pls_min
            // 
            this->pls_min->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pls_min->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->pls_min->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->pls_min->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->pls_min->Location = System::Drawing::Point(2, 262);
            this->pls_min->Margin = System::Windows::Forms::Padding(2);
            this->pls_min->Name = L"pls_min";
            this->pls_min->Size = System::Drawing::Size(60, 50);
            this->pls_min->TabIndex = 20;
            this->pls_min->Text = L"±";
            this->pls_min->UseVisualStyleBackColor = false;
            this->pls_min->Click += gcnew System::EventHandler(this, &Frm::pls_min_Click);
            // 
            // dodwanie
            // 
            this->dodwanie->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dodwanie->BackColor = System::Drawing::SystemColors::GrayText;
            this->dodwanie->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->dodwanie->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->dodwanie->Location = System::Drawing::Point(194, 210);
            this->dodwanie->Margin = System::Windows::Forms::Padding(2);
            this->dodwanie->Name = L"dodwanie";
            this->dodwanie->Size = System::Drawing::Size(62, 48);
            this->dodwanie->TabIndex = 19;
            this->dodwanie->Text = L"+";
            this->dodwanie->UseVisualStyleBackColor = false;
            this->dodwanie->Click += gcnew System::EventHandler(this, &Frm::dodwanie_Click);
            // 
            // bttn3
            // 
            this->bttn3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bttn3->BackColor = System::Drawing::SystemColors::ControlDark;
            this->bttn3->Font = (gcnew System::Drawing::Font(L"AmdtSymbols", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bttn3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->bttn3->Location = System::Drawing::Point(130, 210);
            this->bttn3->Margin = System::Windows::Forms::Padding(2);
            this->bttn3->Name = L"bttn3";
            this->bttn3->Size = System::Drawing::Size(60, 48);
            this->bttn3->TabIndex = 18;
            this->bttn3->Text = L"3";
            this->bttn3->UseVisualStyleBackColor = false;
            this->bttn3->Click += gcnew System::EventHandler(this, &Frm::numery);
            // 
            // bttn2
            // 
            this->bttn2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bttn2->BackColor = System::Drawing::SystemColors::ControlDark;
            this->bttn2->Font = (gcnew System::Drawing::Font(L"AmdtSymbols", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bttn2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->bttn2->Location = System::Drawing::Point(66, 210);
            this->bttn2->Margin = System::Windows::Forms::Padding(2);
            this->bttn2->Name = L"bttn2";
            this->bttn2->Size = System::Drawing::Size(60, 48);
            this->bttn2->TabIndex = 17;
            this->bttn2->Text = L"2";
            this->bttn2->UseVisualStyleBackColor = false;
            this->bttn2->Click += gcnew System::EventHandler(this, &Frm::numery);
            // 
            // bttn1
            // 
            this->bttn1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bttn1->BackColor = System::Drawing::SystemColors::ControlDark;
            this->bttn1->Font = (gcnew System::Drawing::Font(L"AmdtSymbols", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bttn1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->bttn1->Location = System::Drawing::Point(2, 210);
            this->bttn1->Margin = System::Windows::Forms::Padding(2);
            this->bttn1->Name = L"bttn1";
            this->bttn1->Size = System::Drawing::Size(60, 48);
            this->bttn1->TabIndex = 16;
            this->bttn1->Text = L"1";
            this->bttn1->UseVisualStyleBackColor = false;
            this->bttn1->Click += gcnew System::EventHandler(this, &Frm::numery);
            // 
            // odejmowanie
            // 
            this->odejmowanie->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->odejmowanie->BackColor = System::Drawing::SystemColors::GrayText;
            this->odejmowanie->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->odejmowanie->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->odejmowanie->Location = System::Drawing::Point(194, 158);
            this->odejmowanie->Margin = System::Windows::Forms::Padding(2);
            this->odejmowanie->Name = L"odejmowanie";
            this->odejmowanie->Size = System::Drawing::Size(62, 48);
            this->odejmowanie->TabIndex = 15;
            this->odejmowanie->Text = L"-";
            this->odejmowanie->UseVisualStyleBackColor = false;
            this->odejmowanie->Click += gcnew System::EventHandler(this, &Frm::odejmowanie_Click);
            // 
            // bttn6
            // 
            this->bttn6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bttn6->BackColor = System::Drawing::SystemColors::ControlDark;
            this->bttn6->Font = (gcnew System::Drawing::Font(L"AmdtSymbols", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bttn6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->bttn6->Location = System::Drawing::Point(130, 158);
            this->bttn6->Margin = System::Windows::Forms::Padding(2);
            this->bttn6->Name = L"bttn6";
            this->bttn6->Size = System::Drawing::Size(60, 48);
            this->bttn6->TabIndex = 14;
            this->bttn6->Text = L"6";
            this->bttn6->UseVisualStyleBackColor = false;
            this->bttn6->Click += gcnew System::EventHandler(this, &Frm::numery);
            // 
            // bttn5
            // 
            this->bttn5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bttn5->BackColor = System::Drawing::SystemColors::ControlDark;
            this->bttn5->Font = (gcnew System::Drawing::Font(L"AmdtSymbols", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bttn5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->bttn5->Location = System::Drawing::Point(66, 158);
            this->bttn5->Margin = System::Windows::Forms::Padding(2);
            this->bttn5->Name = L"bttn5";
            this->bttn5->Size = System::Drawing::Size(60, 48);
            this->bttn5->TabIndex = 13;
            this->bttn5->Text = L"5";
            this->bttn5->UseVisualStyleBackColor = false;
            this->bttn5->Click += gcnew System::EventHandler(this, &Frm::numery);
            // 
            // bttn4
            // 
            this->bttn4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bttn4->BackColor = System::Drawing::SystemColors::ControlDark;
            this->bttn4->Font = (gcnew System::Drawing::Font(L"AmdtSymbols", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bttn4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->bttn4->Location = System::Drawing::Point(2, 158);
            this->bttn4->Margin = System::Windows::Forms::Padding(2);
            this->bttn4->Name = L"bttn4";
            this->bttn4->Size = System::Drawing::Size(60, 48);
            this->bttn4->TabIndex = 12;
            this->bttn4->Text = L"4";
            this->bttn4->UseVisualStyleBackColor = false;
            this->bttn4->Click += gcnew System::EventHandler(this, &Frm::numery);
            // 
            // mnozenie
            // 
            this->mnozenie->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->mnozenie->BackColor = System::Drawing::SystemColors::GrayText;
            this->mnozenie->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->mnozenie->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->mnozenie->Location = System::Drawing::Point(194, 106);
            this->mnozenie->Margin = System::Windows::Forms::Padding(2);
            this->mnozenie->Name = L"mnozenie";
            this->mnozenie->Size = System::Drawing::Size(62, 48);
            this->mnozenie->TabIndex = 11;
            this->mnozenie->Text = L"×";
            this->mnozenie->UseVisualStyleBackColor = false;
            this->mnozenie->Click += gcnew System::EventHandler(this, &Frm::mnozenie_Click);
            // 
            // bttn9
            // 
            this->bttn9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bttn9->BackColor = System::Drawing::SystemColors::ControlDark;
            this->bttn9->Font = (gcnew System::Drawing::Font(L"AmdtSymbols", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bttn9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->bttn9->Location = System::Drawing::Point(130, 106);
            this->bttn9->Margin = System::Windows::Forms::Padding(2);
            this->bttn9->Name = L"bttn9";
            this->bttn9->Size = System::Drawing::Size(60, 48);
            this->bttn9->TabIndex = 10;
            this->bttn9->Text = L"9";
            this->bttn9->UseVisualStyleBackColor = false;
            this->bttn9->Click += gcnew System::EventHandler(this, &Frm::numery);
            // 
            // bttn8
            // 
            this->bttn8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bttn8->BackColor = System::Drawing::SystemColors::ControlDark;
            this->bttn8->Font = (gcnew System::Drawing::Font(L"AmdtSymbols", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bttn8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->bttn8->Location = System::Drawing::Point(66, 106);
            this->bttn8->Margin = System::Windows::Forms::Padding(2);
            this->bttn8->Name = L"bttn8";
            this->bttn8->Size = System::Drawing::Size(60, 48);
            this->bttn8->TabIndex = 9;
            this->bttn8->Text = L"8";
            this->bttn8->UseVisualStyleBackColor = false;
            this->bttn8->Click += gcnew System::EventHandler(this, &Frm::numery);
            // 
            // bttn7
            // 
            this->bttn7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bttn7->BackColor = System::Drawing::SystemColors::ControlDark;
            this->bttn7->Font = (gcnew System::Drawing::Font(L"AmdtSymbols", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->bttn7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->bttn7->Location = System::Drawing::Point(2, 106);
            this->bttn7->Margin = System::Windows::Forms::Padding(2);
            this->bttn7->Name = L"bttn7";
            this->bttn7->Size = System::Drawing::Size(60, 48);
            this->bttn7->TabIndex = 8;
            this->bttn7->Text = L"7";
            this->bttn7->UseVisualStyleBackColor = false;
            this->bttn7->Click += gcnew System::EventHandler(this, &Frm::numery);
            // 
            // dzielenie
            // 
            this->dzielenie->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dzielenie->BackColor = System::Drawing::SystemColors::GrayText;
            this->dzielenie->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->dzielenie->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->dzielenie->Location = System::Drawing::Point(194, 54);
            this->dzielenie->Margin = System::Windows::Forms::Padding(2);
            this->dzielenie->Name = L"dzielenie";
            this->dzielenie->Size = System::Drawing::Size(62, 48);
            this->dzielenie->TabIndex = 7;
            this->dzielenie->Text = L"÷";
            this->dzielenie->UseVisualStyleBackColor = false;
            this->dzielenie->Click += gcnew System::EventHandler(this, &Frm::dzielenie_Click);
            // 
            // pierwiastek
            // 
            this->pierwiastek->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->pierwiastek->BackColor = System::Drawing::SystemColors::GrayText;
            this->pierwiastek->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->pierwiastek->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->pierwiastek->Location = System::Drawing::Point(130, 54);
            this->pierwiastek->Margin = System::Windows::Forms::Padding(2);
            this->pierwiastek->Name = L"pierwiastek";
            this->pierwiastek->Size = System::Drawing::Size(60, 48);
            this->pierwiastek->TabIndex = 6;
            this->pierwiastek->Text = L"√";
            this->pierwiastek->UseVisualStyleBackColor = false;
            this->pierwiastek->Click += gcnew System::EventHandler(this, &Frm::pierwiastek_Click);
            // 
            // potega
            // 
            this->potega->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->potega->BackColor = System::Drawing::SystemColors::GrayText;
            this->potega->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->potega->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->potega->Location = System::Drawing::Point(66, 54);
            this->potega->Margin = System::Windows::Forms::Padding(2);
            this->potega->Name = L"potega";
            this->potega->Size = System::Drawing::Size(60, 48);
            this->potega->TabIndex = 5;
            this->potega->Text = L"x²";
            this->potega->UseVisualStyleBackColor = false;
            this->potega->Click += gcnew System::EventHandler(this, &Frm::potega_Click);
            // 
            // ulamek
            // 
            this->ulamek->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->ulamek->BackColor = System::Drawing::SystemColors::GrayText;
            this->ulamek->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->ulamek->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->ulamek->Location = System::Drawing::Point(2, 54);
            this->ulamek->Margin = System::Windows::Forms::Padding(2);
            this->ulamek->Name = L"ulamek";
            this->ulamek->Size = System::Drawing::Size(60, 48);
            this->ulamek->TabIndex = 4;
            this->ulamek->Text = L"⅟ₓ";
            this->ulamek->UseVisualStyleBackColor = false;
            this->ulamek->Click += gcnew System::EventHandler(this, &Frm::ulamek_Click);
            // 
            // back
            // 
            this->back->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->back->BackColor = System::Drawing::SystemColors::GrayText;
            this->back->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->back->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->back->Location = System::Drawing::Point(194, 2);
            this->back->Margin = System::Windows::Forms::Padding(2);
            this->back->Name = L"back";
            this->back->Size = System::Drawing::Size(62, 48);
            this->back->TabIndex = 3;
            this->back->Text = L"←";
            this->back->UseVisualStyleBackColor = false;
            this->back->Click += gcnew System::EventHandler(this, &Frm::back_Click);
            // 
            // bttnc
            // 
            this->bttnc->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bttnc->BackColor = System::Drawing::SystemColors::GrayText;
            this->bttnc->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->bttnc->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->bttnc->Location = System::Drawing::Point(130, 2);
            this->bttnc->Margin = System::Windows::Forms::Padding(2);
            this->bttnc->Name = L"bttnc";
            this->bttnc->Size = System::Drawing::Size(60, 48);
            this->bttnc->TabIndex = 2;
            this->bttnc->Text = L"C";
            this->bttnc->UseVisualStyleBackColor = false;
            this->bttnc->Click += gcnew System::EventHandler(this, &Frm::button3_Click);
            // 
            // bttnce
            // 
            this->bttnce->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->bttnce->BackColor = System::Drawing::SystemColors::GrayText;
            this->bttnce->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->bttnce->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->bttnce->Location = System::Drawing::Point(66, 2);
            this->bttnce->Margin = System::Windows::Forms::Padding(2);
            this->bttnce->Name = L"bttnce";
            this->bttnce->Size = System::Drawing::Size(60, 48);
            this->bttnce->TabIndex = 1;
            this->bttnce->Text = L"CE";
            this->bttnce->UseVisualStyleBackColor = false;
            this->bttnce->Click += gcnew System::EventHandler(this, &Frm::button2_Click);
            // 
            // procent
            // 
            this->procent->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->procent->BackColor = System::Drawing::SystemColors::GrayText;
            this->procent->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(238)));
            this->procent->ForeColor = System::Drawing::SystemColors::ControlLightLight;
            this->procent->Location = System::Drawing::Point(2, 2);
            this->procent->Margin = System::Windows::Forms::Padding(2);
            this->procent->Name = L"procent";
            this->procent->Size = System::Drawing::Size(60, 48);
            this->procent->TabIndex = 0;
            this->procent->Text = L"%";
            this->procent->UseVisualStyleBackColor = false;
            this->procent->Click += gcnew System::EventHandler(this, &Frm::procent_Click);
            // 
            // display1
            // 
            this->display1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->display1->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->display1->ForeColor = System::Drawing::SystemColors::ControlText;
            this->display1->Location = System::Drawing::Point(28, 37);
            this->display1->Name = L"display1";
            this->display1->Size = System::Drawing::Size(223, 37);
            this->display1->TabIndex = 0;
            this->display1->Text = L"0";
            this->display1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->label1->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::SystemColors::AppWorkspace;
            this->label1->Location = System::Drawing::Point(23, 0);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(228, 22);
            this->label1->TabIndex = 2;
            this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
            // 
            // tableLayoutPanel2
            // 
            this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel2->ColumnCount = 1;
            this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel2->Controls->Add(this->display1, 0, 3);
            this->tableLayoutPanel2->Controls->Add(this->label1, 0, 0);
            this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
            this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
            this->tableLayoutPanel2->RowCount = 4;
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel2->Size = System::Drawing::Size(254, 74);
            this->tableLayoutPanel2->TabIndex = 3;
            // 
            // tableLayoutPanel3
            // 
            this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->tableLayoutPanel3->ColumnCount = 1;
            this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                100)));
            this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel2, 0, 0);
            this->tableLayoutPanel3->Controls->Add(this->tableLayoutPanel1, 0, 1);
            this->tableLayoutPanel3->Location = System::Drawing::Point(0, 0);
            this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
            this->tableLayoutPanel3->RowCount = 2;
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
            this->tableLayoutPanel3->Size = System::Drawing::Size(260, 396);
            this->tableLayoutPanel3->TabIndex = 4;
            // 
            // Frm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlLight;
            this->ClientSize = System::Drawing::Size(261, 397);
            this->Controls->Add(this->tableLayoutPanel3);
            this->Name = L"Frm";
            this->Text = L"Frm";
            this->Load += gcnew System::EventHandler(this, &Frm::Frm_Load);
            this->tableLayoutPanel1->ResumeLayout(false);
            this->tableLayoutPanel2->ResumeLayout(false);
            this->tableLayoutPanel3->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion

        //zrodlo: lekcja na https://www.twitch.tv/videos/628696229

        String^ _aktualnynumer;
        double _buf = 0;
        Operator _op = Operator::Brak;

        bool _wyczyscpnc = false;
        bool _powyliczeniu = false;

        //symbole dzialan
        String^ GetSymbol(Operator op) {
            switch (op) {
            case kalkulator::Plus: return L"+";
            case kalkulator::Minus: return L"-";
            case kalkulator::Podzielic: return L"/";
            case kalkulator::Razy: return L"x";
            default: return "";
            }
        }


        //działania operatorów
        double _wykonajop(double lewa, Operator op, double prawa) {
            switch (op) {
            case kalkulator::Plus: return lewa + prawa;
            case kalkulator::Minus: return lewa - prawa;
            case kalkulator::Razy: return lewa * prawa;
            case kalkulator::Podzielic:
                if (prawa == 0) throw gcnew Exception(L"Nie dziel przez 0!");
                    return lewa / prawa;

            default: return 0;
            }

        }


        //działania dodanych funkcji
        double _wykonajf(double arg, Funkcja fun) {
            switch (fun) {
            case kalkulator::Kwadrat: return arg * arg;
            case kalkulator::Pierwiastkowanie:
                if (arg < 0) throw gcnew Exception(L"Pierwiastek ujemnej liczby.");
                    return sqrt(arg);
            case kalkulator::Odwrotnosc: 
                if (arg == 0) throw gcnew Exception(L"Dzielenie przez 0!");
                     return 1 / arg;
            case kalkulator::Procent: return arg * 0.01;
            default: return 0;
            }
        }



#pragma region Funkcje

        //display - wyswietlanie
        void up_aktualnynumer() {
            display1->Text = _aktualnynumer;
        }


        //dodawanie cyfr
        void appenddigit(String^ d) {
            if (_op == Operator::Brak && _powyliczeniu) wyczysc();

            if (_aktualnynumer == L"0" || _wyczyscpnc)
                _aktualnynumer = d;
            else
                _aktualnynumer += d;

            _wyczyscpnc = false;

            up_aktualnynumer();
        } 

        //zmiana znaku
        void zmiana_znaku() {

            if (_aktualnynumer->Contains("-"))
                _aktualnynumer = _aktualnynumer->Remove(0,1);

            else
                _aktualnynumer = L"-"+_aktualnynumer;


            up_aktualnynumer();
        }

        //dodawanie przecinka
        void appendp() {
            if (_powyliczeniu) wyczysc();
            else if (_wyczyscpnc) _aktualnynumer = L"0";
            else if (_aktualnynumer->Contains(L",")) return;

            _aktualnynumer += L",";
            up_aktualnynumer();
        }


        //cofanie
        void Backspace() {
            if (_powyliczeniu) {
                _buf = 0;
                _op = Operator::Brak;
                return;
            }

            if (_wyczyscpnc) return;

            else if (_aktualnynumer->Length == 1) {
                _aktualnynumer = L"0";
                up_aktualnynumer();
            }
            else
                _aktualnynumer = _aktualnynumer->Substring(0, _aktualnynumer->Length - 1);

            up_aktualnynumer();


        }


        //ustawianie operatora
        void ustawop(Operator op) {
            double temp = Double::Parse(_aktualnynumer);


            if (_op != Operator::Brak && !_wyczyscpnc)

                try
            {
                _buf = _wykonajop(_buf, _op, temp);
            }
            catch (Exception^ ex)
            {
                MessageBox::Show(ex->Message, L"Wystapil Blad");
                wyczysc();
                return;
            }
            else
                _buf = Double::Parse(_aktualnynumer);

            _op = op;

            _wyczyscpnc = true;

                label1->Text = _buf + L" " + GetSymbol(op);

        }


        //CE
        void wyczyscpole() {
            if (_powyliczeniu) {
                wyczysc();
                return;
            }

            _aktualnynumer = L"0";
            up_aktualnynumer();
        }


        //C
        void wyczysc() {
            _aktualnynumer = L"0";
            _buf = 0;
            _op = Operator::Brak;

            _wyczyscpnc = false;
            _powyliczeniu = false;

            label1->Text = L"";
            up_aktualnynumer();
        }


        //kwadrat, pierwiastek, odwrotnosc, procent
        void wykonajf(Funkcja fun) {
            if (_powyliczeniu) {
                _buf = 0;
                _op = Operator::Brak;
                label1->Text = L"";
            }
            double temp = Double::Parse(_aktualnynumer);

            try
            {
                _aktualnynumer = _wykonajf(temp, fun).ToString();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show(ex->Message, L"Wystapil Blad");
                wyczysc();
                return;
            }


            up_aktualnynumer();

            _wyczyscpnc = true;
        }


        //wyliczanie - "="
        void Wylicz() {
            if (_powyliczeniu) {
                label1->Text = _buf + L" " + GetSymbol(_op) + L" " + _aktualnynumer + L"=";

                double temp = Double::Parse(_aktualnynumer);

                try
                {
                    _aktualnynumer = (_wykonajop(_buf, _op, temp).ToString());
                }
                catch (Exception^ ex)
                {
                    MessageBox::Show(ex->Message, L"Wystapil Blad");
                    wyczysc();
                    return;
                }


                up_aktualnynumer();
                return;
            }
            
            if (_buf != 0) {
                label1->Text = _buf + L" " + GetSymbol(_op) + L" " + _aktualnynumer + L"=";

                double temp = Double::Parse(_aktualnynumer);

                try
                {
                    _aktualnynumer = _wykonajop(_buf, _op, temp).ToString();
                }
                catch (Exception^ ex)
                {
                    MessageBox::Show(ex->Message, L"Wystapil Blad");
                    wyczysc();
                    return;
                }

                _buf = temp;

                _wyczyscpnc = true;
                _powyliczeniu = true;

                up_aktualnynumer();
            }
            else {
                double temp = Double::Parse(_aktualnynumer);
                _buf = temp;
            }
        }




#pragma endregion

        //przyciski UI i klawiatura
#pragma region Przyciski

#pragma region klawiatura
    protected:
        bool ProcessCmdKey(Message% msg, Keys key) override 
        {
            //liczby
            if (key >= Keys::D0 && key <= Keys::D9) {                  
                appenddigit(((int)(key - Keys::D0)).ToString());
            }
            else if (key >= Keys::NumPad0 && key <= Keys::NumPad9) {    
                appenddigit(((int)(key - Keys::NumPad0)).ToString());
            }

            //podstawowe dzialania
            else if (key == Keys::Multiply || key == (Keys::D8 | Keys::Shift)) {
                ustawop(Operator::Razy);
            }
            else if (key == Keys::Divide || key == (Keys::OemQuestion | Keys::Shift)) {
                ustawop(Operator::Podzielic);
            }
            else if (key == Keys::Insert || key == (Keys::Oemplus | Keys::Shift)) {
                ustawop(Operator::Plus);
            }
            else if (key == Keys::Subtract || key == Keys::OemMinus) {
                ustawop(Operator::Minus);
            }


            //backspace
            else if (key == Keys::Back){
                Backspace();
            }

            //przecinek
            else if (key == Keys::Oemcomma) {
                appendp();
            }

            //C
            else if (key == Keys::Escape) {
                wyczysc();
            }

            //CE
            else if (key == Keys::Delete) {
                wyczyscpole();
            }

            //wyliczanie
            else if (key == Keys::Enter || key == Keys::Oemplus) {
                Wylicz();
            }

            //wykonywanie funkcji
            else if (key == (Keys::D2 | Keys::Shift)) {
                wykonajf(Funkcja::Pierwiastkowanie);
            }
            else if (key == (Keys::D5 | Keys::Shift)) {
                wykonajf(Funkcja::Procent);
            }
            else if (key == Keys::R) {
                wykonajf(Funkcja::Odwrotnosc);
            }
            else if (key == Keys::Q) {
                wykonajf(Funkcja::Kwadrat);
            }

            //zmiana znaku
            else if (key == Keys::F9) {
                zmiana_znaku();
            }
            return true;

        }
#pragma endregion

#pragma region UI

	private: System::Void Frm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void bttn1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    wyczyscpole();
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    wyczysc();
}

private: System::Void numery(System::Object^ sender, System::EventArgs^ e) 
{
    Button^ bttn = safe_cast<Button^>(sender);
    appenddigit(bttn->Text);
}   

private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
    Backspace();
}

private: System::Void przecinek_Click(System::Object^ sender, System::EventArgs^ e) {
    appendp();
}

private: System::Void dzielenie_Click(System::Object^ sender, System::EventArgs^ e) {
    ustawop(Operator::Podzielic);
}

private: System::Void mnozenie_Click(System::Object^ sender, System::EventArgs^ e) {
    ustawop(Operator::Razy);
}

private: System::Void odejmowanie_Click(System::Object^ sender, System::EventArgs^ e) {
    ustawop(Operator::Minus);
}

private: System::Void dodwanie_Click(System::Object^ sender, System::EventArgs^ e) {
    ustawop(Operator::Plus);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
    Wylicz();
}

private: System::Void potega_Click(System::Object^ sender, System::EventArgs^ e) {
    wykonajf(Funkcja::Kwadrat);
}

private: System::Void ulamek_Click(System::Object^ sender, System::EventArgs^ e) {
    wykonajf(Funkcja::Odwrotnosc);
}

private: System::Void pierwiastek_Click(System::Object^ sender, System::EventArgs^ e) {
    wykonajf(Funkcja::Pierwiastkowanie);


}
private: System::Void display1_Click(System::Object^ sender, System::EventArgs^ e) {
}

#pragma endregion
private: System::Void pls_min_Click(System::Object^ sender, System::EventArgs^ e) {
    zmiana_znaku();
}
private: System::Void procent_Click(System::Object^ sender, System::EventArgs^ e) {
    wykonajf(Funkcja::Procent);
}
};
}
#pragma endregion