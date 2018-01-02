namespace MCU {
  namespace EXTI {
    namespace Register {
      
      /**
        Interrupt mask register (EXTI_IMR)
      */
      class IMR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Interrupt Mask on line 0
          @param index in range 0..27
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Interrupt Mask on line 0
          @param index in range 0..27
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Event mask register (EXTI_EMR)
      */
      class EMR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Event Mask on line 0
          @param index in range 0..27
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getMR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Event Mask on line 0
          @param index in range 0..27
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setMR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Rising Trigger selection register (EXTI_RTSR)
      */
      class RTSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Rising trigger event configuration of line 0
          @param index in range 0..19
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Rising trigger event configuration of line 0
          @param index in range 0..19
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Falling Trigger selection register (EXTI_FTSR)
      */
      class FTSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Falling trigger event configuration of line 0
          @param index in range 0..19
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTR(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Falling trigger event configuration of line 0
          @param index in range 0..19
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTR(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Software interrupt event register (EXTI_SWIER)
      */
      class SWIER {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Software Interrupt on line 0
          @param index in range 0..19
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSWIER(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Software Interrupt on line 0
          @param index in range 0..19
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSWIER(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
      
      /**
        Pending register (EXTI_PR)
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
          Gets Pending interrupt flag on line 0
          @param index in range 0..31
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPIF(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets Pending interrupt flag on line 0
          @param index in range 0..31
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPIF(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
      };
    };
    class Peripheral {
      public:
      /**
        Interrupt mask register (EXTI_IMR)
      */
      volatile Register::IMR IMR;
      /**
        Event mask register (EXTI_EMR)
      */
      volatile Register::EMR EMR;
      /**
        Rising Trigger selection register (EXTI_RTSR)
      */
      volatile Register::RTSR RTSR;
      /**
        Falling Trigger selection register (EXTI_FTSR)
      */
      volatile Register::FTSR FTSR;
      /**
        Software interrupt event register (EXTI_SWIER)
      */
      volatile Register::SWIER SWIER;
      /**
        Pending register (EXTI_PR)
      */
      volatile Register::PR PR;
    };
  }
}