namespace target {
  namespace gpio_a {
    namespace reg {
      
      /**
        GPIO port mode register
      */
      class MODER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getMODER(int index) volatile {
          return (raw & (0x3 << (0 + 2 * (index - 0)))) >> (0 + 2 * (index - 0));
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setMODER(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 2 * (index - 0)))) | ((value << (0 + 2 * (index - 0))) & (0x3 << (0 + 2 * (index - 0))));
        }
      };
      
      /**
        GPIO port output type register
      */
      class OTYPER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getOT(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setOT(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        GPIO port output speed register
      */
      class OSPEEDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getOSPEEDR(int index) volatile {
          return (raw & (0x3 << (0 + 2 * (index - 0)))) >> (0 + 2 * (index - 0));
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setOSPEEDR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 2 * (index - 0)))) | ((value << (0 + 2 * (index - 0))) & (0x3 << (0 + 2 * (index - 0))));
        }
      };
      
      /**
        GPIO port pull-up/pull-down register
      */
      class PUPDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getPUPDR(int index) volatile {
          return (raw & (0x3 << (0 + 2 * (index - 0)))) >> (0 + 2 * (index - 0));
        }
        /**
          Sets Port x configuration bits (y = 0..15)
          @param index in range 0..15
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setPUPDR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x3 << (0 + 2 * (index - 0)))) | ((value << (0 + 2 * (index - 0))) & (0x3 << (0 + 2 * (index - 0))));
        }
      };
      
      /**
        GPIO port input data register
      */
      class IDR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port input data (y = 0..15)
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getIDR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Port input data (y = 0..15)
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setIDR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        GPIO port output data register
      */
      class ODR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port output data (y = 0..15)
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getODR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Port output data (y = 0..15)
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setODR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        GPIO port bit set/reset register
      */
      class BSRR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x set bit y (y= 0..15)
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBR(int index) volatile {
          return (raw & (0x1 << (16 + 1 * (index - 0)))) >> (16 + 1 * (index - 0));
        }
        /**
          Sets Port x set bit y (y= 0..15)
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (16 + 1 * (index - 0)))) | ((value << (16 + 1 * (index - 0))) & (0x1 << (16 + 1 * (index - 0))));
        }
        /**
          Gets Port x set bit y (y= 0..15)
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBS(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Port x set bit y (y= 0..15)
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBS(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        GPIO port configuration lock register
      */
      class LCKR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x lock bit y (y= 0..15)
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLCK(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Port x lock bit y (y= 0..15)
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLCK(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets Port x lock bit y (y= 0..15)
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLCKK() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Port x lock bit y (y= 0..15)
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLCKK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
      };
      
      /**
        GPIO alternate function low register
      */
      class AFRL {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Alternate function selection for port x bit y (y = 0..7)
          @param index in range 0..7
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getAFRL(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 0)))) >> (0 + 4 * (index - 0));
        }
        /**
          Sets Alternate function selection for port x bit y (y = 0..7)
          @param index in range 0..7
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setAFRL(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 0)))) | ((value << (0 + 4 * (index - 0))) & (0xF << (0 + 4 * (index - 0))));
        }
      };
      
      /**
        GPIO alternate function high register
      */
      class AFRH {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Alternate function selection for port x bit y (y = 8..15)
          @param index in range 8..15
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getAFRH(int index) volatile {
          return (raw & (0xF << (0 + 4 * (index - 8)))) >> (0 + 4 * (index - 8));
        }
        /**
          Sets Alternate function selection for port x bit y (y = 8..15)
          @param index in range 8..15
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setAFRH(int index, unsigned long value) volatile {
          raw = (raw & ~(0xF << (0 + 4 * (index - 8)))) | ((value << (0 + 4 * (index - 8))) & (0xF << (0 + 4 * (index - 8))));
        }
      };
      
      /**
        Port bit reset register
      */
      class BRR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Port x Reset bit y
          @param index in range 0..15
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Port x Reset bit y
          @param index in range 0..15
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
    };
    class Peripheral {
      public:
      /**
        GPIO port mode register
      */
      volatile reg::MODER MODER;
      /**
        GPIO port output type register
      */
      volatile reg::OTYPER OTYPER;
      /**
        GPIO port output speed register
      */
      volatile reg::OSPEEDR OSPEEDR;
      /**
        GPIO port pull-up/pull-down register
      */
      volatile reg::PUPDR PUPDR;
      /**
        GPIO port input data register
      */
      volatile reg::IDR IDR;
      /**
        GPIO port output data register
      */
      volatile reg::ODR ODR;
      /**
        GPIO port bit set/reset register
      */
      volatile reg::BSRR BSRR;
      /**
        GPIO port configuration lock register
      */
      volatile reg::LCKR LCKR;
      /**
        GPIO alternate function low register
      */
      volatile reg::AFRL AFRL;
      /**
        GPIO alternate function high register
      */
      volatile reg::AFRH AFRH;
      /**
        Port bit reset register
      */
      volatile reg::BRR BRR;
    };
  }
  
  extern gpio_a::Peripheral GPIOA;
}