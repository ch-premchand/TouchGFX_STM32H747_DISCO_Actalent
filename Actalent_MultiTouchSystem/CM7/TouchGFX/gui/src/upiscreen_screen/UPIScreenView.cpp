#include <gui/upiscreen_screen/UPIScreenView.hpp>
#include <touchgfx/Utils.hpp>
#include <cstdio>
UPIScreenView::UPIScreenView()
{
	keyboard.setPosition(80,16,380,300);
	add(keyboard);
	keyboard.setVisible(false);
	keyboard.invalidate();
}

void UPIScreenView::setupScreen()
{
    UPIScreenViewBase::setupScreen();
}

void UPIScreenView::tearDownScreen()
{
    UPIScreenViewBase::tearDownScreen();
}

void UPIScreenView::UpiClicked(){
	keyboard.setVisible(true);
	keyboard.invalidate();
	flexButtonOK.setVisible(true);
	flexButtonOK.invalidate();
	flexButtonExit.setVisible(true);
	flexButtonExit.invalidate();
	upimod=1;
	amtmod=0;
}

void UPIScreenView::AmountClicked(){
	keyboard.setVisible(true);
	keyboard.invalidate();
	flexButtonOK.setVisible(true);
	flexButtonOK.invalidate();
	flexButtonExit.setVisible(true);
	flexButtonExit.invalidate();
	upimod=0;
	amtmod=1;
}

void UPIScreenView::ExitClicked(){
	keyboard.setVisible(false);
	keyboard.invalidate();
	flexButtonOK.setVisible(false);
	flexButtonOK.invalidate();
	flexButtonExit.setVisible(false);
	flexButtonExit.invalidate();
	upimod=amtmod=0;
}

void UPIScreenView::GenerateClicked(){
	char res_buff[100];
	int i=0;
	do
	{
		upibuf[i] = (char) textAreaUpiBuffer[i];
		i++;
	}while (textAreaUpiBuffer[i]!=0);
	i=0;
	do
	{
		amtbuf[i] = (char) textAreaAmountBuffer[i];
		i++;
	}while (textAreaAmountBuffer[i]!=0);

	sprintf(res_buff, "upi://pay?pa=%s&am=%s&cu=INR", upibuf, amtbuf);

	 //touchgfx_printf(res_buff);
	//qrCode.convertStringToQRCode("upi://pay?pa=868912222@axl&am=100&cu=INR");
	qrCode.convertStringToQRCode(res_buff);
	qrCode.invalidate();

}

void UPIScreenView::OkClicked(){
	keyboard.setVisible(false);
	keyboard.invalidate();
	flexButtonOK.setVisible(false);
	flexButtonOK.invalidate();
	flexButtonExit.setVisible(false);
	flexButtonExit.invalidate();
	if(upimod){
		Unicode::strncpy(textAreaUpiBuffer,keyboard.getBuffer(), TEXTAREAUPI_SIZE);
		textAreaUpi.invalidate();
	}
	if(amtmod){
			Unicode::strncpy(textAreaAmountBuffer,keyboard.getBuffer(), TEXTAREAAMOUNT_SIZE);
			textAreaAmount.invalidate();
		}

	keyboard.clearBuffer();

}


