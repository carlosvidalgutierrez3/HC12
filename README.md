# Test results
Using the default HC12 settings, and lowering the TX power to 14dB (default is 20dB), I got uninterrupted communication up to around 60m indoors.  

## Test set-up:
### Receiver:
- Arduino UNO
- Jumper wires connected to HC12
- Powered by DFRobot Solar Power Manager v1.1, with USB cable (5V) and a fully charged LiPo battery (I got 5.001V on the 5V pin of the Arduino)
- Default antenna on HC12

### Sender:
- Arduino UNO
- Jumper wires connected to HC12
- Powered by computer USB (I got 5.170V on the 5V pin of the Arduino)
- Default antenna on HC12

#### The range could be improved by:
- getting an original unit (I seem to be using an older/fake version. Bought [here](https://www.banggood.com/3Pcs-Geekcreit-HC-12-433MHz-SI4438-Wireless-Serial-Module-Wireless-Transceiver-Transmission-Serial-Communication-Data-Board-Remote-1000M-p-980287.html?rmmds=search&cur_warehouse=CN&p=9O13159455549201703N&custlinkid=933999) in 03/2022),
- better antenna
- Better power supply and decoupling capacitor between Vcc and GND
- Better circuit (instead of long jumper wires)
- Different environment. Many signals and metall construction