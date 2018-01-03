namespace target {
  namespace scb {
    namespace reg {
      
      /**
        CPUID base register
      */
      class CPUID {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Revision number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getRevision() volatile {
          return (raw & (0xF << 0)) >> 0;
        }
        /**
          Sets Revision number
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setRevision(unsigned long value) volatile {
          raw = (raw & ~(0xF << 0)) | ((value << 0) & (0xF << 0));
        }
        /**
          Gets Part number of the processor
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getPartNo() volatile {
          return (raw & (0xFFF << 4)) >> 4;
        }
        /**
          Sets Part number of the processor
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setPartNo(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 4)) | ((value << 4) & (0xFFF << 4));
        }
        /**
          Gets Reads as 0xF
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getConstant() volatile {
          return (raw & (0xF << 16)) >> 16;
        }
        /**
          Sets Reads as 0xF
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setConstant(unsigned long value) volatile {
          raw = (raw & ~(0xF << 16)) | ((value << 16) & (0xF << 16));
        }
        /**
          Gets Variant number
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getVariant() volatile {
          return (raw & (0xF << 20)) >> 20;
        }
        /**
          Sets Variant number
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setVariant(unsigned long value) volatile {
          raw = (raw & ~(0xF << 20)) | ((value << 20) & (0xF << 20));
        }
        /**
          Gets Implementer code
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getImplementer() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets Implementer code
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setImplementer(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
      };
      
      /**
        Interrupt control and state register
      */
      class ICSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Active vector
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getVECTACTIVE() volatile {
          return (raw & (0x3F << 0)) >> 0;
        }
        /**
          Sets Active vector
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setVECTACTIVE(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 0)) | ((value << 0) & (0x3F << 0));
        }
        /**
          Gets Pending vector
          @return value in range 0..63
        */
        __attribute__((always_inline)) unsigned long getVECTPENDING() volatile {
          return (raw & (0x3F << 12)) >> 12;
        }
        /**
          Sets Pending vector
          @param value in range 0..63
        */
        __attribute__((always_inline)) unsigned long setVECTPENDING(unsigned long value) volatile {
          raw = (raw & ~(0x3F << 12)) | ((value << 12) & (0x3F << 12));
        }
        /**
          Gets Interrupt pending flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getISRPENDING() volatile {
          return (raw & (0x1 << 22)) >> 22;
        }
        /**
          Sets Interrupt pending flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setISRPENDING(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 22)) | ((value << 22) & (0x1 << 22));
        }
        /**
          Gets SysTick exception clear-pending bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPENDSTCLR() volatile {
          return (raw & (0x1 << 25)) >> 25;
        }
        /**
          Sets SysTick exception clear-pending bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPENDSTCLR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 25)) | ((value << 25) & (0x1 << 25));
        }
        /**
          Gets SysTick exception set-pending bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPENDSTSET() volatile {
          return (raw & (0x1 << 26)) >> 26;
        }
        /**
          Sets SysTick exception set-pending bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPENDSTSET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 26)) | ((value << 26) & (0x1 << 26));
        }
        /**
          Gets PendSV clear-pending bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPENDSVCLR() volatile {
          return (raw & (0x1 << 27)) >> 27;
        }
        /**
          Sets PendSV clear-pending bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPENDSVCLR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 27)) | ((value << 27) & (0x1 << 27));
        }
        /**
          Gets PendSV set-pending bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPENDSVSET() volatile {
          return (raw & (0x1 << 28)) >> 28;
        }
        /**
          Sets PendSV set-pending bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPENDSVSET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 28)) | ((value << 28) & (0x1 << 28));
        }
        /**
          Gets NMI set-pending bit.
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNMIPENDSET() volatile {
          return (raw & (0x1 << 31)) >> 31;
        }
        /**
          Sets NMI set-pending bit.
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNMIPENDSET(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 31)) | ((value << 31) & (0x1 << 31));
        }
      };
      
      /**
        Application interrupt and reset control register
      */
      class AIRCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets VECTCLRACTIVE
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getVECTCLRACTIVE() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets VECTCLRACTIVE
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setVECTCLRACTIVE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets SYSRESETREQ
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYSRESETREQ() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets SYSRESETREQ
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYSRESETREQ(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets ENDIANESS
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getENDIANESS() volatile {
          return (raw & (0x1 << 15)) >> 15;
        }
        /**
          Sets ENDIANESS
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setENDIANESS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 15)) | ((value << 15) & (0x1 << 15));
        }
        /**
          Gets Register key
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getVECTKEYSTAT() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets Register key
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setVECTKEYSTAT(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
      };
      
      /**
        System control register
      */
      class SCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets SLEEPONEXIT
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSLEEPONEXIT() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets SLEEPONEXIT
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSLEEPONEXIT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets SLEEPDEEP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSLEEPDEEP() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets SLEEPDEEP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSLEEPDEEP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Send Event on Pending bit
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSEVEONPEND() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Send Event on Pending bit
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSEVEONPEND(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
      };
      
      /**
        Configuration and control register
      */
      class CCR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets UNALIGN_ TRP
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUNALIGN__TRP() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets UNALIGN_ TRP
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUNALIGN__TRP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets STKALIGN
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSTKALIGN() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets STKALIGN
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSTKALIGN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
      };
      
      /**
        System handler priority registers
      */
      class SHPR2 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Priority of system handler 11
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_11() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets Priority of system handler 11
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_11(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
      };
      
      /**
        System handler priority registers
      */
      class SHPR3 {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Priority of system handler 14
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_14() volatile {
          return (raw & (0xFF << 16)) >> 16;
        }
        /**
          Sets Priority of system handler 14
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_14(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 16)) | ((value << 16) & (0xFF << 16));
        }
        /**
          Gets Priority of system handler 15
          @return value in range 0..255
        */
        __attribute__((always_inline)) unsigned long getPRI_15() volatile {
          return (raw & (0xFF << 24)) >> 24;
        }
        /**
          Sets Priority of system handler 15
          @param value in range 0..255
        */
        __attribute__((always_inline)) unsigned long setPRI_15(unsigned long value) volatile {
          raw = (raw & ~(0xFF << 24)) | ((value << 24) & (0xFF << 24));
        }
      };
    };
    class Peripheral {
      public:
      /**
        CPUID base register
      */
      volatile reg::CPUID CPUID;
      /**
        Interrupt control and state register
      */
      volatile reg::ICSR ICSR;
      volatile char _space8[4];
      /**
        Application interrupt and reset control register
      */
      volatile reg::AIRCR AIRCR;
      /**
        System control register
      */
      volatile reg::SCR SCR;
      /**
        Configuration and control register
      */
      volatile reg::CCR CCR;
      volatile char _space24[4];
      /**
        System handler priority registers
      */
      volatile reg::SHPR2 SHPR2;
      /**
        System handler priority registers
      */
      volatile reg::SHPR3 SHPR3;
    };
  }
  
  extern "C" {
    scb::Peripheral SCB;
  }
}