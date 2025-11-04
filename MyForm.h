#pragma once
#include <math.h>
#include <vector>

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ n;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ U_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ U_2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ E_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ E_2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Button^ button2;







	protected:
	private: System::ComponentModel::IContainer^  components;

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
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->n = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->U_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->U_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->E_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->E_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(613, 224);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(568, 352);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 47);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->n, this->X,
					this->U_1, this->U_2, this->F_1, this->F_2, this->E_1, this->E_2
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 224);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(595, 352);
			this->dataGridView1->TabIndex = 2;
			// 
			// n
			// 
			this->n->HeaderText = L"n";
			this->n->Name = L"n";
			this->n->ReadOnly = true;
			this->n->Width = 50;
			// 
			// X
			// 
			this->X->HeaderText = L"x";
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// U_1
			// 
			this->U_1->HeaderText = L"u1";
			this->U_1->Name = L"U_1";
			this->U_1->ReadOnly = true;
			// 
			// U_2
			// 
			this->U_2->HeaderText = L"u2";
			this->U_2->Name = L"U_2";
			this->U_2->ReadOnly = true;
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"v1";
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			// 
			// F_2
			// 
			this->F_2->HeaderText = L"v2";
			this->F_2->Name = L"F_2";
			this->F_2->ReadOnly = true;
			// 
			// E_1
			// 
			this->E_1->HeaderText = L"E1";
			this->E_1->Name = L"E_1";
			this->E_1->ReadOnly = true;
			// 
			// E_2
			// 
			this->E_2->HeaderText = L"E2";
			this->E_2->Name = L"E_2";
			this->E_2->ReadOnly = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(234, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Начальный шаг:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(237, 25);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(153, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,000001";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Задача:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 28);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(203, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"du (1)/dx = -500.005·u (1) + 499.995·u (2)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 43);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(200, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"du (2)/dx = 499.995·u (1) - 500.005·u (2) ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(9, 60);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(111, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Начальные условия:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 79);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(25, 13);
			this->label10->TabIndex = 18;
			this->label10->Text = L"u10";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(43, 76);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(55, 20);
			this->textBox6->TabIndex = 19;
			this->textBox6->Text = L"7";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(114, 79);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(25, 13);
			this->label11->TabIndex = 20;
			this->label11->Text = L"u20";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(145, 76);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(55, 20);
			this->textBox7->TabIndex = 21;
			this->textBox7->Text = L"13";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(15, 102);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(171, 17);
			this->checkBox1->TabIndex = 22;
			this->checkBox1->Text = L"Рисовать истинное решение";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(15, 125);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(206, 17);
			this->checkBox2->TabIndex = 23;
			this->checkBox2->Text = L"Рисовать глобальную погрешность";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(15, 148);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(201, 17);
			this->checkBox3->TabIndex = 24;
			this->checkBox3->Text = L"Рисовать локальную погрешность";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(234, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 13);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Контроль глоб. погрешности:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(237, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 20);
			this->textBox1->TabIndex = 26;
			this->textBox1->Text = L"0,00000001";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(234, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 13);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Контроль лок. погрешности:";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(237, 103);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(153, 20);
			this->textBox2->TabIndex = 28;
			this->textBox2->Text = L"0,001";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Enabled = false;
			this->checkBox4->Location = System::Drawing::Point(237, 129);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(202, 17);
			this->checkBox4->TabIndex = 29;
			this->checkBox4->Text = L"Контролировать лок. погрешность";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Enabled = false;
			this->checkBox5->Location = System::Drawing::Point(237, 152);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(207, 17);
			this->checkBox5->TabIndex = 30;
			this->checkBox5->Text = L"Контролировать глоб. погрешность";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox5_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(393, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(200, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Точность выхода на нижнюю границу:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(396, 25);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(153, 20);
			this->textBox5->TabIndex = 34;
			this->textBox5->Text = L"0,01";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(393, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(195, 13);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Точность выхода на правую границу:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(396, 64);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(153, 20);
			this->textBox4->TabIndex = 36;
			this->textBox4->Text = L"0,0001";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(234, 178);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 13);
			this->label12->TabIndex = 37;
			this->label12->Text = L"xmax";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(271, 175);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 38;
			this->textBox8->Text = L"0,015";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(396, 87);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(181, 13);
			this->label13->TabIndex = 39;
			this->label13->Text = L"Остановка счета при достижении:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(399, 106);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(109, 17);
			this->radioButton1->TabIndex = 40;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"нижней границы";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(514, 106);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(107, 17);
			this->radioButton2->TabIndex = 41;
			this->radioButton2->Text = L"правой границы";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(123, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 47);
			this->button2->TabIndex = 42;
			this->button2->Text = L"Нарисовать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1193, 588);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"MyForm";
			this->Text = L"KSR 1 RK2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 

		void sol(double x, double cnst1, double cnst2, double& u1, double& u2) {
			u1 = cnst2 * exp(-0.01 * x) - cnst1 * exp(-1000. * x);
			u2 = cnst2 * exp(-0.01 * x) + cnst1 * exp(-1000. * x);
		}

		void RK2_system(double x, double h, double u1, double u2, double& u1_out, double& u2_out)
		{
			u1_out = u1 + h * (((1. + h / 2. * 500.005) * (-500.005 * u1 + 499.995 * u2) + 499.995 * h / 2. * (499.995 * u1 - 500.005 * u2)) / ((1. + h / 2. * 500.005) * (1. + h / 2. * 500.005) - 499.995 * 499.995 * h * h / 4.));
			u2_out = u2 + h * ((499.995 * h / 2. * (-500.005 * u1 + 499.995 * u2) + (1. + h / 2. * 500.005) * (499.995 * u1 - 500.005 * u2)) / ((1. + h / 2. * 500.005) * (1. + h / 2. * 500.005) - 499.995 * 499.995 * h * h / 4.));
		}

		double mymax(double& a, double& b) {
			if (a >= b) return a;
			else return b;
		}

		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f4_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f5_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f6_list = gcnew ZedGraph::PointPairList();
		int i = 0;

	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Очистка предыдущих данных
		button1->Enabled = false;
		dataGridView1->Rows->Clear();
		f1_list->Clear();
		f2_list->Clear();
		f3_list->Clear();
		f4_list->Clear();
		f5_list->Clear();
		f6_list->Clear();

		double h = Convert::ToDouble(textBox3->Text); // Начальный шаг
		double u10 = Convert::ToDouble(textBox6->Text); // НУ 1
		double u20 = Convert::ToDouble(textBox7->Text); // НУ 2
		double eps = Convert::ToDouble(textBox5->Text); // Точность выхода на нижнюю границу
		double egr = Convert::ToDouble(textBox4->Text); // Точность выхода на правую границу
		double xmax = Convert::ToDouble(textBox8->Text); // xmax
		double ctrlGlobal = Convert::ToDouble(textBox1->Text); // Контроль глобальной погрешности

		double x = 0;
		double v1n = u10;
		double v2n = u20;
		double c2 = (u10 + u20) / 2.;
		double c1 = u20 - c2;
		//double c2 = 3;
		//double c1 = 10;
		double E1 = 0, E2 = 0;
		double u1 = 0, u2 = 0;

		// Добавление первой точки
		i = 0;
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Cells[0]->Value = i;
		dataGridView1->Rows[i]->Cells[1]->Value = x;
		dataGridView1->Rows[i]->Cells[2]->Value = u10;
		dataGridView1->Rows[i]->Cells[3]->Value = u20;  
		dataGridView1->Rows[i]->Cells[4]->Value = v1n;
		dataGridView1->Rows[i]->Cells[5]->Value = v2n;  
		dataGridView1->Rows[i]->Cells[6]->Value = u10 - v1n ;  
		dataGridView1->Rows[i]->Cells[7]->Value = u20 - v2n;  
		f1_list->Add(x, v1n);
		f2_list->Add(x, v2n);
		f3_list->Add(x, u10);
		f4_list->Add(x, u20);
		f5_list->Add(x, E1);
		f6_list->Add(x, E2);
		double xprev = x;
		x = x + h;
		i++;

		// Список точек
		if (radioButton1->Checked) {
			bool accept1 = 1;
			while (mymax(v1n, v2n) > eps)
			{

				RK2_system(xprev, h, v1n, v2n, v1n, v2n);
				sol(x,c1,c2, u1, u2);

				// Глобальная погрешность
				E1 = u1 - v1n;
				E2 = u2 - v2n;
				
				if (exp(-1000. * x) < ctrlGlobal && i % 100 == 0) h = h * 1.5;

				f1_list->Add(x, v1n);
				f2_list->Add(x, v2n);
				f3_list->Add(x, u1);
				f4_list->Add(x, u2);
				f5_list->Add(x, E1);
				f6_list->Add(x, E2);
				//Печать в таблицу
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = x;
				dataGridView1->Rows[i]->Cells[2]->Value = u1;
				dataGridView1->Rows[i]->Cells[3]->Value = u2;
				dataGridView1->Rows[i]->Cells[4]->Value = v1n;
				dataGridView1->Rows[i]->Cells[5]->Value = v2n;
				dataGridView1->Rows[i]->Cells[6]->Value = E1;
				dataGridView1->Rows[i]->Cells[7]->Value = E2;
				xprev = x;
				x = x + h;
				i++;

			}
		}
		else if (radioButton2->Checked)
		{
			bool end = 0;
			while (end==0)
			{

				RK2_system(xprev, h, v1n, v2n, v1n, v2n);
				sol(x, c1, c2, u1, u2);

				// Глобальная погрешность
				E1 = u1 - v1n;
				E2 = u2 - v2n;

				if (exp(-1000. * x) < ctrlGlobal && i%100 == 0) h = h * 1.5;

				f1_list->Add(x, v1n);
				f2_list->Add(x, v2n);
				f3_list->Add(x, u1);
				f4_list->Add(x, u2);
				f5_list->Add(x, E1);
				f6_list->Add(x, E2);
				//Печать в таблицу
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = x;
				dataGridView1->Rows[i]->Cells[2]->Value = u1;
				dataGridView1->Rows[i]->Cells[3]->Value = u2;
				dataGridView1->Rows[i]->Cells[4]->Value = v1n;
				dataGridView1->Rows[i]->Cells[5]->Value = v2n;
				dataGridView1->Rows[i]->Cells[6]->Value = E1;
				dataGridView1->Rows[i]->Cells[7]->Value = E2;
				if (x > xmax - egr && x < xmax) end = true;
				else {
					xprev = x;
					x = x + h;
					if (xprev < xmax - egr && x > xmax)
					{
						while (!(xprev + h < xmax - egr))
						{
							h = h / 2.0;
						}
						x = xprev + h;
					}
					i++;
				}
			}
		}
		button1->Enabled = true;
	}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked)
	{
		textBox4->Enabled = false;
		textBox8->Enabled = false;
	}
	else
	{
		textBox4->Enabled = true;
		textBox8->Enabled = true;
	}
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton2->Checked)
	{
		textBox5->Enabled = false;
	}
	else
	{
		textBox5->Enabled = true;
	}
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox4->Checked) checkBox5->Checked = false;
} 
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox5->Checked) checkBox4->Checked = false;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();
	if (checkBox2->Checked)
	{
		LineItem Curve1 = panel->AddCurve("E1(x)", f5_list, Color::Red, SymbolType::Plus);
		LineItem Curve2 = panel->AddCurve("E2(x)", f6_list, Color::Blue, SymbolType::Circle);
	}
	else {
		LineItem Curve1 = panel->AddCurve("v1(x)", f1_list, Color::Red, SymbolType::Plus);
		LineItem Curve2 = panel->AddCurve("v2(x)", f2_list, Color::Blue, SymbolType::Circle);
		if (checkBox1->Checked) {
			LineItem Curve3 = panel->AddCurve("u1(x)", f3_list, Color::Black, SymbolType::Square);
			LineItem Curve4 = panel->AddCurve("u2(x)", f4_list, Color::Brown, SymbolType::Star);
		}
	}

	// Устанавливаем интересующий нас интервал по оси X
	panel->XAxis->Scale->MinAuto = true;
	panel->XAxis->Scale->MaxAuto = true;
	panel->YAxis->Scale->MinAuto = true;
	panel->YAxis->Scale->MaxAuto = true;
	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();
}
};
}
