/*
SparkFun Inventor's Kit
Example sketch 11

BUZZER

  Use the buzzer to play a song!

  The buzzer in your Inventor's Kit is an electromechanical
  component you can use to make noise. Inside the buzzer is a
  coil of wire and a small magnet. When current flows through 
  the coil, it becomes magnetized and pulls towards the magnet,
  creating a tiny "click". When you do this thousands of times
  per second, you create tones.
  
  The Arduino has a built-in command called tone() which clicks
  the buzzer at a certain frequency. This sketch knows the
  frequencies of the common notes, allowing you to create songs.
  We're never going to let you down!

Hardware connections:

  The buzzer has two pins. One is positive and one is negative.
  The postitive pin is marked by a "+" symbol on both the top
  and bottom of the buzzer.
  
  Connect the positive pin to Arduino digital pin 9.
  (Note that this must be a PWM pin.)
  Connect the negative pin to GND.
  
  Tip: if the buzzer doesn't fit into the breadboard easily,
  try rotating it slightly to fit into diagonal holes.

This sketch was written by SparkFun Electronics,
with lots of help from the Arduino community.
(This sketch was originally developed by D. Cuartielles for K3)
This code is completely free for any use.
Visit http://learn.sparkfun.com/products/2 for SIK information.
Visit http://www.arduino.cc to learn about the Arduino.

Version 2.0 6/2012 MDG
*/

/*
This sketch uses the buzzer to play songs.
The Arduino's tone() command will play notes of a given frequency.
We'll provide a function that takes in note characters (a-g),
and returns the corresponding frequency from this table:

  note 	frequency
  c     262 Hz
  d     294 Hz
  e     330 Hz
  f     349 Hz
  g     392 Hz
  a     440 Hz
  b     494 Hz
  C     523 Hz

For more information, see http://arduino.cc/en/Tutorial/Tone
*/
  
const int buzzerPin = 9;

// We'll set up an array with the notes we want to play
// change these values to make different songs!

// Length must equal the total number of notes and spaces 




// Notes is an array of text characters corresponding to the notes
// in your song. A space represents a rest (no tone)

char notes[] = "aacagacagaaaacagacaga"; // a space represents a rest

// Beats is an array of values for each note and rest.
// A "1" represents a quarter-note, 2 a half-note, etc.
// Don't forget that the rests (spaces) need a length as well.

int beats[] = {1,3,3,3,1,3,3,3,1,3,3,3,1,3,3,3,1,3,3,3,1,3,3,3,4,4,6,6,8,8};

// The tempo is how fast to play the song.
// To make the song play faster, decrease this value.

int tempo = 300;
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);


const int songLength = 16001;
void setup() 
{
  pinMode(buzzerPin, OUTPUT);
   lcd.begin(16, 2);
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("   Mario Theme");
}


