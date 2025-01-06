#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#ifndef SIMULATOR
#include "main.h"
#include "string.h"
extern "C"
{
	extern UART_HandleTypeDef huart1;
}
#endif
Model::Model() : modelListener(0)
{

}

void Model::tick()
{

}

void Model::sendData(char *data)
{
#ifndef SIMULATOR
	HAL_UART_Transmit(&huart1, (uint8_t *) data, strlen(data), 100);
#endif
}
