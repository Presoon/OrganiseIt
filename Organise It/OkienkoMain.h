#pragma once
#include "NowyEventForm.h"
#include <fstream>
#include <iostream>

namespace OrganiseIt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o OkienkoMain
	/// </summary>
	public ref class OkienkoMain : public System::Windows::Forms::Form
	{
	public:
		OkienkoMain(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		array<String^>^ wyd_id = gcnew array<String^>(20);
		array<String^>^ wyd_nazwa = gcnew array<String^>(20);
		array<String^>^ wyd_opis = gcnew array<String^>(20);
		array<String^>^ wyd_dzien = gcnew array<String^>(20);
		array<String^>^ wyd_etykieta = gcnew array<String^>(20);

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~OkienkoMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  leftsidebar;
	private: System::Windows::Forms::Panel^  belkabox;
	private: System::Windows::Forms::Panel^  plusboximg;
	private: System::Windows::Forms::PictureBox^  wylogujButton;
	private: System::Windows::Forms::PictureBox^  menuButton;
	private: System::Windows::Forms::PictureBox^  logoButton;
	private: System::Windows::Forms::PictureBox^  belkanapis;
	private: System::Windows::Forms::PictureBox^  plusbuttonimg;
	private: System::Windows::Forms::PictureBox^  minimize;
	private: System::Windows::Forms::PictureBox^  zamknij;
	private: System::Windows::Forms::PictureBox^  maximize;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  newEtykieta;
	private: System::Windows::Forms::PictureBox^  newWydarzenie;
	private: System::Windows::Forms::PictureBox^  newZadanie;
	private: System::Windows::Forms::ImageList^  imagelistZadanie;
	private: System::Windows::Forms::ImageList^  imagelistWydarzenie;
	private: System::Windows::Forms::ImageList^  imagelistEtykieta;
	private: System::Windows::Forms::PictureBox^  ImportBazyBtn;
	private: System::ComponentModel::IContainer^  components;



	private:
	bool czyWidoczny = true;
	bool czyWidocznyPlusBox = false;
	bool czyPrzypiety = false;
	bool dragging;
	Point offset;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OkienkoMain::typeid));
			this->leftsidebar = (gcnew System::Windows::Forms::Panel());
			this->logoButton = (gcnew System::Windows::Forms::PictureBox());
			this->menuButton = (gcnew System::Windows::Forms::PictureBox());
			this->wylogujButton = (gcnew System::Windows::Forms::PictureBox());
			this->belkabox = (gcnew System::Windows::Forms::Panel());
			this->maximize = (gcnew System::Windows::Forms::PictureBox());
			this->zamknij = (gcnew System::Windows::Forms::PictureBox());
			this->minimize = (gcnew System::Windows::Forms::PictureBox());
			this->belkanapis = (gcnew System::Windows::Forms::PictureBox());
			this->plusbuttonimg = (gcnew System::Windows::Forms::PictureBox());
			this->plusboximg = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->newEtykieta = (gcnew System::Windows::Forms::PictureBox());
			this->newWydarzenie = (gcnew System::Windows::Forms::PictureBox());
			this->newZadanie = (gcnew System::Windows::Forms::PictureBox());
			this->imagelistZadanie = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imagelistWydarzenie = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imagelistEtykieta = (gcnew System::Windows::Forms::ImageList(this->components));
			this->ImportBazyBtn = (gcnew System::Windows::Forms::PictureBox());
			this->leftsidebar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wylogujButton))->BeginInit();
			this->belkabox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maximize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zamknij))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimize))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->belkanapis))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->plusbuttonimg))->BeginInit();
			this->plusboximg->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newEtykieta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newWydarzenie))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newZadanie))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImportBazyBtn))->BeginInit();
			this->SuspendLayout();
			// 
			// leftsidebar
			// 
			this->leftsidebar->BackColor = System::Drawing::Color::Transparent;
			this->leftsidebar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leftsidebar.BackgroundImage")));
			this->leftsidebar->Controls->Add(this->ImportBazyBtn);
			this->leftsidebar->Controls->Add(this->logoButton);
			this->leftsidebar->Controls->Add(this->menuButton);
			this->leftsidebar->Controls->Add(this->wylogujButton);
			this->leftsidebar->Location = System::Drawing::Point(4, 37);
			this->leftsidebar->Name = L"leftsidebar";
			this->leftsidebar->Size = System::Drawing::Size(239, 731);
			this->leftsidebar->TabIndex = 0;
			this->leftsidebar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &OkienkoMain::leftsidebar_Paint);
			// 
			// logoButton
			// 
			this->logoButton->BackColor = System::Drawing::Color::Transparent;
			this->logoButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logoButton.Image")));
			this->logoButton->Location = System::Drawing::Point(0, 20);
			this->logoButton->Name = L"logoButton";
			this->logoButton->Size = System::Drawing::Size(184, 50);
			this->logoButton->TabIndex = 2;
			this->logoButton->TabStop = false;
			// 
			// menuButton
			// 
			this->menuButton->BackColor = System::Drawing::Color::Transparent;
			this->menuButton->CausesValidation = false;
			this->menuButton->ForeColor = System::Drawing::Color::Transparent;
			this->menuButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuButton.Image")));
			this->menuButton->Location = System::Drawing::Point(191, 20);
			this->menuButton->Name = L"menuButton";
			this->menuButton->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->menuButton->Size = System::Drawing::Size(50, 50);
			this->menuButton->TabIndex = 0;
			this->menuButton->TabStop = false;
			this->menuButton->Click += gcnew System::EventHandler(this, &OkienkoMain::menuButton_Click);
			// 
			// wylogujButton
			// 
			this->wylogujButton->BackColor = System::Drawing::Color::Transparent;
			this->wylogujButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wylogujButton.Image")));
			this->wylogujButton->Location = System::Drawing::Point(27, 642);
			this->wylogujButton->Name = L"wylogujButton";
			this->wylogujButton->Size = System::Drawing::Size(180, 55);
			this->wylogujButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->wylogujButton->TabIndex = 3;
			this->wylogujButton->TabStop = false;
			this->wylogujButton->Click += gcnew System::EventHandler(this, &OkienkoMain::wylogujButton_Click);
			// 
			// belkabox
			// 
			this->belkabox->BackColor = System::Drawing::Color::Transparent;
			this->belkabox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"belkabox.BackgroundImage")));
			this->belkabox->Controls->Add(this->maximize);
			this->belkabox->Controls->Add(this->zamknij);
			this->belkabox->Controls->Add(this->minimize);
			this->belkabox->Controls->Add(this->belkanapis);
			this->belkabox->Location = System::Drawing::Point(0, 0);
			this->belkabox->Name = L"belkabox";
			this->belkabox->Size = System::Drawing::Size(1366, 33);
			this->belkabox->TabIndex = 1;
			this->belkabox->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &OkienkoMain::belkabox_Paint);
			this->belkabox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &OkienkoMain::belkabox_MouseDown);
			this->belkabox->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &OkienkoMain::belkabox_MouseMove);
			this->belkabox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &OkienkoMain::belkabox_MouseUp);
			// 
			// maximize
			// 
			this->maximize->BackColor = System::Drawing::Color::Transparent;
			this->maximize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"maximize.BackgroundImage")));
			this->maximize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->maximize->Location = System::Drawing::Point(1305, 5);
			this->maximize->Name = L"maximize";
			this->maximize->Size = System::Drawing::Size(27, 26);
			this->maximize->TabIndex = 3;
			this->maximize->TabStop = false;
			this->maximize->Click += gcnew System::EventHandler(this, &OkienkoMain::maximize_Click);
			// 
			// zamknij
			// 
			this->zamknij->BackColor = System::Drawing::Color::Transparent;
			this->zamknij->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zamknij.BackgroundImage")));
			this->zamknij->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->zamknij->Location = System::Drawing::Point(1335, 5);
			this->zamknij->Name = L"zamknij";
			this->zamknij->Size = System::Drawing::Size(27, 26);
			this->zamknij->TabIndex = 0;
			this->zamknij->TabStop = false;
			this->zamknij->Click += gcnew System::EventHandler(this, &OkienkoMain::zamknij_Click);
			// 
			// minimize
			// 
			this->minimize->BackColor = System::Drawing::Color::Transparent;
			this->minimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->minimize->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minimize.Image")));
			this->minimize->Location = System::Drawing::Point(1275, 5);
			this->minimize->Name = L"minimize";
			this->minimize->Padding = System::Windows::Forms::Padding(0, 15, 0, 0);
			this->minimize->Size = System::Drawing::Size(27, 24);
			this->minimize->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->minimize->TabIndex = 4;
			this->minimize->TabStop = false;
			this->minimize->Click += gcnew System::EventHandler(this, &OkienkoMain::minimize_Click);
			// 
			// belkanapis
			// 
			this->belkanapis->BackColor = System::Drawing::Color::Transparent;
			this->belkanapis->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"belkanapis.Image")));
			this->belkanapis->Location = System::Drawing::Point(9, 9);
			this->belkanapis->Name = L"belkanapis";
			this->belkanapis->Size = System::Drawing::Size(410, 17);
			this->belkanapis->TabIndex = 2;
			this->belkanapis->TabStop = false;
			// 
			// plusbuttonimg
			// 
			this->plusbuttonimg->BackColor = System::Drawing::Color::Transparent;
			this->plusbuttonimg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"plusbuttonimg.Image")));
			this->plusbuttonimg->Location = System::Drawing::Point(1279, 688);
			this->plusbuttonimg->Name = L"plusbuttonimg";
			this->plusbuttonimg->Size = System::Drawing::Size(61, 58);
			this->plusbuttonimg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->plusbuttonimg->TabIndex = 4;
			this->plusbuttonimg->TabStop = false;
			this->plusbuttonimg->Click += gcnew System::EventHandler(this, &OkienkoMain::plusbuttonimg_Click);
			// 
			// plusboximg
			// 
			this->plusboximg->BackColor = System::Drawing::Color::Transparent;
			this->plusboximg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"plusboximg.BackgroundImage")));
			this->plusboximg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->plusboximg->Controls->Add(this->panel1);
			this->plusboximg->Location = System::Drawing::Point(1017, 498);
			this->plusboximg->Name = L"plusboximg";
			this->plusboximg->Size = System::Drawing::Size(323, 188);
			this->plusboximg->TabIndex = 3;
			this->plusboximg->Visible = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->newEtykieta);
			this->panel1->Controls->Add(this->newWydarzenie);
			this->panel1->Controls->Add(this->newZadanie);
			this->panel1->Location = System::Drawing::Point(3, 44);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(317, 140);
			this->panel1->TabIndex = 0;
			// 
			// newEtykieta
			// 
			this->newEtykieta->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newEtykieta.Image")));
			this->newEtykieta->Location = System::Drawing::Point(5, 95);
			this->newEtykieta->Name = L"newEtykieta";
			this->newEtykieta->Size = System::Drawing::Size(238, 32);
			this->newEtykieta->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->newEtykieta->TabIndex = 2;
			this->newEtykieta->TabStop = false;
			this->newEtykieta->Click += gcnew System::EventHandler(this, &OkienkoMain::newEtykieta_Click);
			this->newEtykieta->MouseLeave += gcnew System::EventHandler(this, &OkienkoMain::newEtykieta_MouseLeave);
			this->newEtykieta->MouseHover += gcnew System::EventHandler(this, &OkienkoMain::newEtykieta_MouseHover);
			// 
			// newWydarzenie
			// 
			this->newWydarzenie->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newWydarzenie.Image")));
			this->newWydarzenie->Location = System::Drawing::Point(5, 55);
			this->newWydarzenie->Name = L"newWydarzenie";
			this->newWydarzenie->Size = System::Drawing::Size(267, 32);
			this->newWydarzenie->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->newWydarzenie->TabIndex = 1;
			this->newWydarzenie->TabStop = false;
			this->newWydarzenie->Click += gcnew System::EventHandler(this, &OkienkoMain::newWydarzenie_Click);
			this->newWydarzenie->MouseLeave += gcnew System::EventHandler(this, &OkienkoMain::newWydarzenie_MouseLeave);
			this->newWydarzenie->MouseHover += gcnew System::EventHandler(this, &OkienkoMain::newWydarzenie_MouseHover);
			// 
			// newZadanie
			// 
			this->newZadanie->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newZadanie.Image")));
			this->newZadanie->Location = System::Drawing::Point(5, 15);
			this->newZadanie->Name = L"newZadanie";
			this->newZadanie->Size = System::Drawing::Size(228, 32);
			this->newZadanie->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->newZadanie->TabIndex = 0;
			this->newZadanie->TabStop = false;
			this->newZadanie->Click += gcnew System::EventHandler(this, &OkienkoMain::newZadanie_Click);
			this->newZadanie->MouseLeave += gcnew System::EventHandler(this, &OkienkoMain::newZadanie_MouseLeave);
			this->newZadanie->MouseHover += gcnew System::EventHandler(this, &OkienkoMain::newZadanie_MouseHover);
			// 
			// imagelistZadanie
			// 
			this->imagelistZadanie->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imagelistZadanie.ImageStream")));
			this->imagelistZadanie->TransparentColor = System::Drawing::Color::Transparent;
			this->imagelistZadanie->Images->SetKeyName(0, L"Dodaj nowe zadaniehov.png");
			// 
			// imagelistWydarzenie
			// 
			this->imagelistWydarzenie->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imagelistWydarzenie.ImageStream")));
			this->imagelistWydarzenie->TransparentColor = System::Drawing::Color::Transparent;
			this->imagelistWydarzenie->Images->SetKeyName(0, L"Dodaj nowe wydarzeniehov.png");
			// 
			// imagelistEtykieta
			// 
			this->imagelistEtykieta->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imagelistEtykieta.ImageStream")));
			this->imagelistEtykieta->TransparentColor = System::Drawing::Color::Transparent;
			this->imagelistEtykieta->Images->SetKeyName(0, L"Dodaj now¹ etykietêhov.png");
			// 
			// ImportBazyBtn
			// 
			this->ImportBazyBtn->BackColor = System::Drawing::Color::Maroon;
			this->ImportBazyBtn->Location = System::Drawing::Point(59, 147);
			this->ImportBazyBtn->Name = L"ImportBazyBtn";
			this->ImportBazyBtn->Size = System::Drawing::Size(100, 54);
			this->ImportBazyBtn->TabIndex = 4;
			this->ImportBazyBtn->TabStop = false;
			this->ImportBazyBtn->Click += gcnew System::EventHandler(this, &OkienkoMain::ImportBazyBtn_Click);
			// 
			// OkienkoMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1366, 768);
			this->Controls->Add(this->plusboximg);
			this->Controls->Add(this->plusbuttonimg);
			this->Controls->Add(this->belkabox);
			this->Controls->Add(this->leftsidebar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"OkienkoMain";
			this->Text = L"OrganiseIt";
			this->Load += gcnew System::EventHandler(this, &OkienkoMain::OkienkoMain_Load);
			this->leftsidebar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logoButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wylogujButton))->EndInit();
			this->belkabox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maximize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->zamknij))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimize))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->belkanapis))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->plusbuttonimg))->EndInit();
			this->plusboximg->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newEtykieta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newWydarzenie))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newZadanie))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImportBazyBtn))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void OkienkoMain_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void leftsidebar_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	//pokaz menu dodawania
	private: System::Void plusbuttonimg_Click(System::Object^  sender, System::EventArgs^  e) {
		if (czyWidocznyPlusBox) {
			this->plusboximg->Visible = false;
			czyWidocznyPlusBox = false;
		}
		else {
			this->plusboximg->Visible = true;
			czyWidocznyPlusBox = true;
		}
	}

	//minimalizuj okno
	private: System::Void minimize_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
	//maksymalizuj = przypnij
	private: System::Void maximize_Click(System::Object^  sender, System::EventArgs^  e) {
		//nothing
		if (czyPrzypiety) {
			TopMost = false;
			czyPrzypiety = false;
			MessageBox::Show("Okno zosta³o odpiête.", "Organise It!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			TopMost = true;
			czyPrzypiety = true;
			MessageBox::Show("Okno zosta³o przypiête i od teraz bêdzie na wierzchu ;)", "Organise It!", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	//zamknij
	private: System::Void zamknij_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
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

	//ukrycie leftsidebar
	private: System::Void menuButton_Click(System::Object^  sender, System::EventArgs^  e) {
		//uniewidocznienie panelu
		if (czyWidoczny) {
			this->leftsidebar->Location = System::Drawing::Point(-198, 37);
			czyWidoczny = false;
		}
		else {
			this->leftsidebar->Location = System::Drawing::Point(4, 37);
			czyWidoczny = true;
		}
	}
	//zakoñczenie programu przyciskiem w leftsidebar
	private: System::Void wylogujButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Czy aby na pewno chcesz zakoñczyæ program?", "Organise It!", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
	}
	
	//hover zmiany w plusboxie + nowe okna
		//noweZadanie
			private: System::Void newZadanie_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				newZadanie->Image = imagelistZadanie->Images[0];
			}
			private: System::Void newZadanie_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OkienkoMain::typeid));
				newZadanie->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newZadanie.Image")));
			}
			private: System::Void newZadanie_Click(System::Object^  sender, System::EventArgs^  e) {
				plusboximg->Visible = false;   //autoukrycie plusbox
				czyWidocznyPlusBox = false;    //autoukrycie plusbox
				NowyEventForm^ eventowa = gcnew NowyEventForm;
				eventowa->Show();
			}
		//noweWydarzenie
			private: System::Void newWydarzenie_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				newWydarzenie->Image = imagelistWydarzenie->Images[0];
			}
			private: System::Void newWydarzenie_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OkienkoMain::typeid));
				newWydarzenie->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newWydarzenie.Image")));
			}
			private: System::Void newWydarzenie_Click(System::Object^  sender, System::EventArgs^  e) {
				plusboximg->Visible = false;   //autoukrycie plusbox
				czyWidocznyPlusBox = false;    //autoukrycie plusbox
				NowyEventForm^ eventowa = gcnew NowyEventForm;
				eventowa->Show();
			}
		//nowaEtykieta
			private: System::Void newEtykieta_MouseHover(System::Object^  sender, System::EventArgs^  e) {
				newEtykieta->Image = imagelistEtykieta->Images[0];
			}
			private: System::Void newEtykieta_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OkienkoMain::typeid));
				newEtykieta->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newEtykieta.Image")));
			}
			private: System::Void newEtykieta_Click(System::Object^  sender, System::EventArgs^  e) {
				plusboximg->Visible = false;   //autoukrycie plusbox
				czyWidocznyPlusBox = false;    //autoukrycie plusbox
				NowyEventForm^ eventowa = gcnew NowyEventForm;
				eventowa->Show();
			}
			
			//import bazy danych
			private: System::Void ImportBazyBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				IO::Stream^ myStream;
				OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				String^ wiersz;
				openFileDialog1->InitialDirectory = "c:\\";
				openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				openFileDialog1->FilterIndex = 2;
				openFileDialog1->RestoreDirectory = true;
				int numerwyd = 0;
				int nr_linii = 1;

				if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {

					if ((myStream = openFileDialog1->OpenFile()) != nullptr) {
						IO::StreamReader^ plik = gcnew IO::StreamReader(myStream, System::Text::Encoding::Default);
						while ((wiersz = plik->ReadLine()) != nullptr) {
							//wiersz = plik->ReadLine();
							Console::Write(wiersz + "\n");

							switch (nr_linii % 5) {
							case 1: {
								wyd_id[numerwyd] = wiersz;
								nr_linii += 1;
								break;
								}
							case 2: {
								wyd_nazwa[numerwyd] = wiersz;
								nr_linii++;
								break;
							}
							case 3: {
								wyd_opis[numerwyd] = wiersz;
								nr_linii++;
								break;
							}
							case 4: {
								wyd_dzien[numerwyd] = wiersz;
								nr_linii++;
								break;
							}
							case 0: {
								wyd_etykieta[numerwyd] = wiersz;
								nr_linii++;
								numerwyd++;
								break;
							}
							}//koniec switcha

						}//petla czytaj¹ca plik

						
					}//if okna otwieraj¹cego plik

					Console::Write("\nWYD ID: " + wyd_id[0] + "\nWYD_NAZWA: " +
						wyd_nazwa[0] + "\nWYD_OPIS: " +
						wyd_opis[0] + "\nWYD_DZIEN: " +
						wyd_dzien[0] + "\nWYD_ETYKIETA: " +
						wyd_etykieta[0] + "\n");

				}
			}
};
}
