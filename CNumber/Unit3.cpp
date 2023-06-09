//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
CNumber::CNumber(n,nn,nnn){
I = n;
II = nn;
III = nnn;
}

int CNumber::max(){
	int m = 0;
	if(I>m){
	m = I;
	}
	if(II>m){
	m = II;
	}
	if(III>m){
	m = III;
	}
	return m ;
}
int CNumber::min(){
	int m = I+II+III+1;
	if(I<m){
	m = I;
	}
	if(II<m){
	m = II;
	}
	if(III<m){
	m = III;
	}
	return m;
}
int CNumber::pro(){
	int pro = (I+II+III) / 3;
	return pro;
}
int CNumber::cpares(){
	int c = 0;
	if(I % 2 == 0){
	c = c + 1;
	}
	if(II % 2 == 0){
	c = c + 1;
	}
	if(III % 2 == 0){
	c = c + 1;
	}
	return c;
}
int CNumber::cimpares(){
	int c = 0;
	if(I % 2 != 0){
	c = c + 1;
	}
	if(II % 2 != 0){
	c = c + 1;
	}
	if(III % 2 != 0){
	c = c + 1;
	}
	return c;
}













void __fastcall TForm3::Button1Click(TObject *Sender)
{
CNumber Numero(StrToInt(Edit6->Text),StrToInt(Edit7->Text),StrToInt(Edit8->Text));
Edit1->Text = Numero.max();
Edit2->Text = Numero.min();
Edit3->Text = Numero.pro();
Edit4->Text = Numero.cpares();
Edit5->Text = Numero.cimpares();
}
//---------------------------------------------------------------------------









