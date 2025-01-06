#ifndef UARTSCREENVIEW_HPP
#define UARTSCREENVIEW_HPP

#include <gui_generated/uartscreen_screen/UartScreenViewBase.hpp>
#include <gui/uartscreen_screen/UartScreenPresenter.hpp>
#include <gui/common/CustomKeyboard.hpp>
class UartScreenView : public UartScreenViewBase
{
public:
    UartScreenView();
    virtual ~UartScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void NameClicked();
        virtual void OkClicked();
        virtual void exitClicked();
       virtual void SendClicked();
protected:
    CustomKeyboard keyboard;
    int namemode;
    char dataBuf[50];
    char namebuf[TEXTAREANAME_SIZE];
};

#endif // UARTSCREENVIEW_HPP