void loop() 
{
  
        tone(9,330,100);delay(100);
        tone(9,330,100);delay(300);
        tone(9,330,100);delay(300);
        tone(9,262,100);delay(100);
        tone(9,330,100);delay(300);
        tone(9,392,100);delay(700);
        tone(9,196,100);delay(700);
        tone(9,262,300);delay(300);
        tone(9,196,300);delay(300);
        tone(9,164,300);delay(300);
        tone(9,220,300);delay(100);
        tone(9,246,100);delay(300);
        tone(9,233,200);
        tone(9,220,100);delay(300);
        tone(9,196,100);delay(150);
        tone(9,330,100);delay(150);
        tone(9,392,100);delay(150);
        tone(9,440,100);delay(300);
        tone(9,349,100);delay(100);
        tone(9,392,100);delay(300);
        tone(9,330,100);delay(300);
        tone(9,262,100);delay(100);
        tone(9,294,100);delay(100);
        tone(9,247,100);delay(500);
        tone(9,262,300);delay(300);
        tone(9,196,300);delay(300);
        tone(9,164,300);delay(300);
        tone(9,220,300);delay(100);
        tone(9,246,100);delay(300);
        tone(9,233,200);
        tone(9,220,100);delay(300);
        tone(9,196,100);delay(150);
        tone(9,330,100);delay(150);
        tone(9,392,100);delay(150);
        tone(9,440,100);delay(300);
        tone(9,349,100);delay(100);
        tone(9,392,100);delay(300);
        tone(9,330,100);delay(300);
        tone(9,262,100);delay(100);
        tone(9,294,100);delay(100);
        tone(9,247,100);delay(900);
        tone(9,392,100);delay(100);
        tone(9,370,100);delay(100);
        tone(9,349,100);delay(100);
        tone(9,311,100);delay(300);
        tone(9,330,100);delay(300);
        tone(9,207,100);delay(100);
        tone(9,220,100);delay(100);
        tone(9,262,100);delay(300);
        tone(9,220,100);delay(100);
        tone(9,262,100);delay(100);
        tone(9,294,100);delay(500);
        tone(9,392,100);delay(100);
        tone(9,370,100);delay(100);
        tone(9,349,100);delay(100);
        tone(9,311,100);delay(300);
        tone(9,330,100);delay(300);
        tone(9,523,100);delay(300);
        tone(9,523,100);delay(100);
        tone(9,523,100);delay(1100);
        tone(9,392,100);delay(100);
        tone(9,370,100);delay(100);
        tone(9,349,100);delay(100);
        tone(9,311,100);delay(300);
        tone(9,330,100);delay(300);
        tone(9,207,100);delay(100);
        tone(9,220,100);delay(100);
        tone(9,262,100);delay(300);
        tone(9,220,100);delay(100);
        tone(9,262,100);delay(100);
        tone(9,294,100);delay(500);
        tone(9,311,300);delay(300);
        tone(9,296,300);delay(300);
        tone(9,262,300);delay(1300);
        tone(9,262,100);delay(100);
        tone(9,262,100);delay(300);
        tone(9,262,100);delay(300);
        tone(9,262,100);delay(100);
        tone(9,294,100);delay(300);
        tone(9,330,200);delay(50);
        tone(9,262,200);delay(50);
        tone(9,220,200);delay(50);
        tone(9,196,100);delay(700);
        tone(9,262,100);delay(100);
        tone(9,262,100);delay(300);
        tone(9,262,100);delay(300);
        tone(9,262,100);delay(100);
        tone(9,294,100);delay(100);
        tone(9,330,100);delay(700);
        tone(9,440,100);delay(300);
        tone(9,392,100);delay(500);
        tone(9,262,100);delay(100);
        tone(9,262,100);delay(300);
        tone(9,262,100);delay(300);
        tone(9,262,100);delay(100);
        tone(9,294,100);delay(300);
        tone(9,330,200);delay(50);
        tone(9,262,200);delay(50);
        tone(9,220,200);delay(50);
        tone(9,196,100);delay(700);
        //Intro
        tone(9,330,100);delay(100);
        tone(9,330,100);delay(300);
        tone(9,330,100);delay(300);
        tone(9,262,100);delay(100);
        tone(9,330,100);delay(300);
        tone(9,392,100);delay(700);
        tone(9,196,100);delay(700);
        tone(9,196,100);delay(125);
        tone(9,262,100);delay(125);
        tone(9,330,100);delay(125);
        tone(9,392,100);delay(125);
        tone(9,523,100);delay(125);
        tone(9,660,100);delay(125);
        tone(9,784,100);delay(575);
        tone(9,660,100);delay(575);
        tone(9,207,100);delay(125);
        tone(9,262,100);delay(125);
        tone(9,311,100);delay(125);
        tone(9,415,100);delay(125);
        tone(9,523,100);delay(125);
        tone(9,622,100);delay(125);
        tone(9,830,100);delay(575);
        tone(9,622,100);delay(575);
        tone(9,233,100);delay(125);
        tone(9,294,100);delay(125);
        tone(9,349,100);delay(125);
        tone(9,466,100);delay(125);
        tone(9,587,100);delay(125);
        tone(9,698,100);delay(125);
        tone(9,932,100);delay(575);
        tone(9,932,100);delay(125);
        tone(9,932,100);delay(125);
        tone(9,932,100);delay(125);
        tone(9,1046,675);
 // We only want to play the song once, so we'll pause forever:
  
  lcd.setCursor(0,1);
    while(true)
    {
      int y = 0;
      for (int x=0; x<16; x++)
      {     

          
          
          lcd.clear();
          lcd.setCursor(x,x%2);
          lcd.print("D");
          lcd.setCursor(x+1,(x+1)%2);
          lcd.print("O");
          lcd.setCursor(x+2,(x+2)%2);
          lcd.print("N");
          lcd.setCursor(x+3,(x+3)%2); //18
          lcd.print("E");
          
          if (x>14)
          {
          lcd.setCursor(x-15,(x-15)%2); 
          lcd.print("O");
          }   
          if (x>13)
          {
          lcd.setCursor(x-14,(x-14)%2); 
          lcd.print("N");
          }   
          if (x>12)
          {
          lcd.setCursor(x-13,(x-13)%2); 
          lcd.print("E");
          }
          
        delay(750);
        
      }// end of x for  
    }//end of while
    
    
 
  // If you'd like your song to play over and over,
  // remove the above statement
}


int frequency(char note) 
{
  // This function takes a note character (a-g), and returns the
  // corresponding frequency in Hz for the tone() function.
  
  int i;
  const int numNotes = 8;  // number of notes we're storing
  
  // The following arrays hold the note characters and their
  // corresponding frequencies. The last "C" note is uppercase
  // to separate it from the first lowercase "c". If you want to
  // add more notes, you'll need to use unique characters.

  // For the "char" (character) type, we put single characters
  // in single quotes.

  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C', 'A' };
  int frequencies[] = {262, 294, 330, 349, 392, 440, 494, 523};
  
  // Now we'll search through the letters in the array, and if
  // we find it, we'll return the frequency for that note.
  
  for (i = 0; i < numNotes; i++)  // Step through the notes
  {
    if (names[i] == note)         // Is this the one?
    {
      return(frequencies[i]);     // Yes! Return the frequency
    }
  }
  return(0);  // We looked through everything and didn't find it,
              // but we still need to return a value, so return 0.
}

