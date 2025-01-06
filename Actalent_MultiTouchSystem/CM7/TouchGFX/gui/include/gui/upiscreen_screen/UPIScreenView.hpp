#ifndef UPISCREENVIEW_HPP
#define UPISCREENVIEW_HPP

#include <gui_generated/upiscreen_screen/UPIScreenViewBase.hpp>
#include <gui/upiscreen_screen/UPIScreenPresenter.hpp>
#include <gui/common/CustomKeyboard.hpp>

class UPIScreenView : public UPIScreenViewBase
{
public:
    UPIScreenView();
    virtual ~UPIScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void UpiClicked();
        virtual void AmountClicked();
        virtual void GenerateClicked();
        virtual void OkClicked();
        virtual void ExitClicked();
protected:
    CustomKeyboard keyboard;
    bool upimod;
    bool amtmod;
    char upibuf[TEXTAREAUPI_SIZE];
    char amtbuf[TEXTAREAAMOUNT_SIZE];
};

#endif // UPISCREENVIEW_HPP
