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
		array<String^>^ wyd_id = gcnew array<String^>(40);
		array<String^>^ wyd_nazwa = gcnew array<String^>(40);
		array<String^>^ wyd_opis = gcnew array<String^>(40);
		array<String^>^ wyd_dzien = gcnew array<String^>(40);
		array<String^>^ wyd_godzina = gcnew array<String^>(40);
		array<String^>^ wyd_etykieta = gcnew array<String^>(40);




		int numerwyd = 0; //numer wszystkich wydarzen

		int nr_linii = 1;


	private: System::Windows::Forms::PictureBox^  importujimg;
	private: System::Windows::Forms::PictureBox^  listazadan_btn;
	private: System::Windows::Forms::PictureBox^  terminarz_btn;
	private: System::Windows::Forms::PictureBox^  oAutorachButton;
	private: System::Windows::Forms::PictureBox^  ExportBazyZadanBtn;
	private: System::Windows::Forms::PictureBox^  ExportBazyWydarzenBtn;
	private: System::Windows::Forms::PictureBox^  exportujimg;
	private: System::Windows::Forms::Panel^  TerminarzBox;
	private: System::Windows::Forms::Panel^  PoniedzialekBox;
	private: System::Windows::Forms::Panel^  WtorekBox;
	private: System::Windows::Forms::Panel^  PiatekBox;

	private: System::Windows::Forms::Panel^  CzwartekBox;
	private: System::Windows::Forms::Panel^  SrodaBox;
	private: System::Windows::Forms::Panel^  ListazadanBox;
	private: System::Windows::Forms::Label^  label1;




	private: System::Windows::Forms::Panel^  wydarzeniePon1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  TytulPon1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  wydarzeniePt5;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Panel^  wydarzeniePt4;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::Panel^  wydarzeniePt3;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::Panel^  wydarzeniePt1;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Label^  label73;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label75;
	private: System::Windows::Forms::Panel^  wydarzeniePt2;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::Label^  label72;
	private: System::Windows::Forms::Panel^  wydarzenieCzw5;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Panel^  wydarzenieCzw1;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Panel^  wydarzenieCzw4;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Panel^  wydarzenieCzw2;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Panel^  wydarzenieCzw3;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Panel^  wydarzenieSr5;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Panel^  wydarzenieSr1;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Panel^  wydarzenieSr4;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Panel^  wydarzenieSr2;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Panel^  wydarzenieSr3;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Panel^  wydarzenieWt5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Panel^  wydarzenieWt1;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Panel^  wydarzenieWt4;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Panel^  wydarzenieWt2;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Panel^  wydarzenieWt3;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Panel^  wydarzeniePon5;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Panel^  wydarzeniePon4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Panel^  wydarzeniePon3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Panel^  wydarzeniePon2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::PictureBox^  refresh_panels;




	private: System::Windows::Forms::PictureBox^  ImportBazyZadanBtn;
			 

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

	private: System::Windows::Forms::PictureBox^  newWydarzenie;
	private: System::Windows::Forms::PictureBox^  newZadanie;
	private: System::Windows::Forms::ImageList^  imagelistZadanie;
	private: System::Windows::Forms::ImageList^  imagelistWydarzenie;
	private: System::Windows::Forms::ImageList^  imagelistEtykieta;
	private: System::Windows::Forms::PictureBox^  ImportBazyWydarzenBtn;

	private: System::ComponentModel::IContainer^  components;
	private: 


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
			this->refresh_panels = (gcnew System::Windows::Forms::PictureBox());
			this->oAutorachButton = (gcnew System::Windows::Forms::PictureBox());
			this->ExportBazyZadanBtn = (gcnew System::Windows::Forms::PictureBox());
			this->ExportBazyWydarzenBtn = (gcnew System::Windows::Forms::PictureBox());
			this->exportujimg = (gcnew System::Windows::Forms::PictureBox());
			this->ImportBazyZadanBtn = (gcnew System::Windows::Forms::PictureBox());
			this->importujimg = (gcnew System::Windows::Forms::PictureBox());
			this->listazadan_btn = (gcnew System::Windows::Forms::PictureBox());
			this->terminarz_btn = (gcnew System::Windows::Forms::PictureBox());
			this->ImportBazyWydarzenBtn = (gcnew System::Windows::Forms::PictureBox());
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
			this->newWydarzenie = (gcnew System::Windows::Forms::PictureBox());
			this->newZadanie = (gcnew System::Windows::Forms::PictureBox());
			this->imagelistZadanie = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imagelistWydarzenie = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imagelistEtykieta = (gcnew System::Windows::Forms::ImageList(this->components));
			this->TerminarzBox = (gcnew System::Windows::Forms::Panel());
			this->PiatekBox = (gcnew System::Windows::Forms::Panel());
			this->wydarzeniePt5 = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->wydarzeniePt4 = (gcnew System::Windows::Forms::Panel());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->wydarzeniePt3 = (gcnew System::Windows::Forms::Panel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->wydarzeniePt1 = (gcnew System::Windows::Forms::Panel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->wydarzeniePt2 = (gcnew System::Windows::Forms::Panel());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->CzwartekBox = (gcnew System::Windows::Forms::Panel());
			this->wydarzenieCzw5 = (gcnew System::Windows::Forms::Panel());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->wydarzenieCzw1 = (gcnew System::Windows::Forms::Panel());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->wydarzenieCzw4 = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->wydarzenieCzw2 = (gcnew System::Windows::Forms::Panel());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->wydarzenieCzw3 = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->SrodaBox = (gcnew System::Windows::Forms::Panel());
			this->wydarzenieSr5 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->wydarzenieSr1 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->wydarzenieSr4 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->wydarzenieSr2 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->wydarzenieSr3 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->WtorekBox = (gcnew System::Windows::Forms::Panel());
			this->wydarzenieWt5 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->wydarzenieWt1 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->wydarzenieWt4 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->wydarzenieWt2 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->wydarzenieWt3 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->PoniedzialekBox = (gcnew System::Windows::Forms::Panel());
			this->wydarzeniePon5 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->wydarzeniePon4 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->wydarzeniePon3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->wydarzeniePon2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->wydarzeniePon1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TytulPon1 = (gcnew System::Windows::Forms::Label());
			this->ListazadanBox = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->leftsidebar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refresh_panels))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->oAutorachButton))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ExportBazyZadanBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ExportBazyWydarzenBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exportujimg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImportBazyZadanBtn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->importujimg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->listazadan_btn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->terminarz_btn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImportBazyWydarzenBtn))->BeginInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newWydarzenie))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newZadanie))->BeginInit();
			this->TerminarzBox->SuspendLayout();
			this->PiatekBox->SuspendLayout();
			this->wydarzeniePt5->SuspendLayout();
			this->wydarzeniePt4->SuspendLayout();
			this->wydarzeniePt3->SuspendLayout();
			this->wydarzeniePt1->SuspendLayout();
			this->wydarzeniePt2->SuspendLayout();
			this->CzwartekBox->SuspendLayout();
			this->wydarzenieCzw5->SuspendLayout();
			this->wydarzenieCzw1->SuspendLayout();
			this->wydarzenieCzw4->SuspendLayout();
			this->wydarzenieCzw2->SuspendLayout();
			this->wydarzenieCzw3->SuspendLayout();
			this->SrodaBox->SuspendLayout();
			this->wydarzenieSr5->SuspendLayout();
			this->wydarzenieSr1->SuspendLayout();
			this->wydarzenieSr4->SuspendLayout();
			this->wydarzenieSr2->SuspendLayout();
			this->wydarzenieSr3->SuspendLayout();
			this->WtorekBox->SuspendLayout();
			this->wydarzenieWt5->SuspendLayout();
			this->wydarzenieWt1->SuspendLayout();
			this->wydarzenieWt4->SuspendLayout();
			this->wydarzenieWt2->SuspendLayout();
			this->wydarzenieWt3->SuspendLayout();
			this->PoniedzialekBox->SuspendLayout();
			this->wydarzeniePon5->SuspendLayout();
			this->wydarzeniePon4->SuspendLayout();
			this->wydarzeniePon3->SuspendLayout();
			this->wydarzeniePon2->SuspendLayout();
			this->wydarzeniePon1->SuspendLayout();
			this->ListazadanBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// leftsidebar
			// 
			this->leftsidebar->BackColor = System::Drawing::Color::Transparent;
			this->leftsidebar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"leftsidebar.BackgroundImage")));
			this->leftsidebar->Controls->Add(this->refresh_panels);
			this->leftsidebar->Controls->Add(this->oAutorachButton);
			this->leftsidebar->Controls->Add(this->ExportBazyZadanBtn);
			this->leftsidebar->Controls->Add(this->ExportBazyWydarzenBtn);
			this->leftsidebar->Controls->Add(this->exportujimg);
			this->leftsidebar->Controls->Add(this->ImportBazyZadanBtn);
			this->leftsidebar->Controls->Add(this->importujimg);
			this->leftsidebar->Controls->Add(this->listazadan_btn);
			this->leftsidebar->Controls->Add(this->terminarz_btn);
			this->leftsidebar->Controls->Add(this->ImportBazyWydarzenBtn);
			this->leftsidebar->Controls->Add(this->logoButton);
			this->leftsidebar->Controls->Add(this->menuButton);
			this->leftsidebar->Controls->Add(this->wylogujButton);
			this->leftsidebar->Location = System::Drawing::Point(4, 37);
			this->leftsidebar->Name = L"leftsidebar";
			this->leftsidebar->Size = System::Drawing::Size(239, 731);
			this->leftsidebar->TabIndex = 0;
			this->leftsidebar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &OkienkoMain::leftsidebar_Paint);
			// 
			// refresh_panels
			// 
			this->refresh_panels->BackColor = System::Drawing::Color::Transparent;
			this->refresh_panels->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"refresh_panels.Image")));
			this->refresh_panels->Location = System::Drawing::Point(56, 542);
			this->refresh_panels->Name = L"refresh_panels";
			this->refresh_panels->Size = System::Drawing::Size(124, 24);
			this->refresh_panels->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->refresh_panels->TabIndex = 13;
			this->refresh_panels->TabStop = false;
			this->refresh_panels->Click += gcnew System::EventHandler(this, &OkienkoMain::refresh_panels_Click);
			// 
			// oAutorachButton
			// 
			this->oAutorachButton->BackColor = System::Drawing::Color::Transparent;
			this->oAutorachButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"oAutorachButton.Image")));
			this->oAutorachButton->Location = System::Drawing::Point(27, 581);
			this->oAutorachButton->Name = L"oAutorachButton";
			this->oAutorachButton->Size = System::Drawing::Size(180, 55);
			this->oAutorachButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->oAutorachButton->TabIndex = 12;
			this->oAutorachButton->TabStop = false;
			this->oAutorachButton->Click += gcnew System::EventHandler(this, &OkienkoMain::oAutorachButton_Click);
			// 
			// ExportBazyZadanBtn
			// 
			this->ExportBazyZadanBtn->BackColor = System::Drawing::Color::Transparent;
			this->ExportBazyZadanBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExportBazyZadanBtn.Image")));
			this->ExportBazyZadanBtn->Location = System::Drawing::Point(45, 473);
			this->ExportBazyZadanBtn->Name = L"ExportBazyZadanBtn";
			this->ExportBazyZadanBtn->Size = System::Drawing::Size(117, 23);
			this->ExportBazyZadanBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ExportBazyZadanBtn->TabIndex = 11;
			this->ExportBazyZadanBtn->TabStop = false;
			this->ExportBazyZadanBtn->Click += gcnew System::EventHandler(this, &OkienkoMain::ExportBazyZadanBtn_Click);
			// 
			// ExportBazyWydarzenBtn
			// 
			this->ExportBazyWydarzenBtn->BackColor = System::Drawing::Color::Transparent;
			this->ExportBazyWydarzenBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExportBazyWydarzenBtn.Image")));
			this->ExportBazyWydarzenBtn->Location = System::Drawing::Point(46, 442);
			this->ExportBazyWydarzenBtn->Name = L"ExportBazyWydarzenBtn";
			this->ExportBazyWydarzenBtn->Size = System::Drawing::Size(149, 23);
			this->ExportBazyWydarzenBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ExportBazyWydarzenBtn->TabIndex = 10;
			this->ExportBazyWydarzenBtn->TabStop = false;
			this->ExportBazyWydarzenBtn->Click += gcnew System::EventHandler(this, &OkienkoMain::ExportBazyWydarzenBtn_Click);
			// 
			// exportujimg
			// 
			this->exportujimg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exportujimg.Image")));
			this->exportujimg->Location = System::Drawing::Point(27, 415);
			this->exportujimg->Name = L"exportujimg";
			this->exportujimg->Size = System::Drawing::Size(106, 18);
			this->exportujimg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->exportujimg->TabIndex = 9;
			this->exportujimg->TabStop = false;
			// 
			// ImportBazyZadanBtn
			// 
			this->ImportBazyZadanBtn->BackColor = System::Drawing::Color::Transparent;
			this->ImportBazyZadanBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImportBazyZadanBtn.Image")));
			this->ImportBazyZadanBtn->Location = System::Drawing::Point(45, 373);
			this->ImportBazyZadanBtn->Name = L"ImportBazyZadanBtn";
			this->ImportBazyZadanBtn->Size = System::Drawing::Size(117, 23);
			this->ImportBazyZadanBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ImportBazyZadanBtn->TabIndex = 8;
			this->ImportBazyZadanBtn->TabStop = false;
			// 
			// importujimg
			// 
			this->importujimg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"importujimg.Image")));
			this->importujimg->Location = System::Drawing::Point(27, 315);
			this->importujimg->Name = L"importujimg";
			this->importujimg->Size = System::Drawing::Size(106, 18);
			this->importujimg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->importujimg->TabIndex = 7;
			this->importujimg->TabStop = false;
			// 
			// listazadan_btn
			// 
			this->listazadan_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"listazadan_btn.Image")));
			this->listazadan_btn->Location = System::Drawing::Point(22, 190);
			this->listazadan_btn->Name = L"listazadan_btn";
			this->listazadan_btn->Size = System::Drawing::Size(194, 56);
			this->listazadan_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->listazadan_btn->TabIndex = 6;
			this->listazadan_btn->TabStop = false;
			this->listazadan_btn->Click += gcnew System::EventHandler(this, &OkienkoMain::listazadan_btn_Click);
			// 
			// terminarz_btn
			// 
			this->terminarz_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"terminarz_btn.Image")));
			this->terminarz_btn->Location = System::Drawing::Point(22, 115);
			this->terminarz_btn->Name = L"terminarz_btn";
			this->terminarz_btn->Size = System::Drawing::Size(194, 56);
			this->terminarz_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->terminarz_btn->TabIndex = 5;
			this->terminarz_btn->TabStop = false;
			this->terminarz_btn->Click += gcnew System::EventHandler(this, &OkienkoMain::terminarz_btn_Click);
			// 
			// ImportBazyWydarzenBtn
			// 
			this->ImportBazyWydarzenBtn->BackColor = System::Drawing::Color::Transparent;
			this->ImportBazyWydarzenBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ImportBazyWydarzenBtn.Image")));
			this->ImportBazyWydarzenBtn->Location = System::Drawing::Point(46, 342);
			this->ImportBazyWydarzenBtn->Name = L"ImportBazyWydarzenBtn";
			this->ImportBazyWydarzenBtn->Size = System::Drawing::Size(149, 23);
			this->ImportBazyWydarzenBtn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->ImportBazyWydarzenBtn->TabIndex = 4;
			this->ImportBazyWydarzenBtn->TabStop = false;
			this->ImportBazyWydarzenBtn->Click += gcnew System::EventHandler(this, &OkienkoMain::ImportBazyBtn_Click);
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
			this->plusbuttonimg->Location = System::Drawing::Point(141, 654);
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
			this->plusboximg->Location = System::Drawing::Point(772, 465);
			this->plusboximg->Name = L"plusboximg";
			this->plusboximg->Size = System::Drawing::Size(323, 188);
			this->plusboximg->TabIndex = 10;
			this->plusboximg->Visible = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->newWydarzenie);
			this->panel1->Controls->Add(this->newZadanie);
			this->panel1->Location = System::Drawing::Point(3, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(317, 140);
			this->panel1->TabIndex = 0;
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
			// TerminarzBox
			// 
			this->TerminarzBox->BackColor = System::Drawing::Color::Transparent;
			this->TerminarzBox->Controls->Add(this->plusboximg);
			this->TerminarzBox->Controls->Add(this->PiatekBox);
			this->TerminarzBox->Controls->Add(this->CzwartekBox);
			this->TerminarzBox->Controls->Add(this->SrodaBox);
			this->TerminarzBox->Controls->Add(this->WtorekBox);
			this->TerminarzBox->Controls->Add(this->PoniedzialekBox);
			this->TerminarzBox->Location = System::Drawing::Point(244, 37);
			this->TerminarzBox->Name = L"TerminarzBox";
			this->TerminarzBox->Size = System::Drawing::Size(1119, 728);
			this->TerminarzBox->TabIndex = 0;
			this->TerminarzBox->Visible = false;
			// 
			// PiatekBox
			// 
			this->PiatekBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PiatekBox.BackgroundImage")));
			this->PiatekBox->Controls->Add(this->wydarzeniePt5);
			this->PiatekBox->Controls->Add(this->wydarzeniePt4);
			this->PiatekBox->Controls->Add(this->plusbuttonimg);
			this->PiatekBox->Controls->Add(this->wydarzeniePt3);
			this->PiatekBox->Controls->Add(this->wydarzeniePt1);
			this->PiatekBox->Controls->Add(this->wydarzeniePt2);
			this->PiatekBox->Location = System::Drawing::Point(893, 2);
			this->PiatekBox->Name = L"PiatekBox";
			this->PiatekBox->Size = System::Drawing::Size(215, 723);
			this->PiatekBox->TabIndex = 3;
			// 
			// wydarzeniePt5
			// 
			this->wydarzeniePt5->BackColor = System::Drawing::Color::Transparent;
			this->wydarzeniePt5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzeniePt5.BackgroundImage")));
			this->wydarzeniePt5->Controls->Add(this->button21);
			this->wydarzeniePt5->Controls->Add(this->label61);
			this->wydarzeniePt5->Controls->Add(this->label62);
			this->wydarzeniePt5->Controls->Add(this->label63);
			this->wydarzeniePt5->Location = System::Drawing::Point(3, 540);
			this->wydarzeniePt5->Name = L"wydarzeniePt5";
			this->wydarzeniePt5->Size = System::Drawing::Size(209, 112);
			this->wydarzeniePt5->TabIndex = 6;
			this->wydarzeniePt5->Visible = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Red;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Location = System::Drawing::Point(166, 68);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(22, 23);
			this->button21->TabIndex = 3;
			this->button21->UseVisualStyleBackColor = false;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label61->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label61->Location = System::Drawing::Point(18, 71);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(53, 13);
			this->label61->TabIndex = 2;
			this->label61->Text = L"Godzina";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label62->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label62->Location = System::Drawing::Point(18, 44);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(103, 13);
			this->label62->TabIndex = 1;
			this->label62->Text = L"Opis Wydarzenia";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label63->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label63->Location = System::Drawing::Point(17, 16);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(146, 16);
			this->label63->TabIndex = 0;
			this->label63->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzeniePt4
			// 
			this->wydarzeniePt4->BackColor = System::Drawing::Color::Transparent;
			this->wydarzeniePt4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzeniePt4.BackgroundImage")));
			this->wydarzeniePt4->Controls->Add(this->button22);
			this->wydarzeniePt4->Controls->Add(this->label64);
			this->wydarzeniePt4->Controls->Add(this->label65);
			this->wydarzeniePt4->Controls->Add(this->label66);
			this->wydarzeniePt4->Location = System::Drawing::Point(3, 422);
			this->wydarzeniePt4->Name = L"wydarzeniePt4";
			this->wydarzeniePt4->Size = System::Drawing::Size(209, 112);
			this->wydarzeniePt4->TabIndex = 7;
			this->wydarzeniePt4->Visible = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::Red;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Location = System::Drawing::Point(166, 68);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(22, 23);
			this->button22->TabIndex = 3;
			this->button22->UseVisualStyleBackColor = false;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label64->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label64->Location = System::Drawing::Point(18, 71);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(53, 13);
			this->label64->TabIndex = 2;
			this->label64->Text = L"Godzina";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label65->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label65->Location = System::Drawing::Point(18, 44);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(103, 13);
			this->label65->TabIndex = 1;
			this->label65->Text = L"Opis Wydarzenia";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label66->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label66->Location = System::Drawing::Point(17, 16);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(146, 16);
			this->label66->TabIndex = 0;
			this->label66->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzeniePt3
			// 
			this->wydarzeniePt3->BackColor = System::Drawing::Color::Transparent;
			this->wydarzeniePt3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzeniePt3.BackgroundImage")));
			this->wydarzeniePt3->Controls->Add(this->button23);
			this->wydarzeniePt3->Controls->Add(this->label67);
			this->wydarzeniePt3->Controls->Add(this->label68);
			this->wydarzeniePt3->Controls->Add(this->label69);
			this->wydarzeniePt3->Location = System::Drawing::Point(3, 304);
			this->wydarzeniePt3->Name = L"wydarzeniePt3";
			this->wydarzeniePt3->Size = System::Drawing::Size(209, 112);
			this->wydarzeniePt3->TabIndex = 8;
			this->wydarzeniePt3->Visible = false;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::Red;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Location = System::Drawing::Point(166, 68);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(22, 23);
			this->button23->TabIndex = 3;
			this->button23->UseVisualStyleBackColor = false;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label67->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label67->Location = System::Drawing::Point(18, 71);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(53, 13);
			this->label67->TabIndex = 2;
			this->label67->Text = L"Godzina";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label68->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label68->Location = System::Drawing::Point(18, 44);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(103, 13);
			this->label68->TabIndex = 1;
			this->label68->Text = L"Opis Wydarzenia";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label69->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label69->Location = System::Drawing::Point(17, 16);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(146, 16);
			this->label69->TabIndex = 0;
			this->label69->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzeniePt1
			// 
			this->wydarzeniePt1->BackColor = System::Drawing::Color::Transparent;
			this->wydarzeniePt1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzeniePt1.BackgroundImage")));
			this->wydarzeniePt1->Controls->Add(this->button25);
			this->wydarzeniePt1->Controls->Add(this->label73);
			this->wydarzeniePt1->Controls->Add(this->label74);
			this->wydarzeniePt1->Controls->Add(this->label75);
			this->wydarzeniePt1->Location = System::Drawing::Point(3, 68);
			this->wydarzeniePt1->Name = L"wydarzeniePt1";
			this->wydarzeniePt1->Size = System::Drawing::Size(209, 112);
			this->wydarzeniePt1->TabIndex = 5;
			this->wydarzeniePt1->Visible = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::Red;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Location = System::Drawing::Point(166, 68);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(22, 23);
			this->button25->TabIndex = 3;
			this->button25->UseVisualStyleBackColor = false;
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label73->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label73->Location = System::Drawing::Point(18, 71);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(53, 13);
			this->label73->TabIndex = 2;
			this->label73->Text = L"Godzina";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label74->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label74->Location = System::Drawing::Point(18, 44);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(103, 13);
			this->label74->TabIndex = 1;
			this->label74->Text = L"Opis Wydarzenia";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label75->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label75->Location = System::Drawing::Point(17, 16);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(146, 16);
			this->label75->TabIndex = 0;
			this->label75->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzeniePt2
			// 
			this->wydarzeniePt2->BackColor = System::Drawing::Color::Transparent;
			this->wydarzeniePt2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzeniePt2.BackgroundImage")));
			this->wydarzeniePt2->Controls->Add(this->button24);
			this->wydarzeniePt2->Controls->Add(this->label70);
			this->wydarzeniePt2->Controls->Add(this->label71);
			this->wydarzeniePt2->Controls->Add(this->label72);
			this->wydarzeniePt2->Location = System::Drawing::Point(3, 186);
			this->wydarzeniePt2->Name = L"wydarzeniePt2";
			this->wydarzeniePt2->Size = System::Drawing::Size(209, 112);
			this->wydarzeniePt2->TabIndex = 9;
			this->wydarzeniePt2->Visible = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::Red;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Location = System::Drawing::Point(166, 68);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(22, 23);
			this->button24->TabIndex = 3;
			this->button24->UseVisualStyleBackColor = false;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label70->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label70->Location = System::Drawing::Point(18, 71);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(53, 13);
			this->label70->TabIndex = 2;
			this->label70->Text = L"Godzina";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label71->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label71->Location = System::Drawing::Point(18, 44);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(103, 13);
			this->label71->TabIndex = 1;
			this->label71->Text = L"Opis Wydarzenia";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label72->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label72->Location = System::Drawing::Point(17, 16);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(146, 16);
			this->label72->TabIndex = 0;
			this->label72->Text = L"Nazwa Wydarzenia";
			// 
			// CzwartekBox
			// 
			this->CzwartekBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CzwartekBox.BackgroundImage")));
			this->CzwartekBox->Controls->Add(this->wydarzenieCzw5);
			this->CzwartekBox->Controls->Add(this->wydarzenieCzw1);
			this->CzwartekBox->Controls->Add(this->wydarzenieCzw4);
			this->CzwartekBox->Controls->Add(this->wydarzenieCzw2);
			this->CzwartekBox->Controls->Add(this->wydarzenieCzw3);
			this->CzwartekBox->Location = System::Drawing::Point(670, 2);
			this->CzwartekBox->Name = L"CzwartekBox";
			this->CzwartekBox->Size = System::Drawing::Size(215, 723);
			this->CzwartekBox->TabIndex = 3;
			// 
			// wydarzenieCzw5
			// 
			this->wydarzenieCzw5->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieCzw5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieCzw5.BackgroundImage")));
			this->wydarzenieCzw5->Controls->Add(this->button16);
			this->wydarzenieCzw5->Controls->Add(this->label46);
			this->wydarzenieCzw5->Controls->Add(this->label47);
			this->wydarzenieCzw5->Controls->Add(this->label48);
			this->wydarzenieCzw5->Location = System::Drawing::Point(3, 540);
			this->wydarzenieCzw5->Name = L"wydarzenieCzw5";
			this->wydarzenieCzw5->Size = System::Drawing::Size(209, 112);
			this->wydarzenieCzw5->TabIndex = 6;
			this->wydarzenieCzw5->Visible = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Red;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Location = System::Drawing::Point(166, 68);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(22, 23);
			this->button16->TabIndex = 3;
			this->button16->UseVisualStyleBackColor = false;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label46->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label46->Location = System::Drawing::Point(18, 71);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(53, 13);
			this->label46->TabIndex = 2;
			this->label46->Text = L"Godzina";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label47->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label47->Location = System::Drawing::Point(18, 44);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(103, 13);
			this->label47->TabIndex = 1;
			this->label47->Text = L"Opis Wydarzenia";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label48->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label48->Location = System::Drawing::Point(17, 16);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(146, 16);
			this->label48->TabIndex = 0;
			this->label48->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzenieCzw1
			// 
			this->wydarzenieCzw1->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieCzw1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieCzw1.BackgroundImage")));
			this->wydarzenieCzw1->Controls->Add(this->button20);
			this->wydarzenieCzw1->Controls->Add(this->label58);
			this->wydarzenieCzw1->Controls->Add(this->label59);
			this->wydarzenieCzw1->Controls->Add(this->label60);
			this->wydarzenieCzw1->Location = System::Drawing::Point(3, 68);
			this->wydarzenieCzw1->Name = L"wydarzenieCzw1";
			this->wydarzenieCzw1->Size = System::Drawing::Size(209, 112);
			this->wydarzenieCzw1->TabIndex = 5;
			this->wydarzenieCzw1->Visible = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Red;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(166, 68);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(22, 23);
			this->button20->TabIndex = 3;
			this->button20->UseVisualStyleBackColor = false;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label58->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label58->Location = System::Drawing::Point(18, 71);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(53, 13);
			this->label58->TabIndex = 2;
			this->label58->Text = L"Godzina";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label59->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label59->Location = System::Drawing::Point(18, 44);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(103, 13);
			this->label59->TabIndex = 1;
			this->label59->Text = L"Opis Wydarzenia";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label60->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label60->Location = System::Drawing::Point(17, 16);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(146, 16);
			this->label60->TabIndex = 0;
			this->label60->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzenieCzw4
			// 
			this->wydarzenieCzw4->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieCzw4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieCzw4.BackgroundImage")));
			this->wydarzenieCzw4->Controls->Add(this->button17);
			this->wydarzenieCzw4->Controls->Add(this->label49);
			this->wydarzenieCzw4->Controls->Add(this->label50);
			this->wydarzenieCzw4->Controls->Add(this->label51);
			this->wydarzenieCzw4->Location = System::Drawing::Point(3, 422);
			this->wydarzenieCzw4->Name = L"wydarzenieCzw4";
			this->wydarzenieCzw4->Size = System::Drawing::Size(209, 112);
			this->wydarzenieCzw4->TabIndex = 7;
			this->wydarzenieCzw4->Visible = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Red;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(166, 68);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(22, 23);
			this->button17->TabIndex = 3;
			this->button17->UseVisualStyleBackColor = false;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label49->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label49->Location = System::Drawing::Point(18, 71);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(53, 13);
			this->label49->TabIndex = 2;
			this->label49->Text = L"Godzina";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label50->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label50->Location = System::Drawing::Point(18, 44);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(103, 13);
			this->label50->TabIndex = 1;
			this->label50->Text = L"Opis Wydarzenia";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label51->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label51->Location = System::Drawing::Point(17, 16);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(146, 16);
			this->label51->TabIndex = 0;
			this->label51->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzenieCzw2
			// 
			this->wydarzenieCzw2->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieCzw2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieCzw2.BackgroundImage")));
			this->wydarzenieCzw2->Controls->Add(this->button19);
			this->wydarzenieCzw2->Controls->Add(this->label55);
			this->wydarzenieCzw2->Controls->Add(this->label56);
			this->wydarzenieCzw2->Controls->Add(this->label57);
			this->wydarzenieCzw2->Location = System::Drawing::Point(3, 186);
			this->wydarzenieCzw2->Name = L"wydarzenieCzw2";
			this->wydarzenieCzw2->Size = System::Drawing::Size(209, 112);
			this->wydarzenieCzw2->TabIndex = 9;
			this->wydarzenieCzw2->Visible = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Red;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(166, 68);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(22, 23);
			this->button19->TabIndex = 3;
			this->button19->UseVisualStyleBackColor = false;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label55->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label55->Location = System::Drawing::Point(18, 71);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(53, 13);
			this->label55->TabIndex = 2;
			this->label55->Text = L"Godzina";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label56->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label56->Location = System::Drawing::Point(18, 44);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(103, 13);
			this->label56->TabIndex = 1;
			this->label56->Text = L"Opis Wydarzenia";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label57->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label57->Location = System::Drawing::Point(17, 16);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(146, 16);
			this->label57->TabIndex = 0;
			this->label57->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzenieCzw3
			// 
			this->wydarzenieCzw3->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieCzw3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieCzw3.BackgroundImage")));
			this->wydarzenieCzw3->Controls->Add(this->button18);
			this->wydarzenieCzw3->Controls->Add(this->label52);
			this->wydarzenieCzw3->Controls->Add(this->label53);
			this->wydarzenieCzw3->Controls->Add(this->label54);
			this->wydarzenieCzw3->Location = System::Drawing::Point(3, 304);
			this->wydarzenieCzw3->Name = L"wydarzenieCzw3";
			this->wydarzenieCzw3->Size = System::Drawing::Size(209, 112);
			this->wydarzenieCzw3->TabIndex = 8;
			this->wydarzenieCzw3->Visible = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Red;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(166, 68);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(22, 23);
			this->button18->TabIndex = 3;
			this->button18->UseVisualStyleBackColor = false;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label52->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label52->Location = System::Drawing::Point(18, 71);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(53, 13);
			this->label52->TabIndex = 2;
			this->label52->Text = L"Godzina";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label53->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label53->Location = System::Drawing::Point(18, 44);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(103, 13);
			this->label53->TabIndex = 1;
			this->label53->Text = L"Opis Wydarzenia";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label54->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label54->Location = System::Drawing::Point(17, 16);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(146, 16);
			this->label54->TabIndex = 0;
			this->label54->Text = L"Nazwa Wydarzenia";
			// 
			// SrodaBox
			// 
			this->SrodaBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SrodaBox.BackgroundImage")));
			this->SrodaBox->Controls->Add(this->wydarzenieSr5);
			this->SrodaBox->Controls->Add(this->wydarzenieSr1);
			this->SrodaBox->Controls->Add(this->wydarzenieSr4);
			this->SrodaBox->Controls->Add(this->wydarzenieSr2);
			this->SrodaBox->Controls->Add(this->wydarzenieSr3);
			this->SrodaBox->Location = System::Drawing::Point(448, 2);
			this->SrodaBox->Name = L"SrodaBox";
			this->SrodaBox->Size = System::Drawing::Size(215, 723);
			this->SrodaBox->TabIndex = 3;
			// 
			// wydarzenieSr5
			// 
			this->wydarzenieSr5->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieSr5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieSr5.BackgroundImage")));
			this->wydarzenieSr5->Controls->Add(this->button11);
			this->wydarzenieSr5->Controls->Add(this->label31);
			this->wydarzenieSr5->Controls->Add(this->label32);
			this->wydarzenieSr5->Controls->Add(this->label33);
			this->wydarzenieSr5->Location = System::Drawing::Point(3, 540);
			this->wydarzenieSr5->Name = L"wydarzenieSr5";
			this->wydarzenieSr5->Size = System::Drawing::Size(209, 112);
			this->wydarzenieSr5->TabIndex = 6;
			this->wydarzenieSr5->Visible = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Red;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(166, 68);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(22, 23);
			this->button11->TabIndex = 3;
			this->button11->UseVisualStyleBackColor = false;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label31->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label31->Location = System::Drawing::Point(18, 71);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(53, 13);
			this->label31->TabIndex = 2;
			this->label31->Text = L"Godzina";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label32->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label32->Location = System::Drawing::Point(18, 44);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(103, 13);
			this->label32->TabIndex = 1;
			this->label32->Text = L"Opis Wydarzenia";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label33->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label33->Location = System::Drawing::Point(17, 16);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(146, 16);
			this->label33->TabIndex = 0;
			this->label33->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzenieSr1
			// 
			this->wydarzenieSr1->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieSr1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieSr1.BackgroundImage")));
			this->wydarzenieSr1->Controls->Add(this->button15);
			this->wydarzenieSr1->Controls->Add(this->label43);
			this->wydarzenieSr1->Controls->Add(this->label44);
			this->wydarzenieSr1->Controls->Add(this->label45);
			this->wydarzenieSr1->Location = System::Drawing::Point(3, 68);
			this->wydarzenieSr1->Name = L"wydarzenieSr1";
			this->wydarzenieSr1->Size = System::Drawing::Size(209, 112);
			this->wydarzenieSr1->TabIndex = 5;
			this->wydarzenieSr1->Visible = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Red;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(166, 68);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(22, 23);
			this->button15->TabIndex = 3;
			this->button15->UseVisualStyleBackColor = false;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label43->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label43->Location = System::Drawing::Point(18, 71);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(53, 13);
			this->label43->TabIndex = 2;
			this->label43->Text = L"Godzina";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label44->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label44->Location = System::Drawing::Point(18, 44);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(103, 13);
			this->label44->TabIndex = 1;
			this->label44->Text = L"Opis Wydarzenia";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label45->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label45->Location = System::Drawing::Point(17, 16);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(146, 16);
			this->label45->TabIndex = 0;
			this->label45->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzenieSr4
			// 
			this->wydarzenieSr4->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieSr4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieSr4.BackgroundImage")));
			this->wydarzenieSr4->Controls->Add(this->button12);
			this->wydarzenieSr4->Controls->Add(this->label34);
			this->wydarzenieSr4->Controls->Add(this->label35);
			this->wydarzenieSr4->Controls->Add(this->label36);
			this->wydarzenieSr4->Location = System::Drawing::Point(3, 422);
			this->wydarzenieSr4->Name = L"wydarzenieSr4";
			this->wydarzenieSr4->Size = System::Drawing::Size(209, 112);
			this->wydarzenieSr4->TabIndex = 7;
			this->wydarzenieSr4->Visible = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Red;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(166, 68);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(22, 23);
			this->button12->TabIndex = 3;
			this->button12->UseVisualStyleBackColor = false;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label34->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label34->Location = System::Drawing::Point(18, 71);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(53, 13);
			this->label34->TabIndex = 2;
			this->label34->Text = L"Godzina";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label35->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label35->Location = System::Drawing::Point(18, 44);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(103, 13);
			this->label35->TabIndex = 1;
			this->label35->Text = L"Opis Wydarzenia";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label36->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label36->Location = System::Drawing::Point(17, 16);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(146, 16);
			this->label36->TabIndex = 0;
			this->label36->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzenieSr2
			// 
			this->wydarzenieSr2->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieSr2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieSr2.BackgroundImage")));
			this->wydarzenieSr2->Controls->Add(this->button14);
			this->wydarzenieSr2->Controls->Add(this->label40);
			this->wydarzenieSr2->Controls->Add(this->label41);
			this->wydarzenieSr2->Controls->Add(this->label42);
			this->wydarzenieSr2->Location = System::Drawing::Point(3, 186);
			this->wydarzenieSr2->Name = L"wydarzenieSr2";
			this->wydarzenieSr2->Size = System::Drawing::Size(209, 112);
			this->wydarzenieSr2->TabIndex = 9;
			this->wydarzenieSr2->Visible = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Red;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(166, 68);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(22, 23);
			this->button14->TabIndex = 3;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label40->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label40->Location = System::Drawing::Point(18, 71);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(53, 13);
			this->label40->TabIndex = 2;
			this->label40->Text = L"Godzina";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label41->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label41->Location = System::Drawing::Point(18, 44);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(103, 13);
			this->label41->TabIndex = 1;
			this->label41->Text = L"Opis Wydarzenia";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label42->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label42->Location = System::Drawing::Point(17, 16);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(146, 16);
			this->label42->TabIndex = 0;
			this->label42->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzenieSr3
			// 
			this->wydarzenieSr3->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieSr3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieSr3.BackgroundImage")));
			this->wydarzenieSr3->Controls->Add(this->button13);
			this->wydarzenieSr3->Controls->Add(this->label37);
			this->wydarzenieSr3->Controls->Add(this->label38);
			this->wydarzenieSr3->Controls->Add(this->label39);
			this->wydarzenieSr3->Location = System::Drawing::Point(3, 304);
			this->wydarzenieSr3->Name = L"wydarzenieSr3";
			this->wydarzenieSr3->Size = System::Drawing::Size(209, 112);
			this->wydarzenieSr3->TabIndex = 8;
			this->wydarzenieSr3->Visible = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Red;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(166, 68);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(22, 23);
			this->button13->TabIndex = 3;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label37->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label37->Location = System::Drawing::Point(18, 71);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(53, 13);
			this->label37->TabIndex = 2;
			this->label37->Text = L"Godzina";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label38->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label38->Location = System::Drawing::Point(18, 44);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(103, 13);
			this->label38->TabIndex = 1;
			this->label38->Text = L"Opis Wydarzenia";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label39->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label39->Location = System::Drawing::Point(17, 16);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(146, 16);
			this->label39->TabIndex = 0;
			this->label39->Text = L"Nazwa Wydarzenia";
			// 
			// WtorekBox
			// 
			this->WtorekBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"WtorekBox.BackgroundImage")));
			this->WtorekBox->Controls->Add(this->wydarzenieWt5);
			this->WtorekBox->Controls->Add(this->wydarzenieWt1);
			this->WtorekBox->Controls->Add(this->wydarzenieWt4);
			this->WtorekBox->Controls->Add(this->wydarzenieWt2);
			this->WtorekBox->Controls->Add(this->wydarzenieWt3);
			this->WtorekBox->Location = System::Drawing::Point(225, 2);
			this->WtorekBox->Name = L"WtorekBox";
			this->WtorekBox->Size = System::Drawing::Size(215, 723);
			this->WtorekBox->TabIndex = 3;
			// 
			// wydarzenieWt5
			// 
			this->wydarzenieWt5->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieWt5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieWt5.BackgroundImage")));
			this->wydarzenieWt5->Controls->Add(this->button6);
			this->wydarzenieWt5->Controls->Add(this->label16);
			this->wydarzenieWt5->Controls->Add(this->label17);
			this->wydarzenieWt5->Controls->Add(this->label18);
			this->wydarzenieWt5->Location = System::Drawing::Point(3, 540);
			this->wydarzenieWt5->Name = L"wydarzenieWt5";
			this->wydarzenieWt5->Size = System::Drawing::Size(209, 112);
			this->wydarzenieWt5->TabIndex = 6;
			this->wydarzenieWt5->Visible = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Red;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(166, 68);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(22, 23);
			this->button6->TabIndex = 3;
			this->button6->UseVisualStyleBackColor = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label16->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label16->Location = System::Drawing::Point(18, 71);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(53, 13);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Godzina";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label17->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label17->Location = System::Drawing::Point(18, 44);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(103, 13);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Opis Wydarzenia";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label18->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label18->Location = System::Drawing::Point(17, 16);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(146, 16);
			this->label18->TabIndex = 0;
			this->label18->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzenieWt1
			// 
			this->wydarzenieWt1->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieWt1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieWt1.BackgroundImage")));
			this->wydarzenieWt1->Controls->Add(this->button10);
			this->wydarzenieWt1->Controls->Add(this->label28);
			this->wydarzenieWt1->Controls->Add(this->label29);
			this->wydarzenieWt1->Controls->Add(this->label30);
			this->wydarzenieWt1->Location = System::Drawing::Point(3, 68);
			this->wydarzenieWt1->Name = L"wydarzenieWt1";
			this->wydarzenieWt1->Size = System::Drawing::Size(209, 112);
			this->wydarzenieWt1->TabIndex = 5;
			this->wydarzenieWt1->Visible = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Red;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Location = System::Drawing::Point(166, 68);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(22, 23);
			this->button10->TabIndex = 3;
			this->button10->UseVisualStyleBackColor = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label28->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label28->Location = System::Drawing::Point(18, 71);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(53, 13);
			this->label28->TabIndex = 2;
			this->label28->Text = L"Godzina";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label29->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label29->Location = System::Drawing::Point(18, 44);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(103, 13);
			this->label29->TabIndex = 1;
			this->label29->Text = L"Opis Wydarzenia";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label30->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label30->Location = System::Drawing::Point(17, 16);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(146, 16);
			this->label30->TabIndex = 0;
			this->label30->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzenieWt4
			// 
			this->wydarzenieWt4->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieWt4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieWt4.BackgroundImage")));
			this->wydarzenieWt4->Controls->Add(this->button7);
			this->wydarzenieWt4->Controls->Add(this->label19);
			this->wydarzenieWt4->Controls->Add(this->label20);
			this->wydarzenieWt4->Controls->Add(this->label21);
			this->wydarzenieWt4->Location = System::Drawing::Point(3, 422);
			this->wydarzenieWt4->Name = L"wydarzenieWt4";
			this->wydarzenieWt4->Size = System::Drawing::Size(209, 112);
			this->wydarzenieWt4->TabIndex = 7;
			this->wydarzenieWt4->Visible = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Red;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(166, 68);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(22, 23);
			this->button7->TabIndex = 3;
			this->button7->UseVisualStyleBackColor = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label19->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label19->Location = System::Drawing::Point(18, 71);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(53, 13);
			this->label19->TabIndex = 2;
			this->label19->Text = L"Godzina";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label20->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label20->Location = System::Drawing::Point(18, 44);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(103, 13);
			this->label20->TabIndex = 1;
			this->label20->Text = L"Opis Wydarzenia";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label21->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label21->Location = System::Drawing::Point(17, 16);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(146, 16);
			this->label21->TabIndex = 0;
			this->label21->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzenieWt2
			// 
			this->wydarzenieWt2->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieWt2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieWt2.BackgroundImage")));
			this->wydarzenieWt2->Controls->Add(this->button9);
			this->wydarzenieWt2->Controls->Add(this->label25);
			this->wydarzenieWt2->Controls->Add(this->label26);
			this->wydarzenieWt2->Controls->Add(this->label27);
			this->wydarzenieWt2->Location = System::Drawing::Point(3, 186);
			this->wydarzenieWt2->Name = L"wydarzenieWt2";
			this->wydarzenieWt2->Size = System::Drawing::Size(209, 112);
			this->wydarzenieWt2->TabIndex = 9;
			this->wydarzenieWt2->Visible = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Red;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(166, 68);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(22, 23);
			this->button9->TabIndex = 3;
			this->button9->UseVisualStyleBackColor = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label25->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label25->Location = System::Drawing::Point(18, 71);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(53, 13);
			this->label25->TabIndex = 2;
			this->label25->Text = L"Godzina";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label26->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label26->Location = System::Drawing::Point(18, 44);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(103, 13);
			this->label26->TabIndex = 1;
			this->label26->Text = L"Opis Wydarzenia";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label27->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label27->Location = System::Drawing::Point(17, 16);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(146, 16);
			this->label27->TabIndex = 0;
			this->label27->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzenieWt3
			// 
			this->wydarzenieWt3->BackColor = System::Drawing::Color::Transparent;
			this->wydarzenieWt3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzenieWt3.BackgroundImage")));
			this->wydarzenieWt3->Controls->Add(this->button8);
			this->wydarzenieWt3->Controls->Add(this->label22);
			this->wydarzenieWt3->Controls->Add(this->label23);
			this->wydarzenieWt3->Controls->Add(this->label24);
			this->wydarzenieWt3->Location = System::Drawing::Point(3, 304);
			this->wydarzenieWt3->Name = L"wydarzenieWt3";
			this->wydarzenieWt3->Size = System::Drawing::Size(209, 112);
			this->wydarzenieWt3->TabIndex = 8;
			this->wydarzenieWt3->Visible = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Red;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(166, 68);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(22, 23);
			this->button8->TabIndex = 3;
			this->button8->UseVisualStyleBackColor = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label22->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label22->Location = System::Drawing::Point(18, 71);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(53, 13);
			this->label22->TabIndex = 2;
			this->label22->Text = L"Godzina";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label23->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label23->Location = System::Drawing::Point(18, 44);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(103, 13);
			this->label23->TabIndex = 1;
			this->label23->Text = L"Opis Wydarzenia";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label24->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label24->Location = System::Drawing::Point(17, 16);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(146, 16);
			this->label24->TabIndex = 0;
			this->label24->Text = L"Nazwa Wydarzenia";
			// 
			// PoniedzialekBox
			// 
			this->PoniedzialekBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PoniedzialekBox.BackgroundImage")));
			this->PoniedzialekBox->Controls->Add(this->wydarzeniePon5);
			this->PoniedzialekBox->Controls->Add(this->wydarzeniePon4);
			this->PoniedzialekBox->Controls->Add(this->wydarzeniePon3);
			this->PoniedzialekBox->Controls->Add(this->wydarzeniePon2);
			this->PoniedzialekBox->Controls->Add(this->wydarzeniePon1);
			this->PoniedzialekBox->Location = System::Drawing::Point(2, 3);
			this->PoniedzialekBox->Name = L"PoniedzialekBox";
			this->PoniedzialekBox->Size = System::Drawing::Size(215, 723);
			this->PoniedzialekBox->TabIndex = 3;
			// 
			// wydarzeniePon5
			// 
			this->wydarzeniePon5->BackColor = System::Drawing::Color::Transparent;
			this->wydarzeniePon5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzeniePon5.BackgroundImage")));
			this->wydarzeniePon5->Controls->Add(this->button5);
			this->wydarzeniePon5->Controls->Add(this->label13);
			this->wydarzeniePon5->Controls->Add(this->label14);
			this->wydarzeniePon5->Controls->Add(this->label15);
			this->wydarzeniePon5->Location = System::Drawing::Point(3, 539);
			this->wydarzeniePon5->Name = L"wydarzeniePon5";
			this->wydarzeniePon5->Size = System::Drawing::Size(209, 112);
			this->wydarzeniePon5->TabIndex = 4;
			this->wydarzeniePon5->Visible = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(166, 68);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(22, 23);
			this->button5->TabIndex = 3;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label13->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label13->Location = System::Drawing::Point(18, 71);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Godzina";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label14->Location = System::Drawing::Point(18, 44);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(103, 13);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Opis Wydarzenia";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label15->Location = System::Drawing::Point(17, 16);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(146, 16);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzeniePon4
			// 
			this->wydarzeniePon4->BackColor = System::Drawing::Color::Transparent;
			this->wydarzeniePon4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzeniePon4.BackgroundImage")));
			this->wydarzeniePon4->Controls->Add(this->button4);
			this->wydarzeniePon4->Controls->Add(this->label10);
			this->wydarzeniePon4->Controls->Add(this->label11);
			this->wydarzeniePon4->Controls->Add(this->label12);
			this->wydarzeniePon4->Location = System::Drawing::Point(3, 421);
			this->wydarzeniePon4->Name = L"wydarzeniePon4";
			this->wydarzeniePon4->Size = System::Drawing::Size(209, 112);
			this->wydarzeniePon4->TabIndex = 4;
			this->wydarzeniePon4->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(166, 68);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(22, 23);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label10->Location = System::Drawing::Point(18, 71);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 13);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Godzina";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label11->Location = System::Drawing::Point(18, 44);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(103, 13);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Opis Wydarzenia";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label12->Location = System::Drawing::Point(17, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(146, 16);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzeniePon3
			// 
			this->wydarzeniePon3->BackColor = System::Drawing::Color::Transparent;
			this->wydarzeniePon3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzeniePon3.BackgroundImage")));
			this->wydarzeniePon3->Controls->Add(this->button3);
			this->wydarzeniePon3->Controls->Add(this->label7);
			this->wydarzeniePon3->Controls->Add(this->label8);
			this->wydarzeniePon3->Controls->Add(this->label9);
			this->wydarzeniePon3->Location = System::Drawing::Point(3, 303);
			this->wydarzeniePon3->Name = L"wydarzeniePon3";
			this->wydarzeniePon3->Size = System::Drawing::Size(209, 112);
			this->wydarzeniePon3->TabIndex = 4;
			this->wydarzeniePon3->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(166, 68);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(22, 23);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Location = System::Drawing::Point(18, 71);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Godzina";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Location = System::Drawing::Point(18, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Opis Wydarzenia";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label9->Location = System::Drawing::Point(17, 16);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(146, 16);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzeniePon2
			// 
			this->wydarzeniePon2->BackColor = System::Drawing::Color::Transparent;
			this->wydarzeniePon2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzeniePon2.BackgroundImage")));
			this->wydarzeniePon2->Controls->Add(this->button2);
			this->wydarzeniePon2->Controls->Add(this->label4);
			this->wydarzeniePon2->Controls->Add(this->label5);
			this->wydarzeniePon2->Controls->Add(this->label6);
			this->wydarzeniePon2->Location = System::Drawing::Point(3, 185);
			this->wydarzeniePon2->Name = L"wydarzeniePon2";
			this->wydarzeniePon2->Size = System::Drawing::Size(209, 112);
			this->wydarzeniePon2->TabIndex = 4;
			this->wydarzeniePon2->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(166, 68);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(22, 23);
			this->button2->TabIndex = 3;
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Location = System::Drawing::Point(18, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Godzina";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Location = System::Drawing::Point(18, 44);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Opis Wydarzenia";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Location = System::Drawing::Point(17, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(146, 16);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Nazwa Wydarzenia";
			// 
			// wydarzeniePon1
			// 
			this->wydarzeniePon1->BackColor = System::Drawing::Color::Transparent;
			this->wydarzeniePon1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"wydarzeniePon1.BackgroundImage")));
			this->wydarzeniePon1->Controls->Add(this->button1);
			this->wydarzeniePon1->Controls->Add(this->label3);
			this->wydarzeniePon1->Controls->Add(this->label2);
			this->wydarzeniePon1->Controls->Add(this->TytulPon1);
			this->wydarzeniePon1->Location = System::Drawing::Point(3, 67);
			this->wydarzeniePon1->Name = L"wydarzeniePon1";
			this->wydarzeniePon1->Size = System::Drawing::Size(209, 112);
			this->wydarzeniePon1->TabIndex = 0;
			this->wydarzeniePon1->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(166, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(22, 23);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Location = System::Drawing::Point(18, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Godzina";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Location = System::Drawing::Point(18, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Opis Wydarzenia";
			// 
			// TytulPon1
			// 
			this->TytulPon1->AutoSize = true;
			this->TytulPon1->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->TytulPon1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->TytulPon1->Location = System::Drawing::Point(17, 16);
			this->TytulPon1->Name = L"TytulPon1";
			this->TytulPon1->Size = System::Drawing::Size(146, 16);
			this->TytulPon1->TabIndex = 0;
			this->TytulPon1->Text = L"Nazwa Wydarzenia";
			// 
			// ListazadanBox
			// 
			this->ListazadanBox->BackColor = System::Drawing::Color::Transparent;
			this->ListazadanBox->Controls->Add(this->label1);
			this->ListazadanBox->Location = System::Drawing::Point(244, 33);
			this->ListazadanBox->Name = L"ListazadanBox";
			this->ListazadanBox->Size = System::Drawing::Size(1116, 730);
			this->ListazadanBox->TabIndex = 2;
			this->ListazadanBox->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Unispace", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Location = System::Drawing::Point(417, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(274, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Oto twoja lista zadañ:";
			// 
			// OkienkoMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1366, 768);
			this->Controls->Add(this->ListazadanBox);
			this->Controls->Add(this->TerminarzBox);
			this->Controls->Add(this->belkabox);
			this->Controls->Add(this->leftsidebar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"OkienkoMain";
			this->Text = L"OrganiseIt";
			this->Load += gcnew System::EventHandler(this, &OkienkoMain::OkienkoMain_Load);
			this->leftsidebar->ResumeLayout(false);
			this->leftsidebar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->refresh_panels))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->oAutorachButton))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ExportBazyZadanBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ExportBazyWydarzenBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exportujimg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImportBazyZadanBtn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->importujimg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->listazadan_btn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->terminarz_btn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ImportBazyWydarzenBtn))->EndInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newWydarzenie))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->newZadanie))->EndInit();
			this->TerminarzBox->ResumeLayout(false);
			this->PiatekBox->ResumeLayout(false);
			this->wydarzeniePt5->ResumeLayout(false);
			this->wydarzeniePt5->PerformLayout();
			this->wydarzeniePt4->ResumeLayout(false);
			this->wydarzeniePt4->PerformLayout();
			this->wydarzeniePt3->ResumeLayout(false);
			this->wydarzeniePt3->PerformLayout();
			this->wydarzeniePt1->ResumeLayout(false);
			this->wydarzeniePt1->PerformLayout();
			this->wydarzeniePt2->ResumeLayout(false);
			this->wydarzeniePt2->PerformLayout();
			this->CzwartekBox->ResumeLayout(false);
			this->wydarzenieCzw5->ResumeLayout(false);
			this->wydarzenieCzw5->PerformLayout();
			this->wydarzenieCzw1->ResumeLayout(false);
			this->wydarzenieCzw1->PerformLayout();
			this->wydarzenieCzw4->ResumeLayout(false);
			this->wydarzenieCzw4->PerformLayout();
			this->wydarzenieCzw2->ResumeLayout(false);
			this->wydarzenieCzw2->PerformLayout();
			this->wydarzenieCzw3->ResumeLayout(false);
			this->wydarzenieCzw3->PerformLayout();
			this->SrodaBox->ResumeLayout(false);
			this->wydarzenieSr5->ResumeLayout(false);
			this->wydarzenieSr5->PerformLayout();
			this->wydarzenieSr1->ResumeLayout(false);
			this->wydarzenieSr1->PerformLayout();
			this->wydarzenieSr4->ResumeLayout(false);
			this->wydarzenieSr4->PerformLayout();
			this->wydarzenieSr2->ResumeLayout(false);
			this->wydarzenieSr2->PerformLayout();
			this->wydarzenieSr3->ResumeLayout(false);
			this->wydarzenieSr3->PerformLayout();
			this->WtorekBox->ResumeLayout(false);
			this->wydarzenieWt5->ResumeLayout(false);
			this->wydarzenieWt5->PerformLayout();
			this->wydarzenieWt1->ResumeLayout(false);
			this->wydarzenieWt1->PerformLayout();
			this->wydarzenieWt4->ResumeLayout(false);
			this->wydarzenieWt4->PerformLayout();
			this->wydarzenieWt2->ResumeLayout(false);
			this->wydarzenieWt2->PerformLayout();
			this->wydarzenieWt3->ResumeLayout(false);
			this->wydarzenieWt3->PerformLayout();
			this->PoniedzialekBox->ResumeLayout(false);
			this->wydarzeniePon5->ResumeLayout(false);
			this->wydarzeniePon5->PerformLayout();
			this->wydarzeniePon4->ResumeLayout(false);
			this->wydarzeniePon4->PerformLayout();
			this->wydarzeniePon3->ResumeLayout(false);
			this->wydarzeniePon3->PerformLayout();
			this->wydarzeniePon2->ResumeLayout(false);
			this->wydarzeniePon2->PerformLayout();
			this->wydarzeniePon1->ResumeLayout(false);
			this->wydarzeniePon1->PerformLayout();
			this->ListazadanBox->ResumeLayout(false);
			this->ListazadanBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: System::Void OkienkoMain_Load(System::Object^  sender, System::EventArgs^  e) {
		ImportbazywydTEMP(); 
		Aktualizacja_Paneli();
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
				zapisbazyWydtemp();
			}

			
			//wczytywanie z pliku po oknie
			public: System::Void Importzpliku() {
				Console::Write("\n#ORGANISEIT | Rozpoczynam wczytywanie bazy ze wskazanego pliku\n");
				numerwyd = 0;
				IO::Stream^ myStream;
				OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
				String^ wiersz;
				openFileDialog1->InitialDirectory = "c:\\";
				openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				openFileDialog1->FilterIndex = 2;
				openFileDialog1->RestoreDirectory = true;
				if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {

					if ((myStream = openFileDialog1->OpenFile()) != nullptr) {
						IO::StreamReader^ plik = gcnew IO::StreamReader(myStream, System::Text::Encoding::Default);
						while ((wiersz = plik->ReadLine()) != nullptr) {
							//wiersz = plik->ReadLine();
							Console::Write(wiersz + "\n");

							switch (nr_linii % 6) {
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
							case 5: {
								wyd_godzina[numerwyd] = wiersz;
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

					//pêtla debuguj¹ca import z pliku
					for (int i = 0; i <= numerwyd - 1; i++)
					{
						Console::Write("\nWYD ID: " + wyd_id[i] + "\nWYD_NAZWA: " +
							wyd_nazwa[i] + "\nWYD_OPIS: " +
							wyd_opis[i] + "\nWYD_DZIEN: " +
							wyd_dzien[i] + "\nWYD_GODZINA: " +
							wyd_godzina[i] + "\nWYD_ETYKIETA: " +
							wyd_etykieta[i] + "\n");
					}


				}
				Console::Write("\n#ORGANISEIT | Zakoñczono wczytywanie bazy ze wskazanego pliku\n");
				
			}
					//wczytywanie z pliku po oknie
			public: System::Void ImportbazywydTEMP() {
				Console::Write("\n#ORGANISEIT | Rozpoczynam wczytywanie pliku z bazy podrêcznej\n");

				System::String^ nazwapliku = "EventDB_tmp";
				String^ wiersz;
				numerwyd = 0;
						IO::StreamReader^ plik = gcnew IO::StreamReader(nazwapliku, System::Text::Encoding::Default);
						while ((wiersz = plik->ReadLine()) != nullptr) {
							Console::Write(wiersz + "\n");

							switch (nr_linii % 6) {
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
							case 5: {
								wyd_godzina[numerwyd] = wiersz;
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
						plik->Close();
						Console::Write("\n#ORGANISEIT | Zakoñczono wczytywanie pliku z bazy podrêcznej\n");

			}

			public: System::Void Zapisdopliku() {
				Console::Write("\n#ORGANISEIT | Rozpoczynam zapis do wskazanego pliku\n");
				IO::Stream^ myStream;
				SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
				String^ wiersz;
				saveFileDialog1->InitialDirectory = "c:\\";
				saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
				saveFileDialog1->FilterIndex = 2;
				saveFileDialog1->RestoreDirectory = true;
				if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {

					if ((myStream = saveFileDialog1->OpenFile()) != nullptr) {
						IO::StreamWriter^ plik = gcnew IO::StreamWriter(myStream);
						for (int i=0;i<=numerwyd;i++){
							plik->WriteLine(wyd_id[i]);
							plik->WriteLine(wyd_nazwa[i]);
							plik->WriteLine(wyd_opis[i]);
							plik->WriteLine(wyd_dzien[i]);
							plik->WriteLine(wyd_godzina[i]); 
							plik->WriteLine(wyd_etykieta[i]);

						
						}//petla czytaj¹ca plik
						plik->Close();

					}//if okna otwieraj¹cego plik
					myStream->Close();

				}
				Console::Write("\n#ORGANISEIT | Zakoñczono zapis do wskazanego pliku: " + myStream);
			}


		public: System::Void zapisbazyWydtemp() {
			Console::Write("\n#ORGANISEIT | Rozpoczynam zapis pliku do bazy podrêcznej\n");
			System::String^ nazwapliku = "EventDB_tmp";
			IO::StreamWriter^ plik = gcnew IO::StreamWriter(nazwapliku, false);
			for (int i = 0; i <= numerwyd-1; i++) {
				plik->WriteLine(wyd_id[i]);
				plik->WriteLine(wyd_nazwa[i]);
				plik->WriteLine(wyd_opis[i]);
				plik->WriteLine(wyd_dzien[i]);
				plik->WriteLine(wyd_godzina[i]);
				plik->WriteLine(wyd_etykieta[i]);
			}//petla czytaj¹ca plik
			plik->Close();
			Console::Write("\n#ORGANISEIT | Zakoñczono zapis pliku do bazy podrêcznej\n");
		}


			//import bazy danych
			public: System::Void ImportBazyBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				Importzpliku();
				zapisbazyWydtemp();
			}

			//dynamicznie tworzone okno oAutorze
			private: System::Void oAutorachButton_Click(System::Object^  sender, System::EventArgs^  e) {
				NowyEventForm^ oAutorach = gcnew NowyEventForm;
				oAutorach->Show();
				oAutorach->BackgroundImage;
				oAutorach->dodajBtn->Visible = false;
				oAutorach->anulujBtn->Visible = false;
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OkienkoMain::typeid));
				oAutorach->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				oAutorach->nazwaEvent->Visible = false;
				oAutorach->opisEvent->Visible = false;
				oAutorach->poniedzialekbtn->Visible = false;
				oAutorach->wtorekbtn->Visible = false;
				oAutorach->srodabtn->Visible = false;
				oAutorach->czwartekbtn->Visible = false;
				oAutorach->piatekbtn->Visible = false;
				oAutorach->godzinabtn->Visible = false;
				oAutorach->etykietabtn->Visible = false; 
				oAutorach->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"belkanapis.Image")));
			}

			//export wydarzen do pliku
			private: System::Void ExportBazyWydarzenBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				Zapisdopliku();
				zapisbazyWydtemp();
			}
			
					 
					 
		    //testowe towrzenie paneli
			private: System::Void ExportBazyZadanBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		
			}

		//widocznoœc paneli Terminarz i lista zadañ
		public: bool czyTerminarzBoxVisible = false;
				bool czyListazadanBoxVisible = false;
		private: System::Void terminarz_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			if (!czyTerminarzBoxVisible && !czyListazadanBoxVisible) {
				TerminarzBox->Visible = true;
				czyTerminarzBoxVisible = true;
			}
			else if (!czyTerminarzBoxVisible && czyListazadanBoxVisible) {
				TerminarzBox->Visible = true;
				czyTerminarzBoxVisible = true;
				czyListazadanBoxVisible = false;
				ListazadanBox->Visible = false;
			}
			else {
				TerminarzBox->Visible = false;
				czyTerminarzBoxVisible = false;
			}
		
		}
		private: System::Void listazadan_btn_Click(System::Object^  sender, System::EventArgs^  e) {
			if (!czyTerminarzBoxVisible && !czyListazadanBoxVisible) {
				ListazadanBox->Visible = true;
				czyListazadanBoxVisible = true;
			}
			else if (czyTerminarzBoxVisible && !czyListazadanBoxVisible) {
				TerminarzBox->Visible = false;
				czyTerminarzBoxVisible = false;
				czyListazadanBoxVisible = true;
				ListazadanBox->Visible = true;
			}
			else {
				ListazadanBox->Visible = false;
				czyListazadanBoxVisible = false;
			}
		
		
		}


	//funkcja ustawiaj¹ca panele
		public: System::Void Aktualizacja_Paneli(){
			int ponval = 0;
			int	wtval = 0;
			int	srval = 0;
			int	czwval = 0;
			int ptval = 0;
			
			for (int i = 0; i < numerwyd; i++)
			{	
				
				if (wyd_dzien[i] == "Poniedzialek") {
					ponval++;
					switch (ponval) {
						case 1: {
							wydarzeniePon1->Visible = true;
							TytulPon1->Text = wyd_nazwa[i];
							label2 ->Text = wyd_opis[i];
							label3->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button1);
							break;
						}
						case 2: {
							wydarzeniePon2->Visible = true;
							label6->Text = wyd_nazwa[i];
							label5->Text = wyd_opis[i];
							label4->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button2);
							break;
						}
						case 3: {
							wydarzeniePon3->Visible = true;
							label9->Text = wyd_nazwa[i];
							label8->Text = wyd_opis[i];
							label7->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button3);
							break;
						}
						case 4: {
							wydarzeniePon4->Visible = true;
							label12->Text = wyd_nazwa[i];
							label11->Text = wyd_opis[i];
							label10->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button4);
							break;
						}
						case 5: {
							wydarzeniePon5->Visible = true;
							label15->Text = wyd_nazwa[i];
							label14->Text = wyd_opis[i];
							label13->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button5);
							break;
						}
					}
				}
				if (wyd_dzien[i] == "Wtorek") {
					wtval++;
					switch (wtval) {
						case 1: {
							wydarzenieWt1->Visible = true;
							label30->Text = wyd_nazwa[i];
							label29->Text = wyd_opis[i];
							label28->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button10);
							break;
						}
						case 2: {
							wydarzenieWt2->Visible = true;
							label27->Text = wyd_nazwa[i];
							label26->Text = wyd_opis[i];
							label25->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button9);
							break;
						}
						case 3: {
							wydarzenieWt3->Visible = true;
							label24->Text = wyd_nazwa[i];
							label23->Text = wyd_opis[i];
							label22->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button8);
							break;
						}
						case 4: {
							wydarzenieWt4->Visible = true;
							label21->Text = wyd_nazwa[i];
							label20->Text = wyd_opis[i];
							label19->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button7);
							break;
						}
						case 5: {
							wydarzenieWt5->Visible = true;
							label18->Text = wyd_nazwa[i];
							label17->Text = wyd_opis[i];
							label16->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button6);
							break;
						}
					}
				}
				if (wyd_dzien[i] == "Sroda") {
					srval++;
					switch (srval) {
						case 1: {
							wydarzenieSr1->Visible = true;
							label45->Text = wyd_nazwa[i];
							label44->Text = wyd_opis[i];
							label43->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button15);
							break;
						}
						case 2: {
							wydarzenieSr2->Visible = true;
							label42->Text = wyd_nazwa[i];
							label41->Text = wyd_opis[i];
							label40->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button14);
							break;
						}
						case 3: {
							wydarzenieSr3->Visible = true;							
							label39->Text = wyd_nazwa[i];
							label38->Text = wyd_opis[i];
							label37->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button13);
							break;
						}
						case 4: {
							wydarzenieSr4->Visible = true;
							label36->Text = wyd_nazwa[i];
							label35->Text = wyd_opis[i];
							label34->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button12);
							break;
						}
						case 5: {
							wydarzenieSr5->Visible = true;
							label33->Text = wyd_nazwa[i];
							label32->Text = wyd_opis[i];
							label31->Text = wyd_godzina[i];
							ZmianaEtykiety(wyd_etykieta[i], button11);
							break;
						}
					}
				}
				if (wyd_dzien[i] == "Czwartek") {
					czwval++;
					switch (czwval) {
					case 1: {
						wydarzenieCzw1->Visible = true;
						label60->Text = wyd_nazwa[i];
						label59->Text = wyd_opis[i];
						label58->Text = wyd_godzina[i];
						ZmianaEtykiety(wyd_etykieta[i], button20);
						break;
					}
					case 2: {
						wydarzenieCzw2->Visible = true;
						label57->Text = wyd_nazwa[i];
						label56->Text = wyd_opis[i];
						label55->Text = wyd_godzina[i];
						ZmianaEtykiety(wyd_etykieta[i], button19);
						break;
					}
					case 3: {
						wydarzenieCzw3->Visible = true;
						label54->Text = wyd_nazwa[i];
						label53->Text = wyd_opis[i];
						label52->Text = wyd_godzina[i];
						ZmianaEtykiety(wyd_etykieta[i], button18);
						break;
					}
					case 4: {
						wydarzenieCzw4->Visible = true;
						label51->Text = wyd_nazwa[i];
						label50->Text = wyd_opis[i];
						label49->Text = wyd_godzina[i];
						ZmianaEtykiety(wyd_etykieta[i], button17);
						break;
					}
					case 5: {
						wydarzenieCzw5->Visible = true;
						label48->Text = wyd_nazwa[i];
						label47->Text = wyd_opis[i];
						label46->Text = wyd_godzina[i];
						ZmianaEtykiety(wyd_etykieta[i], button16);
						break;
					}
					}
				}
				if (wyd_dzien[i] == "Piatek") {
					ptval++;
					switch (ptval) {
					case 1: {
						wydarzeniePt1->Visible = true;
						label75->Text = wyd_nazwa[i];
						label74->Text = wyd_opis[i];
						label73->Text = wyd_godzina[i];
						ZmianaEtykiety(wyd_etykieta[i], button25);
						break;
					}
					case 2: {
						wydarzeniePt2->Visible = true;
						label72->Text = wyd_nazwa[i];
						label71->Text = wyd_opis[i];
						label70->Text = wyd_godzina[i];
						ZmianaEtykiety(wyd_etykieta[i], button24);
						break;
					}
					case 3: {
						wydarzeniePt3->Visible = true;
						label69->Text = wyd_nazwa[i];
						label68->Text = wyd_opis[i];
						label67->Text = wyd_godzina[i];
						ZmianaEtykiety(wyd_etykieta[i], button23);
						break;
					}
					case 4: {
						wydarzeniePt4->Visible = true;
						label66->Text = wyd_nazwa[i];
						label65->Text = wyd_opis[i];
						label64->Text = wyd_godzina[i];
						ZmianaEtykiety(wyd_etykieta[i], button22);
						break;
					}
					case 5: {
						wydarzeniePt5->Visible = true;
						label63->Text = wyd_nazwa[i];
						label62->Text = wyd_opis[i];
						label61->Text = wyd_godzina[i];
						ZmianaEtykiety(wyd_etykieta[i], button21);
						break;
					}
					}
				}
				


			}
		
		}
		public: System::Void ZmianaEtykiety(String^ nazwa, System::Windows::Forms::Button^ but) {
			if (nazwa == "Brak") {
				but->BackColor = System::Drawing::Color::Transparent;
			}
			else if (nazwa == "Czerwony") {
				but->BackColor = System::Drawing::Color::Red;
			}
			else if (nazwa == "Zolty") {
				but->BackColor = System::Drawing::Color::Yellow;
			}
			else if (nazwa == "Niebieski") {
				but->BackColor = System::Drawing::Color::Blue;
			}
			else if (nazwa == "Zielony") {
				but->BackColor = System::Drawing::Color::Green;
			}
			else if (nazwa == "Czarny") {
				but->BackColor = System::Drawing::Color::Black;
			}
		}
		private: System::Void refresh_panels_Click(System::Object^  sender, System::EventArgs^  e) {
			Console::Write("\n#ORGANISEIT | Rozpoczynam aktualizacje z bazy podrêcznej\n");
			ImportbazywydTEMP();
			zapisbazyWydtemp();
			Aktualizacja_Paneli();
			Console::Write("\n#ORGANISEIT | Zakonczono aktualizacje z bazy podrêcznej\n");
		}
};
}
