/*
   _           _       _                  
  /_\  _ __ __| |_   _(_)_ __   ___       
 //_\\| '__/ _` | | | | | '_ \ / _ \      
/  _  \ | | (_| | |_| | | | | | (_) |     
\_/ \_/_|  \__,_|\__,_|_|_| |_|\___/      
                                          
 __                       _ _             
/ _\ __ _ _ __ ___  _ __ | (_)_ __   __ _ 
\ \ / _` | '_ ` _ \| '_ \| | | '_ \ / _` |
_\ \ (_| | | | | | | |_) | | | | | | (_| |
\__/\__,_|_| |_| |_| .__/|_|_|_| |_|\__, |
                   |_|              |___/ 
    ___                                   
   /   \_ __ _   _ _ __ ___               
  / /\ / '__| | | | '_ ` _ \              
 / /_//| |  | |_| | | | | | |             
/___,' |_|   \__,_|_| |_| |_|             
                                          
   ___          _                         
  / _ \__ _  __| |                        
 / /_)/ _` |/ _` |                        
/ ___/ (_| | (_| |                        
\/    \__,_|\__,_|                        
                                          
A BlogHoskins Monstrosity @ 2022
https://bloghoskins.blogspot.com/

Feel free to change/modify/update/break the code in any way you see fit.

You'll need the Mozzi library installed.

Most of this code is based on the Mozzi example sketch 'Piezo_SampleTrigger'

_________________________________
v1. Initial Release 25/06/2022

*Remember you'll need to create 
your own audio samples or drag 
in the .h files into the arduino 
sketch - and then update any name
changes in the code.  Guide will
be posted on the blog soon*
_________________________________

*/

#include <MozziGuts.h>
#include <Sample.h> // Sample template

#include "Kick8bit8hz.h"
#include "Clap8bit.h"

  
const char KNOB_PIN = 0;  // set the analog input pin for the knob
const char PIEZO_PIN = 3;  // set the analog input pin for the piezo
const int threshold = 80;  // threshold value to decide when the detected signal is a knock or not

// use: Sample <table_size, update_rate, interpolation > SampleName (wavetable)
Sample <KICK02_NUM_CELLS, AUDIO_RATE, INTERP_LINEAR> aSample(KICK02_DATA);
float recorded_pitch = (float) KICK02_SAMPLERATE / (float) KICK02_NUM_CELLS;

// use: Sample <table_size, update_rate, interpolation > SampleName (wavetable)
Sample <CLAP01_NUM_CELLS, AUDIO_RATE, INTERP_LINEAR> aSample1(CLAP01_DATA);
float recorded_pitch1 = (float) CLAP01_SAMPLERATE / (float) CLAP01_NUM_CELLS;

boolean triggered = false;

void setup(){
  //Serial.begin(9600); // for Teensy 3.1, beware printout can cause glitches
  //Serial.begin(115200); // set up the Serial output so we can look at the piezo values // set up the Serial output so we can look at the piezo values
  startMozzi(); // :))
}

void updateControl(){

  int sensorVal = digitalRead(2); // read the switch position value into a  variable
  if (sensorVal == HIGH) // If switch is set to high, run this portion of code
  {
    aSample.setTable(KICK02_DATA);
  }
  else  // If switch not set to high, run this portion of code instead
  {
    aSample.setTable(CLAP01_DATA);
    recorded_pitch = recorded_pitch1;
  }
  
  // read the knob
  int knob_value = mozziAnalogRead(KNOB_PIN); // value is 0-1023

  // map it to values between 0.1 and about double the recorded pitch
  float pitch = (recorded_pitch * (float) knob_value / 512.f) + 0.1f;

  // set the sample playback frequency
  aSample.setFreq(pitch);

  // read the piezo
  int piezo_value = mozziAnalogRead(PIEZO_PIN); // value is 0-1023

  // print the value to the Serial monitor for debugging
  Serial.print("piezo value = ");
  Serial.print(piezo_value);

// only trigger once each time the piezo goes over the threshold
  if (piezo_value>threshold) {
    if (!triggered){
      aSample.start();
      triggered = true;
    }
  }else{
    triggered = false;
  }

  Serial.println(); // next line
}


int updateAudio(){
  return aSample.next();
}


void loop(){
  audioHook();
}