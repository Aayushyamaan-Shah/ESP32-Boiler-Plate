# ESP-32-Boiler-Plate
This project is a boilerplate for developing ESP32 projects using ESP-IDF and VS Code

  > Note 1: You need to have installed [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) extension in your VS Code.

  > Note 2: Make sure that you have `ESP_IDF` environment variable (which leads to esp-idf folder) and path to XTENSA compiler _bin_ folder needs to be present on the `PATH`.

## How to use

1. Clone repository
```
git clone https://github.com/Aayushyamaan-Shah/ESP32-Boiler-Plate.git my-project
```

2. Go inside of project folder
```
cd project-location
```

3. Start Visual Studio Code
```
code .
```

## Set, Config, Build, Flash
```
idf.py set-target esp32
idf.py menuconfig
idf.py build
idf.py -p (PORT) flash
```

## Author
GitHub: [Aayushyamaan Shah](https://github.com/Aayushyamaan-Shah)

## License
[MIT](LICENSE)
