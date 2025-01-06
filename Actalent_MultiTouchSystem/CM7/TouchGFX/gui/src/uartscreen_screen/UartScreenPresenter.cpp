#include <gui/uartscreen_screen/UartScreenView.hpp>
#include <gui/uartscreen_screen/UartScreenPresenter.hpp>

UartScreenPresenter::UartScreenPresenter(UartScreenView& v)
    : view(v)
{

}

void UartScreenPresenter::activate()
{

}

void UartScreenPresenter::deactivate()
{

}

void UartScreenPresenter::sendData (char *data)
{
	model->sendData (data);
}
