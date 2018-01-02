namespace MCU {
  namespace RTC {
    namespace Register {
      
      /**
        time register
      */
      class TR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets AM/PM notation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPM() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets AM/PM notation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets Hour tens in BCD format
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getHT() volatile {
          return (raw & (0x3 << 20)) >> 20;
        }
        /**
          Sets Hour tens in BCD format
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setHT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 20)) | ((value << 20) & (0x3 << 20));
        }
        /**
          Gets Hour units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getHU() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Hour units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setHU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Minute tens in BCD format
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMNT() volatile {
          return (raw & (0x7 << 12)) >> 12;
        }
        /**
          Sets Minute tens in BCD format
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMNT(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((value << 12) & (0x7 << 12));
        }
        /**
          Gets Minute units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMNU() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Minute units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMNU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Second tens in BCD format
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getST() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Second tens in BCD format
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setST(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
        /**
          Gets Second units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSU() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Second units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setSU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        date register
      */
      class DR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Year tens in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getYT() volatile {
          return (raw & (0xF << 20)) >> 20;
        }
        /**
          Sets Year tens in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setYT(unsigned long value) volatile {
          raw = (raw & ~(0xF << 20)) | ((value << 20) & (0xF << 20));
        }
        /**
          Gets Year units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getYU() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Year units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setYU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Week day units
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getWDU() volatile {
          return (raw & (0x7 << 13)) >> 13;
        }
        /**
          Sets Week day units
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setWDU(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 13)) | ((value << 13) & (0x7 << 13));
        }
        /**
          Gets Month tens in BCD format
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMT() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Month tens in BCD format
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Month units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMU() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Month units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Date tens in BCD format
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDT() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Date tens in BCD format
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Date units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDU() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Date units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
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
          Gets Time-stamp event active edge
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSEDGE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Time-stamp event active edge
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSEDGE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets RTC_REFIN reference clock detection enable (50 or 60 Hz)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getREFCKON() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets RTC_REFIN reference clock detection enable (50 or 60 Hz)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setREFCKON(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Bypass the shadow registers
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBYPSHAD() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Bypass the shadow registers
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBYPSHAD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Hour format
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFMT() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Hour format
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFMT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Alarm A enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALRAE() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Alarm A enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALRAE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets timestamp enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSE() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets timestamp enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Alarm A interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALRAIE() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Alarm A interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALRAIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Time-stamp interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSIE() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Time-stamp interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Add 1 hour (summer time change)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADD1H() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Add 1 hour (summer time change)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADD1H(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Subtract 1 hour (winter time change)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSUB1H() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets Subtract 1 hour (winter time change)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSUB1H(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets Backup
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets Backup
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBKP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
        /**
          Gets Calibration output selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOSEL() volatile {
          return (raw & (0x1 << 19)) >> 19;
        }
        /**
          Sets Calibration output selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOSEL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 19)) | ((value << 19) & (0x1 << 19));
        }
        /**
          Gets Output polarity
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPOL() volatile {
          return (raw & (0x1 << 20)) >> 20;
        }
        /**
          Sets Output polarity
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPOL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 20)) | ((value << 20) & (0x1 << 20));
        }
        /**
          Gets Output selection
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOSEL() volatile {
          return (raw & (0x3 << 21)) >> 21;
        }
        /**
          Sets Output selection
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setOSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 21)) | ((value << 21) & (0x3 << 21));
        }
        /**
          Gets Calibration output enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOE() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets Calibration output enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
      };
      
      /**
        initialization and status register
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
          Gets RTC_TAMP1 detection flag
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMP_F(int index) volatile {
          return (raw & (0x1 << (13 + 1 * (index - 1)))) >> (13 + 1 * (index - 1));
        }
        /**
          Sets RTC_TAMP1 detection flag
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMP_F(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (13 + 1 * (index - 1)))) | ((value << (13 + 1 * (index - 1))) & (0x1 << (13 + 1 * (index - 1))));
        }
        /**
          Gets Alarm A write flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALRAWF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Alarm A write flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALRAWF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Shift operation pending
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSHPF() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Shift operation pending
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSHPF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Initialization status flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getINITS() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Initialization status flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setINITS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Registers synchronization flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRSF() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Registers synchronization flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRSF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Initialization flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getINITF() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Initialization flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setINITF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Initialization mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getINIT() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Initialization mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setINIT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Alarm A flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getALRAF() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Alarm A flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setALRAF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Time-stamp flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSF() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Time-stamp flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Time-stamp overflow flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTSOVF() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Time-stamp overflow flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTSOVF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Recalibration pending Flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRECALPF() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Recalibration pending Flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRECALPF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
      };
      
      /**
        prescaler register
      */
      class PRER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Asynchronous prescaler factor
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getPREDIV_A() volatile {
          return (raw & (0x7F << 16)) >> 16;
        }
        /**
          Sets Asynchronous prescaler factor
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setPREDIV_A(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 16)) | ((value << 16) & (0x7F << 16));
        }
        /**
          Gets Synchronous prescaler factor
          @return value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long getPREDIV_S() volatile {
          return (raw & (0x7FFF << 0)) >> 0;
        }
        /**
          Sets Synchronous prescaler factor
          @param value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long setPREDIV_S(unsigned long value) volatile {
          raw = (raw & ~(0x7FFF << 0)) | ((value << 0) & (0x7FFF << 0));
        }
      };
      
      /**
        alarm A register
      */
      class ALRMAR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Alarm A seconds mask
          @param index in range 1..4
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMSK(int index) volatile {
          return (raw & (0x1 << (7 + 8 * (index - 1)))) >> (7 + 8 * (index - 1));
        }
        /**
          Sets Alarm A seconds mask
          @param index in range 1..4
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMSK(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (7 + 8 * (index - 1)))) | ((value << (7 + 8 * (index - 1))) & (0x1 << (7 + 8 * (index - 1))));
        }
        /**
          Gets Week day selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWDSEL() volatile {
          return (raw & (0x1 << 30)) >> 30;
        }
        /**
          Sets Week day selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWDSEL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 30)) | ((value << 30) & (0x1 << 30));
        }
        /**
          Gets Date tens in BCD format.
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDT() volatile {
          return (raw & (0x3 << 28)) >> 28;
        }
        /**
          Sets Date tens in BCD format.
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 28)) | ((value << 28) & (0x3 << 28));
        }
        /**
          Gets Date units or day in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDU() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Date units or day in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
        /**
          Gets AM/PM notation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPM() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets AM/PM notation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets Hour tens in BCD format.
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getHT() volatile {
          return (raw & (0x3 << 20)) >> 20;
        }
        /**
          Sets Hour tens in BCD format.
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setHT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 20)) | ((value << 20) & (0x3 << 20));
        }
        /**
          Gets Hour units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getHU() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Hour units in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setHU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Minute tens in BCD format.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMNT() volatile {
          return (raw & (0x7 << 12)) >> 12;
        }
        /**
          Sets Minute tens in BCD format.
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMNT(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((value << 12) & (0x7 << 12));
        }
        /**
          Gets Minute units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMNU() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Minute units in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMNU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Second tens in BCD format.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getST() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Second tens in BCD format.
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setST(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
        /**
          Gets Second units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSU() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Second units in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setSU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        write protection register
      */
      class WPR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Write protection key
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getKEY() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Write protection key
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setKEY(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        sub second register
      */
      class SSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Sub second value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getSS() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Sub second value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setSS(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        shift control register
      */
      class SHIFTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Add one second
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADD1S() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets Add one second
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADD1S(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
        /**
          Gets Subtract a fraction of a second
          @return value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long getSUBFS() volatile {
          return (raw & (0x7FFF << 0)) >> 0;
        }
        /**
          Sets Subtract a fraction of a second
          @param value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long setSUBFS(unsigned long value) volatile {
          raw = (raw & ~(0x7FFF << 0)) | ((value << 0) & (0x7FFF << 0));
        }
      };
      
      /**
        timestamp time register
      */
      class TSTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets AM/PM notation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPM() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets AM/PM notation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets Hour tens in BCD format.
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getHT() volatile {
          return (raw & (0x3 << 20)) >> 20;
        }
        /**
          Sets Hour tens in BCD format.
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setHT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 20)) | ((value << 20) & (0x3 << 20));
        }
        /**
          Gets Hour units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getHU() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Hour units in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setHU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Minute tens in BCD format.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMNT() volatile {
          return (raw & (0x7 << 12)) >> 12;
        }
        /**
          Sets Minute tens in BCD format.
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMNT(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 12)) | ((value << 12) & (0x7 << 12));
        }
        /**
          Gets Minute units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMNU() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Minute units in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMNU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Second tens in BCD format.
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getST() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Second tens in BCD format.
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setST(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
        /**
          Gets Second units in BCD format.
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getSU() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Second units in BCD format.
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setSU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        timestamp date register
      */
      class TSDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Week day units
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getWDU() volatile {
          return (raw & (0x7 << 13)) >> 13;
        }
        /**
          Sets Week day units
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setWDU(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 13)) | ((value << 13) & (0x7 << 13));
        }
        /**
          Gets Month tens in BCD format
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMT() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Month tens in BCD format
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Month units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMU() volatile {
          return (raw & (0xF << 8)) >> 8;
        }
        /**
          Sets Month units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 8)) | ((value << 8) & (0xF << 8));
        }
        /**
          Gets Date tens in BCD format
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDT() volatile {
          return (raw & (0x3 << 4)) >> 4;
        }
        /**
          Sets Date tens in BCD format
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 4)) | ((value << 4) & (0x3 << 4));
        }
        /**
          Gets Date units in BCD format
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDU() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Date units in BCD format
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDU(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        time-stamp sub second register
      */
      class TSSSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Sub second value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getSS() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Sub second value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setSS(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        calibration register
      */
      class CALR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Increase frequency of RTC by 488.5 ppm
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCALP() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Increase frequency of RTC by 488.5 ppm
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCALP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Use an 8-second calibration cycle period
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCALW8() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Use an 8-second calibration cycle period
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCALW8(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Use a 16-second calibration cycle period
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCALW16() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Use a 16-second calibration cycle period
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCALW16(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets Calibration minus
          @return value in range 0..511
        */
        __attribute__((always_inline)) unsigned long getCALM() volatile {
          return (raw & (0x1FF << 0)) >> 0;
        }
        /**
          Sets Calibration minus
          @param value in range 0..511
        */
        __attribute__((always_inline)) unsigned long setCALM(unsigned long value) volatile {
          raw = (raw & ~(0x1FF << 0)) | ((value << 0) & (0x1FF << 0));
        }
      };
      
      /**
        tamper and alternate function configuration register
      */
      class TAFCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets PC13 mode
          @param index in range 13..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPC_MODE(int index) volatile {
          return (raw & (0x1 << (19 + 2 * (index - 13)))) >> (19 + 2 * (index - 13));
        }
        /**
          Sets PC13 mode
          @param index in range 13..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPC_MODE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (19 + 2 * (index - 13)))) | ((value << (19 + 2 * (index - 13))) & (0x1 << (19 + 2 * (index - 13))));
        }
        /**
          Gets RTC_ALARM output type/PC13 value
          @param index in range 13..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPC_VALUE(int index) volatile {
          return (raw & (0x1 << (18 + 2 * (index - 13)))) >> (18 + 2 * (index - 13));
        }
        /**
          Sets RTC_ALARM output type/PC13 value
          @param index in range 13..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPC_VALUE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (18 + 2 * (index - 13)))) | ((value << (18 + 2 * (index - 13))) & (0x1 << (18 + 2 * (index - 13))));
        }
        /**
          Gets RTC_TAMP1 input detection enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMP_E(int index) volatile {
          return (raw & (0x1 << (0 + 3 * (index - 1)))) >> (0 + 3 * (index - 1));
        }
        /**
          Sets RTC_TAMP1 input detection enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMP_E(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 3 * (index - 1)))) | ((value << (0 + 3 * (index - 1))) & (0x1 << (0 + 3 * (index - 1))));
        }
        /**
          Gets RTC_TAMPx pull-up disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMP_PUDIS() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets RTC_TAMPx pull-up disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMP_PUDIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets RTC_TAMPx precharge duration
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTAMP_PRCH() volatile {
          return (raw & (0x3 << 13)) >> 13;
        }
        /**
          Sets RTC_TAMPx precharge duration
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTAMP_PRCH(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 13)) | ((value << 13) & (0x3 << 13));
        }
        /**
          Gets RTC_TAMPx filter count
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTAMPFLT() volatile {
          return (raw & (0x3 << 11)) >> 11;
        }
        /**
          Sets RTC_TAMPx filter count
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTAMPFLT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 11)) | ((value << 11) & (0x3 << 11));
        }
        /**
          Gets Tamper sampling frequency
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getTAMPFREQ() volatile {
          return (raw & (0x7 << 8)) >> 8;
        }
        /**
          Sets Tamper sampling frequency
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setTAMPFREQ(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 8)) | ((value << 8) & (0x7 << 8));
        }
        /**
          Gets Activate timestamp on tamper detection event
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMPTS() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Activate timestamp on tamper detection event
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMPTS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Active level for RTC_TAMP2 input
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMP2_TRG() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Active level for RTC_TAMP2 input
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMP2_TRG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Tamper interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMPIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Tamper interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMPIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Active level for RTC_TAMP1 input
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTAMP1TRG() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Active level for RTC_TAMP1 input
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTAMP1TRG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
      };
      
      /**
        alarm A sub second register
      */
      class ALRMASSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Mask the most-significant bits starting at this bit
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMASKSS() volatile {
          return (raw & (0xF << 24)) >> 24;
        }
        /**
          Sets Mask the most-significant bits starting at this bit
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMASKSS(unsigned long value) volatile {
          raw = (raw & ~(0xF << 24)) | ((value << 24) & (0xF << 24));
        }
        /**
          Gets Sub seconds value
          @return value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long getSS() volatile {
          return (raw & (0x7FFF << 0)) >> 0;
        }
        /**
          Sets Sub seconds value
          @param value in range 0..32767
        */
        __attribute__((always_inline)) unsigned long setSS(unsigned long value) volatile {
          raw = (raw & ~(0x7FFF << 0)) | ((value << 0) & (0x7FFF << 0));
        }
      };
      
      /**
        backup register
      */
      class BKP0R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets BKP
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        backup register
      */
      class BKP1R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets BKP
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        backup register
      */
      class BKP2R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets BKP
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        backup register
      */
      class BKP3R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets BKP
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        backup register
      */
      class BKP4R {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets BKP
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets BKP
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setBKP(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      /**
        time register
      */
      volatile Register::TR TR;
      /**
        date register
      */
      volatile Register::DR DR;
      /**
        control register
      */
      volatile Register::CR CR;
      /**
        initialization and status register
      */
      volatile Register::ISR ISR;
      /**
        prescaler register
      */
      volatile Register::PRER PRER;
      volatile char _space20[8];
      /**
        alarm A register
      */
      volatile Register::ALRMAR ALRMAR;
      volatile char _space32[4];
      /**
        write protection register
      */
      volatile Register::WPR WPR;
      /**
        sub second register
      */
      volatile Register::SSR SSR;
      /**
        shift control register
      */
      volatile Register::SHIFTR SHIFTR;
      /**
        timestamp time register
      */
      volatile Register::TSTR TSTR;
      /**
        timestamp date register
      */
      volatile Register::TSDR TSDR;
      /**
        time-stamp sub second register
      */
      volatile Register::TSSSR TSSSR;
      /**
        calibration register
      */
      volatile Register::CALR CALR;
      /**
        tamper and alternate function configuration register
      */
      volatile Register::TAFCR TAFCR;
      /**
        alarm A sub second register
      */
      volatile Register::ALRMASSR ALRMASSR;
      volatile char _space72[8];
      /**
        backup register
      */
      volatile Register::BKP0R BKP0R;
      /**
        backup register
      */
      volatile Register::BKP1R BKP1R;
      /**
        backup register
      */
      volatile Register::BKP2R BKP2R;
      /**
        backup register
      */
      volatile Register::BKP3R BKP3R;
      /**
        backup register
      */
      volatile Register::BKP4R BKP4R;
    };
  }
}