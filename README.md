# rekf-localization
RSSI based localization using Robust Extended Kalman Filter
This is the alpha release version for Localisation of Mote using REKF.

Requirement: - TinyOS v1.1.5
             - arm c cross compiler
             
-------- Preparation for motes -----------

1. Install sender (Send.nc) to the motes that will be localized
   cd Send/ 
   make mica2 install.[nodeid]
2. Install receive (Receive.nc) to gateway mote.
   cd Receive/
   make mica2 install install.0
   
------------------------------------------
 

-------- Preparation for stargate --------

1. compile the serial forwarder and serial listen for arm version
   which is available in TinyOS v1.1.5 
2. load them into stargate.
------------------------------------------


------ localisation process -------------

1. power up all mote that will be localized.
2. put the gateway mote into stargate.
3. check if it receive signal strength using serial forwarder 
   and serial listen.
4. collect more than 1800 sample. 
   save that sample into output.txt
5. run ./collect.sh to get the estimation.
-------------------------------------------
