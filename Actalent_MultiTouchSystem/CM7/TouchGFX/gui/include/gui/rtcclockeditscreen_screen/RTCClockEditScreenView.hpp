#ifndef RTCCLOCKEDITSCREENVIEW_HPP
#define RTCCLOCKEDITSCREENVIEW_HPP

#include <gui_generated/rtcclockeditscreen_screen/RTCClockEditScreenViewBase.hpp>
#include <gui/rtcclockeditscreen_screen/RTCClockEditScreenPresenter.hpp>

class RTCClockEditScreenView : public RTCClockEditScreenViewBase
{
public:
    RTCClockEditScreenView();
    virtual ~RTCClockEditScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // RTCCLOCKEDITSCREENVIEW_HPP
