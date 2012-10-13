/*
    Long Beach Maker Society Build Day
    BUILD Series 101
    
    This program sets up pins 46 through 53 as digital inputs. When those pins see a logic value of "HIGH"
    they will output a tone.
*/

// #includes put the code thats in the file with same name where the #include would be
 #include "pitches.h"
 
 // The setup function runs exactly one time and never again. We typically put code here that
 // sets up pins, starts serial communications, or things that only need to be done once.
void setup(){
  for(int i = 46; i <= 53; i++)
    pinMode(i, INPUT);            // Set the pin "i" to a digital input.
}

/*
  The Loop block does exactly that. It loops forever!
*/
void loop(){ // From here
  if(digitalRead(46))        // If pin 46 reads a logic high
    tone(37, NOTE_A2);       // Then execute the next line
  else if(digitalRead(47))
    tone(37, NOTE_B2);
  else if(digitalRead(48))
    tone(37, NOTE_CS3);
  else if(digitalRead(49))
    tone(37, NOTE_D3);
  else if(digitalRead(50))
    tone(37, NOTE_E3);
  else if(digitalRead(51))
    tone(37, NOTE_F3);
  else if(digitalRead(52))
    tone(37, NOTE_G3);
  else if(digitalRead(53))
    tone(37, NOTE_A3);
  else                      // If no pins are high
      noTone(37);           // then turn off the tone
}// To here
