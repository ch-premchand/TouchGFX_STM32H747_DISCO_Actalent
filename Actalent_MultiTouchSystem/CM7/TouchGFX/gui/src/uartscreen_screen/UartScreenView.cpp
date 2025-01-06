#include <gui/uartscreen_screen/UartScreenView.hpp>
#include <cstdio>
#ifndef SIMULATOR
#include "stdio.h"
#include <cstring>
#include "string.h"
#endif
UartScreenView::UartScreenView()
{
	keyboard.setPosition (222,190,320,240);
	add(keyboard);
	keyboard.setVisible(false);
	keyboard.invalidate();
}

void UartScreenView::setupScreen()
{
    UartScreenViewBase::setupScreen();
}

void UartScreenView::tearDownScreen()
{
    UartScreenViewBase::tearDownScreen();
}

void UartScreenView::NameClicked()
{
	keyboard.setVisible(true); // show Keyboard
	keyboard.invalidate();
	flexButtonOK.setVisible(true);
	flexButtonOK.invalidate();
	flexButtonExit.setVisible(true);
	flexButtonExit.invalidate();
	flexButtonSend.setVisible(false); // hide send button
	flexButtonSend.invalidate();
	namemode = 1;
}

void UartScreenView::exitClicked()
{
	keyboard.setVisible(false); // hide Keyboard
	keyboard.invalidate();
	flexButtonOK.setVisible(false);
	flexButtonOK.invalidate();
	flexButtonExit.setVisible(false);
	flexButtonExit.invalidate();
	flexButtonSend.setVisible(true); // show send button
		flexButtonSend.invalidate();
	namemode = 0;
}
void UartScreenView::OkClicked()
{
	keyboard.setVisible(false); // hide Keyboard
	keyboard.invalidate();
	flexButtonOK.setVisible(false);
	flexButtonOK.invalidate();
	flexButtonExit.setVisible(false);
	flexButtonExit.invalidate();
	flexButtonSend.setVisible(true); // show send button
		flexButtonSend.invalidate();
	Unicode::strncpy(textAreaNameBuffer, keyboard.getBuffer(),TEXTAREANAME_SIZE);
	textAreaName.invalidate();

	//once the data is copied into text buffer , clear the keyboard
	keyboard.clearBuffer();
}

void UartScreenView::SendClicked()
{
	// convert the unicode chars to chars
	int i = 0;
	do
	{
		namebuf[i] = (char)textAreaNameBuffer[i];
		i++;
	}
	while(textAreaNameBuffer[i]!=0);

	sprintf(dataBuf, "Message:%s\r\n",namebuf);

	//send the data to the presenter
	presenter->sendData(dataBuf);

	//clear the buffers
	memset (namebuf,'\0', TEXTAREANAME_SIZE);
}

