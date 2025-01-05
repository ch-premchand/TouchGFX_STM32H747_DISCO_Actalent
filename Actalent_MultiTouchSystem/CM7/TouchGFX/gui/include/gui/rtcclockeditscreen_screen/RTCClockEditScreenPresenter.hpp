#ifndef RTCCLOCKEDITSCREENPRESENTER_HPP
#define RTCCLOCKEDITSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class RTCClockEditScreenView;

class RTCClockEditScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    RTCClockEditScreenPresenter(RTCClockEditScreenView& v);

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

    virtual ~RTCClockEditScreenPresenter() {}

private:
    RTCClockEditScreenPresenter();

    RTCClockEditScreenView& view;
};

#endif // RTCCLOCKEDITSCREENPRESENTER_HPP
