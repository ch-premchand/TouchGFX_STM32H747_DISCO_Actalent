#ifndef LEDCONTROLSCREENVIEW_HPP
#define LEDCONTROLSCREENVIEW_HPP

#include <gui_generated/ledcontrolscreen_screen/LedControlScreenViewBase.hpp>
#include <gui/ledcontrolscreen_screen/LedControlScreenPresenter.hpp>

class LedControlScreenView : public LedControlScreenViewBase
{
public:
    LedControlScreenView();
    virtual ~LedControlScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // LEDCONTROLSCREENVIEW_HPP
