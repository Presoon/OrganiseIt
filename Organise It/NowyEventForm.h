#pragma once
#include "OkienkoMain.h"

namespace OrganiseIt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o NowyEventForm
	/// </summary>
	public ref class NowyEventForm : public System::Windows::Forms::Form
	{
	public:
		NowyEventForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		bool isDodajClicked = true;
	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~NowyEventForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
	System::Windows::Forms::Panel^  belkabox;
	System::Windows::Forms::PictureBox^  zamknij;
    System::Windows::Forms::PictureBox^  dodajBtn;
	System::Windows::Forms::PictureBox^  anulujBtn;
	private:
		bool czyWidoczny = true;
		bool czyWidocznyPlusBox = false;
		bool dragging;
		Point offset;


	public:
	 System::Windows::Forms::PictureBox^  pictureBox1;
	 System::Windows::Forms::TextBox^  nazwaEvent;
	 System::Windows::Forms::TextBox^  opisEvent;
	 System::Windows::Forms::RadioButton^  poniedzialekbtn;
	 System::Windows::Forms::RadioButton^  wtorekbtn;
	 System::Windows::Forms::RadioButton^  srodabtn;
	 System::Windows::Forms::RadioButton^  czwartekbtn;
	 System::Windows::Forms::RadioButton^  piatekbtn;
	 System::Windows::Forms::ComboBox^  etykietabtn;
	 System::Windows::Forms::ComboBox^  godzinabtn;
	 System::Windows::Forms::ImageList^  backgroungEvent;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NowyEventForm::typeid));
			this->belkabox = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->zamknij = (gcnew System::Windows::Forms::PictureBox());
			this->dodajBtn = (gcnew System::Windows::Forms::PictureBox());
			this->anulujBtn = (gcnew System::Windows::Forms::PictureBox());
			this->nazwaEvent = (gcnew System::Windows::Forms::TextBox());
			this->opisEvent = (gcnew System::Windows::Forms::TextBox());
			this->poniedzialekbtn = (gcnew System::Windows::Forms::RadioButton());
			this->wtorekbtn = (gcnew System::Windows::Forms::RadioButton());
			this->srodabtn = (gcnew System::Windows::Forms::RadioButton());
			this->czwartekbtn = (gcnew System::Windows::Forms::RadioButton());
			this->piatekbtn = (gcnew System::Windows::Forms::RadioButton());
			this->etykietabtn = (gcnew System::Windows::Forms::ComboBox());
			this->godzinabtn = (gcnew System::Windows::Forms::ComboBox());
			this->backgroungEvent = (gcnew System::Windows::Forms::ImageList(this->components));
			this->belkabox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zamknij))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dodajBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->anulujBtn))->BeginInit();
			this->SuspendLayout();
			// 
			// belkabox
			// 
			this->belkabox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"belkabox.BackgroundImage")));
			this->belkabox->Controls->Add(this->pictureBox1);
			this->belkabox->Controls->Add(this->zamknij);
			this->belkabox->Location = System::Drawing::Point(0, 0);
			this->belkabox->Name = L"belkabox";
			this->belkabox->Size = System::Drawing::Size(489, 33);
			this->belkabox->TabIndex = 1;
			this->belkabox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &NowyEventForm::belkabox_Paint);
			this->belkabox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &NowyEventForm::belkabox_MouseDown);
			this->belkabox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &NowyEventForm::belkabox_MouseMove);
			this->belkabox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &NowyEventForm::belkabox_MouseUp);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(301, 12);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// zamknij
			// 
			this->zamknij->BackColor = System::Drawing::Color::Transparent;
			this->zamknij->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->zamknij->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zamknij.Image")));
			this->zamknij->Location = System::Drawing::Point(459, 4);
			this->zamknij->Name = L"zamknij";
			this->zamknij->Size = System::Drawing::Size(27, 26);
			this->zamknij->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->zamknij->TabIndex = 0;
			this->zamknij->TabStop = false;
			this->zamknij->Click += gcnew System::EventHandler(this, &NowyEventForm::zamknij_Click);
			// 
			// dodajBtn
			// 
			this->dodajBtn->BackColor = System::Drawing::Color::Transparent;
			this->dodajBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dodajBtn.Image")));
			this->dodajBtn->Location = System::Drawing::Point(261, 301);
			this->dodajBtn->Name = L"dodajBtn";
			this->dodajBtn->Size = System::Drawing::Size(176, 48);
			this->dodajBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->dodajBtn->TabIndex = 1;
			this->dodajBtn->TabStop = false;
			this->dodajBtn->Click += gcnew System::EventHandler(this, &NowyEventForm::dodajBtn_Click);
			// 
			// anulujBtn
			// 
			this->anulujBtn->BackColor = System::Drawing::Color::Transparent;
			this->anulujBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"anulujBtn.Image")));
			this->anulujBtn->Location = System::Drawing::Point(53, 301);
			this->anulujBtn->Name = L"anulujBtn";
			this->anulujBtn->Size = System::Drawing::Size(176, 48);
			this->anulujBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->anulujBtn->TabIndex = 2;
			this->anulujBtn->TabStop = false;
			this->anulujBtn->Click += gcnew System::EventHandler(this, &NowyEventForm::anulujBtn_Click);
			// 
			// nazwaEvent
			// 
			this->nazwaEvent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->nazwaEvent->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nazwaEvent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->nazwaEvent->ForeColor = System::Drawing::Color::White;
			this->nazwaEvent->Location = System::Drawing::Point(230, 57);
			this->nazwaEvent->MaxLength = 100;
			this->nazwaEvent->Name = L"nazwaEvent";
			this->nazwaEvent->Size = System::Drawing::Size(185, 19);
			this->nazwaEvent->TabIndex = 3;
			// 
			// opisEvent
			// 
			this->opisEvent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->opisEvent->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->opisEvent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->opisEvent->ForeColor = System::Drawing::Color::White;
			this->opisEvent->Location = System::Drawing::Point(232, 112);
			this->opisEvent->Name = L"opisEvent";
			this->opisEvent->Size = System::Drawing::Size(185, 19);
			this->opisEvent->TabIndex = 4;
			// 
			// poniedzialekbtn
			// 
			this->poniedzialekbtn->AutoSize = true;
			this->poniedzialekbtn->BackColor = System::Drawing::Color::Transparent;
			this->poniedzialekbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->poniedzialekbtn->ForeColor = System::Drawing::Color::White;
			this->poniedzialekbtn->Location = System::Drawing::Point(229, 154);
			this->poniedzialekbtn->Name = L"poniedzialekbtn";
			this->poniedzialekbtn->Size = System::Drawing::Size(108, 19);
			this->poniedzialekbtn->TabIndex = 5;
			this->poniedzialekbtn->TabStop = true;
			this->poniedzialekbtn->Text = L"Poniedzia³ek";
			this->poniedzialekbtn->UseVisualStyleBackColor = false;
			// 
			// wtorekbtn
			// 
			this->wtorekbtn->AutoSize = true;
			this->wtorekbtn->BackColor = System::Drawing::Color::Transparent;
			this->wtorekbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->wtorekbtn->ForeColor = System::Drawing::Color::White;
			this->wtorekbtn->Location = System::Drawing::Point(344, 156);
			this->wtorekbtn->Name = L"wtorekbtn";
			this->wtorekbtn->Size = System::Drawing::Size(69, 19);
			this->wtorekbtn->TabIndex = 6;
			this->wtorekbtn->TabStop = true;
			this->wtorekbtn->Text = L"Wtorek";
			this->wtorekbtn->UseVisualStyleBackColor = false;
			// 
			// srodabtn
			// 
			this->srodabtn->AutoSize = true;
			this->srodabtn->BackColor = System::Drawing::Color::Transparent;
			this->srodabtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->srodabtn->ForeColor = System::Drawing::Color::White;
			this->srodabtn->Location = System::Drawing::Point(229, 176);
			this->srodabtn->Name = L"srodabtn";
			this->srodabtn->Size = System::Drawing::Size(63, 19);
			this->srodabtn->TabIndex = 7;
			this->srodabtn->TabStop = true;
			this->srodabtn->Text = L"Œroda";
			this->srodabtn->UseVisualStyleBackColor = false;
			// 
			// czwartekbtn
			// 
			this->czwartekbtn->AutoSize = true;
			this->czwartekbtn->BackColor = System::Drawing::Color::Transparent;
			this->czwartekbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->czwartekbtn->ForeColor = System::Drawing::Color::White;
			this->czwartekbtn->Location = System::Drawing::Point(294, 176);
			this->czwartekbtn->Name = L"czwartekbtn";
			this->czwartekbtn->Size = System::Drawing::Size(83, 19);
			this->czwartekbtn->TabIndex = 8;
			this->czwartekbtn->TabStop = true;
			this->czwartekbtn->Text = L"Czwartek";
			this->czwartekbtn->UseVisualStyleBackColor = false;
			// 
			// piatekbtn
			// 
			this->piatekbtn->AutoSize = true;
			this->piatekbtn->BackColor = System::Drawing::Color::Transparent;
			this->piatekbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->piatekbtn->ForeColor = System::Drawing::Color::White;
			this->piatekbtn->Location = System::Drawing::Point(380, 176);
			this->piatekbtn->Name = L"piatekbtn";
			this->piatekbtn->Size = System::Drawing::Size(65, 19);
			this->piatekbtn->TabIndex = 9;
			this->piatekbtn->TabStop = true;
			this->piatekbtn->Text = L"Pi¹tek";
			this->piatekbtn->UseVisualStyleBackColor = false;
			// 
			// etykietabtn
			// 
			this->etykietabtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->etykietabtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->etykietabtn->ForeColor = System::Drawing::Color::White;
			this->etykietabtn->FormattingEnabled = true;
			this->etykietabtn->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Brak", L"Czerwony", L"¯ó³ty", L"Zielony", L"Niebieski",
					L"Czarny"
			});
			this->etykietabtn->Location = System::Drawing::Point(229, 262);
			this->etykietabtn->Name = L"etykietabtn";
			this->etykietabtn->Size = System::Drawing::Size(147, 21);
			this->etykietabtn->TabIndex = 10;
			// 
			// godzinabtn
			// 
			this->godzinabtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(111)),
				static_cast<System::Int32>(static_cast<System::Byte>(245)));
			this->godzinabtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->godzinabtn->ForeColor = System::Drawing::Color::White;
			this->godzinabtn->FormattingEnabled = true;
			this->godzinabtn->Items->AddRange(gcnew cli::array< System::Object^  >(48) {
				L"0:00", L"0:30", L"1:00", L"1:30", L"2:00", L"2:30",
					L"3:00", L"3:30", L"4:00", L"4:30", L"5:00", L"5:30", L"6:00", L"6:30", L"7:00", L"7:30", L"8:00", L"8:30", L"9:00", L"9:30",
					L"10:00", L"10:30", L"11:00", L"11:30", L"12:00", L"12:30", L"13:00", L"13:30", L"14:00", L"14:30", L"15:00", L"15:30", L"16:00",
					L"16:30", L"17:00", L"17:30", L"18:00", L"18:30", L"19:00", L"19:30", L"20:00", L"20:30", L"21:00", L"21:30", L"22:00", L"22:30",
					L"23:00", L"23:30"
			});
			this->godzinabtn->Location = System::Drawing::Point(229, 216);
			this->godzinabtn->Name = L"godzinabtn";
			this->godzinabtn->Size = System::Drawing::Size(147, 21);
			this->godzinabtn->TabIndex = 11;
			// 
			// backgroungEvent
			// 
			this->backgroungEvent->ColorDepth = System::Windows::Forms::ColorDepth::Depth32Bit;
			this->backgroungEvent->ImageSize = System::Drawing::Size(16, 16);
			this->backgroungEvent->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// NowyEventForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(488, 369);
			this->Controls->Add(this->godzinabtn);
			this->Controls->Add(this->etykietabtn);
			this->Controls->Add(this->piatekbtn);
			this->Controls->Add(this->czwartekbtn);
			this->Controls->Add(this->srodabtn);
			this->Controls->Add(this->wtorekbtn);
			this->Controls->Add(this->poniedzialekbtn);
			this->Controls->Add(this->opisEvent);
			this->Controls->Add(this->nazwaEvent);
			this->Controls->Add(this->anulujBtn);
			this->Controls->Add(this->dodajBtn);
			this->Controls->Add(this->belkabox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"NowyEventForm";
			this->Padding = System::Windows::Forms::Padding(2);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NowyEventForm";
			this->belkabox->ResumeLayout(false);
			this->belkabox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zamknij))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dodajBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->anulujBtn))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void zamknij_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void anulujBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	//drag&drop okna
	private: System::Void belkabox_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		this->dragging = false;
	}
	private: System::Void belkabox_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void belkabox_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->dragging) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void belkabox_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = false;
	}
	//------------------------------

	//przycisk Dodaj
	public: System::Void dodajBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		this->isDodajClicked = true;
	}

};
}
