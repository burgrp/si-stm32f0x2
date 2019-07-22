namespace target {
  namespace can {
    namespace reg {
      
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
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getLOW() volatile {
          return (raw & (0x7 << 29)) >> 29;
        }
        /**
          Sets Lowest priority flag for mailbox 0
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setLOW(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 29)) | ((value << 29) & (0x7 << 29));
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
          Gets Lowest priority flag for mailbox 0
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getTME() volatile {
          return (raw & (0x7 << 26)) >> 26;
        }
        /**
          Sets Lowest priority flag for mailbox 0
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setTME(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 26)) | ((value << 26) & (0x7 << 26));
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
          Gets ABRQ0
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getABRQ() volatile {
          return (raw & (0x7 << 7)) >> 7;
        }
        /**
          Sets ABRQ0
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setABRQ(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 7)) | ((value << 7) & (0x7 << 7));
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
          Gets TERR0
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getTERR() volatile {
          return (raw & (0x7 << 3)) >> 3;
        }
        /**
          Sets TERR0
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setTERR(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 3)) | ((value << 3) & (0x7 << 3));
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
          Gets ALST0
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getALST() volatile {
          return (raw & (0x7 << 2)) >> 2;
        }
        /**
          Sets ALST0
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setALST(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 2)) | ((value << 2) & (0x7 << 2));
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
          Gets TXOK0
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getTXOK() volatile {
          return (raw & (0x7 << 1)) >> 1;
        }
        /**
          Sets TXOK0
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setTXOK(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 1)) | ((value << 1) & (0x7 << 1));
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
          Gets RQCP0
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getRQCP() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets RQCP0
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setRQCP(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
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
          Gets FOVIE0
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFOVIE() volatile {
          return (raw & (0x3 << 3)) >> 3;
        }
        /**
          Sets FOVIE0
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setFOVIE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 3)) | ((value << 3) & (0x3 << 3));
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
          Gets FFIE0
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFFIE() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets FFIE0
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setFFIE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
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
          Gets FMPIE0
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getFMPIE() volatile {
          return (raw & (0x3 << 1)) >> 1;
        }
        /**
          Sets FMPIE0
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setFMPIE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 1)) | ((value << 1) & (0x3 << 1));
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
        CAN_BTR
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
          Gets TS1
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getTS() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets TS1
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setTS(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
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
        /**
          Gets DATA0
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets DATA0
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets DATA4
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets DATA4
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets DATA0
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets DATA0
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets DATA4
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets DATA4
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets DATA0
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets DATA0
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets DATA4
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets DATA4
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets DATA0
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets DATA0
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets DATA4
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets DATA4
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets DATA0
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets DATA0
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets DATA4
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getDATA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets DATA4
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setDATA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter mode
          @return value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long getFBM() volatile {
          return (raw & (0xFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter mode
          @param value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long setFBM(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFF << 0));
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
        /**
          Gets Filter scale configuration
          @return value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long getFSC() volatile {
          return (raw & (0xFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter scale configuration
          @param value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long setFSC(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFF << 0));
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
        /**
          Gets Filter FIFO assignment for filter 0
          @return value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long getFFA() volatile {
          return (raw & (0xFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter FIFO assignment for filter 0
          @param value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long setFFA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFF << 0));
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
        /**
          Gets Filter active
          @return value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long getFACT() volatile {
          return (raw & (0xFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter active
          @param value in range 0..268435455
        */
        __attribute__((always_inline)) unsigned long setFACT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
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
        /**
          Gets Filter bits
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getFB() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Filter bits
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setFB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            CAN_MCR
          */
          volatile reg::CAN_MCR CAN_MCR;
        };
        struct {
          volatile char _space_CAN_MSR[4];
          /**
            CAN_MSR
          */
          volatile reg::CAN_MSR CAN_MSR;
        };
        struct {
          volatile char _space_CAN_TSR[8];
          /**
            CAN_TSR
          */
          volatile reg::CAN_TSR CAN_TSR;
        };
        struct {
          volatile char _space_CAN_RF0R[12];
          /**
            CAN_RF0R
          */
          volatile reg::CAN_RF0R CAN_RF0R;
        };
        struct {
          volatile char _space_CAN_RF1R[16];
          /**
            CAN_RF1R
          */
          volatile reg::CAN_RF1R CAN_RF1R;
        };
        struct {
          volatile char _space_CAN_IER[20];
          /**
            CAN_IER
          */
          volatile reg::CAN_IER CAN_IER;
        };
        struct {
          volatile char _space_CAN_ESR[24];
          /**
            CAN_ESR
          */
          volatile reg::CAN_ESR CAN_ESR;
        };
        struct {
          volatile char _space_CAN_BTR[28];
          /**
            CAN_BTR
          */
          volatile reg::CAN_BTR CAN_BTR;
        };
        struct {
          volatile char _space_CAN_TI0R[384];
          /**
            CAN_TI0R
          */
          volatile reg::CAN_TI0R CAN_TI0R;
        };
        struct {
          volatile char _space_CAN_TDT0R[388];
          /**
            CAN_TDT0R
          */
          volatile reg::CAN_TDT0R CAN_TDT0R;
        };
        struct {
          volatile char _space_CAN_TDL0R[392];
          /**
            CAN_TDL0R
          */
          volatile reg::CAN_TDL0R CAN_TDL0R;
        };
        struct {
          volatile char _space_CAN_TDH0R[396];
          /**
            CAN_TDH0R
          */
          volatile reg::CAN_TDH0R CAN_TDH0R;
        };
        struct {
          volatile char _space_CAN_TI1R[400];
          /**
            CAN_TI1R
          */
          volatile reg::CAN_TI1R CAN_TI1R;
        };
        struct {
          volatile char _space_CAN_TDT1R[404];
          /**
            CAN_TDT1R
          */
          volatile reg::CAN_TDT1R CAN_TDT1R;
        };
        struct {
          volatile char _space_CAN_TDL1R[408];
          /**
            CAN_TDL1R
          */
          volatile reg::CAN_TDL1R CAN_TDL1R;
        };
        struct {
          volatile char _space_CAN_TDH1R[412];
          /**
            CAN_TDH1R
          */
          volatile reg::CAN_TDH1R CAN_TDH1R;
        };
        struct {
          volatile char _space_CAN_TI2R[416];
          /**
            CAN_TI2R
          */
          volatile reg::CAN_TI2R CAN_TI2R;
        };
        struct {
          volatile char _space_CAN_TDT2R[420];
          /**
            CAN_TDT2R
          */
          volatile reg::CAN_TDT2R CAN_TDT2R;
        };
        struct {
          volatile char _space_CAN_TDL2R[424];
          /**
            CAN_TDL2R
          */
          volatile reg::CAN_TDL2R CAN_TDL2R;
        };
        struct {
          volatile char _space_CAN_TDH2R[428];
          /**
            CAN_TDH2R
          */
          volatile reg::CAN_TDH2R CAN_TDH2R;
        };
        struct {
          volatile char _space_CAN_RI0R[432];
          /**
            CAN_RI0R
          */
          volatile reg::CAN_RI0R CAN_RI0R;
        };
        struct {
          volatile char _space_CAN_RDT0R[436];
          /**
            CAN_RDT0R
          */
          volatile reg::CAN_RDT0R CAN_RDT0R;
        };
        struct {
          volatile char _space_CAN_RDL0R[440];
          /**
            CAN_RDL0R
          */
          volatile reg::CAN_RDL0R CAN_RDL0R;
        };
        struct {
          volatile char _space_CAN_RDH0R[444];
          /**
            CAN_RDH0R
          */
          volatile reg::CAN_RDH0R CAN_RDH0R;
        };
        struct {
          volatile char _space_CAN_RI1R[448];
          /**
            CAN_RI1R
          */
          volatile reg::CAN_RI1R CAN_RI1R;
        };
        struct {
          volatile char _space_CAN_RDT1R[452];
          /**
            CAN_RDT1R
          */
          volatile reg::CAN_RDT1R CAN_RDT1R;
        };
        struct {
          volatile char _space_CAN_RDL1R[456];
          /**
            CAN_RDL1R
          */
          volatile reg::CAN_RDL1R CAN_RDL1R;
        };
        struct {
          volatile char _space_CAN_RDH1R[460];
          /**
            CAN_RDH1R
          */
          volatile reg::CAN_RDH1R CAN_RDH1R;
        };
        struct {
          volatile char _space_CAN_FMR[512];
          /**
            CAN_FMR
          */
          volatile reg::CAN_FMR CAN_FMR;
        };
        struct {
          volatile char _space_CAN_FM1R[516];
          /**
            CAN_FM1R
          */
          volatile reg::CAN_FM1R CAN_FM1R;
        };
        struct {
          volatile char _space_CAN_FS1R[524];
          /**
            CAN_FS1R
          */
          volatile reg::CAN_FS1R CAN_FS1R;
        };
        struct {
          volatile char _space_CAN_FFA1R[532];
          /**
            CAN_FFA1R
          */
          volatile reg::CAN_FFA1R CAN_FFA1R;
        };
        struct {
          volatile char _space_CAN_FA1R[540];
          /**
            CAN_FA1R
          */
          volatile reg::CAN_FA1R CAN_FA1R;
        };
        struct {
          volatile char _space_F0R1[576];
          /**
            Filter bank 0 register 1
          */
          volatile reg::F0R1 F0R1;
        };
        struct {
          volatile char _space_F0R2[580];
          /**
            Filter bank 0 register 2
          */
          volatile reg::F0R2 F0R2;
        };
        struct {
          volatile char _space_F1R1[584];
          /**
            Filter bank 1 register 1
          */
          volatile reg::F1R1 F1R1;
        };
        struct {
          volatile char _space_F1R2[588];
          /**
            Filter bank 1 register 2
          */
          volatile reg::F1R2 F1R2;
        };
        struct {
          volatile char _space_F2R1[592];
          /**
            Filter bank 2 register 1
          */
          volatile reg::F2R1 F2R1;
        };
        struct {
          volatile char _space_F2R2[596];
          /**
            Filter bank 2 register 2
          */
          volatile reg::F2R2 F2R2;
        };
        struct {
          volatile char _space_F3R1[600];
          /**
            Filter bank 3 register 1
          */
          volatile reg::F3R1 F3R1;
        };
        struct {
          volatile char _space_F3R2[604];
          /**
            Filter bank 3 register 2
          */
          volatile reg::F3R2 F3R2;
        };
        struct {
          volatile char _space_F4R1[608];
          /**
            Filter bank 4 register 1
          */
          volatile reg::F4R1 F4R1;
        };
        struct {
          volatile char _space_F4R2[612];
          /**
            Filter bank 4 register 2
          */
          volatile reg::F4R2 F4R2;
        };
        struct {
          volatile char _space_F5R1[616];
          /**
            Filter bank 5 register 1
          */
          volatile reg::F5R1 F5R1;
        };
        struct {
          volatile char _space_F5R2[620];
          /**
            Filter bank 5 register 2
          */
          volatile reg::F5R2 F5R2;
        };
        struct {
          volatile char _space_F6R1[624];
          /**
            Filter bank 6 register 1
          */
          volatile reg::F6R1 F6R1;
        };
        struct {
          volatile char _space_F6R2[628];
          /**
            Filter bank 6 register 2
          */
          volatile reg::F6R2 F6R2;
        };
        struct {
          volatile char _space_F7R1[632];
          /**
            Filter bank 7 register 1
          */
          volatile reg::F7R1 F7R1;
        };
        struct {
          volatile char _space_F7R2[636];
          /**
            Filter bank 7 register 2
          */
          volatile reg::F7R2 F7R2;
        };
        struct {
          volatile char _space_F8R1[640];
          /**
            Filter bank 8 register 1
          */
          volatile reg::F8R1 F8R1;
        };
        struct {
          volatile char _space_F8R2[644];
          /**
            Filter bank 8 register 2
          */
          volatile reg::F8R2 F8R2;
        };
        struct {
          volatile char _space_F9R1[648];
          /**
            Filter bank 9 register 1
          */
          volatile reg::F9R1 F9R1;
        };
        struct {
          volatile char _space_F9R2[652];
          /**
            Filter bank 9 register 2
          */
          volatile reg::F9R2 F9R2;
        };
        struct {
          volatile char _space_F10R1[656];
          /**
            Filter bank 10 register 1
          */
          volatile reg::F10R1 F10R1;
        };
        struct {
          volatile char _space_F10R2[660];
          /**
            Filter bank 10 register 2
          */
          volatile reg::F10R2 F10R2;
        };
        struct {
          volatile char _space_F11R1[664];
          /**
            Filter bank 11 register 1
          */
          volatile reg::F11R1 F11R1;
        };
        struct {
          volatile char _space_F11R2[668];
          /**
            Filter bank 11 register 2
          */
          volatile reg::F11R2 F11R2;
        };
        struct {
          volatile char _space_F12R1[672];
          /**
            Filter bank 4 register 1
          */
          volatile reg::F12R1 F12R1;
        };
        struct {
          volatile char _space_F12R2[676];
          /**
            Filter bank 12 register 2
          */
          volatile reg::F12R2 F12R2;
        };
        struct {
          volatile char _space_F13R1[680];
          /**
            Filter bank 13 register 1
          */
          volatile reg::F13R1 F13R1;
        };
        struct {
          volatile char _space_F13R2[684];
          /**
            Filter bank 13 register 2
          */
          volatile reg::F13R2 F13R2;
        };
        struct {
          volatile char _space_F14R1[688];
          /**
            Filter bank 14 register 1
          */
          volatile reg::F14R1 F14R1;
        };
        struct {
          volatile char _space_F14R2[692];
          /**
            Filter bank 14 register 2
          */
          volatile reg::F14R2 F14R2;
        };
        struct {
          volatile char _space_F15R1[696];
          /**
            Filter bank 15 register 1
          */
          volatile reg::F15R1 F15R1;
        };
        struct {
          volatile char _space_F15R2[700];
          /**
            Filter bank 15 register 2
          */
          volatile reg::F15R2 F15R2;
        };
        struct {
          volatile char _space_F16R1[704];
          /**
            Filter bank 16 register 1
          */
          volatile reg::F16R1 F16R1;
        };
        struct {
          volatile char _space_F16R2[708];
          /**
            Filter bank 16 register 2
          */
          volatile reg::F16R2 F16R2;
        };
        struct {
          volatile char _space_F17R1[712];
          /**
            Filter bank 17 register 1
          */
          volatile reg::F17R1 F17R1;
        };
        struct {
          volatile char _space_F17R2[716];
          /**
            Filter bank 17 register 2
          */
          volatile reg::F17R2 F17R2;
        };
        struct {
          volatile char _space_F18R1[720];
          /**
            Filter bank 18 register 1
          */
          volatile reg::F18R1 F18R1;
        };
        struct {
          volatile char _space_F18R2[724];
          /**
            Filter bank 18 register 2
          */
          volatile reg::F18R2 F18R2;
        };
        struct {
          volatile char _space_F19R1[728];
          /**
            Filter bank 19 register 1
          */
          volatile reg::F19R1 F19R1;
        };
        struct {
          volatile char _space_F19R2[732];
          /**
            Filter bank 19 register 2
          */
          volatile reg::F19R2 F19R2;
        };
        struct {
          volatile char _space_F20R1[736];
          /**
            Filter bank 20 register 1
          */
          volatile reg::F20R1 F20R1;
        };
        struct {
          volatile char _space_F20R2[740];
          /**
            Filter bank 20 register 2
          */
          volatile reg::F20R2 F20R2;
        };
        struct {
          volatile char _space_F21R1[744];
          /**
            Filter bank 21 register 1
          */
          volatile reg::F21R1 F21R1;
        };
        struct {
          volatile char _space_F21R2[748];
          /**
            Filter bank 21 register 2
          */
          volatile reg::F21R2 F21R2;
        };
        struct {
          volatile char _space_F22R1[752];
          /**
            Filter bank 22 register 1
          */
          volatile reg::F22R1 F22R1;
        };
        struct {
          volatile char _space_F22R2[756];
          /**
            Filter bank 22 register 2
          */
          volatile reg::F22R2 F22R2;
        };
        struct {
          volatile char _space_F23R1[760];
          /**
            Filter bank 23 register 1
          */
          volatile reg::F23R1 F23R1;
        };
        struct {
          volatile char _space_F23R2[764];
          /**
            Filter bank 23 register 2
          */
          volatile reg::F23R2 F23R2;
        };
        struct {
          volatile char _space_F24R1[768];
          /**
            Filter bank 24 register 1
          */
          volatile reg::F24R1 F24R1;
        };
        struct {
          volatile char _space_F24R2[772];
          /**
            Filter bank 24 register 2
          */
          volatile reg::F24R2 F24R2;
        };
        struct {
          volatile char _space_F25R1[776];
          /**
            Filter bank 25 register 1
          */
          volatile reg::F25R1 F25R1;
        };
        struct {
          volatile char _space_F25R2[780];
          /**
            Filter bank 25 register 2
          */
          volatile reg::F25R2 F25R2;
        };
        struct {
          volatile char _space_F26R1[784];
          /**
            Filter bank 26 register 1
          */
          volatile reg::F26R1 F26R1;
        };
        struct {
          volatile char _space_F26R2[788];
          /**
            Filter bank 26 register 2
          */
          volatile reg::F26R2 F26R2;
        };
        struct {
          volatile char _space_F27R1[792];
          /**
            Filter bank 27 register 1
          */
          volatile reg::F27R1 F27R1;
        };
        struct {
          volatile char _space_F27R2[796];
          /**
            Filter bank 27 register 2
          */
          volatile reg::F27R2 F27R2;
        };
      };
    };
  }
  
  extern can::Peripheral CAN;
}