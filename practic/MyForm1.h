#pragma once
#include <thread>
#include <vector>
#include <iostream>
#include "Vector/Vector.h"
using namespace std;


namespace practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	static vector<int> v;

	static void SortData(int n)
	{
		int max, maxi = 0, j = n, temp, count;
		for (n; n < 10  + j; n++)
		{
			count = 0;
			max = v[n];
			for (int i = n; i < 10 + j; i++)
			{
				if (v[i] > max)
				{
					max = v[i];
					maxi = i;
					count++;
				}
			}
			if (count == 0)
				continue;
			temp = v[n];
			v[n] = v[maxi];
			v[maxi] = temp;
		}

	}

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	public:
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 47);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Location = System::Drawing::Point(16, 228);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(724, 59);
			this->dataGridView1->TabIndex = 3;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Location = System::Drawing::Point(16, 336);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(724, 73);
			this->dataGridView2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(485, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Отсортировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(129, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Массив без сортировки";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 303);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(144, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Массив после сортировки ";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 421);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


	public:
		void FillData()
		{
			
			int count = 0, i = 0, value, l = 0;
			char* buffer = new char[300];  //буфер для хранения массива цифр
			char* buffer2 = new char[3];     //буфер для хранения текущей цифры
			FILE* f = fopen("numbers.txt", "r");      // открывает файл numbers.txt для чтения
			fgets(buffer, 300, f);            //записывает в буфер для хранения массива цифры из файла
			dataGridView1->ColumnCount = 100;        //задаёт количество столбцов для dataGridView
			rewind(f);         //перемещает каретку в начало файла
			while (!feof(f))     //пока не конец файла
			{
				if (buffer[count] == '\0')             
					break;
				if (buffer[count] == 32)   //если текущий символ пробел
				{
					i = 0;
					value = std::atoi(buffer2);     //перевод из символа в цифру
					v.push_back(value);      //помещение цифры в вектор
					dataGridView1->Rows[0]->Cells[l]->Value = v[l];       //помещение данной цифры в dataGridView
					l++;   //счётчик цифры
					count++;   //счётчик кол-ва символов перебранных в буфере
					for (int j = 0; j < 3; j++)   //обнуление буфера 2
						buffer2[j] = '\0';
					continue;
				}
				buffer2[i] = buffer[count];              //запись числа в буфер 2
				count++;
				i++;
			}
			fclose(f);    //закрытиен файла
			delete[] buffer;  //удаление динамического массива
			delete[] buffer2;   //удаление динамического массива
		}

		void SortInFile()
		{
			FILE* f = fopen("numbers.txt", "w");
			dataGridView2->ColumnCount = 100;    //выделяет 100 столбцов 
			for (int i = 0; i < 100; i++)
			{
				fprintf(f, "%d ", v[i]);   //запись в файл сортированного массива
				dataGridView2->Rows[0]->Cells[i]->Value = v[i];
			}
			fclose(f);
		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		thread th1(SortData, 0);
		thread th2(SortData, 10);
		thread th3(SortData, 20);
		thread th4(SortData, 30);
		thread th5(SortData, 40);
		thread th6(SortData, 50);
		thread th7(SortData, 60);
		thread th8(SortData, 70);
		thread th9(SortData, 80);
		thread th10(SortData, 90);
		th1.join();   //способ синхронизации
		th2.join();
		th3.join();
		th4.join();
		th5.join();
		th6.join();
		th7.join();
		th8.join();
		th9.join();
		th10.join();
		SortInFile();

	}
};
}
