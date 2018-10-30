namespace target {
  namespace dac {
    namespace reg {
      
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
          Gets DAC channel1 enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN(int index) volatile {
          return (raw & (0x1 << (0 + 16 * (index - 1)))) >> (0 + 16 * (index - 1));
        }
        /**
          Sets DAC channel1 enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 16 * (index - 1)))) | ((value << (0 + 16 * (index - 1))) & (0x1 << (0 + 16 * (index - 1))));
        }
        /**
          Gets DAC channel1 enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets DAC channel1 enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
        /**
          Gets DAC channel1 output buffer disable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOFF(int index) volatile {
          return (raw & (0x1 << (1 + 16 * (index - 1)))) >> (1 + 16 * (index - 1));
        }
        /**
          Sets DAC channel1 output buffer disable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOFF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 16 * (index - 1)))) | ((value << (1 + 16 * (index - 1))) & (0x1 << (1 + 16 * (index - 1))));
        }
        /**
          Gets DAC channel1 output buffer disable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getBOFF() volatile {
          return (raw & (0x3 << 1)) >> 1;
        }
        /**
          Sets DAC channel1 output buffer disable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setBOFF(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 1)) | ((value << 1) & (0x3 << 1));
        }
        /**
          Gets DAC channel1 trigger enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEN(int index) volatile {
          return (raw & (0x1 << (2 + 16 * (index - 1)))) >> (2 + 16 * (index - 1));
        }
        /**
          Sets DAC channel1 trigger enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 16 * (index - 1)))) | ((value << (2 + 16 * (index - 1))) & (0x1 << (2 + 16 * (index - 1))));
        }
        /**
          Gets DAC channel1 trigger enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTEN() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets DAC channel1 trigger enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTEN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
        }
        /**
          Gets DAC channel1 trigger selection
          @param index in range 1..2
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getTSEL(int index) volatile {
          return (raw & (0x7 << (3 + 16 * (index - 1)))) >> (3 + 16 * (index - 1));
        }
        /**
          Sets DAC channel1 trigger selection
          @param index in range 1..2
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setTSEL(int index, unsigned long value) volatile {
          raw = (raw & ~(0x7 << (3 + 16 * (index - 1)))) | ((value << (3 + 16 * (index - 1))) & (0x7 << (3 + 16 * (index - 1))));
        }
        /**
          Gets DAC channel1 trigger selection
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getTSEL() volatile {
          return (raw & (0x3F << 3)) >> 3;
        }
        /**
          Sets DAC channel1 trigger selection
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setTSEL(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 3)) | ((value << 3) & (0x3F << 3));
        }
        /**
          Gets DAC channel1 noise/triangle wave generation enable
          @param index in range 1..2
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getWAVE(int index) volatile {
          return (raw & (0x3 << (6 + 16 * (index - 1)))) >> (6 + 16 * (index - 1));
        }
        /**
          Sets DAC channel1 noise/triangle wave generation enable
          @param index in range 1..2
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setWAVE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (6 + 16 * (index - 1)))) | ((value << (6 + 16 * (index - 1))) & (0x3 << (6 + 16 * (index - 1))));
        }
        /**
          Gets DAC channel1 noise/triangle wave generation enable
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getWAVE() volatile {
          return (raw & (0xF << 6)) >> 6;
        }
        /**
          Sets DAC channel1 noise/triangle wave generation enable
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setWAVE(unsigned long value) volatile {
          raw = (raw & ~(0xF << 6)) | ((value << 6) & (0xF << 6));
        }
        /**
          Gets DAC channel1 mask/amplitude selector
          @param index in range 1..2
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getMAMP(int index) volatile {
          return (raw & (0xF << (8 + 16 * (index - 1)))) >> (8 + 16 * (index - 1));
        }
        /**
          Sets DAC channel1 mask/amplitude selector
          @param index in range 1..2
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setMAMP(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (8 + 16 * (index - 1)))) | ((value << (8 + 16 * (index - 1))) & (0xF << (8 + 16 * (index - 1))));
        }
        /**
          Gets DAC channel1 mask/amplitude selector
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getMAMP() volatile {
          return (raw & (0xFF << 8)) >> 8;
        }
        /**
          Sets DAC channel1 mask/amplitude selector
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setMAMP(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 8)) | ((value << 8) & (0xFF << 8));
        }
        /**
          Gets DAC channel1 DMA enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAEN(int index) volatile {
          return (raw & (0x1 << (12 + 16 * (index - 1)))) >> (12 + 16 * (index - 1));
        }
        /**
          Sets DAC channel1 DMA enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAEN(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (12 + 16 * (index - 1)))) | ((value << (12 + 16 * (index - 1))) & (0x1 << (12 + 16 * (index - 1))));
        }
        /**
          Gets DAC channel1 DMA enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDMAEN() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets DAC channel1 DMA enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDMAEN(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets DAC channel1 DMA Underrun Interrupt enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAUDRIE(int index) volatile {
          return (raw & (0x1 << (13 + 16 * (index - 1)))) >> (13 + 16 * (index - 1));
        }
        /**
          Sets DAC channel1 DMA Underrun Interrupt enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAUDRIE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (13 + 16 * (index - 1)))) | ((value << (13 + 16 * (index - 1))) & (0x1 << (13 + 16 * (index - 1))));
        }
        /**
          Gets DAC channel1 DMA Underrun Interrupt enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDMAUDRIE() volatile {
          return (raw & (0x3 << 13)) >> 13;
        }
        /**
          Sets DAC channel1 DMA Underrun Interrupt enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDMAUDRIE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 13)) | ((value << 13) & (0x3 << 13));
        }
      };
      
      /**
        software trigger register
      */
      class SWTRIGR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 software trigger
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWTRIG(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 1)))) >> (0 + 1 * (index - 1));
        }
        /**
          Sets DAC channel1 software trigger
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWTRIG(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 1)))) | ((value << (0 + 1 * (index - 1))) & (0x1 << (0 + 1 * (index - 1))));
        }
        /**
          Gets DAC channel1 software trigger
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSWTRIG() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets DAC channel1 software trigger
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSWTRIG(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
      };
      
      /**
        channel1 12-bit right-aligned data holding register
      */
      class DHR12R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 12-bit right-aligned data
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDACC1DHR() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets DAC channel1 12-bit right-aligned data
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDACC1DHR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
      };
      
      /**
        channel1 12-bit left aligned data holding register
      */
      class DHR12L1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 12-bit left-aligned data
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDACC1DHR() volatile {
          return (raw & (0xFFF << 4)) >> 4;
        }
        /**
          Sets DAC channel1 12-bit left-aligned data
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDACC1DHR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 4)) | ((value << 4) & (0xFFF << 4));
        }
      };
      
      /**
        channel1 8-bit right aligned data holding register
      */
      class DHR8R1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 8-bit right-aligned data
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDACC1DHR() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets DAC channel1 8-bit right-aligned data
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDACC1DHR(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        channel1 data output register
      */
      class DOR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 data output
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDACC1DOR() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets DAC channel1 data output
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDACC1DOR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
      };
      
      /**
        status register
      */
      class SR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 DMA underrun flag
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAUDR(int index) volatile {
          return (raw & (0x1 << (13 + 16 * (index - 1)))) >> (13 + 16 * (index - 1));
        }
        /**
          Sets DAC channel1 DMA underrun flag
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAUDR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (13 + 16 * (index - 1)))) | ((value << (13 + 16 * (index - 1))) & (0x1 << (13 + 16 * (index - 1))));
        }
        /**
          Gets DAC channel1 DMA underrun flag
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getDMAUDR() volatile {
          return (raw & (0x3 << 13)) >> 13;
        }
        /**
          Sets DAC channel1 DMA underrun flag
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setDMAUDR(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 13)) | ((value << 13) & (0x3 << 13));
        }
      };
      
      /**
        DAC channel2 12-bit right-aligned data holding register
      */
      class DHR12R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel2 12-bit right-aligned data
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDACC2DHR() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets DAC channel2 12-bit right-aligned data
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDACC2DHR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
      };
      
      /**
        DAC channel2 12-bit left-aligned data holding register
      */
      class DHR12L2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel2 12-bit left-aligned data
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDACC2DHR() volatile {
          return (raw & (0xFFF << 4)) >> 4;
        }
        /**
          Sets DAC channel2 12-bit left-aligned data
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDACC2DHR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 4)) | ((value << 4) & (0xFFF << 4));
        }
      };
      
      /**
        DAC channel2 8-bit right-aligned data holding register
      */
      class DHR8R2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel2 8-bit right-aligned data
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDACC2DHR() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets DAC channel2 8-bit right-aligned data
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDACC2DHR(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        DHR12RD
      */
      class DHR12RD {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 12-bit right-aligned data
          @param index in range 1..2
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDACC_DHR(int index) volatile {
          return (raw & (0xFFF << (0 + 16 * (index - 1)))) >> (0 + 16 * (index - 1));
        }
        /**
          Sets DAC channel1 12-bit right-aligned data
          @param index in range 1..2
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDACC_DHR(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFFF << (0 + 16 * (index - 1)))) | ((value << (0 + 16 * (index - 1))) & (0xFFF << (0 + 16 * (index - 1))));
        }
        /**
          Gets DAC channel1 12-bit right-aligned data
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getDACC_DHR() volatile {
          return (raw & (0xFFFFFF << 0)) >> 0;
        }
        /**
          Sets DAC channel1 12-bit right-aligned data
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setDACC_DHR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 0)) | ((value << 0) & (0xFFFFFF << 0));
        }
      };
      
      /**
        Dual DAC 12-bit left-aligned data holding register
      */
      class DHR12LD {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 12-bit left-aligned data
          @param index in range 1..2
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDACC_DHR(int index) volatile {
          return (raw & (0xFFF << (4 + 16 * (index - 1)))) >> (4 + 16 * (index - 1));
        }
        /**
          Sets DAC channel1 12-bit left-aligned data
          @param index in range 1..2
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDACC_DHR(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFFF << (4 + 16 * (index - 1)))) | ((value << (4 + 16 * (index - 1))) & (0xFFF << (4 + 16 * (index - 1))));
        }
        /**
          Gets DAC channel1 12-bit left-aligned data
          @return value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long getDACC_DHR() volatile {
          return (raw & (0xFFFFFF << 4)) >> 4;
        }
        /**
          Sets DAC channel1 12-bit left-aligned data
          @param value in range 0..16777215
        */
        __attribute__((always_inline)) unsigned long setDACC_DHR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFF << 4)) | ((value << 4) & (0xFFFFFF << 4));
        }
      };
      
      /**
        Dual DAC 8-bit right-aligned data holding register
      */
      class DHR8RD {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel1 8-bit right-aligned data
          @param index in range 1..2
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDACC_DHR(int index) volatile {
          return (raw & (0xFF << (0 + 8 * (index - 1)))) >> (0 + 8 * (index - 1));
        }
        /**
          Sets DAC channel1 8-bit right-aligned data
          @param index in range 1..2
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDACC_DHR(int index, unsigned long value) volatile {
          raw = (raw & ~(0xFF << (0 + 8 * (index - 1)))) | ((value << (0 + 8 * (index - 1))) & (0xFF << (0 + 8 * (index - 1))));
        }
        /**
          Gets DAC channel1 8-bit right-aligned data
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDACC_DHR() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets DAC channel1 8-bit right-aligned data
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setDACC_DHR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        DAC channel2 data output register
      */
      class DOR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DAC channel2 data output
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDACC2DOR() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets DAC channel2 data output
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDACC2DOR(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            control register
          */
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_SWTRIGR[4];
          /**
            software trigger register
          */
          volatile reg::SWTRIGR SWTRIGR;
        };
        struct {
          volatile char _space_DHR12R1[8];
          /**
            channel1 12-bit right-aligned data holding register
          */
          volatile reg::DHR12R1 DHR12R1;
        };
        struct {
          volatile char _space_DHR12L1[12];
          /**
            channel1 12-bit left aligned data holding register
          */
          volatile reg::DHR12L1 DHR12L1;
        };
        struct {
          volatile char _space_DHR8R1[16];
          /**
            channel1 8-bit right aligned data holding register
          */
          volatile reg::DHR8R1 DHR8R1;
        };
        struct {
          volatile char _space_DOR1[44];
          /**
            channel1 data output register
          */
          volatile reg::DOR1 DOR1;
        };
        struct {
          volatile char _space_SR[52];
          /**
            status register
          */
          volatile reg::SR SR;
        };
        struct {
          volatile char _space_DHR12R2[20];
          /**
            DAC channel2 12-bit right-aligned data holding register
          */
          volatile reg::DHR12R2 DHR12R2;
        };
        struct {
          volatile char _space_DHR12L2[24];
          /**
            DAC channel2 12-bit left-aligned data holding register
          */
          volatile reg::DHR12L2 DHR12L2;
        };
        struct {
          volatile char _space_DHR8R2[28];
          /**
            DAC channel2 8-bit right-aligned data holding register
          */
          volatile reg::DHR8R2 DHR8R2;
        };
        struct {
          volatile char _space_DHR12RD[32];
          /**
            DHR12RD
          */
          volatile reg::DHR12RD DHR12RD;
        };
        struct {
          volatile char _space_DHR12LD[36];
          /**
            Dual DAC 12-bit left-aligned data holding register
          */
          volatile reg::DHR12LD DHR12LD;
        };
        struct {
          volatile char _space_DHR8RD[40];
          /**
            Dual DAC 8-bit right-aligned data holding register
          */
          volatile reg::DHR8RD DHR8RD;
        };
        struct {
          volatile char _space_DOR2[48];
          /**
            DAC channel2 data output register
          */
          volatile reg::DOR2 DOR2;
        };
      };
    };
  }
  
  extern dac::Peripheral DAC;
}