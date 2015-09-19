#pragma once
#include "main_objects.h"
#include <iostream>
#include <Windows.h>
Train *a, *b, *c;
int size_a = 15;
int size_b = 30;
int size_c = 60;


namespace train_two {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for train
	/// </summary>
	public ref class train : public System::Windows::Forms::Form
	{
	public:
		train(void)
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
		~train()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;
	private: BufferedGraphicsContext^ context;
	private: BufferedGraphics^ grafx;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::ProgressBar^  progressBar3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;


	private: Image^ ImageThis;


	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(train::typeid));
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			this->SuspendLayout();
			// 
			// trackBar1
			// 
			this->trackBar1->AllowDrop = true;
			resources->ApplyResources(this->trackBar1, L"trackBar1");
			this->trackBar1->Maximum = 4;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->TabStop = false;
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Interval = 20;
			this->timer1->Tick += gcnew System::EventHandler(this, &train::timer1_Tick);
			// 
			// progressBar1
			// 
			resources->ApplyResources(this->progressBar1, L"progressBar1");
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Step = 1;
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Name = L"label2";
			// 
			// numericUpDown1
			// 
			resources->ApplyResources(this->numericUpDown1, L"numericUpDown1");
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &train::button4_Click);
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &train::button1_Click);
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &train::button3_Click);
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &train::button2_Click);
			// 
			// numericUpDown2
			// 
			resources->ApplyResources(this->numericUpDown2, L"numericUpDown2");
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label4->Name = L"label4";
			// 
			// trackBar2
			// 
			this->trackBar2->AllowDrop = true;
			resources->ApplyResources(this->trackBar2, L"trackBar2");
			this->trackBar2->Maximum = 4;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->TabStop = false;
			// 
			// numericUpDown3
			// 
			resources->ApplyResources(this->numericUpDown3, L"numericUpDown3");
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Name = L"label5";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label6->Name = L"label6";
			// 
			// trackBar3
			// 
			this->trackBar3->AllowDrop = true;
			resources->ApplyResources(this->trackBar3, L"trackBar3");
			this->trackBar3->Maximum = 4;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->TabStop = false;
			// 
			// progressBar2
			// 
			resources->ApplyResources(this->progressBar2, L"progressBar2");
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Step = 1;
			// 
			// progressBar3
			// 
			resources->ApplyResources(this->progressBar3, L"progressBar3");
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Step = 1;
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->Name = L"label7";
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->Name = L"label8";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->Name = L"label9";
			// 
			// train
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			resources->ApplyResources(this, L"$this");
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->progressBar3);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"train";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &train::train_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void train_Load(System::Object^  sender, System::EventArgs^  e) {

	}


private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		a->Move(trackBar3->Value);
		b->Move(trackBar2->Value * 2);
		c->Move(trackBar1->Value * 4);
		if ((progressBar1->Value + trackBar1->Value*4) < progressBar1->Maximum){
			progressBar1->Value += trackBar1->Value *4;
		}
		if ((progressBar2->Value + trackBar2->Value * 2) < progressBar2->Maximum){
			progressBar2->Value += trackBar2->Value * 2;
		}
		if ((progressBar3->Value + trackBar3->Value) < progressBar3->Maximum){
			progressBar3->Value += trackBar3->Value ;
		}

		grafx->Graphics->DrawImage(ImageThis, 0, 0, 1280, 960);
		a->Show(grafx);
		b->Show(grafx);
		c->Show(grafx);
		grafx->Render(pictureBox1->CreateGraphics());
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	progressBar1->Maximum = this->Width; progressBar2->Maximum = this->Width; progressBar3->Maximum = this->Width;
	progressBar1->Value = 0; progressBar2->Value = 0; progressBar3->Value = 0;
	//DoubleBuff
	context = BufferedGraphicsManager::Current;
	grafx = context->Allocate(pictureBox1->CreateGraphics(), this->DisplayRectangle);

	ImageThis = Image::FromFile("OneImage.jpg");
	a = new Train(-10, 500, size_a,1);
	b = new Train(-20, 550, size_b,1);
    c = new Train(-40, 690, size_c,1);
	grafx->Graphics->DrawImage(ImageThis, 0, 0, 1280, 960);
	grafx->Render(pictureBox1->CreateGraphics());
	

	button1->Enabled = true; button2->Enabled = true; button3->Enabled = true;
	trackBar1->Enabled = true; trackBar2->Enabled = true; trackBar3->Enabled = true;
	progressBar1->Enabled = true; progressBar2->Enabled = true; progressBar3->Enabled = true;
	numericUpDown1->Enabled = true; numericUpDown2->Enabled = true; numericUpDown3->Enabled = true;
	button4 -> Enabled = false;

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = true;
	progressBar3->Value = 0;
	context = BufferedGraphicsManager::Current;
	grafx = context->Allocate(pictureBox1->CreateGraphics(), this->DisplayRectangle);
	a = new Train(-10, 500, size_a, (int)numericUpDown3->Value);
	a->Show(grafx);
	button3->Text = System::Convert::ToString("Repeat!");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = true;
	progressBar2->Value = 0;
	context = BufferedGraphicsManager::Current;
	grafx = context->Allocate(pictureBox1->CreateGraphics(), this->DisplayRectangle);
	b = new Train(-20, 550, size_b, (int)numericUpDown2->Value);
	b->Show(grafx);
	button2->Text = System::Convert::ToString("Repeat!");
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Enabled = true;
	progressBar1->Value = 0;
	context = BufferedGraphicsManager::Current;
	grafx = context->Allocate(pictureBox1->CreateGraphics(), this->DisplayRectangle);
	c = new Train(-40, 690, size_c, (int)numericUpDown1->Value);
	c->Show(grafx);
	button1->Text = System::Convert::ToString("Repeat!");
}
};
};