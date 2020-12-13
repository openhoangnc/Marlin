%UserProfile%\.platformio\packages\tool-avrdude\avrdude ^
    -v -p atmega1284p -C %UserProfile%\.platformio\packages\tool-avrdude\avrdude.conf ^
    -c arduino -b 115200 -D -P "COM8" ^
    -U flash:w:firmware.hex:i
