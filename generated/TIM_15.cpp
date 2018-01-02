namespace MCU {
  namespace TIM_15 {
    namespace Register {
      
      /**
        control register 1
      */
      class CR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Clock division
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCKD() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Clock division
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCKD(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Auto-reload preload enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARPE() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Auto-reload preload enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARPE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets One-pulse mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOPM() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets One-pulse mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Update request source
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getURS() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Update request source
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setURS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Update disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUDIS() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Update disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUDIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Counter enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Counter enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        control register 2
      */
      class CR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Output Idle state 1
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOIS(int index) volatile {
          return (raw & (0x1 << (8 + 2 * (index - 1)))) >> (8 + 2 * (index - 1));
        }
        /**
          Sets Output Idle state 1
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOIS(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 2 * (index - 1)))) | ((value << (8 + 2 * (index - 1))) & (0x1 << (8 + 2 * (index - 1))));
        }
        /**
          Gets Output Idle state 1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOIS1N() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Output Idle state 1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOIS1N(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Master mode selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getMMS() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Master mode selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setMMS(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
        /**
          Gets Capture/compare DMA selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCCDS() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Capture/compare DMA selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCCDS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Capture/compare control update selection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCCUS() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Capture/compare control update selection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCCUS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Capture/compare preloaded control
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCCPC() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Capture/compare preloaded control
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCCPC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        slave mode control register
      */
      class SMCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Master/Slave mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMSM() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Master/Slave mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMSM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Trigger selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getTS() volatile {
          return (raw & (0x7 << 4)) >> 4;
        }
        /**
          Sets Trigger selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setTS(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 4)) | ((value << 4) & (0x7 << 4));
        }
        /**
          Gets Slave mode selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getSMS() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Slave mode selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setSMS(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
      };
      
      /**
        DMA/Interrupt enable register
      */
      class DIER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Capture/Compare 1 DMA request enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_DE(int index) volatile {
          return (raw & (0x1 << (9 + 1 * (index - 1)))) >> (9 + 1 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 DMA request enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_DE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (9 + 1 * (index - 1)))) | ((value << (9 + 1 * (index - 1))) & (0x1 << (9 + 1 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 interrupt enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_IE(int index) volatile {
          return (raw & (0x1 << (1 + 1 * (index - 1)))) >> (1 + 1 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 interrupt enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_IE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 1 * (index - 1)))) | ((value << (1 + 1 * (index - 1))) & (0x1 << (1 + 1 * (index - 1))));
        }
        /**
          Gets Trigger DMA request enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTDE() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Trigger DMA request enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTDE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Update DMA request enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUDE() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Update DMA request enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUDE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Break interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBIE() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Break interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Trigger interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIE() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Trigger interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets COM interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMIE() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets COM interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Update interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUIE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Update interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
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
          Gets Capture/Compare 1 overcapture flag
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_OF(int index) volatile {
          return (raw & (0x1 << (9 + 1 * (index - 1)))) >> (9 + 1 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 overcapture flag
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_OF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (9 + 1 * (index - 1)))) | ((value << (9 + 1 * (index - 1))) & (0x1 << (9 + 1 * (index - 1))));
        }
        /**
          Gets Capture/compare 1 interrupt flag
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_IF(int index) volatile {
          return (raw & (0x1 << (1 + 1 * (index - 1)))) >> (1 + 1 * (index - 1));
        }
        /**
          Sets Capture/compare 1 interrupt flag
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_IF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 1 * (index - 1)))) | ((value << (1 + 1 * (index - 1))) & (0x1 << (1 + 1 * (index - 1))));
        }
        /**
          Gets Break interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBIF() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Break interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBIF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Trigger interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTIF() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Trigger interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTIF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets COM interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMIF() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets COM interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMIF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Update interrupt flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUIF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Update interrupt flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUIF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        event generation register
      */
      class EGR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Capture/compare 1 generation
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_G(int index) volatile {
          return (raw & (0x1 << (1 + 1 * (index - 1)))) >> (1 + 1 * (index - 1));
        }
        /**
          Sets Capture/compare 1 generation
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_G(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 1 * (index - 1)))) | ((value << (1 + 1 * (index - 1))) & (0x1 << (1 + 1 * (index - 1))));
        }
        /**
          Gets Break generation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBG() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Break generation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Trigger generation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTG() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Trigger generation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Capture/Compare control update generation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCOMG() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Capture/Compare control update generation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCOMG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Update generation
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUG() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Update generation
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUG(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        capture/compare mode register (output mode)
      */
      class CCMR1_Output {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Output Compare 1 mode
          @param index in range 1..2
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getOC_M(int index) volatile {
          return (raw & (0x7 << (4 + 8 * (index - 1)))) >> (4 + 8 * (index - 1));
        }
        /**
          Sets Output Compare 1 mode
          @param index in range 1..2
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setOC_M(int index, unsigned long value) volatile {
          raw = (raw & ~(0x7 << (4 + 8 * (index - 1)))) | ((value << (4 + 8 * (index - 1))) & (0x7 << (4 + 8 * (index - 1))));
        }
        /**
          Gets Output Compare 1 preload enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOC_PE(int index) volatile {
          return (raw & (0x1 << (3 + 8 * (index - 1)))) >> (3 + 8 * (index - 1));
        }
        /**
          Sets Output Compare 1 preload enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOC_PE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 8 * (index - 1)))) | ((value << (3 + 8 * (index - 1))) & (0x1 << (3 + 8 * (index - 1))));
        }
        /**
          Gets Output Compare 1 fast enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOC_FE(int index) volatile {
          return (raw & (0x1 << (2 + 8 * (index - 1)))) >> (2 + 8 * (index - 1));
        }
        /**
          Sets Output Compare 1 fast enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOC_FE(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 8 * (index - 1)))) | ((value << (2 + 8 * (index - 1))) & (0x1 << (2 + 8 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 selection
          @param index in range 1..2
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC_S(int index) volatile {
          return (raw & (0x3 << (0 + 8 * (index - 1)))) >> (0 + 8 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 selection
          @param index in range 1..2
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC_S(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 8 * (index - 1)))) | ((value << (0 + 8 * (index - 1))) & (0x3 << (0 + 8 * (index - 1))));
        }
      };
      
      /**
        capture/compare mode register 1 (input mode)
      */
      class CCMR1_Input {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Input capture 1 filter
          @param index in range 1..2
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getIC_F(int index) volatile {
          return (raw & (0xF << (4 + 8 * (index - 1)))) >> (4 + 8 * (index - 1));
        }
        /**
          Sets Input capture 1 filter
          @param index in range 1..2
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setIC_F(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (4 + 8 * (index - 1)))) | ((value << (4 + 8 * (index - 1))) & (0xF << (4 + 8 * (index - 1))));
        }
        /**
          Gets Input capture 1 prescaler
          @param index in range 1..2
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getIC_PSC(int index) volatile {
          return (raw & (0x3 << (2 + 8 * (index - 1)))) >> (2 + 8 * (index - 1));
        }
        /**
          Sets Input capture 1 prescaler
          @param index in range 1..2
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setIC_PSC(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (2 + 8 * (index - 1)))) | ((value << (2 + 8 * (index - 1))) & (0x3 << (2 + 8 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 selection
          @param index in range 1..2
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getCC_S(int index) volatile {
          return (raw & (0x3 << (0 + 8 * (index - 1)))) >> (0 + 8 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 selection
          @param index in range 1..2
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setCC_S(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 8 * (index - 1)))) | ((value << (0 + 8 * (index - 1))) & (0x3 << (0 + 8 * (index - 1))));
        }
      };
      
      /**
        capture/compare enable register
      */
      class CCER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Capture/Compare 1 output Polarity
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_NP(int index) volatile {
          return (raw & (0x1 << (3 + 4 * (index - 1)))) >> (3 + 4 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_NP(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 4 * (index - 1)))) | ((value << (3 + 4 * (index - 1))) & (0x1 << (3 + 4 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 output Polarity
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_P(int index) volatile {
          return (raw & (0x1 << (1 + 4 * (index - 1)))) >> (1 + 4 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 output Polarity
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_P(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 4 * (index - 1)))) | ((value << (1 + 4 * (index - 1))) & (0x1 << (1 + 4 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 output enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC_E(int index) volatile {
          return (raw & (0x1 << (0 + 4 * (index - 1)))) >> (0 + 4 * (index - 1));
        }
        /**
          Sets Capture/Compare 1 output enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC_E(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 4 * (index - 1)))) | ((value << (0 + 4 * (index - 1))) & (0x1 << (0 + 4 * (index - 1))));
        }
        /**
          Gets Capture/Compare 1 complementary output enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCC1NE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Capture/Compare 1 complementary output enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCC1NE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        counter
      */
      class CNT {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets counter value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCNT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets counter value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCNT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        prescaler
      */
      class PSC {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Prescaler value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getPSC() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Prescaler value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setPSC(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        auto-reload register
      */
      class ARR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Auto-reload value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getARR() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Auto-reload value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setARR(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        repetition counter register
      */
      class RCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Repetition counter value
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getREP() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Repetition counter value
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setREP(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        capture/compare register 1
      */
      class CCR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Capture/Compare 1 value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR1() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 1 value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCCR1(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        capture/compare register 2
      */
      class CCR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Capture/Compare 2 value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getCCR2() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Capture/Compare 2 value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setCCR2(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        break and dead-time register
      */
      class BDTR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Main output enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMOE() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets Main output enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMOE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Automatic output enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAOE() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Automatic output enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAOE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
        /**
          Gets Break polarity
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBKP() volatile {
          return (raw & (0x1 << 13)) >> 13;
        }
        /**
          Sets Break polarity
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBKP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 13)) | ((value << 13) & (0x1 << 13));
        }
        /**
          Gets Break enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBKE() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Break enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBKE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Off-state selection for Run mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOSSR() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Off-state selection for Run mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOSSR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Off-state selection for Idle mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOSSI() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Off-state selection for Idle mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOSSI(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Lock configuration
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getLOCK() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Lock configuration
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setLOCK(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Dead-time generator setup
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getDTG() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Dead-time generator setup
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setDTG(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        DMA control register
      */
      class DCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DMA burst length
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDBL() volatile {
          return (raw & (0x1F << 8)) >> 8;
        }
        /**
          Sets DMA burst length
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setDBL(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 8)) | ((value << 8) & (0x1F << 8));
        }
        /**
          Gets DMA base address
          @return value in range 0..31
        */
        __attribute__((always_inline)) unsigned long getDBA() volatile {
          return (raw & (0x1F << 0)) >> 0;
        }
        /**
          Sets DMA base address
          @param value in range 0..31
        */
        __attribute__((always_inline)) unsigned long setDBA(unsigned long value) volatile {
          raw = (raw & ~(0x1F << 0)) | ((value << 0) & (0x1F << 0));
        }
      };
      
      /**
        DMA address for full transfer
      */
      class DMAR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets DMA register for burst accesses
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getDMAB() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets DMA register for burst accesses
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setDMAB(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      /**
        control register 1
      */
      volatile Register::CR1 CR1;
      /**
        control register 2
      */
      volatile Register::CR2 CR2;
      /**
        slave mode control register
      */
      volatile Register::SMCR SMCR;
      /**
        DMA/Interrupt enable register
      */
      volatile Register::DIER DIER;
      /**
        status register
      */
      volatile Register::SR SR;
      /**
        event generation register
      */
      volatile Register::EGR EGR;
      /**
        capture/compare mode register (output mode)
      */
      volatile Register::CCMR1_Output CCMR1_Output;
      /**
        capture/compare mode register 1 (input mode)
      */
      volatile Register::CCMR1_Input CCMR1_Input;
      volatile char _space28[4];
      /**
        capture/compare enable register
      */
      volatile Register::CCER CCER;
      /**
        counter
      */
      volatile Register::CNT CNT;
      /**
        prescaler
      */
      volatile Register::PSC PSC;
      /**
        auto-reload register
      */
      volatile Register::ARR ARR;
      /**
        repetition counter register
      */
      volatile Register::RCR RCR;
      /**
        capture/compare register 1
      */
      volatile Register::CCR1 CCR1;
      /**
        capture/compare register 2
      */
      volatile Register::CCR2 CCR2;
      volatile char _space60[8];
      /**
        break and dead-time register
      */
      volatile Register::BDTR BDTR;
      /**
        DMA control register
      */
      volatile Register::DCR DCR;
      /**
        DMA address for full transfer
      */
      volatile Register::DMAR DMAR;
    };
  }
}