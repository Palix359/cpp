#pragma once

namespace ProjektGraphics {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnStart;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnStart
			// 
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->btnStart->Location = System::Drawing::Point(1209, 615);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(208, 69);
			this->btnStart->TabIndex = 0;
			this->btnStart->Text = L"Naciśnij przycisk";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &MyForm::btnStart_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(659, 329);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1496, 739);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnStart);
			this->Name = L"MyForm";
			this->Text = L"Naciśnij przycisk";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {
		//label1->Text = "Witaj świecie!";
		Graphics^ g = this->CreateGraphics();
		//utwórz ‘uchwyt’ do obiektu SolidBrush (wypełnienie jednolitym kolorem): 
		//utwórz ‘uchwyt’ do obiektu Font: 
		//System::Drawing::Font^ czcionka = gcnew
		//System::Drawing::Font(FontFamily::GenericSansSerif, 14, FontStyle::Regular);
		//utwórz obiekt Color: 
		//Color c = Color::Purple;
		//utwórz inny obiekt Color: 
		Color tlo = Color::FromArgb(255, 51, 204, 255);
		//wyczyść powierzchnię rysowania g i wypełnij ją kolorem k:
		g->Clear(tlo);
		//namaluj napis ustawiona czcionka i pędzlem, począwszy od punktu (50,100): 
		g->DrawString("Napis", czcionka, pedzel, 50, 100);
		//utwórz ‘uchwyt’ do obiektu Pen: 
		Pen^ pioro = gcnew Pen(Color::Black, 3.);
		g->DrawLine(pioro, 411, 141, 487, 154);
		g->DrawRectangle(pioro, 60, 155, 340, 50); //(punkt ax, ay, szer, wys)
		SolidBrush^ brYellow = gcnew SolidBrush(Color::Yellow);
		g->FillRectangle(brYellow, 60, 200, 340, 50);
		g->DrawEllipse(pioro, 800, 70, 100, 120);
		Point A = Point(150, 440);
		Point B = Point(230, 300);
		Point C = Point(70, 300);
		array<Point>^ tab = { A,B,C };
		g->DrawPolygon(pioro,tab);
		SolidBrush^ brWhite = gcnew SolidBrush(Color::White);
		g->FillPie(brWhite, 390, 290, 200, 300, 180, 180);

	}
};
}
