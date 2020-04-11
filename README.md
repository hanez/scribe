# Scribe

A DIY small programmable NFC/MIFARE development board

## Schematic
![schematic](res/schematic.png)

## Firmware

You can create your own firmware for Scribe to accomplish your desired task.
The [test fw](firmwares/test/test.ino) can be used a template.


These are the firmwares I've written for my own tasks:
- [Write a dump on a MIFARE UID changeable tag](firmwares/write_dump_uidc/write_dump_uidc.ino)


### Requirements
- [MFRC522 lib](https://github.com/miguelbalboa/rfid)

## Assembly procedure

This is my assembly procedure:

- Solder wires to RC522 headers
- Place Arduino in ideal position, flipped around the header of the RC522
- Cut and strip wires to length
- Solder all wires except 3.3V
- Solder voltage divider resistors together
- Wrap VDD resistors leads connection with 3.3V wire
- Insert voltage divider through Arduino holes
- Solder voltage divider
- Solder 3.3V wire on VDD
- Bend LED legs to fit next to Arduino
- Solder LED
- Flash desired firmware

## Pictures
![front](res/front.jpg)
![rear](res/rear.jpg)
