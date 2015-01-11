#pragma once
#include <iostream>
#include <cstddef>
#include "math.h"

namespace MathPad20 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			setMathSystem ();
			/*
			void setText (char data);
			void clearMath ();
			char mathSet (char ir);
			char setMathBox (char math);
			void mathMode (int mode);
			*/
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  mathBox;
	private: System::Windows::Forms::Button^  b1;
	private: System::Windows::Forms::Button^  b2;
	private: System::Windows::Forms::Button^  b3;
	private: System::Windows::Forms::Button^  b4;
	private: System::Windows::Forms::Button^  b5;
	private: System::Windows::Forms::Button^  b6;
	private: System::Windows::Forms::Button^  b7;
	private: System::Windows::Forms::Button^  b8;
	private: System::Windows::Forms::Button^  b9;
	private: System::Windows::Forms::Button^  b0;

	private: System::Windows::Forms::Button^  bminus;

	private: System::Windows::Forms::Button^  bplus;
	private: System::Windows::Forms::Button^  bdivision;
	private: System::Windows::Forms::Button^  bmulti;
	private: System::Windows::Forms::Button^  equalb;
	private: System::Windows::Forms::Button^  Clear;
	private: System::Windows::Forms::Button^  dotpoint;



	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;


	
	protected: 

	protected: 

	private:

void setText (int data)
{
	if (data == 99999999)
	{
	mathBox->Text = "0";
	//clearMath ();
	}
	else
	{
	mathBox->Text = Convert::ToString(data);
	//mathBox->Text = "1";
	}
}

	
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->mathBox = (gcnew System::Windows::Forms::TextBox());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b0 = (gcnew System::Windows::Forms::Button());
			this->bminus = (gcnew System::Windows::Forms::Button());
			this->bplus = (gcnew System::Windows::Forms::Button());
			this->bdivision = (gcnew System::Windows::Forms::Button());
			this->bmulti = (gcnew System::Windows::Forms::Button());
			this->equalb = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->dotpoint = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// mathBox
			// 
			this->mathBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->mathBox->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->mathBox->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mathBox->ForeColor = System::Drawing::Color::SkyBlue;
			this->mathBox->Location = System::Drawing::Point(-1, 0);
			this->mathBox->MaxLength = 8;
			this->mathBox->Name = L"mathBox";
			this->mathBox->ReadOnly = true;
			this->mathBox->Size = System::Drawing::Size(401, 74);
			this->mathBox->TabIndex = 0;
			this->mathBox->Text = L"0";
			this->mathBox->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// b1
			// 
			this->b1->Location = System::Drawing::Point(12, 126);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(75, 23);
			this->b1->TabIndex = 1;
			this->b1->Text = L"1";
			this->b1->UseVisualStyleBackColor = true;
			this->b1->Click += gcnew System::EventHandler(this, &Form1::b1_Click);
			// 
			// b2
			// 
			this->b2->Location = System::Drawing::Point(94, 126);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(75, 23);
			this->b2->TabIndex = 2;
			this->b2->Text = L"2";
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &Form1::b2_Click);
			// 
			// b3
			// 
			this->b3->Location = System::Drawing::Point(229, 126);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(75, 23);
			this->b3->TabIndex = 3;
			this->b3->Text = L"3";
			this->b3->UseVisualStyleBackColor = true;
			this->b3->Click += gcnew System::EventHandler(this, &Form1::b3_Click);
			// 
			// b4
			// 
			this->b4->Location = System::Drawing::Point(310, 126);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(75, 23);
			this->b4->TabIndex = 4;
			this->b4->Text = L"4";
			this->b4->UseVisualStyleBackColor = true;
			this->b4->Click += gcnew System::EventHandler(this, &Form1::b4_Click);
			// 
			// b5
			// 
			this->b5->Location = System::Drawing::Point(13, 155);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(75, 23);
			this->b5->TabIndex = 5;
			this->b5->Text = L"5";
			this->b5->UseVisualStyleBackColor = true;
			this->b5->Click += gcnew System::EventHandler(this, &Form1::b5_Click);
			// 
			// b6
			// 
			this->b6->Location = System::Drawing::Point(94, 155);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(75, 23);
			this->b6->TabIndex = 6;
			this->b6->Text = L"6";
			this->b6->UseVisualStyleBackColor = true;
			this->b6->Click += gcnew System::EventHandler(this, &Form1::b6_Click);
			// 
			// b7
			// 
			this->b7->Location = System::Drawing::Point(229, 155);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(75, 23);
			this->b7->TabIndex = 7;
			this->b7->Text = L"7";
			this->b7->UseVisualStyleBackColor = true;
			this->b7->Click += gcnew System::EventHandler(this, &Form1::b7_Click);
			// 
			// b8
			// 
			this->b8->Location = System::Drawing::Point(310, 155);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(75, 23);
			this->b8->TabIndex = 8;
			this->b8->Text = L"8";
			this->b8->UseVisualStyleBackColor = true;
			this->b8->Click += gcnew System::EventHandler(this, &Form1::b8_Click);
			// 
			// b9
			// 
			this->b9->Location = System::Drawing::Point(13, 184);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(75, 23);
			this->b9->TabIndex = 9;
			this->b9->Text = L"9";
			this->b9->UseVisualStyleBackColor = true;
			this->b9->Click += gcnew System::EventHandler(this, &Form1::b9_Click);
			// 
			// b0
			// 
			this->b0->Location = System::Drawing::Point(94, 184);
			this->b0->Name = L"b0";
			this->b0->Size = System::Drawing::Size(75, 23);
			this->b0->TabIndex = 10;
			this->b0->Text = L"0";
			this->b0->UseVisualStyleBackColor = true;
			this->b0->Click += gcnew System::EventHandler(this, &Form1::b0_Click);
			// 
			// bminus
			// 
			this->bminus->Location = System::Drawing::Point(229, 184);
			this->bminus->Name = L"bminus";
			this->bminus->Size = System::Drawing::Size(75, 23);
			this->bminus->TabIndex = 11;
			this->bminus->Text = L"-";
			this->bminus->UseVisualStyleBackColor = true;
			this->bminus->Click += gcnew System::EventHandler(this, &Form1::bminus_Click);
			// 
			// bplus
			// 
			this->bplus->Location = System::Drawing::Point(310, 184);
			this->bplus->Name = L"bplus";
			this->bplus->Size = System::Drawing::Size(75, 23);
			this->bplus->TabIndex = 12;
			this->bplus->Text = L"+";
			this->bplus->UseVisualStyleBackColor = true;
			this->bplus->Click += gcnew System::EventHandler(this, &Form1::bplus_Click);
			// 
			// bdivision
			// 
			this->bdivision->Location = System::Drawing::Point(310, 213);
			this->bdivision->Name = L"bdivision";
			this->bdivision->Size = System::Drawing::Size(75, 23);
			this->bdivision->TabIndex = 13;
			this->bdivision->Text = L"÷";
			this->bdivision->UseVisualStyleBackColor = true;
			this->bdivision->Click += gcnew System::EventHandler(this, &Form1::bdivision_Click);
			// 
			// bmulti
			// 
			this->bmulti->Location = System::Drawing::Point(94, 213);
			this->bmulti->Name = L"bmulti";
			this->bmulti->Size = System::Drawing::Size(75, 23);
			this->bmulti->TabIndex = 14;
			this->bmulti->Text = L"×";
			this->bmulti->UseVisualStyleBackColor = true;
			this->bmulti->Click += gcnew System::EventHandler(this, &Form1::bmulti_Click);
			// 
			// equalb
			// 
			this->equalb->Location = System::Drawing::Point(229, 213);
			this->equalb->Name = L"equalb";
			this->equalb->Size = System::Drawing::Size(75, 23);
			this->equalb->TabIndex = 15;
			this->equalb->Text = L"=";
			this->equalb->UseVisualStyleBackColor = true;
			this->equalb->Click += gcnew System::EventHandler(this, &Form1::equalb_Click);
			// 
			// Clear
			// 
			this->Clear->Location = System::Drawing::Point(12, 213);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(75, 23);
			this->Clear->TabIndex = 16;
			this->Clear->Text = L"Clear";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &Form1::Clear_Click);
			// 
			// dotpoint
			// 
			this->dotpoint->Location = System::Drawing::Point(12, 242);
			this->dotpoint->Name = L"dotpoint";
			this->dotpoint->Size = System::Drawing::Size(75, 23);
			this->dotpoint->TabIndex = 17;
			this->dotpoint->Text = L".[floats are fucked]";
			this->dotpoint->UseVisualStyleBackColor = true;
			this->dotpoint->Visible = false;
			this->dotpoint->Click += gcnew System::EventHandler(this, &Form1::dotpoint_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(94, 242);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(75, 23);
			this->button18->TabIndex = 18;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Visible = false;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(229, 242);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(75, 23);
			this->button19->TabIndex = 19;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Visible = false;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(310, 242);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(75, 23);
			this->button20->TabIndex = 20;
			this->button20->Text = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(397, 338);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->dotpoint);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->equalb);
			this->Controls->Add(this->bmulti);
			this->Controls->Add(this->bdivision);
			this->Controls->Add(this->bplus);
			this->Controls->Add(this->bminus);
			this->Controls->Add(this->b0);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->mathBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Atton\'s Mathpad";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

}
#pragma endregion
	// For some reason VS wants to keep these 2 functions so yeah leave them.


