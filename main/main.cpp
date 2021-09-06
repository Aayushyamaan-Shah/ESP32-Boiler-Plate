#include <stdio.h>
#include "main.h"
#include "esp_log.h"

#define LOG_LEVEL_LOCAL ESP_LOG_VERBOSE
#define LOG_TAG "project-log-tag"

#define LED 2

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
	ESP_LOGI(LOG_TAG, "Setup started");
	
	gpio_pad_select_gpio(LED); 
    gpio_set_direction((gpio_num_t)LED, GPIO_MODE_OUTPUT);
 	
	ESP_LOGI(LOG_TAG, "Setup complete");
	return status;
}

void Main::loop(void){
	// The code that needs to loop
	gpio_set_level((gpio_num_t)LED, 1);
	vTaskDelay(1000/portTICK_PERIOD_MS);
	ESP_LOGI(LOG_TAG, "LED ON");
	gpio_set_level((gpio_num_t)LED, 0);
	ESP_LOGI(LOG_TAG, "LED OFF");
	vTaskDelay(1000/portTICK_PERIOD_MS);
}