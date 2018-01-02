namespace MCU {
  namespace IWDG {
    namespace Register {
      
      /**
        Key register
      */
      class KR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Key value
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getKEY() volatile {
          return (raw & (0xFFFF << 0)) >> 0;
        }
        /**
          Sets Key value
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setKEY(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 0)) | ((value << 0) & (0xFFFF << 0));
        }
      };
      
      /**
        Prescaler register
      */
      class PR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Prescaler divider
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getPR() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets Prescaler divider
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setPR(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
      };
      
      /**
        Reload register
      */
      class RLR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Watchdog counter reload value
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getRL() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets Watchdog counter reload value
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setRL(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
      };
      
      /**
        Status register
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
          Gets Watchdog prescaler value update
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPVU() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Watchdog prescaler value update
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPVU(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Watchdog counter reload value update
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRVU() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Watchdog counter reload value update
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRVU(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Watchdog counter window value update
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWVU() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Watchdog counter window value update
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWVU(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        Window register
      */
      class WINR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Watchdog counter window value
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getWIN() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets Watchdog counter window value
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setWIN(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
      };
    };
    class Peripheral {
      public:
      /**
        Key register
      */
      volatile Register::KR KR;
      /**
        Prescaler register
      */
      volatile Register::PR PR;
      /**
        Reload register
      */
      volatile Register::RLR RLR;
      /**
        Status register
      */
      volatile Register::SR SR;
      /**
        Window register
      */
      volatile Register::WINR WINR;
    };
  }
}