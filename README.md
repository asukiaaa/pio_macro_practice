# pio_macro_practice

A project to practice macro for switching configuration of a program.

# Requirements

- PlatformIO
- Some Arduino board (This project is configured for [Leonardo](https://www.arduino.cc/en/Main/Arduino_BoardLeonardo) or [Pro Micro](https://www.sparkfun.com/products/12640))

# Usage

## With specifying DEVICE_ID

```
PLATFORMIO_BUILD_FLAGS="-D DEVICE_ID=\\\"a_device_id\\\"" pio run -t upload
```

## With activating debug print (and dummy DEVICE_ID)

```
PLATFORMIO_BUILD_FLAGS=-DDEBUG_PRINT pio run -t upload
```

or

```
PLATFORMIO_BUILD_FLAGS="-D DEBUG_PRINT" pio run -t upload
```

## With specifying DEVICE_ID and activating debug print

```
PLATFORMIO_BUILD_FLAGS="-D DEVICE_ID=\\\"a_device_id\\\" -D DEBUG_PRINT" pio run -t upload
```

# License

MIT

# References

- [Environment variables](https://docs.platformio.org/en/latest/envvars.html)
- [Build options](https://docs.platformio.org/en/latest/projectconf/section_env_build.html)
- [Defining variables on the command line breaks for strings.](https://github.com/platformio/platformio-core/issues/526)
