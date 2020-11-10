#pragma once
#include "vector.h"
#include <thread>
#include <iostream>
using namespace std;

namespace Practic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	protected:
	public: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;


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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->dataGridView1->Location = System::Drawing::Point(116, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1036, 47);
			this->dataGridView1->TabIndex = 3;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(116, 136);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(1036, 50);
			this->dataGridView2->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(113, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Не сортированный массив";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(116, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(140, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Отсортированный массив";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(473, 269);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Отсортировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1164, 352);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
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
			char* buffer = new char[300];
			char* buffer2 = new char[3];
			FILE* f = fopen("numbers.txt", "r");
			fgets(buffer, 300, f);
			dataGridView1->ColumnCount = 100;
			rewind(f);
			while (!feof(f))
			{
				if (buffer[count] == '\0')
					break;
				if (buffer[count] == 32)
				{
					i = 0;
					value = std::atoi(buffer2);
				//	array[l] = value;
					dataGridView1->Rows[0]->Cells[l]->Value = value;
					l++;
					count++;
					for (int j = 0; j < 3; j++)
						buffer2[j] = '\0';
					continue;
				}
				buffer2[i] = buffer[count];
				count++;
				i++;
			}
			fclose(f);
			delete[] buffer;
			delete[] buffer2;
		}

		void SortData(int n)
		{
			int min;
			for (n; n < 10; n++)
			{
				// В переменной smallestIndex хранится индекс наименьшего значения, которое мы нашли в этой итерации.
				// Начинаем с того, что наименьший элемент в этой итерации - это первый элемент (индекс 0)
			//	min = array[n];

				// Затем ищем элемент поменьше в остальной части массива
				for (int i = n + 1; i < 10; i++)
				{
					// Если мы нашли элемент, который меньше нашего наименьшего элемента,
				//	if (array[i] < array[min])
						// то запоминаем его
						min = i;
				}

				// smallestIndex теперь наименьший элемент. 
						// Меняем местами наше начальное наименьшее число с тем, которое мы обнаружили
			//	std::swap(array[n], array[min]);
			}
			
		}

		void SortInFile()
		{
			FILE* f = fopen("numbers.txt", "w");
			for (int i = 0; i < 50; i++)
			{
			//	fprintf(f, "%d ", array[i]);
			}
			fclose(f);
		}
	


		
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		/*SortData(0);
		SortData(10);
		SortData(20);
		SortData(30);
		SortData(40);
		SortInFile();*/

	}
};

	
}
