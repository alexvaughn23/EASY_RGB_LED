//Define the Pins for Each Color of the LED
#define LED1RED    11
#define LED1GREEN  10
#define LED1BLUE   9

#define LED2RED    8
#define LED2GREEN  7
#define LED2BLUE   6

#define LED3RED    5
#define LED3GREEN  4
#define LED3BLUE   3

//#define LED4RED   0
//#define LED4GREEN 0
//#define LED4BLUE  0



//You may fine tune these colors as you see fit.
//However DO NOT Rename them.
#define Off 0
byte OFF[3] = {0, 0, 0};
#define Red 1
byte RED[3] = {255, 0, 0};
#define Green 2
byte GREEN[3] = {0, 255, 0};
#define Blue 3
byte BLUE[3] = {0, 0, 255};
#define Yellow 4
byte YELLOW[3] = {255, 50, 0};
#define White 5
byte WHITE[3] = {255, 75, 50};
#define Purple 6
byte PURPLE[3] = {255, 0, 50};
#define Cyan 7
byte CYAN[3] = {0, 255, 150};
#define Orange 8
byte ORANGE[3] = {255, 10, 0};



//Add Other Colors Here
//Be sure to Give it a Unique Color Number (ex. 9)
//#define ColorName 9
//byte COLORNAME[3] = {ColorValue1, ColorValue2, ColorValue3};

//CHANGE TEST TO TRY OUT A NEW COLOR BEFORE SETTLING
#define Test 20
byte TEST[3] = {255, 75, 50};



void setup() {
  pinMode(LED1RED, OUTPUT);
  pinMode(LED1GREEN, OUTPUT);
  pinMode(LED1BLUE, OUTPUT);
  pinMode(LED2RED, OUTPUT);
  pinMode(LED2GREEN, OUTPUT);
  pinMode(LED2BLUE, OUTPUT);
  pinMode(LED3RED, OUTPUT);
  pinMode(LED3GREEN, OUTPUT);
  pinMode(LED3BLUE, OUTPUT);
  //pinMode(LED4RED, OUTPUT);
  //pinMode(LED4GREEN, OUTPUT);
  //pinMode(LED4BLUE, OUTPUT);

  /***************COLOR PROPERTIES***********/
  /*
     Color Types:
     Off
     Red
     Green
     Blue
     Yellow
     White
     Purple
     Cyan
     Orange
     Test

  */

  //Example Code
  //ColorExecute(LED#, COLOR);
  ColorExecute(1, Green);
  ColorExecute(2, Purple);
  ColorExecute(3, Cyan);
  delay(500);
  ColorExecute(1, Blue);
  ColorExecute(2, Blue);
  ColorExecute(3, Blue);
  delay(500);
  ColorExecute(1, Off);
  ColorExecute(2, Off);
  ColorExecute(3, Off);
  delay(2000);

  ColorExecute(1, Test);
  delay(2000);
  ColorExecute(1, Off);
}



//You can put the ColorExecute function anywhere in your code.
//Ideally somewhere near the bottom as it gets pretty long...

