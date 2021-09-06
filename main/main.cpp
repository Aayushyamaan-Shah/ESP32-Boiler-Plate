#include <stdio.h>
#include "main.h"
#include "esp_log.h"

#define LOG_LEVEL_LOCAL ESP_LOG_VERBOSE
#define LOG_TAG "project-log-tag"

#define LED1 19
#define LED2 18

static Main runner;

extern "C" void app_main(void) {
	ESP_ERROR_CHECK(runner.setup());
	while(true){
		runner.loop();
	}
}

esp_err_t Main::setup(void){
	// The setup code
	esp_err_t status{ESP_OK};
	ESP_LOGI(LOG_TAG, "Setup Complete");
	gpio_pad_select_gpio(LED1); 
    gpio_set_direction((gpio_num_t)LED1, GPIO_MODE_OUTPUT);
    gpio_pad_select_gpio(LED2); 
    gpio_set_direction((gpio_num_t)LED2, GPIO_MODE_OUTPUT);
 	ESP_LOGI(LOG_TAG, "Blinking");

	return status;
}

void Main::loop(void){
	// The code that needs to loop
	gpio_set_level((gpio_num_t)LED2, 0);
	gpio_set_level((gpio_num_t)LED1, 1);
	vTaskDelay(100);
	gpio_set_level((gpio_num_t)LED1, 0);
	gpio_set_level((gpio_num_t)LED2, 1);
	vTaskDelay(100);
}