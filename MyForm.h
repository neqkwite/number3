#pragma once
#include <math.h>

namespace praktikanumber3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 423);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(357, 28);
			this->button1->TabIndex = 0;
			this->button1->Text = L"��������  �������  �  ����������  �������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(879, 423);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 1;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(216, 322);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 2;
			this->textBox1->Enter += gcnew System::EventHandler(this, &MyForm::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(216, 357);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->Enter += gcnew System::EventHandler(this, &MyForm::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(216, 242);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 4;
			this->textBox3->Enter += gcnew System::EventHandler(this, &MyForm::textBox3_Enter);
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(216, 283);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(132, 22);
			this->textBox4->TabIndex = 5;
			this->textBox4->Enter += gcnew System::EventHandler(this, &MyForm::textBox4_Enter);
			this->textBox4->Leave += gcnew System::EventHandler(this, &MyForm::textBox4_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 251);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"������� ��������  XN=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 292);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 16);
			this->label2->TabIndex = 7;
			this->label2->Text = L"�������  ��������  X�=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 331);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(158, 16);
			this->label3->TabIndex = 8;
			this->label3->Text = L"������� �������� X�=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 361);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"������� �������� �=";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(627, 67);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(342, 209);
			this->dataGridView1->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(666, 15);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(192, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"������� �������� �������";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(541, 292);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(159, 16);
			this->label6->TabIndex = 13;
			this->label6->Text = L"������. ����. �������";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(737, 292);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(153, 16);
			this->label7->TabIndex = 14;
			this->label7->Text = L"�����. ����. �������";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(544, 342);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(132, 22);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(758, 342);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(132, 22);
			this->textBox6->TabIndex = 16;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 15);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(559, 220);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(992, 466);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"�������� ��������� �.� 23-�� �������3";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double xn, xk, xh, x, y, a, ymax, ymin, yt;
		int i;
		//�������� ����� ������ � ���������� textBox 
		if ((textBox1->Text != "") && (textBox2->Text != "") &&
			(textBox3->Text != "") && (textBox4->Text != ""))
		{
			//�������������� ��������� ������ � ��� double 
			xn = Convert::ToDouble(textBox3->Text);
			xk = Convert::ToDouble(textBox4->Text);
			xh = Convert::ToDouble(textBox1->Text);
			a = Convert::ToDouble(textBox2->Text);
			//������� �������� ������� 
			dataGridView1->Columns->Clear();
			//�������� ���� �������� � ������� 
			dataGridView1->ColumnCount = 2;
			//�������� � ������� ����� 
			dataGridView1->Rows->Add(ceil((xk - xn) / xh) + 1);
			//��������� � ������� ������ ������� � ������ ������ ����� �ջ, �� ������ ����� �ӻ
			dataGridView1->Columns[0]->Name = "  X";
			dataGridView1->Columns[1]->Name = " Y";

			i = 0.23;
			x = xn;
			ymax = 7.4; ymin = -2.2;
			while (x <= xk)
			{
				if (x <= 0) { y = pow(sin(pow(x,3)), 2 ) ; 
				}
				else {
					if (x <= a) { y = pow((6*x-pow(x,2)+1),1/5); }
					else
					{
						y = sin(x- pow(2.71828182845904,-x));
					}
				}
				//��������� � ������ ������� �������� ��������� � 

				dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x);
				//���������� yt ����������� ����������� �� ���� ������ ����� ������� �������� �
				yt = ceil(y * 100) / 100;
				//����� �� ������ ������� ������� �������� ������� � 
				dataGridView1->Rows[i]->Cells[1]->Value = Convert::ToString(yt);
				//������� ������������ � ����������� �������� � ��������� �� ���� ������ ����� �������


				if (y > ymax) { ymax = ceil(y * 100) / 100; }
				if (y < ymin) { ymin = ceil(y * 100) / 100; }
				x += xh;
				i++;
			}
			//������� � ���������� textbox ������������ � ����������� �������� �������
			textBox5->Text = Convert::ToString(ymax);
			textBox6->Text = Convert::ToString(ymin);
		}
		else {
			MessageBox::Show("���������,  ����������,  ������",
				"������ ����� ������",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation
			);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
		int l, t, k; bool a = true; String^ str; str = textBox3->Text;
		l = str->Length;
		t = 0;
		k = 0;
		if (str[t] == '-') { t++; }
		if (str[t] == ',') { a = false; }
		while (t < l)
		{
			if (str[t] == ',')
			{
				a = false;

			}
			t++;
		}
		if (a == false)
		{
			MessageBox::Show("�������� XN �� �������� ������", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			this->textBox3->Focus();
		}
	}
	private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
		int l, t, k; bool a = true; String^ str; str = textBox4->Text;
		l = str->Length;
		t = 0;
		k = 0;
		if (str[t] == '-') { t++; }
		if (str[t] == ',') { a = false; }
		while (t < l)
		{
			if (str[t] == ',')
			{
				a = false;
			}
			t++;
		}
		if (a == false)
		{
			MessageBox::Show("�������� XK �� �������� ������", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			this->textBox4->Focus();
		}
	}
	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		int l, t, k; bool a = true; String^ str; str = textBox1->Text;
		l = str->Length;
		t = 0;
		k = 0;
		if (str[t] == '-') { t++; }
		if (str[t] == ',') { a = false; }
		while (t < l)
		{
			if (str[t] == ',')
			{
				a = false;
			}
			t++;
		}
		if (a == false)
		{
			MessageBox::Show("�������� XH �� �������� ������", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			this->textBox1->Focus();
		}
	}
	private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		int l, t, k; bool a = true; String^ str; str = textBox2->Text;
		l = str->Length;
		t = 0;
		k = 0;
		while (t < l)
		{
			if (str[t] == '-') { t++; }
			if (str[t] == ',') { a = false; }

			if (str[t] == ',')
			{
				a = false;
			}
			t++;
		}
		if (a == false)
		{
			MessageBox::Show("�������� a �� �������� ������", "������ ����� ������", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			this->textBox2->Focus();
		}
	}
	private: System::Void textBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
		textBox5->Text = "";
		textBox6->Text = "";
	}
	private: System::Void textBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
		textBox5->Text = "";
		textBox6->Text = "";
	}
	private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		textBox5->Text = "";
		textBox6->Text = "";
	}
	private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
		textBox5->Text = "";
		textBox6->Text = "";
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