int ColorExecute (byte LEDSelect, byte ColorSelect) {
  //**************************LED 1********************//
  if (LEDSelect == 1) {
    if (ColorSelect == Off) {
      analogWrite(LED1RED, OFF[0]); analogWrite(LED1GREEN, OFF[1]); analogWrite(LED1BLUE, OFF[2]);
    }
    if (ColorSelect == Red) {
      analogWrite(LED1RED, RED[0]); analogWrite(LED1GREEN, RED[1]); analogWrite(LED1BLUE, RED[2]);
    }
    if (ColorSelect == Green) {
      analogWrite(LED1RED, GREEN[0]); analogWrite(LED1GREEN, GREEN[1]); analogWrite(LED1BLUE, GREEN[2]);
    }
    if (ColorSelect == Blue) {
      analogWrite(LED1RED, BLUE[0]); analogWrite(LED1GREEN, BLUE[1]); analogWrite(LED1BLUE, BLUE[2]);
    }
    if (ColorSelect == Yellow) {
      analogWrite(LED1RED, YELLOW[0]); analogWrite(LED1GREEN, YELLOW[1]); analogWrite(LED1BLUE, YELLOW[2]);
    }
    if (ColorSelect == White) {
      analogWrite(LED1RED, WHITE[0]); analogWrite(LED1GREEN, WHITE[1]); analogWrite(LED1BLUE, WHITE[2]);
    }
    if (ColorSelect == Purple) {
      analogWrite(LED1RED, PURPLE[0]); analogWrite(LED1GREEN, PURPLE[1]); analogWrite(LED1BLUE, PURPLE[2]);
    }
    if (ColorSelect == Cyan) {
      analogWrite(LED1RED, CYAN[0]); analogWrite(LED1GREEN, CYAN[1]); analogWrite(LED1BLUE, CYAN[2]);
    }
    if (ColorSelect == Orange) {
      analogWrite(LED1RED, ORANGE[0]); analogWrite(LED1GREEN, ORANGE[1]); analogWrite(LED1BLUE, ORANGE[2]);
    }
    if (ColorSelect == Test) {
      analogWrite(LED1RED, TEST[0]); analogWrite(LED1GREEN, TEST[1]); analogWrite(LED1BLUE, TEST[2]);
    }
  }

  //**************************LED 2********************//
  if (LEDSelect == 2) {
    if (ColorSelect == Off) {
      analogWrite(LED2RED, OFF[0]); analogWrite(LED2GREEN, OFF[1]); analogWrite(LED2BLUE, OFF[2]);
    }
    if (ColorSelect == Red) {
      analogWrite(LED2RED, RED[0]); analogWrite(LED2GREEN, RED[1]); analogWrite(LED2BLUE, RED[2]);
    }
    if (ColorSelect == Green) {
      analogWrite(LED2RED, GREEN[0]); analogWrite(LED2GREEN, GREEN[1]); analogWrite(LED2BLUE, GREEN[2]);
    }
    if (ColorSelect == Blue) {
      analogWrite(LED2RED, BLUE[0]); analogWrite(LED2GREEN, BLUE[1]); analogWrite(LED2BLUE, BLUE[2]);
    }

    if (ColorSelect == Yellow) {
      analogWrite(LED2RED, YELLOW[0]); analogWrite(LED2GREEN, YELLOW[1]); analogWrite(LED2BLUE, YELLOW[2]);
    }

    if (ColorSelect == White) {
      analogWrite(LED2RED, WHITE[0]); analogWrite(LED2GREEN, WHITE[1]); analogWrite(LED2BLUE, WHITE[2]);
    }

    if (ColorSelect == Purple) {
      analogWrite(LED2RED, PURPLE[0]); analogWrite(LED2GREEN, PURPLE[1]); analogWrite(LED2BLUE, PURPLE[2]);
    }
    if (ColorSelect == Cyan) {
      analogWrite(LED2RED, CYAN[0]); analogWrite(LED2GREEN, CYAN[1]); analogWrite(LED2BLUE, CYAN[2]);
    }
    if (ColorSelect == Orange) {
      analogWrite(LED2RED, ORANGE[0]); analogWrite(LED2GREEN, ORANGE[1]); analogWrite(LED2BLUE, ORANGE[2]);
    }

    if (ColorSelect == Test) {
      analogWrite(LED2RED, TEST[0]); analogWrite(LED2GREEN, TEST[1]); analogWrite(LED2BLUE, TEST[2]);
    }
  }

  //**************************LED 3********************//
  if (LEDSelect == 3) {
    if (ColorSelect == Off) {
      analogWrite(LED3RED, OFF[0]); analogWrite(LED3GREEN, OFF[1]); analogWrite(LED3BLUE, OFF[2]);
    }
    if (ColorSelect == Red) {
      analogWrite(LED3RED, RED[0]); analogWrite(LED3GREEN, RED[1]); analogWrite(LED3BLUE, RED[2]);
    }
    if (ColorSelect == Green) {
      analogWrite(LED3RED, GREEN[0]); analogWrite(LED3GREEN, GREEN[1]); analogWrite(LED3BLUE, GREEN[2]);
    }
    if (ColorSelect == Blue) {
      analogWrite(LED3RED, BLUE[0]); analogWrite(LED3GREEN, BLUE[1]); analogWrite(LED3BLUE, BLUE[2]);
    }
    if (ColorSelect == Yellow) {
      analogWrite(LED3RED, YELLOW[0]); analogWrite(LED3GREEN, YELLOW[1]); analogWrite(LED3BLUE, YELLOW[2]);
    }
    if (ColorSelect == White) {
      analogWrite(LED3RED, WHITE[0]); analogWrite(LED3GREEN, WHITE[1]); analogWrite(LED3BLUE, WHITE[2]);
    }
    if (ColorSelect == Purple) {
      analogWrite(LED3RED, PURPLE[0]); analogWrite(LED3GREEN, PURPLE[1]); analogWrite(LED3BLUE, PURPLE[2]);
    }
    if (ColorSelect == Cyan) {
      analogWrite(LED3RED, CYAN[0]); analogWrite(LED3GREEN, CYAN[1]); analogWrite(LED3BLUE, CYAN[2]);
    }
    if (ColorSelect == Orange) {
      analogWrite(LED3RED, ORANGE[0]); analogWrite(LED3GREEN, ORANGE[1]); analogWrite(LED3BLUE, ORANGE[2]);
    }
    if (ColorSelect == Test) {
      analogWrite(LED3RED, TEST[0]); analogWrite(LED3GREEN, TEST[1]); analogWrite(LED3BLUE, TEST[2]);
    }
  }

  /*
     //************LED 4 **********
     if (LEDSelect == 4) {
         if (ColorSelect == ColorName) {
             analogWrite(LED4RED, COLORNAME[0]); analogWrite(LED4GREEN, COLORNAME[1]); analogWrite(LED4BLUE, COLORNAME[2]);
         }
     }
  */
}

void loop() {}

