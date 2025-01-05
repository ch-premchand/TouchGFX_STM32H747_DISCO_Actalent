#ifndef UARTSETTINGSCREENVIEW_HPP
#define UARTSETTINGSCREENVIEW_HPP

#include <gui_generated/uartsettingscreen_screen/UartSettingScreenViewBase.hpp>
#include <gui/uartsettingscreen_screen/UartSettingScreenPresenter.hpp>

class UartSettingScreenView : public UartSettingScreenViewBase
{
public:
    UartSettingScreenView();
    virtual ~UartSettingScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // UARTSETTINGSCREENVIEW_HPP
