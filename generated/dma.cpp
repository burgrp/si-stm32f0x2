namespace target {
  namespace dma {
    namespace reg {
      
      /**
        DMA interrupt status register (DMA_ISR)
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
          Gets Channel 1 Global interrupt flag
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getGIF(int index) volatile {
          return (raw & (0x1 << (0 + 4 * (index - 1)))) >> (0 + 4 * (index - 1));
        }
        /**
          Sets Channel 1 Global interrupt flag
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setGIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 4 * (index - 1)))) | ((value << (0 + 4 * (index - 1))) & (0x1 << (0 + 4 * (index - 1))));
        }
        /**
          Gets Channel 1 Transfer Complete flag
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIF(int index) volatile {
          return (raw & (0x1 << (1 + 4 * (index - 1)))) >> (1 + 4 * (index - 1));
        }
        /**
          Sets Channel 1 Transfer Complete flag
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 4 * (index - 1)))) | ((value << (1 + 4 * (index - 1))) & (0x1 << (1 + 4 * (index - 1))));
        }
        /**
          Gets Channel 1 Half Transfer Complete flag
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIF(int index) volatile {
          return (raw & (0x1 << (2 + 4 * (index - 1)))) >> (2 + 4 * (index - 1));
        }
        /**
          Sets Channel 1 Half Transfer Complete flag
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 4 * (index - 1)))) | ((value << (2 + 4 * (index - 1))) & (0x1 << (2 + 4 * (index - 1))));
        }
        /**
          Gets Channel 1 Transfer Error flag
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIF(int index) volatile {
          return (raw & (0x1 << (3 + 4 * (index - 1)))) >> (3 + 4 * (index - 1));
        }
        /**
          Sets Channel 1 Transfer Error flag
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 4 * (index - 1)))) | ((value << (3 + 4 * (index - 1))) & (0x1 << (3 + 4 * (index - 1))));
        }
      };
      
      /**
        DMA interrupt flag clear register (DMA_IFCR)
      */
      class IFCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel 1 Global interrupt clear
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCGIF(int index) volatile {
          return (raw & (0x1 << (0 + 4 * (index - 1)))) >> (0 + 4 * (index - 1));
        }
        /**
          Sets Channel 1 Global interrupt clear
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCGIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 4 * (index - 1)))) | ((value << (0 + 4 * (index - 1))) & (0x1 << (0 + 4 * (index - 1))));
        }
        /**
          Gets Channel 1 Transfer Complete clear
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTCIF(int index) volatile {
          return (raw & (0x1 << (1 + 4 * (index - 1)))) >> (1 + 4 * (index - 1));
        }
        /**
          Sets Channel 1 Transfer Complete clear
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTCIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (1 + 4 * (index - 1)))) | ((value << (1 + 4 * (index - 1))) & (0x1 << (1 + 4 * (index - 1))));
        }
        /**
          Gets Channel 1 Half Transfer clear
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCHTIF(int index) volatile {
          return (raw & (0x1 << (2 + 4 * (index - 1)))) >> (2 + 4 * (index - 1));
        }
        /**
          Sets Channel 1 Half Transfer clear
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCHTIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 4 * (index - 1)))) | ((value << (2 + 4 * (index - 1))) & (0x1 << (2 + 4 * (index - 1))));
        }
        /**
          Gets Channel 1 Transfer Error clear
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCTEIF(int index) volatile {
          return (raw & (0x1 << (3 + 4 * (index - 1)))) >> (3 + 4 * (index - 1));
        }
        /**
          Sets Channel 1 Transfer Error clear
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCTEIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (3 + 4 * (index - 1)))) | ((value << (3 + 4 * (index - 1))) & (0x1 << (3 + 4 * (index - 1))));
        }
      };
      
      /**
        DMA channel configuration register (DMA_CCR)
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
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Half Transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half Transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel Priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
      };
      
      /**
        DMA channel 1 number of data register
      */
      class CNDTR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        DMA channel 1 peripheral address register
      */
      class CPAR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        DMA channel 1 memory address register
      */
      class CMAR1 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        DMA channel configuration register (DMA_CCR)
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
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Half Transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half Transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel Priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
      };
      
      /**
        DMA channel 2 number of data register
      */
      class CNDTR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        DMA channel 2 peripheral address register
      */
      class CPAR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        DMA channel 2 memory address register
      */
      class CMAR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        DMA channel configuration register (DMA_CCR)
      */
      class CCR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Half Transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half Transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel Priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
      };
      
      /**
        DMA channel 3 number of data register
      */
      class CNDTR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        DMA channel 3 peripheral address register
      */
      class CPAR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        DMA channel 3 memory address register
      */
      class CMAR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        DMA channel configuration register (DMA_CCR)
      */
      class CCR4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Half Transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half Transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel Priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
      };
      
      /**
        DMA channel 4 number of data register
      */
      class CNDTR4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        DMA channel 4 peripheral address register
      */
      class CPAR4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        DMA channel 4 memory address register
      */
      class CMAR4 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        DMA channel configuration register (DMA_CCR)
      */
      class CCR5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Half Transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half Transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel Priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
      };
      
      /**
        DMA channel 5 number of data register
      */
      class CNDTR5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        DMA channel 5 peripheral address register
      */
      class CPAR5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        DMA channel 5 memory address register
      */
      class CMAR5 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        DMA channel configuration register (DMA_CCR)
      */
      class CCR6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Half Transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half Transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel Priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
      };
      
      /**
        DMA channel 6 number of data register
      */
      class CNDTR6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        DMA channel 6 peripheral address register
      */
      class CPAR6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        DMA channel 6 memory address register
      */
      class CMAR6 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        DMA channel configuration register (DMA_CCR)
      */
      class CCR7 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Channel enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Channel enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Transfer complete interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Transfer complete interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Half Transfer interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHTIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Half Transfer interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Transfer error interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTEIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Transfer error interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Data transfer direction
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDIR() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Data transfer direction
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDIR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Circular mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCIRC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Circular mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCIRC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Peripheral increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPINC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Peripheral increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Memory increment mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMINC() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Memory increment mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMINC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Peripheral size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPSIZE() volatile {
          return (raw & (0x3 << 8)) >> 8;
        }
        /**
          Sets Peripheral size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 8)) | ((value << 8) & (0x3 << 8));
        }
        /**
          Gets Memory size
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMSIZE() volatile {
          return (raw & (0x3 << 10)) >> 10;
        }
        /**
          Sets Memory size
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMSIZE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 10)) | ((value << 10) & (0x3 << 10));
        }
        /**
          Gets Channel Priority level
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPL() volatile {
          return (raw & (0x3 << 12)) >> 12;
        }
        /**
          Sets Channel Priority level
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPL(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 12)) | ((value << 12) & (0x3 << 12));
        }
        /**
          Gets Memory to memory mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMEM2MEM() volatile {
          return (raw & (0x1 << 14)) >> 14;
        }
        /**
          Sets Memory to memory mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMEM2MEM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 14)) | ((value << 14) & (0x1 << 14));
        }
      };
      
      /**
        DMA channel 7 number of data register
      */
      class CNDTR7 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Number of data to transfer
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getNDT() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Number of data to transfer
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setNDT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        DMA channel 7 peripheral address register
      */
      class CPAR7 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Peripheral address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getPA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Peripheral address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setPA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
      
      /**
        DMA channel 7 memory address register
      */
      class CMAR7 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Memory address
          @return value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long getMA() volatile {
          return (raw & (0xFFFFFFFF << 0)) >> 0;
        }
        /**
          Sets Memory address
          @param value in range 0..4294967295
        */
        __attribute__((always_inline)) unsigned long setMA(unsigned long value) volatile {
          raw = (raw & ~(0xFFFFFFFF << 0)) | ((value << 0) & (0xFFFFFFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      /**
        DMA interrupt status register (DMA_ISR)
      */
      volatile reg::ISR ISR;
      /**
        DMA interrupt flag clear register (DMA_IFCR)
      */
      volatile reg::IFCR IFCR;
      /**
        DMA channel configuration register (DMA_CCR)
      */
      volatile reg::CCR1 CCR1;
      /**
        DMA channel 1 number of data register
      */
      volatile reg::CNDTR1 CNDTR1;
      /**
        DMA channel 1 peripheral address register
      */
      volatile reg::CPAR1 CPAR1;
      /**
        DMA channel 1 memory address register
      */
      volatile reg::CMAR1 CMAR1;
      volatile char _space24[4];
      /**
        DMA channel configuration register (DMA_CCR)
      */
      volatile reg::CCR2 CCR2;
      /**
        DMA channel 2 number of data register
      */
      volatile reg::CNDTR2 CNDTR2;
      /**
        DMA channel 2 peripheral address register
      */
      volatile reg::CPAR2 CPAR2;
      /**
        DMA channel 2 memory address register
      */
      volatile reg::CMAR2 CMAR2;
      volatile char _space44[4];
      /**
        DMA channel configuration register (DMA_CCR)
      */
      volatile reg::CCR3 CCR3;
      /**
        DMA channel 3 number of data register
      */
      volatile reg::CNDTR3 CNDTR3;
      /**
        DMA channel 3 peripheral address register
      */
      volatile reg::CPAR3 CPAR3;
      /**
        DMA channel 3 memory address register
      */
      volatile reg::CMAR3 CMAR3;
      volatile char _space64[4];
      /**
        DMA channel configuration register (DMA_CCR)
      */
      volatile reg::CCR4 CCR4;
      /**
        DMA channel 4 number of data register
      */
      volatile reg::CNDTR4 CNDTR4;
      /**
        DMA channel 4 peripheral address register
      */
      volatile reg::CPAR4 CPAR4;
      /**
        DMA channel 4 memory address register
      */
      volatile reg::CMAR4 CMAR4;
      volatile char _space84[4];
      /**
        DMA channel configuration register (DMA_CCR)
      */
      volatile reg::CCR5 CCR5;
      /**
        DMA channel 5 number of data register
      */
      volatile reg::CNDTR5 CNDTR5;
      /**
        DMA channel 5 peripheral address register
      */
      volatile reg::CPAR5 CPAR5;
      /**
        DMA channel 5 memory address register
      */
      volatile reg::CMAR5 CMAR5;
      volatile char _space104[4];
      /**
        DMA channel configuration register (DMA_CCR)
      */
      volatile reg::CCR6 CCR6;
      /**
        DMA channel 6 number of data register
      */
      volatile reg::CNDTR6 CNDTR6;
      /**
        DMA channel 6 peripheral address register
      */
      volatile reg::CPAR6 CPAR6;
      /**
        DMA channel 6 memory address register
      */
      volatile reg::CMAR6 CMAR6;
      volatile char _space124[4];
      /**
        DMA channel configuration register (DMA_CCR)
      */
      volatile reg::CCR7 CCR7;
      /**
        DMA channel 7 number of data register
      */
      volatile reg::CNDTR7 CNDTR7;
      /**
        DMA channel 7 peripheral address register
      */
      volatile reg::CPAR7 CPAR7;
      /**
        DMA channel 7 memory address register
      */
      volatile reg::CMAR7 CMAR7;
    };
  }
  
  extern dma::Peripheral DMA1;
}