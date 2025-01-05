#ifndef LEDCONTROLSCREENPRESENTER_HPP
#define LEDCONTROLSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class LedControlScreenView;

class LedControlScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    LedControlScreenPresenter(LedControlScreenView& v);

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

    virtual ~LedControlScreenPresenter() {}

private:
    LedControlScreenPresenter();

    LedControlScreenView& view;
};

#endif // LEDCONTROLSCREENPRESENTER_HPP
