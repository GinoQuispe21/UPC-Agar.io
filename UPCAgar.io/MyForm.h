#pragma once
#include "Juego.h"
namespace UPCAgario {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	public ref class MyForm : public System::Windows::Forms::Form {
		MenuPrincipal*objMenuPrincipal;
		Juego*objJuego;
		Bitmap^bmpJugador;
		Bitmap^bmpMenu;
		Bitmap^bmpNivel1;
		Bitmap^bmpNivel2;
		Bitmap^bmpNivel3;
		Bitmap^bmpNivel4;
		Bitmap^bmpChile;
		Bitmap^bmpVenezuela;
		Bitmap^bmpDinamarca;
		Bitmap^bmpArgentina;
		Bitmap^bmpFrancia;
		Bitmap^bmpVirus;
		Bitmap^bmpComida;
	private: System::Windows::Forms::Label^  label2;
			 
	public:
		MyForm(void)
		{
			InitializeComponent();
			objMenuPrincipal = new MenuPrincipal();
			bmpJugador = gcnew Bitmap("Imagenes\\Peru.png");
			bmpMenu = gcnew Bitmap("Imagenes\\Menu.png");
			bmpNivel1 = gcnew Bitmap("Imagenes\\Nivel 1.png");
			bmpNivel2 = gcnew Bitmap("Imagenes\\Nivel 2.jpg");
			bmpNivel3 = gcnew Bitmap("Imagenes\\Nivel 3.jpg");
			bmpNivel4 = gcnew Bitmap("Imagenes\\Nivel 4.png");
			bmpChile = gcnew Bitmap("Imagenes\\Chile.png");
			bmpVenezuela = gcnew Bitmap("Imagenes\\Venezuela.png");
			bmpDinamarca = gcnew Bitmap("Imagenes\\Dinamarca.png");
			bmpArgentina = gcnew Bitmap("Imagenes\\Argentina.png");
			bmpFrancia = gcnew Bitmap("Imagenes\\Francia.png");
			bmpComida = gcnew Bitmap("Imagenes\\Comida verde.png");
			bmpVirus = gcnew Bitmap("Imagenes\\Virus.png");
		}
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			delete objJuego;
			delete objMenuPrincipal;
			delete bmpJugador;
			delete bmpMenu;
			delete bmpNivel1;
			delete bmpNivel2;
			delete bmpNivel3;
			delete bmpNivel4;
			delete bmpChile;
			delete bmpVenezuela;
			delete bmpDinamarca;
			delete bmpArgentina;
			delete bmpComida;
			delete bmpVirus;
		}
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  lblFrancia;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  lblJugador;
	private: System::Windows::Forms::Label^  PUNTAJE;
	private: System::Windows::Forms::Label^  Comidas;
	private: System::Windows::Forms::Label^  lblComidas;
	private: System::Windows::Forms::Label^  Vidas;
	private: System::Windows::Forms::Label^  lblVidas;
	private: System::Windows::Forms::Label^  lblChile;
	private: System::Windows::Forms::Label^  lblVenezuela;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  lblDinamarca;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  lblArgentina;
	private: System::Windows::Forms::Timer^  timer1;

	protected:
	private: System::ComponentModel::IContainer^  components;

