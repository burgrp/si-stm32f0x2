namespace MCU {
  namespace TSC {
    namespace Register {
      
      /**
        control register
      */
      class CR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Charge transfer pulse high
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCTPH() volatile {
          return (raw & (0xF << 28)) >> 28;
        }
        /**
          Sets Charge transfer pulse high
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCTPH(unsigned long value) volatile {
          raw = (raw & ~(0xF << 28)) | ((value << 28) & (0xF << 28));
        }
        /**
          Gets Charge transfer pulse low
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCTPL() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Charge transfer pulse low
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCTPL(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
        /**
          Gets Spread spectrum deviation
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getSSD() volatile {
          return (raw & (0x7F << 17)) >> 17;
        }
        /**
          Sets Spread spectrum deviation
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setSSD(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 17)) | ((value << 17) & (0x7F << 17));
        }
        /**
          Gets Spread spectrum enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSSE() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Spread spectrum enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSSE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Spread spectrum prescaler
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSSPSC() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Spread spectrum prescaler
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSSPSC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets pulse generator prescaler
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getPGPSC() volatile {
          return (raw & (0x7 << 12)) >> 12;
        }
        /**
          Sets pulse generator prescaler
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setPGPSC(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((value << 12) & (0x7 << 12));
        }
        /**
          Gets Max count value
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMCV() volatile {
          return (raw & (0x7 << 5)) >> 5;
        }
        /**
          Sets Max count value
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMCV(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 5)) | ((value << 5) & (0x7 << 5));
        }
        /**
          Gets I/O Default mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIODEF() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets I/O Default mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIODEF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Synchronization pin polarity
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYNCPOL() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Synchronization pin polarity
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYNCPOL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Acquisition mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAM() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Acquisition mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Start a new acquisition
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTART() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Start a new acquisition
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTART(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Touch sensing controller enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSCE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Touch sensing controller enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSCE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        interrupt enable register
      */
      class IER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Max count error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMCEIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Max count error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMCEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets End of acquisition interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOAIE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets End of acquisition interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOAIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        interrupt clear register
      */
      class ICR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Max count error interrupt clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMCEIC() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Max count error interrupt clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMCEIC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets End of acquisition interrupt clear
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOAIC() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets End of acquisition interrupt clear
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOAIC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        interrupt status register
      */
      class ISR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Max count error flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMCEF() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Max count error flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMCEF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets End of acquisition flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEOAF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets End of acquisition flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEOAF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        I/O hysteresis control register
      */
      class IOHCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets G1_IO1 Schmitt trigger hysteresis mode
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIO(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 1)))) >> (0 + 1 * (index - 1));
        }
        /**
          Sets G1_IO1 Schmitt trigger hysteresis mode
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIO(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 1)))) | ((value << (0 + 1 * (index - 1))) & (0x1 << (0 + 1 * (index - 1))));
        }
        /**
          Gets G6_IO4 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO4() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets G6_IO4 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
        /**
          Gets G6_IO3 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO3() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets G6_IO3 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets G6_IO2 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO2() volatile {
          return (raw & (0x1 << 21)) >> 21;
        }
        /**
          Sets G6_IO2 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((value << 21) & (0x1 << 21));
        }
        /**
          Gets G6_IO1 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO1() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets G6_IO1 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets G5_IO4 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO4() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets G5_IO4 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets G5_IO3 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO3() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets G5_IO3 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets G5_IO2 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO2() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets G5_IO2 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets G5_IO1 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO1() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets G5_IO1 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets G4_IO4 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO4() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets G4_IO4 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets G4_IO3 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO3() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets G4_IO3 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets G4_IO2 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO2() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets G4_IO2 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets G4_IO1 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO1() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets G4_IO1 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets G3_IO4 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO4() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets G3_IO4 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets G3_IO3 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO3() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets G3_IO3 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets G3_IO2 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO2() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets G3_IO2 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets G3_IO1 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO1() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets G3_IO1 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets G2_IO4 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO4() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets G2_IO4 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets G2_IO3 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO3() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets G2_IO3 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets G2_IO2 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO2() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets G2_IO2 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets G2_IO1 Schmitt trigger hysteresis mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO1() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets G2_IO1 Schmitt trigger hysteresis mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
      };
      
      /**
        I/O analog switch control register
      */
      class IOASCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets G1_IO1 analog switch enable
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIO(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 1)))) >> (0 + 1 * (index - 1));
        }
        /**
          Sets G1_IO1 analog switch enable
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIO(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 1)))) | ((value << (0 + 1 * (index - 1))) & (0x1 << (0 + 1 * (index - 1))));
        }
        /**
          Gets G6_IO4 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO4() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets G6_IO4 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
        /**
          Gets G6_IO3 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO3() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets G6_IO3 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets G6_IO2 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO2() volatile {
          return (raw & (0x1 << 21)) >> 21;
        }
        /**
          Sets G6_IO2 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((value << 21) & (0x1 << 21));
        }
        /**
          Gets G6_IO1 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO1() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets G6_IO1 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets G5_IO4 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO4() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets G5_IO4 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets G5_IO3 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO3() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets G5_IO3 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets G5_IO2 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO2() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets G5_IO2 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets G5_IO1 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO1() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets G5_IO1 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets G4_IO4 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO4() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets G4_IO4 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets G4_IO3 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO3() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets G4_IO3 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets G4_IO2 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO2() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets G4_IO2 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets G4_IO1 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO1() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets G4_IO1 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets G3_IO4 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO4() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets G3_IO4 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets G3_IO3 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO3() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets G3_IO3 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets G3_IO2 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO2() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets G3_IO2 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets G3_IO1 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO1() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets G3_IO1 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets G2_IO4 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO4() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets G2_IO4 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets G2_IO3 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO3() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets G2_IO3 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets G2_IO2 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO2() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets G2_IO2 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets G2_IO1 analog switch enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO1() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets G2_IO1 analog switch enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
      };
      
      /**
        I/O sampling control register
      */
      class IOSCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets G1_IO1 sampling mode
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIO(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 1)))) >> (0 + 1 * (index - 1));
        }
        /**
          Sets G1_IO1 sampling mode
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIO(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 1)))) | ((value << (0 + 1 * (index - 1))) & (0x1 << (0 + 1 * (index - 1))));
        }
        /**
          Gets G6_IO4 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO4() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets G6_IO4 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
        /**
          Gets G6_IO3 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO3() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets G6_IO3 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets G6_IO2 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO2() volatile {
          return (raw & (0x1 << 21)) >> 21;
        }
        /**
          Sets G6_IO2 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((value << 21) & (0x1 << 21));
        }
        /**
          Gets G6_IO1 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO1() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets G6_IO1 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets G5_IO4 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO4() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets G5_IO4 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets G5_IO3 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO3() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets G5_IO3 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets G5_IO2 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO2() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets G5_IO2 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets G5_IO1 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO1() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets G5_IO1 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets G4_IO4 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO4() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets G4_IO4 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets G4_IO3 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO3() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets G4_IO3 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets G4_IO2 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO2() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets G4_IO2 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets G4_IO1 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO1() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets G4_IO1 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets G3_IO4 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO4() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets G3_IO4 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets G3_IO3 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO3() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets G3_IO3 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets G3_IO2 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO2() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets G3_IO2 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets G3_IO1 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO1() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets G3_IO1 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets G2_IO4 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO4() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets G2_IO4 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets G2_IO3 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO3() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets G2_IO3 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets G2_IO2 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO2() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets G2_IO2 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets G2_IO1 sampling mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO1() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets G2_IO1 sampling mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
      };
      
      /**
        I/O channel control register
      */
      class IOCCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets G1_IO1 channel mode
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIO(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 1)))) >> (0 + 1 * (index - 1));
        }
        /**
          Sets G1_IO1 channel mode
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIO(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 1)))) | ((value << (0 + 1 * (index - 1))) & (0x1 << (0 + 1 * (index - 1))));
        }
        /**
          Gets G6_IO4 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO4() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets G6_IO4 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
        /**
          Gets G6_IO3 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO3() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets G6_IO3 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets G6_IO2 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO2() volatile {
          return (raw & (0x1 << 21)) >> 21;
        }
        /**
          Sets G6_IO2 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((value << 21) & (0x1 << 21));
        }
        /**
          Gets G6_IO1 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG6_IO1() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets G6_IO1 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG6_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets G5_IO4 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO4() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets G5_IO4 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets G5_IO3 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO3() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets G5_IO3 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets G5_IO2 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO2() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets G5_IO2 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets G5_IO1 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG5_IO1() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets G5_IO1 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG5_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets G4_IO4 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO4() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets G4_IO4 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets G4_IO3 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO3() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets G4_IO3 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets G4_IO2 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO2() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets G4_IO2 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets G4_IO1 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG4_IO1() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets G4_IO1 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG4_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets G3_IO4 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO4() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets G3_IO4 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets G3_IO3 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO3() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets G3_IO3 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets G3_IO2 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO2() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets G3_IO2 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets G3_IO1 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG3_IO1() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets G3_IO1 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG3_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets G2_IO4 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO4() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets G2_IO4 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO4(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets G2_IO3 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO3() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets G2_IO3 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO3(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets G2_IO2 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO2() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets G2_IO2 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets G2_IO1 channel mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG2_IO1() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets G2_IO1 channel mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG2_IO1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
      };
      
      /**
        I/O group control status register
      */
      class IOGCSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Analog I/O group x status
          @param index in range 1..8
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG_S(int index) volatile {
          return (raw & (0x1 << (16 + 1 * (index - 1)))) >> (16 + 1 * (index - 1));
        }
        /**
          Sets Analog I/O group x status
          @param index in range 1..8
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG_S(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 1)))) | ((value << (16 + 1 * (index - 1))) & (0x1 << (16 + 1 * (index - 1))));
        }
        /**
          Gets Analog I/O group x enable
          @param index in range 1..8
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getG_E(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 1)))) >> (0 + 1 * (index - 1));
        }
        /**
          Sets Analog I/O group x enable
          @param index in range 1..8
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setG_E(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 1)))) | ((value << (0 + 1 * (index - 1))) & (0x1 << (0 + 1 * (index - 1))));
        }
      };
      
      /**
        I/O group x counter register
      */
      class IOG1CR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter value
          @return value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0x3FFF << 0)) >> 0;
        }
        /**
          Sets Counter value
          @param value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long setCNT(unsigned long value) volatile {
          raw = (raw & ~(0x3FFF << 0)) | ((value << 0) & (0x3FFF << 0));
        }
      };
      
      /**
        I/O group x counter register
      */
      class IOG2CR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter value
          @return value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0x3FFF << 0)) >> 0;
        }
        /**
          Sets Counter value
          @param value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long setCNT(unsigned long value) volatile {
          raw = (raw & ~(0x3FFF << 0)) | ((value << 0) & (0x3FFF << 0));
        }
      };
      
      /**
        I/O group x counter register
      */
      class IOG3CR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter value
          @return value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0x3FFF << 0)) >> 0;
        }
        /**
          Sets Counter value
          @param value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long setCNT(unsigned long value) volatile {
          raw = (raw & ~(0x3FFF << 0)) | ((value << 0) & (0x3FFF << 0));
        }
      };
      
      /**
        I/O group x counter register
      */
      class IOG4CR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter value
          @return value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0x3FFF << 0)) >> 0;
        }
        /**
          Sets Counter value
          @param value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long setCNT(unsigned long value) volatile {
          raw = (raw & ~(0x3FFF << 0)) | ((value << 0) & (0x3FFF << 0));
        }
      };
      
      /**
        I/O group x counter register
      */
      class IOG5CR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter value
          @return value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0x3FFF << 0)) >> 0;
        }
        /**
          Sets Counter value
          @param value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long setCNT(unsigned long value) volatile {
          raw = (raw & ~(0x3FFF << 0)) | ((value << 0) & (0x3FFF << 0));
        }
      };
      
      /**
        I/O group x counter register
      */
      class IOG6CR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Counter value
          @return value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0x3FFF << 0)) >> 0;
        }
        /**
          Sets Counter value
          @param value in range 0..16383
        */
        __attribute__((always_inline)) unsigned long setCNT(unsigned long value) volatile {
          raw = (raw & ~(0x3FFF << 0)) | ((value << 0) & (0x3FFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      /**
        control register
      */
      volatile Register::CR CR;
      /**
        interrupt enable register
      */
      volatile Register::IER IER;
      /**
        interrupt clear register
      */
      volatile Register::ICR ICR;
      /**
        interrupt status register
      */
      volatile Register::ISR ISR;
      /**
        I/O hysteresis control register
      */
      volatile Register::IOHCR IOHCR;
      volatile char _space20[4];
      /**
        I/O analog switch control register
      */
      volatile Register::IOASCR IOASCR;
      volatile char _space28[4];
      /**
        I/O sampling control register
      */
      volatile Register::IOSCR IOSCR;
      volatile char _space36[4];
      /**
        I/O channel control register
      */
      volatile Register::IOCCR IOCCR;
      volatile char _space44[4];
      /**
        I/O group control status register
      */
      volatile Register::IOGCSR IOGCSR;
      /**
        I/O group x counter register
      */
      volatile Register::IOG1CR IOG1CR;
      /**
        I/O group x counter register
      */
      volatile Register::IOG2CR IOG2CR;
      /**
        I/O group x counter register
      */
      volatile Register::IOG3CR IOG3CR;
      /**
        I/O group x counter register
      */
      volatile Register::IOG4CR IOG4CR;
      /**
        I/O group x counter register
      */
      volatile Register::IOG5CR IOG5CR;
      /**
        I/O group x counter register
      */
      volatile Register::IOG6CR IOG6CR;
    };
  }
}