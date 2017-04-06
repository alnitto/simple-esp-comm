# simple-esp-comm
here i am trying to control two leds connected to gpi0 and gpi02 pins of an esp which is being controlled from another esp
first consider LED PART ESP TO ESP ( code of this esp )
               first of all we have connected two led at gpi0 and gpi02 pins of this esp
               we need to turn on nd off these led 
               i have made this esp as station point as well as access point 
 WORKING 
        After programming the esp ,it works as stand alone AP 
        now we connect to this AP via our phone(wifi)
        then we open a browser we give url as 192.168.4.1/1/y which turns ON led 
        if we give url as 192.168.4.1/1/n which turns OFF the led 
        
 now we have above code working well and fine but here url is given by us we need it to be controlled by another esp so we programmed another one     
        
        
 CONTROL ESP ESP TO ESP( code for controlling esp connected to led's )
 this code is suppose to be providing appropriate url for turning on and off the leds connected another esp 
 but that dont works well
 this esp join to AP as shown in serial monitor
        
