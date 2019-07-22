namespace target {
  namespace comp {
    namespace reg {
      
      /**
        control and status register
      */
      class CSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Comparator 1 enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP_EN(int index) volatile {
          return (raw & (0x1 << (0 + 16 * (index - 1)))) >> (0 + 16 * (index - 1));
        }
        /**
          Sets Comparator 1 enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP_EN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 16 * (index - 1)))) | ((value << (0 + 16 * (index - 1))) & (0x1 << (0 + 16 * (index - 1))));
        }
        /**
          Gets Comparator 1 enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCOMP_EN() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Comparator 1 enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCOMP_EN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets Comparator 1 mode
          @param index in range 1..2
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCOMP_MODE(int index) volatile {
          return (raw & (0x3 << (2 + 16 * (index - 1)))) >> (2 + 16 * (index - 1));
        }
        /**
          Sets Comparator 1 mode
          @param index in range 1..2
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCOMP_MODE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (2 + 16 * (index - 1)))) | ((value << (2 + 16 * (index - 1))) & (0x3 << (2 + 16 * (index - 1))));
        }
        /**
          Gets Comparator 1 mode
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCOMP_MODE() volatile {
          return (raw & (0xF << 2)) >> 2;
        }
        /**
          Sets Comparator 1 mode
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCOMP_MODE(unsigned long value) volatile {
          raw = (raw & ~(0xF << 2)) | ((value << 2) & (0xF << 2));
        }
        /**
          Gets Comparator 1 inverting input selection
          @param index in range 1..2
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCOMP_INSEL(int index) volatile {
          return (raw & (0x7 << (4 + 16 * (index - 1)))) >> (4 + 16 * (index - 1));
        }
        /**
          Sets Comparator 1 inverting input selection
          @param index in range 1..2
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setCOMP_INSEL(int index, unsigned long value) volatile {
          raw = (raw & ~(0x7 << (4 + 16 * (index - 1)))) | ((value << (4 + 16 * (index - 1))) & (0x7 << (4 + 16 * (index - 1))));
        }
        /**
          Gets Comparator 1 inverting input selection
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getCOMP_INSEL() volatile {
          return (raw & (0x3F << 4)) >> 4;
        }
        /**
          Sets Comparator 1 inverting input selection
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setCOMP_INSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 4)) | ((value << 4) & (0x3F << 4));
        }
        /**
          Gets Comparator 1 output selection
          @param index in range 1..2
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCOMP_OUTSEL(int index) volatile {
          return (raw & (0x7 << (8 + 16 * (index - 1)))) >> (8 + 16 * (index - 1));
        }
        /**
          Sets Comparator 1 output selection
          @param index in range 1..2
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setCOMP_OUTSEL(int index, unsigned long value) volatile {
          raw = (raw & ~(0x7 << (8 + 16 * (index - 1)))) | ((value << (8 + 16 * (index - 1))) & (0x7 << (8 + 16 * (index - 1))));
        }
        /**
          Gets Comparator 1 output selection
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getCOMP_OUTSEL() volatile {
          return (raw & (0x3F << 8)) >> 8;
        }
        /**
          Sets Comparator 1 output selection
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setCOMP_OUTSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 8)) | ((value << 8) & (0x3F << 8));
        }
        /**
          Gets Comparator 1 output polarity
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP_POL(int index) volatile {
          return (raw & (0x1 << (11 + 16 * (index - 1)))) >> (11 + 16 * (index - 1));
        }
        /**
          Sets Comparator 1 output polarity
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP_POL(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (11 + 16 * (index - 1)))) | ((value << (11 + 16 * (index - 1))) & (0x1 << (11 + 16 * (index - 1))));
        }
        /**
          Gets Comparator 1 output polarity
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCOMP_POL() volatile {
          return (raw & (0x3 << 11)) >> 11;
        }
        /**
          Sets Comparator 1 output polarity
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCOMP_POL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 11)) | ((value << 11) & (0x3 << 11));
        }
        /**
          Gets Comparator 1 hysteresis
          @param index in range 1..2
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCOMP_HYST(int index) volatile {
          return (raw & (0x3 << (12 + 16 * (index - 1)))) >> (12 + 16 * (index - 1));
        }
        /**
          Sets Comparator 1 hysteresis
          @param index in range 1..2
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCOMP_HYST(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (12 + 16 * (index - 1)))) | ((value << (12 + 16 * (index - 1))) & (0x3 << (12 + 16 * (index - 1))));
        }
        /**
          Gets Comparator 1 hysteresis
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getCOMP_HYST() volatile {
          return (raw & (0xF << 12)) >> 12;
        }
        /**
          Sets Comparator 1 hysteresis
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setCOMP_HYST(unsigned long value) volatile {
          raw = (raw & ~(0xF << 12)) | ((value << 12) & (0xF << 12));
        }
        /**
          Gets Comparator 1 output
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP_OUT(int index) volatile {
          return (raw & (0x1 << (14 + 16 * (index - 1)))) >> (14 + 16 * (index - 1));
        }
        /**
          Sets Comparator 1 output
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP_OUT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (14 + 16 * (index - 1)))) | ((value << (14 + 16 * (index - 1))) & (0x1 << (14 + 16 * (index - 1))));
        }
        /**
          Gets Comparator 1 output
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCOMP_OUT() volatile {
          return (raw & (0x3 << 14)) >> 14;
        }
        /**
          Sets Comparator 1 output
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCOMP_OUT(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 14)) | ((value << 14) & (0x3 << 14));
        }
        /**
          Gets Comparator 1 lock
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP_LOCK(int index) volatile {
          return (raw & (0x1 << (15 + 16 * (index - 1)))) >> (15 + 16 * (index - 1));
        }
        /**
          Sets Comparator 1 lock
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP_LOCK(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (15 + 16 * (index - 1)))) | ((value << (15 + 16 * (index - 1))) & (0x1 << (15 + 16 * (index - 1))));
        }
        /**
          Gets Comparator 1 lock
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCOMP_LOCK() volatile {
          return (raw & (0x3 << 15)) >> 15;
        }
        /**
          Sets Comparator 1 lock
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCOMP_LOCK(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 15)) | ((value << 15) & (0x3 << 15));
        }
        /**
          Gets COMP1_INP_DAC
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMP1_INP_DAC() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets COMP1_INP_DAC
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMP1_INP_DAC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Window mode enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWNDWEN() volatile {
          return (raw & (0x1 << 23)) >> 23;
        }
        /**
          Sets Window mode enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWNDWEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 23)) | ((value << 23) & (0x1 << 23));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            control and status register
          */
          volatile reg::CSR CSR;
        };
      };
    };
  }
  
  extern comp::Peripheral COMP;
}