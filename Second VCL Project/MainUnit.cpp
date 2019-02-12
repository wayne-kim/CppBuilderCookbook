//---------------------------------------------------------------------------
#pragma hdrstop

#include "MainUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

using namespace std;
using namespace Vcl::Themes;

TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
    TForm1::SylesListRefresh();
}
//---------------------------------------------------------------------------
void TForm1::SylesListRefresh(void)
{
	Form1->ListBox1->Clear();
	for (UnicodeString stylename : TStyleManager::StyleNames )
	{
		Form1->ListBox1->Items->Add(stylename);
	}
}


void __fastcall TForm1::Button2Click(TObject *Sender)
{
	TStyleManager::SetStyle(ListBox1->Items->Strings[ListBox1->ItemIndex]);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if(OpenDialog1->Execute())
	{
		if(TStyleManager::IsValidStyle(OpenDialog1->FileName))
		{
			 TStyleManager::LoadFromFile(OpenDialog1->FileName);
			 TForm1::SylesListRefresh();
             ShowMessage("New VCL Style has been loaded");
		}
		else
		{
            ShowMessage("The file is not a valid VCL Style!");
        }
    }
}
//---------------------------------------------------------------------------