private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}


private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		//This is for the GUI so leave it alone and just ignore it.

}
// Do to the below as you wish.

// No need to edit anything below unless you need to. 


// Num 1
private: System::Void b1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setText(injectMath(1));
}

// Num 2
private: System::Void b2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setText(injectMath(2));
}

// Num 3
private: System::Void b3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setText(injectMath(3));
}

//Num 4
private: System::Void b4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setText(injectMath(4));
}

//Num 5
private: System::Void b5_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setText(injectMath(5));
}

//Num 6
private: System::Void b6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setText(injectMath(6));
}

//Num 7
private: System::Void b7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setText(injectMath(7));
}

//Num 8
private: System::Void b8_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setText(injectMath(8));
}

//Num 9
private: System::Void b9_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setText(injectMath(9));
}

//Num 0
private: System::Void b0_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setText(injectMath(0));
}

//Minus
private: System::Void bminus_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setMathOp('-');
}

//Plus
private: System::Void bplus_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setMathOp('+');
}

//Divide
private: System::Void bdivision_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setMathOp('/');
}

//Multi
private: System::Void bmulti_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setMathOp('*');
}

//Equals
private: System::Void equalb_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setText(process());
	clearMath();
}

//Clear
private: System::Void Clear_Click(System::Object^  sender, System::EventArgs^  e) 
{
	setText(0);
	clearMath();
}

// Point
private: System::Void dotpoint_Click(System::Object^  sender, System::EventArgs^  e) 
{
		setText(injectMath('.'));
}

};

}