#ifndef RTCCLOCKSCREENPRESENTER_HPP
#define RTCCLOCKSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class RTCClockScreenView;

class RTCClockScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    RTCClockScreenPresenter(RTCClockScreenView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~RTCClockScreenPresenter() {}

private:
    RTCClockScreenPresenter();

    RTCClockScreenView& view;
};

#endif // RTCCLOCKSCREENPRESENTER_HPP
