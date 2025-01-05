#ifndef RTCCLOCKSCREENVIEW_HPP
#define RTCCLOCKSCREENVIEW_HPP

#include <gui_generated/rtcclockscreen_screen/RTCClockScreenViewBase.hpp>
#include <gui/rtcclockscreen_screen/RTCClockScreenPresenter.hpp>

class RTCClockScreenView : public RTCClockScreenViewBase
{
public:
    RTCClockScreenView();
    virtual ~RTCClockScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // RTCCLOCKSCREENVIEW_HPP
