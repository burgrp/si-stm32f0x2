namespace MCU {
  namespace CAN {
    namespace Register {
      
      /**
        CAN_MCR
      */
      class CAN_MCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DBF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBF() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets DBF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets RESET
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRESET() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets RESET
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRESET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets TTCM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTTCM() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets TTCM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTTCM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets ABOM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getABOM() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets ABOM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setABOM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets AWUM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAWUM() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets AWUM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAWUM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets NART
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNART() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets NART
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNART(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets RFLM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRFLM() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets RFLM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRFLM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets TXFP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXFP() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets TXFP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXFP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets SLEEP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSLEEP() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets SLEEP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSLEEP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets INRQ
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getINRQ() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets INRQ
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setINRQ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        CAN_MSR
      */
      class CAN_MSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets RX
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRX() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets RX
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets SAMP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSAMP() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets SAMP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSAMP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets RXM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXM() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets RXM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets TXM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXM() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets TXM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets SLAKI
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSLAKI() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets SLAKI
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSLAKI(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets WKUI
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWKUI() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets WKUI
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWKUI(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets ERRI
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERRI() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets ERRI
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERRI(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets SLAK
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSLAK() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets SLAK
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSLAK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets INAK
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getINAK() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets INAK
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setINAK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        CAN_TSR
      */
      class CAN_TSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Lowest priority flag for mailbox 0
          @param index in range 0..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLOW(int index) volatile {
          return (raw & (0x1 << (29 + 1 * (index - 0)))) >> (29 + 1 * (index - 0));
        }
        /**
          Sets Lowest priority flag for mailbox 0
          @param index in range 0..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLOW(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (29 + 1 * (index - 0)))) | ((value << (29 + 1 * (index - 0))) & (0x1 << (29 + 1 * (index - 0))));
        }
        /**
          Gets Lowest priority flag for mailbox 0
          @param index in range 0..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTME(int index) volatile {
          return (raw & (0x1 << (26 + 1 * (index - 0)))) >> (26 + 1 * (index - 0));
        }
        /**
          Sets Lowest priority flag for mailbox 0
          @param index in range 0..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTME(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (26 + 1 * (index - 0)))) | ((value << (26 + 1 * (index - 0))) & (0x1 << (26 + 1 * (index - 0))));
        }
        /**
          Gets ABRQ0
          @param index in range 0..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getABRQ(int index) volatile {
          return (raw & (0x1 << (7 + 8 * (index - 0)))) >> (7 + 8 * (index - 0));
        }
        /**
          Sets ABRQ0
          @param index in range 0..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setABRQ(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (7 + 8 * (index - 0)))) | ((value << (7 + 8 * (index - 0))) & (0x1 << (7 + 8 * (index - 0))));
        }
        /**
          Gets TERR0
          @param index in range 0..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTERR(int index) volatile {
          return (raw & (0x1 << (3 + 8 * (index - 0)))) >> (3 + 8 * (index - 0));
        }
        /**
          Sets TERR0
          @param index in range 0..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTERR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 8 * (index - 0)))) | ((value << (3 + 8 * (index - 0))) & (0x1 << (3 + 8 * (index - 0))));
        }
        /**
          Gets ALST0
          @param index in range 0..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALST(int index) volatile {
          return (raw & (0x1 << (2 + 8 * (index - 0)))) >> (2 + 8 * (index - 0));
        }
        /**
          Sets ALST0
          @param index in range 0..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALST(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 8 * (index - 0)))) | ((value << (2 + 8 * (index - 0))) & (0x1 << (2 + 8 * (index - 0))));
        }
        /**
          Gets TXOK0
          @param index in range 0..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXOK(int index) volatile {
          return (raw & (0x1 << (1 + 8 * (index - 0)))) >> (1 + 8 * (index - 0));
        }
        /**
          Sets TXOK0
          @param index in range 0..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXOK(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 8 * (index - 0)))) | ((value << (1 + 8 * (index - 0))) & (0x1 << (1 + 8 * (index - 0))));
        }
        /**
          Gets RQCP0
          @param index in range 0..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRQCP(int index) volatile {
          return (raw & (0x1 << (0 + 8 * (index - 0)))) >> (0 + 8 * (index - 0));
        }
        /**
          Sets RQCP0
          @param index in range 0..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRQCP(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 8 * (index - 0)))) | ((value << (0 + 8 * (index - 0))) & (0x1 << (0 + 8 * (index - 0))));
        }
        /**
          Gets CODE
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCODE() volatile {
          return (raw & (0x3 << 24)) >> 24;
        }
        /**
          Sets CODE
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCODE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 24)) | ((value << 24) & (0x3 << 24));
        }
      };
      
      /**
        CAN_RF0R
      */
      class CAN_RF0R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets RFOM0
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRFOM0() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets RFOM0
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRFOM0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets FOVR0
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFOVR0() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets FOVR0
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFOVR0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets FULL0
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFULL0() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets FULL0
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFULL0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets FMP0
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFMP0() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets FMP0
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setFMP0(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
      };
      
      /**
        CAN_RF1R
      */
      class CAN_RF1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets RFOM1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRFOM1() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets RFOM1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRFOM1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets FOVR1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFOVR1() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets FOVR1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFOVR1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets FULL1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFULL1() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets FULL1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFULL1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets FMP1
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFMP1() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets FMP1
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setFMP1(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
      };
      
      /**
        CAN_IER
      */
      class CAN_IER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets FOVIE0
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFOVIE(int index) volatile {
          return (raw & (0x1 << (3 + 3 * (index - 0)))) >> (3 + 3 * (index - 0));
        }
        /**
          Sets FOVIE0
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFOVIE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 3 * (index - 0)))) | ((value << (3 + 3 * (index - 0))) & (0x1 << (3 + 3 * (index - 0))));
        }
        /**
          Gets FFIE0
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFFIE(int index) volatile {
          return (raw & (0x1 << (2 + 3 * (index - 0)))) >> (2 + 3 * (index - 0));
        }
        /**
          Sets FFIE0
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFFIE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 3 * (index - 0)))) | ((value << (2 + 3 * (index - 0))) & (0x1 << (2 + 3 * (index - 0))));
        }
        /**
          Gets FMPIE0
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFMPIE(int index) volatile {
          return (raw & (0x1 << (1 + 3 * (index - 0)))) >> (1 + 3 * (index - 0));
        }
        /**
          Sets FMPIE0
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFMPIE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 3 * (index - 0)))) | ((value << (1 + 3 * (index - 0))) & (0x1 << (1 + 3 * (index - 0))));
        }
        /**
          Gets SLKIE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSLKIE() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets SLKIE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSLKIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets WKUIE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWKUIE() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets WKUIE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWKUIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets ERRIE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getERRIE() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets ERRIE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setERRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets LECIE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLECIE() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets LECIE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLECIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets BOFIE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOFIE() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets BOFIE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOFIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets EPVIE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEPVIE() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets EPVIE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEPVIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets EWGIE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEWGIE() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets EWGIE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEWGIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets TMEIE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTMEIE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets TMEIE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTMEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        CAN_ESR
      */
      class CAN_ESR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets REC
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getREC() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets REC
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setREC(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
        /**
          Gets TEC
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getTEC() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets TEC
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setTEC(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets LEC
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getLEC() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets LEC
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setLEC(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
        /**
          Gets BOFF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOFF() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets BOFF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOFF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets EPVF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEPVF() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets EPVF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEPVF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets EWGF
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEWGF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets EWGF
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEWGF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        CAN BTR
      */
      class CAN_BTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets TS1
          @param index in range 1..2
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getTS(int index) volatile {
          return (raw & (0xF << (16 + 4 * (index - 1)))) >> (16 + 4 * (index - 1));
        }
        /**
          Sets TS1
          @param index in range 1..2
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setTS(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (16 + 4 * (index - 1)))) | ((value << (16 + 4 * (index - 1))) & (0xF << (16 + 4 * (index - 1))));
        }
        /**
          Gets SILM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSILM() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets SILM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSILM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
        /**
          Gets LBKM
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLBKM() volatile {
          return (raw & (0x1 << 30)) >> 30;
        }
        /**
          Sets LBKM
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLBKM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
        }
        /**
          Gets SJW
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSJW() volatile {
          return (raw & (0x3 << 24)) >> 24;
        }
        /**
          Sets SJW
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSJW(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 24)) | ((value << 24) & (0x3 << 24));
        }
        /**
          Gets BRP
          @return value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long getBRP() volatile {
          return (raw & (0x3FF << 0)) >> 0;
        }
        /**
          Sets BRP
          @param value in range 0..1023
        */
        __attribute__((always_inline)) unsigned long setBRP(unsigned long value) volatile {
          raw = (raw & ~(0x3FF << 0)) | ((value << 0) & (0x3FF << 0));
        }
      };
      
      /**
        CAN_TI0R
      */
      class CAN_TI0R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets STID
          @return value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long getSTID() volatile {
          return (raw & (0x7FF << 21)) >> 21;
        }
        /**
          Sets STID
          @param value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long setSTID(unsigned long value) volatile {
          raw = (raw & ~(0x7FF << 21)) | ((value << 21) & (0x7FF << 21));
        }
        /**
          Gets EXID
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getEXID() volatile {
          return (raw & (0x3FFFF << 3)) >> 3;
        }
        /**
          Sets EXID
          @param value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long setEXID(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 3)) | ((value << 3) & (0x3FFFF << 3));
        }
        /**
          Gets IDE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIDE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets IDE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIDE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets RTR
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRTR() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets RTR
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRTR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets TXRQ
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXRQ() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets TXRQ
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXRQ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        CAN_TDT0R
      */
      class CAN_TDT0R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets TIME
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getTIME() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets TIME
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setTIME(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets TGT
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTGT() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets TGT
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTGT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets DLC
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDLC() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets DLC
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDLC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        CAN_TDL0R
      */
      class CAN_TDL0R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DATA0
          @param index in range 0..3
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDATA(int index) volatile {
          return (raw & (0xFF << (0 + 8 * (index - 0)))) >> (0 + 8 * (index - 0));
        }
        /**
          Sets DATA0
          @param index in range 0..3
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDATA(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFF << (0 + 8 * (index - 0)))) | ((value << (0 + 8 * (index - 0))) & (0xFF << (0 + 8 * (index - 0))));
        }
      };
      
      /**
        CAN_TDH0R
      */
      class CAN_TDH0R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DATA4
          @param index in range 4..7
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDATA(int index) volatile {
          return (raw & (0xFF << (0 + 8 * (index - 4)))) >> (0 + 8 * (index - 4));
        }
        /**
          Sets DATA4
          @param index in range 4..7
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDATA(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFF << (0 + 8 * (index - 4)))) | ((value << (0 + 8 * (index - 4))) & (0xFF << (0 + 8 * (index - 4))));
        }
      };
      
      /**
        CAN_TI1R
      */
      class CAN_TI1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets STID
          @return value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long getSTID() volatile {
          return (raw & (0x7FF << 21)) >> 21;
        }
        /**
          Sets STID
          @param value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long setSTID(unsigned long value) volatile {
          raw = (raw & ~(0x7FF << 21)) | ((value << 21) & (0x7FF << 21));
        }
        /**
          Gets EXID
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getEXID() volatile {
          return (raw & (0x3FFFF << 3)) >> 3;
        }
        /**
          Sets EXID
          @param value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long setEXID(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 3)) | ((value << 3) & (0x3FFFF << 3));
        }
        /**
          Gets IDE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIDE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets IDE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIDE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets RTR
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRTR() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets RTR
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRTR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets TXRQ
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXRQ() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets TXRQ
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXRQ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        CAN_TDT1R
      */
      class CAN_TDT1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets TIME
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getTIME() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets TIME
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setTIME(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets TGT
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTGT() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets TGT
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTGT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets DLC
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDLC() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets DLC
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDLC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        CAN_TDL1R
      */
      class CAN_TDL1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DATA0
          @param index in range 0..3
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDATA(int index) volatile {
          return (raw & (0xFF << (0 + 8 * (index - 0)))) >> (0 + 8 * (index - 0));
        }
        /**
          Sets DATA0
          @param index in range 0..3
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDATA(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFF << (0 + 8 * (index - 0)))) | ((value << (0 + 8 * (index - 0))) & (0xFF << (0 + 8 * (index - 0))));
        }
      };
      
      /**
        CAN_TDH1R
      */
      class CAN_TDH1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DATA4
          @param index in range 4..7
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDATA(int index) volatile {
          return (raw & (0xFF << (0 + 8 * (index - 4)))) >> (0 + 8 * (index - 4));
        }
        /**
          Sets DATA4
          @param index in range 4..7
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDATA(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFF << (0 + 8 * (index - 4)))) | ((value << (0 + 8 * (index - 4))) & (0xFF << (0 + 8 * (index - 4))));
        }
      };
      
      /**
        CAN_TI2R
      */
      class CAN_TI2R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets STID
          @return value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long getSTID() volatile {
          return (raw & (0x7FF << 21)) >> 21;
        }
        /**
          Sets STID
          @param value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long setSTID(unsigned long value) volatile {
          raw = (raw & ~(0x7FF << 21)) | ((value << 21) & (0x7FF << 21));
        }
        /**
          Gets EXID
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getEXID() volatile {
          return (raw & (0x3FFFF << 3)) >> 3;
        }
        /**
          Sets EXID
          @param value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long setEXID(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 3)) | ((value << 3) & (0x3FFFF << 3));
        }
        /**
          Gets IDE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIDE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets IDE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIDE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets RTR
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRTR() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets RTR
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRTR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets TXRQ
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXRQ() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets TXRQ
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXRQ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        CAN_TDT2R
      */
      class CAN_TDT2R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets TIME
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getTIME() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets TIME
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setTIME(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets TGT
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTGT() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets TGT
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTGT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets DLC
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDLC() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets DLC
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDLC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        CAN_TDL2R
      */
      class CAN_TDL2R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DATA0
          @param index in range 0..3
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDATA(int index) volatile {
          return (raw & (0xFF << (0 + 8 * (index - 0)))) >> (0 + 8 * (index - 0));
        }
        /**
          Sets DATA0
          @param index in range 0..3
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDATA(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFF << (0 + 8 * (index - 0)))) | ((value << (0 + 8 * (index - 0))) & (0xFF << (0 + 8 * (index - 0))));
        }
      };
      
      /**
        CAN_TDH2R
      */
      class CAN_TDH2R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DATA4
          @param index in range 4..7
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDATA(int index) volatile {
          return (raw & (0xFF << (0 + 8 * (index - 4)))) >> (0 + 8 * (index - 4));
        }
        /**
          Sets DATA4
          @param index in range 4..7
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDATA(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFF << (0 + 8 * (index - 4)))) | ((value << (0 + 8 * (index - 4))) & (0xFF << (0 + 8 * (index - 4))));
        }
      };
      
      /**
        CAN_RI0R
      */
      class CAN_RI0R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets STID
          @return value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long getSTID() volatile {
          return (raw & (0x7FF << 21)) >> 21;
        }
        /**
          Sets STID
          @param value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long setSTID(unsigned long value) volatile {
          raw = (raw & ~(0x7FF << 21)) | ((value << 21) & (0x7FF << 21));
        }
        /**
          Gets EXID
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getEXID() volatile {
          return (raw & (0x3FFFF << 3)) >> 3;
        }
        /**
          Sets EXID
          @param value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long setEXID(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 3)) | ((value << 3) & (0x3FFFF << 3));
        }
        /**
          Gets IDE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIDE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets IDE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIDE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets RTR
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRTR() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets RTR
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRTR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
      };
      
      /**
        CAN_RDT0R
      */
      class CAN_RDT0R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets TIME
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getTIME() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets TIME
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setTIME(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets FMI
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getFMI() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets FMI
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setFMI(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets DLC
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDLC() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets DLC
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDLC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        CAN_RDL0R
      */
      class CAN_RDL0R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DATA0
          @param index in range 0..3
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDATA(int index) volatile {
          return (raw & (0xFF << (0 + 8 * (index - 0)))) >> (0 + 8 * (index - 0));
        }
        /**
          Sets DATA0
          @param index in range 0..3
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDATA(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFF << (0 + 8 * (index - 0)))) | ((value << (0 + 8 * (index - 0))) & (0xFF << (0 + 8 * (index - 0))));
        }
      };
      
      /**
        CAN_RDH0R
      */
      class CAN_RDH0R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DATA4
          @param index in range 4..7
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDATA(int index) volatile {
          return (raw & (0xFF << (0 + 8 * (index - 4)))) >> (0 + 8 * (index - 4));
        }
        /**
          Sets DATA4
          @param index in range 4..7
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDATA(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFF << (0 + 8 * (index - 4)))) | ((value << (0 + 8 * (index - 4))) & (0xFF << (0 + 8 * (index - 4))));
        }
      };
      
      /**
        CAN_RI1R
      */
      class CAN_RI1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets STID
          @return value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long getSTID() volatile {
          return (raw & (0x7FF << 21)) >> 21;
        }
        /**
          Sets STID
          @param value in range 0..2047
        */
        __attribute__((always_inline)) unsigned long setSTID(unsigned long value) volatile {
          raw = (raw & ~(0x7FF << 21)) | ((value << 21) & (0x7FF << 21));
        }
        /**
          Gets EXID
          @return value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long getEXID() volatile {
          return (raw & (0x3FFFF << 3)) >> 3;
        }
        /**
          Sets EXID
          @param value in range 0..262143
        */
        __attribute__((always_inline)) unsigned long setEXID(unsigned long value) volatile {
          raw = (raw & ~(0x3FFFF << 3)) | ((value << 3) & (0x3FFFF << 3));
        }
        /**
          Gets IDE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIDE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets IDE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIDE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets RTR
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRTR() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets RTR
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRTR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
      };
      
      /**
        CAN_RDT1R
      */
      class CAN_RDT1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets TIME
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getTIME() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets TIME
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setTIME(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
        /**
          Gets FMI
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getFMI() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets FMI
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setFMI(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets DLC
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDLC() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets DLC
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDLC(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        CAN_RDL1R
      */
      class CAN_RDL1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DATA0
          @param index in range 0..3
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDATA(int index) volatile {
          return (raw & (0xFF << (0 + 8 * (index - 0)))) >> (0 + 8 * (index - 0));
        }
        /**
          Sets DATA0
          @param index in range 0..3
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDATA(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFF << (0 + 8 * (index - 0)))) | ((value << (0 + 8 * (index - 0))) & (0xFF << (0 + 8 * (index - 0))));
        }
      };
      
      /**
        CAN_RDH1R
      */
      class CAN_RDH1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DATA4
          @param index in range 4..7
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDATA(int index) volatile {
          return (raw & (0xFF << (0 + 8 * (index - 4)))) >> (0 + 8 * (index - 4));
        }
        /**
          Sets DATA4
          @param index in range 4..7
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDATA(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFF << (0 + 8 * (index - 4)))) | ((value << (0 + 8 * (index - 4))) & (0xFF << (0 + 8 * (index - 4))));
        }
      };
      
      /**
        CAN_FMR
      */
      class CAN_FMR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CAN2SB
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getCAN2SB() volatile {
          return (raw & (0x3F << 8)) >> 8;
        }
        /**
          Sets CAN2SB
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setCAN2SB(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 8)) | ((value << 8) & (0x3F << 8));
        }
        /**
          Gets FINIT
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFINIT() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets FINIT
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFINIT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        CAN_FM1R
      */
      class CAN_FM1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter mode
          @param index in range 0..27
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFBM(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter mode
          @param index in range 0..27
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFBM(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        CAN_FS1R
      */
      class CAN_FS1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter scale configuration
          @param index in range 0..27
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFSC(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter scale configuration
          @param index in range 0..27
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFSC(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        CAN_FFA1R
      */
      class CAN_FFA1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter FIFO assignment for filter 0
          @param index in range 0..27
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFFA(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter FIFO assignment for filter 0
          @param index in range 0..27
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFFA(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        CAN_FA1R
      */
      class CAN_FA1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter active
          @param index in range 0..27
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFACT(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter active
          @param index in range 0..27
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFACT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 0 register 1
      */
      class F0R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 0 register 2
      */
      class F0R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 1 register 1
      */
      class F1R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 1 register 2
      */
      class F1R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 2 register 1
      */
      class F2R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 2 register 2
      */
      class F2R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 3 register 1
      */
      class F3R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 3 register 2
      */
      class F3R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 4 register 1
      */
      class F4R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 4 register 2
      */
      class F4R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 5 register 1
      */
      class F5R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 5 register 2
      */
      class F5R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 6 register 1
      */
      class F6R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 6 register 2
      */
      class F6R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 7 register 1
      */
      class F7R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 7 register 2
      */
      class F7R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 8 register 1
      */
      class F8R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 8 register 2
      */
      class F8R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 9 register 1
      */
      class F9R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 9 register 2
      */
      class F9R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 10 register 1
      */
      class F10R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 10 register 2
      */
      class F10R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 11 register 1
      */
      class F11R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 11 register 2
      */
      class F11R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 4 register 1
      */
      class F12R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 12 register 2
      */
      class F12R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 13 register 1
      */
      class F13R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 13 register 2
      */
      class F13R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 14 register 1
      */
      class F14R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 14 register 2
      */
      class F14R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 15 register 1
      */
      class F15R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 15 register 2
      */
      class F15R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 16 register 1
      */
      class F16R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 16 register 2
      */
      class F16R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 17 register 1
      */
      class F17R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 17 register 2
      */
      class F17R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 18 register 1
      */
      class F18R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 18 register 2
      */
      class F18R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 19 register 1
      */
      class F19R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 19 register 2
      */
      class F19R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 20 register 1
      */
      class F20R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 20 register 2
      */
      class F20R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 21 register 1
      */
      class F21R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 21 register 2
      */
      class F21R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 22 register 1
      */
      class F22R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 22 register 2
      */
      class F22R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 23 register 1
      */
      class F23R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 23 register 2
      */
      class F23R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 24 register 1
      */
      class F24R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 24 register 2
      */
      class F24R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 25 register 1
      */
      class F25R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 25 register 2
      */
      class F25R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 26 register 1
      */
      class F26R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 26 register 2
      */
      class F26R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 27 register 1
      */
      class F27R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Filter bank 27 register 2
      */
      class F27R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Filter bits
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Filter bits
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
    };
    class Peripheral {
      public:
      /**
        CAN_MCR
      */
      volatile Register::CAN_MCR CAN_MCR;
      /**
        CAN_MSR
      */
      volatile Register::CAN_MSR CAN_MSR;
      /**
        CAN_TSR
      */
      volatile Register::CAN_TSR CAN_TSR;
      /**
        CAN_RF0R
      */
      volatile Register::CAN_RF0R CAN_RF0R;
      /**
        CAN_RF1R
      */
      volatile Register::CAN_RF1R CAN_RF1R;
      /**
        CAN_IER
      */
      volatile Register::CAN_IER CAN_IER;
      /**
        CAN_ESR
      */
      volatile Register::CAN_ESR CAN_ESR;
      /**
        CAN BTR
      */
      volatile Register::CAN_BTR CAN_BTR;
      volatile char _space32[352];
      /**
        CAN_TI0R
      */
      volatile Register::CAN_TI0R CAN_TI0R;
      /**
        CAN_TDT0R
      */
      volatile Register::CAN_TDT0R CAN_TDT0R;
      /**
        CAN_TDL0R
      */
      volatile Register::CAN_TDL0R CAN_TDL0R;
      /**
        CAN_TDH0R
      */
      volatile Register::CAN_TDH0R CAN_TDH0R;
      /**
        CAN_TI1R
      */
      volatile Register::CAN_TI1R CAN_TI1R;
      /**
        CAN_TDT1R
      */
      volatile Register::CAN_TDT1R CAN_TDT1R;
      /**
        CAN_TDL1R
      */
      volatile Register::CAN_TDL1R CAN_TDL1R;
      /**
        CAN_TDH1R
      */
      volatile Register::CAN_TDH1R CAN_TDH1R;
      /**
        CAN_TI2R
      */
      volatile Register::CAN_TI2R CAN_TI2R;
      /**
        CAN_TDT2R
      */
      volatile Register::CAN_TDT2R CAN_TDT2R;
      /**
        CAN_TDL2R
      */
      volatile Register::CAN_TDL2R CAN_TDL2R;
      /**
        CAN_TDH2R
      */
      volatile Register::CAN_TDH2R CAN_TDH2R;
      /**
        CAN_RI0R
      */
      volatile Register::CAN_RI0R CAN_RI0R;
      /**
        CAN_RDT0R
      */
      volatile Register::CAN_RDT0R CAN_RDT0R;
      /**
        CAN_RDL0R
      */
      volatile Register::CAN_RDL0R CAN_RDL0R;
      /**
        CAN_RDH0R
      */
      volatile Register::CAN_RDH0R CAN_RDH0R;
      /**
        CAN_RI1R
      */
      volatile Register::CAN_RI1R CAN_RI1R;
      /**
        CAN_RDT1R
      */
      volatile Register::CAN_RDT1R CAN_RDT1R;
      /**
        CAN_RDL1R
      */
      volatile Register::CAN_RDL1R CAN_RDL1R;
      /**
        CAN_RDH1R
      */
      volatile Register::CAN_RDH1R CAN_RDH1R;
      volatile char _space464[48];
      /**
        CAN_FMR
      */
      volatile Register::CAN_FMR CAN_FMR;
      /**
        CAN_FM1R
      */
      volatile Register::CAN_FM1R CAN_FM1R;
      volatile char _space520[4];
      /**
        CAN_FS1R
      */
      volatile Register::CAN_FS1R CAN_FS1R;
      volatile char _space528[4];
      /**
        CAN_FFA1R
      */
      volatile Register::CAN_FFA1R CAN_FFA1R;
      volatile char _space536[4];
      /**
        CAN_FA1R
      */
      volatile Register::CAN_FA1R CAN_FA1R;
      volatile char _space544[32];
      /**
        Filter bank 0 register 1
      */
      volatile Register::F0R1 F0R1;
      /**
        Filter bank 0 register 2
      */
      volatile Register::F0R2 F0R2;
      /**
        Filter bank 1 register 1
      */
      volatile Register::F1R1 F1R1;
      /**
        Filter bank 1 register 2
      */
      volatile Register::F1R2 F1R2;
      /**
        Filter bank 2 register 1
      */
      volatile Register::F2R1 F2R1;
      /**
        Filter bank 2 register 2
      */
      volatile Register::F2R2 F2R2;
      /**
        Filter bank 3 register 1
      */
      volatile Register::F3R1 F3R1;
      /**
        Filter bank 3 register 2
      */
      volatile Register::F3R2 F3R2;
      /**
        Filter bank 4 register 1
      */
      volatile Register::F4R1 F4R1;
      /**
        Filter bank 4 register 2
      */
      volatile Register::F4R2 F4R2;
      /**
        Filter bank 5 register 1
      */
      volatile Register::F5R1 F5R1;
      /**
        Filter bank 5 register 2
      */
      volatile Register::F5R2 F5R2;
      /**
        Filter bank 6 register 1
      */
      volatile Register::F6R1 F6R1;
      /**
        Filter bank 6 register 2
      */
      volatile Register::F6R2 F6R2;
      /**
        Filter bank 7 register 1
      */
      volatile Register::F7R1 F7R1;
      /**
        Filter bank 7 register 2
      */
      volatile Register::F7R2 F7R2;
      /**
        Filter bank 8 register 1
      */
      volatile Register::F8R1 F8R1;
      /**
        Filter bank 8 register 2
      */
      volatile Register::F8R2 F8R2;
      /**
        Filter bank 9 register 1
      */
      volatile Register::F9R1 F9R1;
      /**
        Filter bank 9 register 2
      */
      volatile Register::F9R2 F9R2;
      /**
        Filter bank 10 register 1
      */
      volatile Register::F10R1 F10R1;
      /**
        Filter bank 10 register 2
      */
      volatile Register::F10R2 F10R2;
      /**
        Filter bank 11 register 1
      */
      volatile Register::F11R1 F11R1;
      /**
        Filter bank 11 register 2
      */
      volatile Register::F11R2 F11R2;
      /**
        Filter bank 4 register 1
      */
      volatile Register::F12R1 F12R1;
      /**
        Filter bank 12 register 2
      */
      volatile Register::F12R2 F12R2;
      /**
        Filter bank 13 register 1
      */
      volatile Register::F13R1 F13R1;
      /**
        Filter bank 13 register 2
      */
      volatile Register::F13R2 F13R2;
      /**
        Filter bank 14 register 1
      */
      volatile Register::F14R1 F14R1;
      /**
        Filter bank 14 register 2
      */
      volatile Register::F14R2 F14R2;
      /**
        Filter bank 15 register 1
      */
      volatile Register::F15R1 F15R1;
      /**
        Filter bank 15 register 2
      */
      volatile Register::F15R2 F15R2;
      /**
        Filter bank 16 register 1
      */
      volatile Register::F16R1 F16R1;
      /**
        Filter bank 16 register 2
      */
      volatile Register::F16R2 F16R2;
      /**
        Filter bank 17 register 1
      */
      volatile Register::F17R1 F17R1;
      /**
        Filter bank 17 register 2
      */
      volatile Register::F17R2 F17R2;
      /**
        Filter bank 18 register 1
      */
      volatile Register::F18R1 F18R1;
      /**
        Filter bank 18 register 2
      */
      volatile Register::F18R2 F18R2;
      /**
        Filter bank 19 register 1
      */
      volatile Register::F19R1 F19R1;
      /**
        Filter bank 19 register 2
      */
      volatile Register::F19R2 F19R2;
      /**
        Filter bank 20 register 1
      */
      volatile Register::F20R1 F20R1;
      /**
        Filter bank 20 register 2
      */
      volatile Register::F20R2 F20R2;
      /**
        Filter bank 21 register 1
      */
      volatile Register::F21R1 F21R1;
      /**
        Filter bank 21 register 2
      */
      volatile Register::F21R2 F21R2;
      /**
        Filter bank 22 register 1
      */
      volatile Register::F22R1 F22R1;
      /**
        Filter bank 22 register 2
      */
      volatile Register::F22R2 F22R2;
      /**
        Filter bank 23 register 1
      */
      volatile Register::F23R1 F23R1;
      /**
        Filter bank 23 register 2
      */
      volatile Register::F23R2 F23R2;
      /**
        Filter bank 24 register 1
      */
      volatile Register::F24R1 F24R1;
      /**
        Filter bank 24 register 2
      */
      volatile Register::F24R2 F24R2;
      /**
        Filter bank 25 register 1
      */
      volatile Register::F25R1 F25R1;
      /**
        Filter bank 25 register 2
      */
      volatile Register::F25R2 F25R2;
      /**
        Filter bank 26 register 1
      */
      volatile Register::F26R1 F26R1;
      /**
        Filter bank 26 register 2
      */
      volatile Register::F26R2 F26R2;
      /**
        Filter bank 27 register 1
      */
      volatile Register::F27R1 F27R1;
      /**
        Filter bank 27 register 2
      */
      volatile Register::F27R2 F27R2;
    };
  }
}