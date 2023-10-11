#arduino

1. tiktak.ino
the image below shows the cirkut for the tiktak.ino code,
I have utilized an idea I found on the internet to differenciate the input based on different resistence values.
I ran out of pins on arduino board and decided to do it this way since using shift registers was too confusing for me personally. 


![image](https://github.com/tmwpwo/arduino/assets/111870494/fa792f1e-e057-424a-943e-d9594396bfb6)




2. led_matrix.ino
the image below shows the circut to efficiently control 9 diodes using only 6 pins. (multiplexing). 

we set up two arrays for rows and collumns. the row pins are connected to anodes (positive) of LEDs, while collumn pins are connected to cathodes (negative) of LEDs.
to light up a specific LED you set up one of the rows to HIGH and one of the collumns to LOW. This illuminates the LED at the intersection of the selected row and column. 
Basically LOW collumns are acting as a ground. 

PS: this would not work on rgb diodes. They have 3 separate anodes for each color. And connecting them in one row would cause color mixing. 


![image](https://github.com/tmwpwo/arduino/assets/111870494/dce7b960-caab-4784-aac7-ed88eb8dd7b5)
