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
	private: System::Windows::Forms::Panel^  belkabox;
	private: System::Windows::Forms::PictureBox^  zamknij;
	private: System::Windows::Forms::PictureBox^  dodajBtn;
	private: System::Windows::Forms::PictureBox^  anulujBtn;
	private:
		bool czyWidoczny = true;
		bool czyWidocznyPlusBox = false;
		bool dragging;
		Point offset;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(NowyEventForm::typeid));
			this->belkabox = (gcnew System::Windows::Forms::Panel());
			this->zamknij = (gcnew System::Windows::Forms::PictureBox());
			this->dodajBtn = (gcnew System::Windows::Forms::PictureBox());
			this->anulujBtn = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->belkabox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zamknij))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dodajBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->anulujBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->dodajBtn->Location = System::Drawing::Point(289, 301);
			this->dodajBtn->Name = L"dodajBtn";
			this->dodajBtn->Size = System::Drawing::Size(176, 48);
			this->dodajBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->dodajBtn->TabIndex = 1;
			this->dodajBtn->TabStop = false;
			// 
			// anulujBtn
			// 
			this->anulujBtn->BackColor = System::Drawing::Color::Transparent;
			this->anulujBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"anulujBtn.Image")));
			this->anulujBtn->Location = System::Drawing::Point(94, 301);
			this->anulujBtn->Name = L"anulujBtn";
			this->anulujBtn->Size = System::Drawing::Size(176, 48);
			this->anulujBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->anulujBtn->TabIndex = 2;
			this->anulujBtn->TabStop = false;
			this->anulujBtn->Click += gcnew System::EventHandler(this, &NowyEventForm::anulujBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(131, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 240);
			this->label1->TabIndex = 3;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(45, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 25);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Martin";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(339, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Saturday";
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
			// NowyEventForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(488, 369);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zamknij))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dodajBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->anulujBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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


};
}
