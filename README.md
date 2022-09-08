### Features
- ~~[DEPRECATED] Micro:bit as a BLE connector with an Android GUI for easy control;~~
- Real-time bluetooth cart control;
- Easy to use bluetooth controller GUI application for Android 5+ (and perhaps iOS with MIT AI2 Companion);
- 4 movement directions with a speed slider;
- Wheels made out of Yogurt  cups;
- Low power consumption

# Eko Stojan


### Brief project description
This project is one of the things we (the authors) have done at Petnica Science Center (PSC). The idea was to make an H-bridge. The first thing that came to our mind was a BlueTooth controlled cart, but the project instructed for Bipolar transistors to be used. That limited us from using strong motors for movement, so this cart is, at the moment of typing, not 100% functional. Also, it's worth noting that our implementation of the H bridge is called "Ж-bridge", which is just an H-bridge with an additional branch.

### Hardware
Hardware used in this project mostly relies on thing easily found at PSC. Following is a list of components used.
|           **_Part_**          	| **_Quantity_** 	|
|:-----------------------------:	|:--------------:	|
|          Arduino UNO          	|        1       	|
|             HC-05             	|        1       	|
|           DC motors           	|        2       	|
|           9V battery          	|        1       	|
|           PNP-BC327           	|        3       	|
|           NPN-BC337           	|        3       	|
|        1K Ohm resistor        	|        7       	|
|        2K Ohm resistor        	|        1       	|
|          Yogurt cups          	|        4       	|
|         Wooden chassis        	|        1       	|
|                               	| DEPRECATED     	|
|         Micro:bit v1.*        	|        1       	|
| Home-made Micro:bit Connector 	|        1       	|


### Software
Software used for this project:

- ~~Micro:bit code editor  *for Micro:bit BLE code*~~
- Arduino IDE v2 beta *for Bluetooth with HC-05 and controlling DC motors*
- KiCad
![schematic image](https://github.com/petnica-stojan/Eko-Stojan/blob/main/Z-most.png)

## License
[MIT](https://choosealicense.com/licenses/mit/)

Authors: Stefan Jovanović, Sava Dimitrijević, Vukašin Kosijer
