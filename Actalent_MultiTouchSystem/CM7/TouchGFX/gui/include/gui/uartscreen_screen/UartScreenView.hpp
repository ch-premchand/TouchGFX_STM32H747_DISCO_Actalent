#ifndef UARTSCREENVIEW_HPP
#define UARTSCREENVIEW_HPP

#include <gui_generated/uartscreen_screen/UartScreenViewBase.hpp>
#include <gui/uartscreen_screen/UartScreenPresenter.hpp>

class UartScreenView : public UartScreenViewBase
{
public:
    UartScreenView();
    virtual ~UartScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // UARTSCREENVIEW_HPP
