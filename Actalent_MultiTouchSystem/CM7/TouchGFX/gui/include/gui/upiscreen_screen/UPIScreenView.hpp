#ifndef UPISCREENVIEW_HPP
#define UPISCREENVIEW_HPP

#include <gui_generated/upiscreen_screen/UPIScreenViewBase.hpp>
#include <gui/upiscreen_screen/UPIScreenPresenter.hpp>

class UPIScreenView : public UPIScreenViewBase
{
public:
    UPIScreenView();
    virtual ~UPIScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // UPISCREENVIEW_HPP
