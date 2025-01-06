#ifndef UARTSCREENPRESENTER_HPP
#define UARTSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class UartScreenView;

class UartScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    UartScreenPresenter(UartScreenView& v);

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

    virtual ~UartScreenPresenter() {}
    virtual void sendData(char *data);

private:
    UartScreenPresenter();

    UartScreenView& view;
};

#endif // UARTSCREENPRESENTER_HPP