	private:

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblJugador = (gcnew System::Windows::Forms::Label());
			this->PUNTAJE = (gcnew System::Windows::Forms::Label());
			this->Comidas = (gcnew System::Windows::Forms::Label());
			this->lblComidas = (gcnew System::Windows::Forms::Label());
			this->Vidas = (gcnew System::Windows::Forms::Label());
			this->lblVidas = (gcnew System::Windows::Forms::Label());
			this->lblChile = (gcnew System::Windows::Forms::Label());
			this->lblVenezuela = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->lblDinamarca = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->lblArgentina = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->lblFrancia = (gcnew System::Windows::Forms::Label());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// lblJugador
			// 
			this->lblJugador->AutoSize = true;
			this->lblJugador->BackColor = System::Drawing::Color::Black;
			this->lblJugador->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblJugador->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblJugador->ForeColor = System::Drawing::Color::White;
			this->lblJugador->Location = System::Drawing::Point(1805, 28);
			this->lblJugador->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblJugador->Name = L"lblJugador";
			this->lblJugador->Size = System::Drawing::Size(22, 24);
			this->lblJugador->TabIndex = 0;
			this->lblJugador->Text = L"-";
			// 
			// PUNTAJE
			// 
			this->PUNTAJE->AutoSize = true;
			this->PUNTAJE->BackColor = System::Drawing::Color::Yellow;
			this->PUNTAJE->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PUNTAJE->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PUNTAJE->Location = System::Drawing::Point(1564, 23);
			this->PUNTAJE->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PUNTAJE->Name = L"PUNTAJE";
			this->PUNTAJE->Size = System::Drawing::Size(105, 30);
			this->PUNTAJE->TabIndex = 1;
			this->PUNTAJE->Text = L"PUNTAJE";
			// 
			// Comidas
			// 
			this->Comidas->AutoSize = true;
			this->Comidas->BackColor = System::Drawing::Color::GreenYellow;
			this->Comidas->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Comidas->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Comidas->Location = System::Drawing::Point(16, 11);
			this->Comidas->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Comidas->Name = L"Comidas";
			this->Comidas->Size = System::Drawing::Size(105, 30);
			this->Comidas->TabIndex = 2;
			this->Comidas->Text = L"Comidas";
			// 
			// lblComidas
			// 
			this->lblComidas->AutoSize = true;
			this->lblComidas->BackColor = System::Drawing::Color::Black;
			this->lblComidas->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblComidas->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblComidas->ForeColor = System::Drawing::Color::White;
			this->lblComidas->Location = System::Drawing::Point(133, 16);
			this->lblComidas->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblComidas->Name = L"lblComidas";
			this->lblComidas->Size = System::Drawing::Size(22, 24);
			this->lblComidas->TabIndex = 3;
			this->lblComidas->Text = L"-";
			// 
			// Vidas
			// 
			this->Vidas->AutoSize = true;
			this->Vidas->BackColor = System::Drawing::Color::Red;
			this->Vidas->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Vidas->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vidas->ForeColor = System::Drawing::Color::White;
			this->Vidas->Location = System::Drawing::Point(16, 53);
			this->Vidas->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Vidas->Name = L"Vidas";
			this->Vidas->Size = System::Drawing::Size(79, 30);
			this->Vidas->TabIndex = 4;
			this->Vidas->Text = L"Vidas";
			// 
			// lblVidas
			// 
			this->lblVidas->AutoSize = true;
			this->lblVidas->BackColor = System::Drawing::Color::Black;
			this->lblVidas->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblVidas->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVidas->ForeColor = System::Drawing::Color::White;
			this->lblVidas->Location = System::Drawing::Point(133, 58);
			this->lblVidas->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblVidas->Name = L"lblVidas";
			this->lblVidas->Size = System::Drawing::Size(22, 24);
			this->lblVidas->TabIndex = 5;
			this->lblVidas->Text = L"-";
			// 
			// lblChile
			// 
			this->lblChile->AutoSize = true;
			this->lblChile->BackColor = System::Drawing::Color::Black;
			this->lblChile->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblChile->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblChile->ForeColor = System::Drawing::Color::White;
			this->lblChile->Location = System::Drawing::Point(1805, 75);
			this->lblChile->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblChile->Name = L"lblChile";
			this->lblChile->Size = System::Drawing::Size(22, 24);
			this->lblChile->TabIndex = 6;
			this->lblChile->Text = L"-";
			// 
			// lblVenezuela
			// 
			this->lblVenezuela->AutoSize = true;
			this->lblVenezuela->BackColor = System::Drawing::Color::Black;
			this->lblVenezuela->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblVenezuela->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVenezuela->ForeColor = System::Drawing::Color::White;
			this->lblVenezuela->Location = System::Drawing::Point(1805, 122);
			this->lblVenezuela->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblVenezuela->Name = L"lblVenezuela";
			this->lblVenezuela->Size = System::Drawing::Size(22, 24);
			this->lblVenezuela->TabIndex = 7;
			this->lblVenezuela->Text = L"-";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(1693, 11);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(81, 42);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(1693, 58);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(81, 42);
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(1693, 105);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(81, 42);
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// lblDinamarca
			// 
			this->lblDinamarca->AutoSize = true;
			this->lblDinamarca->BackColor = System::Drawing::Color::Black;
			this->lblDinamarca->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblDinamarca->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDinamarca->ForeColor = System::Drawing::Color::White;
			this->lblDinamarca->Location = System::Drawing::Point(1805, 165);
			this->lblDinamarca->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDinamarca->Name = L"lblDinamarca";
			this->lblDinamarca->Size = System::Drawing::Size(22, 24);
			this->lblDinamarca->TabIndex = 12;
			this->lblDinamarca->Text = L"-";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(1693, 151);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(81, 38);
			this->pictureBox4->TabIndex = 11;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(1693, 196);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(81, 38);
			this->pictureBox5->TabIndex = 13;
			this->pictureBox5->TabStop = false;
			// 
			// lblArgentina
			// 
			this->lblArgentina->AutoSize = true;
			this->lblArgentina->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblArgentina->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblArgentina->ForeColor = System::Drawing::Color::White;
			this->lblArgentina->Location = System::Drawing::Point(1805, 209);
			this->lblArgentina->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblArgentina->Name = L"lblArgentina";
			this->lblArgentina->Size = System::Drawing::Size(22, 24);
			this->lblArgentina->TabIndex = 14;
			this->lblArgentina->Text = L"-";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(1693, 240);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(81, 38);
			this->pictureBox6->TabIndex = 15;
			this->pictureBox6->TabStop = false;
			// 
			// lblFrancia
			// 
			this->lblFrancia->AutoSize = true;
			this->lblFrancia->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblFrancia->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFrancia->ForeColor = System::Drawing::Color::White;
			this->lblFrancia->Location = System::Drawing::Point(1805, 254);
			this->lblFrancia->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblFrancia->Name = L"lblFrancia";
			this->lblFrancia->Size = System::Drawing::Size(22, 24);
			this->lblFrancia->TabIndex = 16;
			this->lblFrancia->Text = L"-";
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1119, 599);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 49);
			this->button1->TabIndex = 17;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(1155, 699);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(111, 27);
			this->textBox1->TabIndex = 18;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(955, 665);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(497, 22);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Ingrese una cantidad de vidas en el intervalo de 3 a 6";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1845, 876);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblFrancia);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->lblArgentina);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->lblDinamarca);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lblVenezuela);
			this->Controls->Add(this->lblChile);
			this->Controls->Add(this->lblVidas);
			this->Controls->Add(this->Vidas);
			this->Controls->Add(this->lblComidas);
			this->Controls->Add(this->Comidas);
			this->Controls->Add(this->PUNTAJE);
			this->Controls->Add(this->lblJugador);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"UPCAgar.io";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Random r;
		int segundos = 0, sComida = 0, cNivel = 0, Nivel = 0;
		double long tiempo = 0;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		MaximizeBox = false;
		timer1->Stop();
		timer2->Start();
		pictureBox1->Visible = false;
		pictureBox2->Visible = false;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		pictureBox6->Visible = false;
		lblJugador->Visible = false;
		lblChile->Visible = false;
		lblArgentina->Visible = false;
		lblVenezuela->Visible = false;
		lblDinamarca->Visible = false;
		lblFrancia->Visible = false;
		lblComidas->Visible = false;
		lblVidas->Visible = false;
		Vidas->Visible = false;
		Comidas->Visible = false;
		PUNTAJE->Visible = false;
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Graphics^g = CreateGraphics();
		BufferedGraphicsContext^bfc = BufferedGraphicsManager::Current;
		BufferedGraphics^bf = bfc->Allocate(g, this->ClientRectangle);
		if (timer1->Enabled == true) {
			pictureBox1->Visible = true;
			pictureBox2->Visible = true;
			pictureBox3->Visible = true;
			pictureBox4->Visible = true;
			pictureBox5->Visible = true;
			pictureBox6->Visible = true;
			lblJugador->Visible = true;
			lblChile->Visible = true;
			lblArgentina->Visible = true;
			lblVenezuela->Visible = true;
			lblDinamarca->Visible = true;
			lblFrancia->Visible = true;
			lblComidas->Visible = true;
			lblVidas->Visible = true;
			Vidas->Visible = true;
			Comidas->Visible = true;
			PUNTAJE->Visible = true;
		}
		segundos++;//segundos para insertar un enemigo
		sComida++;//segundos para insertar una comida
		cNivel++;//segundos para mostrar un nivel o escenario
		tiempo++;//tiempor que se muestra en el 'Text' del Form
		//segundos para mostrar el numero del nivel
		//Se inserta una comida cada 2 milisegundos
		if (sComida == 2) {
			objJuego->Insertar_Comida();
			sComida = 0;
		}
		//En cierto intervalo de tiempo se muestra un escenario o nivel
		if (cNivel > 0 && cNivel < 200) {
			Nivel = 1;
			lol = false;
		}
		if (cNivel >= 200 && cNivel < 201) {
			Nivel = 2;
			lol = false;
			lol1 = 0;
			objJuego = new Juego(lives);
			tiempo = 0;
		}
		if (cNivel >= 350 && cNivel < 351) {
			Nivel = 3;
			lol = false;
			lol1 = 0;
			objJuego = new Juego(lives);
			tiempo = 0;
		}
		if (cNivel >= 500 && cNivel < 501) {
			Nivel = 4;
			lol = false;
			lol1 = 0;
			objJuego = new Juego(lives);
			tiempo = 0;
		}
		if (Nivel == 1) {
			objJuego->Mostrar_Escenario(bf->Graphics, bmpNivel1, 1);
		}
		if (Nivel == 2) {
			objJuego->Mostrar_Escenario(bf->Graphics, bmpNivel2, 2);
		}
		if (Nivel == 3) {
			objJuego->Mostrar_Escenario(bf->Graphics, bmpNivel3, 3);
		}
		if (Nivel == 4) {
			objJuego->Mostrar_Escenario(bf->Graphics, bmpNivel4, 4);
			if (objJuego->get_masa_jugador() >= 100) {
				timer1->Enabled = false;
				MessageBox::Show("¡HA GANADO!");
			}
		}
		//Chile se muestra y mueve cuando 'segundos' es mayor o igual a...
		if (segundos >= 10) {
			objJuego->Mover_Chile(bf->Graphics);
			objJuego->Mostrar_Chile(bf->Graphics, bmpChile);
		}
		//Venezuela se muestra y mueve cuando 'segundos' es mayor o igual a...
		if (segundos >= 120) {
			objJuego->Mover_Venezuela(bf->Graphics);
			objJuego->Mostrar_Venezuela(bf->Graphics, bmpVenezuela);
		}
		//Dinamarca se muestra y mueve cuando 'segundos' es mayor o igual a...
		if (segundos >= 230) {
			objJuego->Mover_Dinamarca(bf->Graphics);
			objJuego->Mostrar_Dinamarca(bf->Graphics, bmpDinamarca);
		}
		//Argentina se muestra y mueve cuando 'segundos' es mayor o igual a...
		if (segundos >= 340) {
			objJuego->Mover_Argentina(bf->Graphics);
			objJuego->Mostrar_Argentina(bf->Graphics, bmpArgentina);
		}
		//Argentina se muestra y mueve cuando 'segundos' es mayor o igual a...
		if (segundos >= 450) {
			objJuego->Mover_Francia(bf->Graphics);
			objJuego->Mostrar_Francia(bf->Graphics, bmpFrancia);
		}
		//Métodos de la clase Juego
		objJuego->Mover_Virus();
		objJuego->Mostrar_Virus(bf->Graphics, bmpVirus);
		objJuego->Mostrar_Comida(bf->Graphics, bmpComida);
		objJuego->Mostrar_Jugador(bf->Graphics, bmpJugador);
		objJuego->Colision_Jugador_Comida();
		objJuego->Colision_Virus();
		objJuego->Colision_Jugador_Chile();
		objJuego->Colision_Jugador_Venezuela();
		objJuego->Colision_Jugador_Dinamarca();
		objJuego->Colision_Jugador_Argentina();
		objJuego->Colision_Jugador_Francia();
		objJuego->Colision_Chile_Comida();
		objJuego->Colision_Venezuela_Comida();
		objJuego->Colision_Dinamarca_Comida();
		objJuego->Colision_Argentina_Comida();
		objJuego->Colision_Francia_Comida();
		objJuego->Colision_Chile_Venezuela();
		objJuego->Colision_Chile_Dinamarca();
		objJuego->Colision_Chile_Argentina();
		objJuego->Colision_Chile_Francia();
		objJuego->Colision_Venezuela_Dinamarca();
		objJuego->Colision_Venezuela_Argentina();
		objJuego->Colision_Venezuela_Francia();
		objJuego->Colision_Argentina_Dinamarca();
		objJuego->Colision_Argentina_Francia();
		objJuego->Colision_Dinamarca_Francia();
		//Vidas = 0
		if (objJuego->get_cant_vidas() == 0) {
			timer1->Enabled = false;
			MessageBox::Show("Vidas = 0, ¡HAS PERDIDO!");
		}
		bf->Render();
		delete g;
		delete bf;
		delete bfc;
		//Texts y labels
		this->Text = "Nivel: " + Nivel + " - Tiempo: " + (tiempo / 10) + " - En el nivel 4 su objetivo es tener una masa mayor o igual a 100 para ganar el juego ";
		lblJugador->Text = Convert::ToString(objJuego->get_masa_jugador());
		lblChile->Text = Convert::ToString(objJuego->get_masa_Chile());
		lblVenezuela->Text = Convert::ToString(objJuego->get_masa_Venezuela());
		lblDinamarca->Text = Convert::ToString(objJuego->get_masa_Dinamarca());
		lblArgentina->Text = Convert::ToString(objJuego->get_masa_Argentina());
		lblFrancia->Text = Convert::ToString(objJuego->get_masa_Francia());
		lblComidas->Text = Convert::ToString(objJuego->get_cant_comidas());
		lblVidas->Text = Convert::ToString(objJuego->get_cant_vidas());
	}
	bool lol = false;//deteccion de limite de division
	int lol1 = 0;//veces de dividirse
	private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		Graphics^g = CreateGraphics();
		switch (e->KeyCode) {
		case Keys::Left:objJuego->Mover_Jugador(g, direccion::izquierda); break;
		case Keys::Right:objJuego->Mover_Jugador(g, direccion::derecha); break;
		case Keys::Up:objJuego->Mover_Jugador(g, direccion::arriba);  break;
		case Keys::Down:objJuego->Mover_Jugador(g, direccion::abajo); break;
		case Keys::Space:
			if (lol1 == 7) lol = true;
			if (lol == false) {
				lol1++;
				objJuego->Dividir();
			}
			break;
		case Keys::X:objJuego->Colision_Jugador_Virus(); break;
		}
	}
	private: System::Void MyForm_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		
	}
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		Graphics^g = CreateGraphics();
		BufferedGraphicsContext^bfc = BufferedGraphicsManager::Current;
		BufferedGraphics^bf = bfc->Allocate(g, this->ClientRectangle);
		objMenuPrincipal->Mostrar(bf->Graphics, bmpMenu);
		bf->Render(g);
		delete g;
		delete bf;
		delete bfc;
	}
	int lives = 0;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (timer2->Enabled == true && (Convert::ToInt32(textBox1->Text) < 7 && Convert::ToInt32(textBox1->Text) > 2)) {
			timer2->Stop();
			timer1->Start();
			button1->Visible = false;
			textBox1->Visible = false;
			textBox1->Enabled = false;
			label2->Visible = false;
			lives = Convert::ToInt32(textBox1->Text);
			objJuego = new Juego(lives);
		}
	}
};
}
