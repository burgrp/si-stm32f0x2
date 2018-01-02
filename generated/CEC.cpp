namespace MCU {
  namespace CEC {
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
          Gets Tx End Of Message
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXEOM() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Tx End Of Message
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXEOM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Tx start of message
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXSOM() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Tx start of message
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXSOM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets CEC Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCECEN() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets CEC Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCECEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        configuration register
      */
      class CFGR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Generate Error-Bit on Long Bit Period Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLBPEGEN() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Generate Error-Bit on Long Bit Period Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLBPEGEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Generate error-bit on bit rising error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBREGEN() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Generate error-bit on bit rising error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBREGEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Rx-stop on bit rising error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBRESTP() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Rx-stop on bit rising error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBRESTP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Rx-Tolerance
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXTOL() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Rx-Tolerance
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXTOL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Signal Free Time
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getSFT() volatile {
          return (raw & (0x7 << 5)) >> 5;
        }
        /**
          Sets Signal Free Time
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setSFT(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 5)) | ((value << 5) & (0x7 << 5));
        }
        /**
          Gets Listen mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLSTN() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Listen mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLSTN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Own Address
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getOAR() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Own Address
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setOAR(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
      };
      
      /**
        Tx data register
      */
      class TXDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Tx Data register
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getTXD() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets Tx Data register
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setTXD(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Rx Data Register
      */
      class RXDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CEC Rx Data Register
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getRXDR() volatile {
          return (raw & (0xFF << 0)) >> 0;
        }
        /**
          Sets CEC Rx Data Register
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setRXDR(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 0)) | ((value << 0) & (0xFF << 0));
        }
      };
      
      /**
        Interrupt and Status Register
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
          Gets Tx-Missing acknowledge error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXACKE() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Tx-Missing acknowledge error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXACKE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Tx-Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXERR() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Tx-Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXERR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Tx-Buffer Underrun
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXUDR() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Tx-Buffer Underrun
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXUDR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets End of Transmission
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXEND() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets End of Transmission
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXEND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Tx-Byte Request
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXBR() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Tx-Byte Request
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXBR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Arbitration Lost
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARBLST() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Arbitration Lost
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARBLST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Rx-Missing Acknowledge
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXACKE() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Rx-Missing Acknowledge
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXACKE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Rx-Long Bit Period Error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLBPE() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Rx-Long Bit Period Error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLBPE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Rx-Short Bit period error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSBPE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Rx-Short Bit period error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSBPE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Rx-Bit rising error
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBRE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Rx-Bit rising error
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBRE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Rx-Overrun
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXOVR() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Rx-Overrun
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXOVR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets End Of Reception
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXEND() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets End Of Reception
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXEND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Rx-Byte Received
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXBR() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Rx-Byte Received
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXBR(unsigned long value) volatile {
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
          Gets Tx-Missing Acknowledge Error Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXACKIE() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Tx-Missing Acknowledge Error Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXACKIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets Tx-Error Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXERRIE() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Tx-Error Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXERRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Tx-Underrun interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXUDRIE() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Tx-Underrun interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXUDRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Tx-End of message interrupt enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXENDIE() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Tx-End of message interrupt enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXENDIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Tx-Byte Request Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTXBRIE() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Tx-Byte Request Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTXBRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Arbitration Lost Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getARBLSTIE() volatile {
          return (raw & (0x1 << 7)) >> 7;
        }
        /**
          Sets Arbitration Lost Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setARBLSTIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 7)) | ((value << 7) & (0x1 << 7));
        }
        /**
          Gets Rx-Missing Acknowledge Error Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXACKIE() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets Rx-Missing Acknowledge Error Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXACKIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
        /**
          Gets Long Bit Period Error Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLBPEIE() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Long Bit Period Error Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLBPEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets Short Bit Period Error Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSBPEIE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Short Bit Period Error Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSBPEIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Bit Rising Error Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBREIE() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Bit Rising Error Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBREIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Rx-Buffer Overrun Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXOVRIE() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Rx-Buffer Overrun Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXOVRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets End Of Reception Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXENDIE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets End Of Reception Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXENDIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Rx-Byte Received Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRXBRIE() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Rx-Byte Received Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRXBRIE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
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
        configuration register
      */
      volatile Register::CFGR CFGR;
      /**
        Tx data register
      */
      volatile Register::TXDR TXDR;
      /**
        Rx Data Register
      */
      volatile Register::RXDR RXDR;
      /**
        Interrupt and Status Register
      */
      volatile Register::ISR ISR;
      /**
        interrupt enable register
      */
      volatile Register::IER IER;
    };
  }
}