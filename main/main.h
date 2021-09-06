#pragma once

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

class Main final{
    public:
        esp_err_t setup(void);
        void loop(void);
};