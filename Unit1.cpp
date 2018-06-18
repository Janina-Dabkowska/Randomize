//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
 int liczbaUczniow, numerek;
void __fastcall TForm1::Button1Click(TObject *Sender)
{  if(Edit1->Text!="")
        {
        liczbaUczniow=Edit1->Text.ToInt();
        randomize();
        numerek=random(liczbaUczniow)+1;
         Label3->Caption="WYLOSOWANO !";
         Label4->Caption=IntToStr(numerek);
         Label3->Visible=true;

         Label4->Visible=true;

        }
}
//---------------------------------------------------------------------------
