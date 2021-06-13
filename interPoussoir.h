/*
  InterPoussoir.h - Library pour lire les interrupteurs
  Created by Nicolas Moine, January 26th, 2020.
*/
#ifndef InterPoussoir_h
  #define InterPoussoir_h

  #include <Arduino.h>

  class InterPoussoir
  {
    public:
        InterPoussoir(int pinInter, bool bistable=false);
        void init();
        void acknow();
        int compte();
        void addClick();
       
      private:

        int _pinInter;
        int _numInter;
        int _nbClick;
        bool _bistable;
        static int cptInter;
        
  };


extern void ISRinterPoussoir0();
extern void ISRinterPoussoir1();
extern void ISRinterPoussoir2();
extern void ISRinterPoussoir3();
extern void ISRinterPoussoir4();
extern void ISRinterPoussoir5();
extern void ISRinterPoussoir6();
extern void ISRinterPoussoir7();
extern void ISRinterPoussoir8();
extern void ISRinterPoussoir9();

#endif