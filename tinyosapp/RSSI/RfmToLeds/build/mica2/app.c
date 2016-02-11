#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 60 "/usr/local/avr/include/inttypes.h"
typedef signed char int8_t;




typedef unsigned char uint8_t;
# 83 "/usr/local/avr/include/inttypes.h" 3
typedef int int16_t;




typedef unsigned int uint16_t;










typedef long int32_t;




typedef unsigned long uint32_t;
#line 117
typedef long long int64_t;




typedef unsigned long long uint64_t;
#line 134
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
# 213 "/usr/local/lib/gcc-lib/avr/3.3-tinyos/include/stddef.h" 3
typedef unsigned int size_t;
#line 325
typedef int wchar_t;
# 60 "/usr/local/avr/include/stdlib.h"
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;


typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *, const void *);
# 151 "/usr/local/lib/gcc-lib/avr/3.3-tinyos/include/stddef.h" 3
typedef int ptrdiff_t;
# 85 "/home/wyong/tinyos/tinyos-1.x/tos/system/tos.h"
typedef unsigned char bool;
enum __nesc_unnamed4244 {
  FALSE = 0, 
  TRUE = 1
};

uint16_t TOS_LOCAL_ADDRESS = 1;

enum __nesc_unnamed4245 {
  FAIL = 0, 
  SUCCESS = 1
};
static inline 

uint8_t rcombine(uint8_t r1, uint8_t r2);
typedef uint8_t  result_t;
static inline 






result_t rcombine(result_t r1, result_t r2);
static inline 
#line 121
result_t rcombine4(result_t r1, result_t r2, result_t r3, 
result_t r4);





enum __nesc_unnamed4246 {
  NULL = 0x0
};
# 81 "/usr/local/avr/include/avr/pgmspace.h"
typedef void __attribute((__progmem__)) prog_void;
typedef char __attribute((__progmem__)) prog_char;
typedef unsigned char __attribute((__progmem__)) prog_uchar;
typedef int __attribute((__progmem__)) prog_int;
typedef long __attribute((__progmem__)) prog_long;
typedef long long __attribute((__progmem__)) prog_long_long;
# 124 "/home/wyong/tinyos/tinyos-1.x/tos/platform/avrmote/avrhardware.h"
enum __nesc_unnamed4247 {
  TOSH_period16 = 0x00, 
  TOSH_period32 = 0x01, 
  TOSH_period64 = 0x02, 
  TOSH_period128 = 0x03, 
  TOSH_period256 = 0x04, 
  TOSH_period512 = 0x05, 
  TOSH_period1024 = 0x06, 
  TOSH_period2048 = 0x07
};
static inline 
void TOSH_wait(void);
static inline 




void TOSH_sleep(void);









typedef uint8_t __nesc_atomic_t;

__inline __nesc_atomic_t  __nesc_atomic_start(void );






__inline void  __nesc_atomic_end(__nesc_atomic_t oldSreg);
static 



__inline void __nesc_enable_interrupt(void);
# 229 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000Const.h"
static const prog_uchar CC1K_LPL_PreambleLength[7 * 2] = { 
0, 28, 
0, 94, 
0, 250, 
0x01, 0x73, 
0x01, 0xEA, 
0x04, 0xBC, 
0x0A, 0x5E };


static const prog_uchar CC1K_LPL_ValidPrecursor[7] = { 
5, 
2, 
2, 
2, 
2, 
2, 
2 };


static const prog_uchar CC1K_LPL_SleepTime[7 * 2] = { 
0, 0, 
0, 20, 
0, 85, 
0, 135, 
0, 185, 
0x01, 0xE5, 
0x04, 0x3D };


static const prog_uchar CC1K_LPL_SleepPreamble[7] = { 
0, 
8, 
8, 
8, 
8, 
8, 
8 };


static const prog_uchar CC1K_LPL_SquelchInit[7] = { 
0xAE, 
0xEF, 
0xEF, 
0xEF, 
0xEF, 
0xEF, 
0xEF };


static const prog_uchar CC1K_Params[6][31] = { 

{ 
0x31, 

0x58, 0x00, 0x00, 

0x57, 0xf6, 0x85, 

0X03, 0x55, (

4 << 4) | (1 << 2), 

1 << 1, (

0x0 << 4) | (0xf << 0), 

12 << 3, 

0xe << 4, (

1 << 5) | (6 << 0), (

0 << 7) | (28 << 0), (((

3 << 5) | (1 << 3)) | (3 << 1)) | (1 << 0), ((

5 << 4) | (1 << 2)) | (1 << 0), (

0x7 << 4) | (0x0 << 0), 

1 << 0, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 

0x00, (

8 << 4) | (1 << 0), 

TRUE }, 



{ 
0x31, 

0x7c, 0x00, 0x00, 

0x7b, 0xf9, 0xae, 

0x02, 0x38, (

8 << 4) | (3 << 2), ((


1 << 5) | (2 << 3)) | (1 << 1), (


0x8 << 4) | (0x0 << 0), 


8 << 3, 


0x1 << 4, (


1 << 5) | (6 << 0), (


1 << 7) | (33 << 0), (((


3 << 5) | (1 << 3)) | (3 << 1)) | (1 << 0), ((


5 << 4) | (1 << 2)) | (1 << 0), (


0x1 << 4) | (0x0 << 0), 


1 << 0, 


0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 

0x00, (

15 << 4) | (3 << 0), 


TRUE }, 



{ 
0x31, 

0x51, 0x00, 0x00, 

0x50, 0xf7, 0x4F, 

0X03, 0x0E, (

4 << 4) | (1 << 2), 

1 << 1, (

0x0 << 4) | (0xf << 0), 

11 << 3, 

0xe << 4, (

1 << 5) | (6 << 0), (

1 << 7) | (33 << 0), (((

3 << 5) | (1 << 3)) | (3 << 1)) | (1 << 0), ((

5 << 4) | (1 << 2)) | (1 << 0), (

0x7 << 4) | (0x0 << 0), 

1 << 0, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 

0x00, (

8 << 4) | (1 << 0), 

TRUE }, 




{ 
0x31, 

0x5c, 0xe0, 0x00, 

0x5c, 0xdb, 0x42, 

0x01, 0xAA, (

8 << 4) | (3 << 2), ((


1 << 5) | (2 << 3)) | (1 << 1), (


0x8 << 4) | (0x0 << 0), 


6 << 3, 


0x1 << 4, (


1 << 5) | (6 << 0), (


1 << 7) | (33 << 0), (((


3 << 5) | (1 << 3)) | (3 << 1)) | (1 << 0), ((


5 << 4) | (1 << 2)) | (1 << 0), (


0x1 << 4) | (0x0 << 0), 


1 << 0, 


0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 

0x00, (

15 << 4) | (3 << 0), 


TRUE }, 



{ 
0x31, 

0x45, 0x60, 0x00, 

0x45, 0x55, 0xBB, 

0X03, 0x9C, (

8 << 4) | (0 << 2), 

1 << 1, (

0x0 << 4) | (0xf << 0), 

13 << 3, 

0xe << 4, (

1 << 5) | (6 << 0), (

1 << 7) | (33 << 0), (((

3 << 5) | (1 << 3)) | (3 << 1)) | (1 << 0), ((

5 << 4) | (1 << 2)) | (0 << 0), (

0x7 << 4) | (0x0 << 0), 

1 << 0, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 

0x00, (

8 << 4) | (1 << 0), 

TRUE }, 



{ 
0x31, 

0x58, 0x00, 0x00, 

0x57, 0xf6, 0x85, 

0X03, 0x55, (

8 << 4) | (4 << 2), 

1 << 1, (

0x0 << 4) | (0xf << 0), 

12 << 3, 

0xe << 4, (

1 << 5) | (6 << 0), (

1 << 7) | (33 << 0), (((

3 << 5) | (1 << 3)) | (3 << 1)) | (1 << 0), ((
5 << 4) | (1 << 2)) | (1 << 0), (

0x7 << 4) | (0x0 << 0), 

1 << 0, 

0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 

0x00, 

0x00, (

8 << 4) | (1 << 0), 

TRUE } };
static 
# 101 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/hardware.h"
void __inline TOSH_uwait(int u_sec);
#line 116
static __inline void TOSH_SET_RED_LED_PIN(void);
#line 116
static __inline void TOSH_CLR_RED_LED_PIN(void);
#line 116
static __inline void TOSH_MAKE_RED_LED_OUTPUT(void);
static __inline void TOSH_SET_GREEN_LED_PIN(void);
#line 117
static __inline void TOSH_CLR_GREEN_LED_PIN(void);
#line 117
static __inline void TOSH_MAKE_GREEN_LED_OUTPUT(void);
static __inline void TOSH_SET_YELLOW_LED_PIN(void);
#line 118
static __inline void TOSH_CLR_YELLOW_LED_PIN(void);
#line 118
static __inline void TOSH_MAKE_YELLOW_LED_OUTPUT(void);

static __inline void TOSH_CLR_SERIAL_ID_PIN(void);
#line 120
static __inline void TOSH_MAKE_SERIAL_ID_INPUT(void);




static __inline void TOSH_MAKE_CC_CHP_OUT_INPUT(void);
static __inline void TOSH_SET_CC_PDATA_PIN(void);
#line 126
static __inline void TOSH_CLR_CC_PDATA_PIN(void);
#line 126
static __inline int TOSH_READ_CC_PDATA_PIN(void);
#line 126
static __inline void TOSH_MAKE_CC_PDATA_OUTPUT(void);
#line 126
static __inline void TOSH_MAKE_CC_PDATA_INPUT(void);
static __inline void TOSH_SET_CC_PCLK_PIN(void);
#line 127
static __inline void TOSH_CLR_CC_PCLK_PIN(void);
#line 127
static __inline void TOSH_MAKE_CC_PCLK_OUTPUT(void);
static __inline void TOSH_SET_CC_PALE_PIN(void);
#line 128
static __inline void TOSH_CLR_CC_PALE_PIN(void);
#line 128
static __inline void TOSH_MAKE_CC_PALE_OUTPUT(void);


static __inline void TOSH_SET_FLASH_SELECT_PIN(void);
#line 131
static __inline void TOSH_MAKE_FLASH_SELECT_OUTPUT(void);
static __inline void TOSH_MAKE_FLASH_CLK_OUTPUT(void);
static __inline void TOSH_MAKE_FLASH_OUT_OUTPUT(void);









static __inline void TOSH_MAKE_MOSI_OUTPUT(void);
#line 143
static __inline void TOSH_MAKE_MOSI_INPUT(void);
static __inline void TOSH_MAKE_MISO_OUTPUT(void);
#line 144
static __inline void TOSH_MAKE_MISO_INPUT(void);
static __inline void TOSH_MAKE_SPI_OC1C_INPUT(void);
static __inline void TOSH_MAKE_SPI_SCK_INPUT(void);


static __inline void TOSH_MAKE_PW0_OUTPUT(void);
static __inline void TOSH_MAKE_PW1_OUTPUT(void);
static __inline void TOSH_SET_PW2_PIN(void);
#line 151
static __inline void TOSH_CLR_PW2_PIN(void);
#line 151
static __inline void TOSH_MAKE_PW2_OUTPUT(void);
static __inline void TOSH_MAKE_PW3_OUTPUT(void);
static __inline void TOSH_MAKE_PW4_OUTPUT(void);
static __inline void TOSH_MAKE_PW5_OUTPUT(void);
static __inline void TOSH_MAKE_PW6_OUTPUT(void);
static __inline void TOSH_MAKE_PW7_OUTPUT(void);
static inline 
#line 171
void TOSH_SET_PIN_DIRECTIONS(void );
#line 215
enum __nesc_unnamed4248 {
  TOSH_ADC_PORTMAPSIZE = 12
};

enum __nesc_unnamed4249 {

  TOSH_ACTUAL_CC_RSSI_PORT = 0, 
  TOSH_ACTUAL_VOLTAGE_PORT = 7, 
  TOSH_ACTUAL_BANDGAP_PORT = 30, 
  TOSH_ACTUAL_GND_PORT = 31
};

enum __nesc_unnamed4250 {

  TOS_ADC_CC_RSSI_PORT = 0, 
  TOS_ADC_VOLTAGE_PORT = 7, 
  TOS_ADC_BANDGAP_PORT = 10, 
  TOS_ADC_GND_PORT = 11
};
# 54 "/home/wyong/tinyos/tinyos-1.x/tos/types/dbg_modes.h"
typedef long long TOS_dbg_mode;



enum __nesc_unnamed4251 {
  DBG_ALL = ~0ULL, 


  DBG_BOOT = 1ULL << 0, 
  DBG_CLOCK = 1ULL << 1, 
  DBG_TASK = 1ULL << 2, 
  DBG_SCHED = 1ULL << 3, 
  DBG_SENSOR = 1ULL << 4, 
  DBG_LED = 1ULL << 5, 
  DBG_CRYPTO = 1ULL << 6, 


  DBG_ROUTE = 1ULL << 7, 
  DBG_AM = 1ULL << 8, 
  DBG_CRC = 1ULL << 9, 
  DBG_PACKET = 1ULL << 10, 
  DBG_ENCODE = 1ULL << 11, 
  DBG_RADIO = 1ULL << 12, 


  DBG_LOG = 1ULL << 13, 
  DBG_ADC = 1ULL << 14, 
  DBG_I2C = 1ULL << 15, 
  DBG_UART = 1ULL << 16, 
  DBG_PROG = 1ULL << 17, 
  DBG_SOUNDER = 1ULL << 18, 
  DBG_TIME = 1ULL << 19, 




  DBG_SIM = 1ULL << 21, 
  DBG_QUEUE = 1ULL << 22, 
  DBG_SIMRADIO = 1ULL << 23, 
  DBG_HARD = 1ULL << 24, 
  DBG_MEM = 1ULL << 25, 



  DBG_USR1 = 1ULL << 27, 
  DBG_USR2 = 1ULL << 28, 
  DBG_USR3 = 1ULL << 29, 
  DBG_TEMP = 1ULL << 30, 

  DBG_ERROR = 1ULL << 31, 
  DBG_NONE = 0, 

  DBG_DEFAULT = DBG_ALL
};
# 59 "/home/wyong/tinyos/tinyos-1.x/tos/system/sched.c"
typedef struct __nesc_unnamed4252 {
  void (*tp)(void);
} TOSH_sched_entry_T;

enum __nesc_unnamed4253 {
  TOSH_MAX_TASKS = 8, 
  TOSH_TASK_BITMASK = TOSH_MAX_TASKS - 1
};

TOSH_sched_entry_T TOSH_queue[TOSH_MAX_TASKS];
volatile uint8_t TOSH_sched_full;
volatile uint8_t TOSH_sched_free;
static inline 

void TOSH_wait(void );
static inline void TOSH_sleep(void );
static inline 
void TOSH_sched_init(void );
#line 98
bool  TOS_post(void (*tp)(void));
static inline 
#line 139
bool TOSH_run_next_task(void);
static inline 
#line 162
void TOSH_run_task(void);
# 46 "/home/wyong/tinyos/tinyos-1.x/tos/lib/Counters/IntMsg.h"
typedef struct IntMsg {
  uint16_t val;
  int src;
  int strength;
} 
IntMsg;

enum __nesc_unnamed4254 {
  AM_INTMSG = 4
};
# 49 "/home/wyong/tinyos/tinyos-1.x/tos/types/AM.h"
enum __nesc_unnamed4255 {
  TOS_BCAST_ADDR = 0xffff, 
  TOS_UART_ADDR = 0x007e
};





enum __nesc_unnamed4256 {
  TOS_DEFAULT_AM_GROUP = 0x7d
};

uint8_t TOS_AM_GROUP = TOS_DEFAULT_AM_GROUP;
#line 84
typedef struct TOS_Msg {


  uint16_t addr;
  uint8_t type;
  uint8_t group;
  uint8_t length;
  int8_t data[29];
  uint16_t crc;







  uint16_t strength;
  uint8_t ack;
  uint16_t time;
  uint8_t sendSecurityMode;
  uint8_t receiveSecurityMode;
} TOS_Msg;

typedef struct TOS_Msg_TinySecCompat {


  uint16_t addr;
  uint8_t type;

  uint8_t length;
  uint8_t group;
  int8_t data[29];
  uint16_t crc;







  uint16_t strength;
  uint8_t ack;
  uint16_t time;
  uint8_t sendSecurityMode;
  uint8_t receiveSecurityMode;
} TOS_Msg_TinySecCompat;

typedef struct TinySec_Msg {

  uint16_t addr;
  uint8_t type;
  uint8_t length;

  uint8_t iv[4];

  uint8_t enc[29];

  uint8_t mac[4];


  uint8_t calc_mac[4];
  uint8_t ack_byte;
  bool cryptoDone;
  bool receiveDone;

  bool validMAC;
} __attribute((packed))  TinySec_Msg;



enum __nesc_unnamed4257 {
  MSG_DATA_SIZE = (size_t )& ((struct TOS_Msg *)0)->crc + sizeof(uint16_t ), 
  TINYSEC_MSG_DATA_SIZE = (size_t )& ((struct TinySec_Msg *)0)->mac + 4, 
  DATA_LENGTH = 29, 
  LENGTH_BYTE_NUMBER = (size_t )& ((struct TOS_Msg *)0)->length + 1, 
  TINYSEC_NODE_ID_SIZE = sizeof(uint16_t )
};

enum __nesc_unnamed4258 {
  TINYSEC_AUTH_ONLY = 1, 
  TINYSEC_ENCRYPT_AND_AUTH = 2, 
  TINYSEC_DISABLED = 3, 
  TINYSEC_ENABLED_BIT = 128, 
  TINYSEC_ENCRYPT_ENABLED_BIT = 64
} __attribute((packed)) ;


typedef TOS_Msg *TOS_MsgPtr;
# 39 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Timer.h"
enum __nesc_unnamed4259 {
  TIMER_REPEAT = 0, 
  TIMER_ONE_SHOT = 1, 
  NUM_TIMERS = 2
};
# 31 "/home/wyong/tinyos/tinyos-1.x/tos/platform/avrmote/crc.h"
uint16_t __attribute((__progmem__)) crcTable[256] = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };
static inline 

uint16_t crcByte(uint16_t oldCrc, uint8_t byte);
# 35 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ADC.h"
enum __nesc_unnamed4260 {
  TOS_ADCSample3750ns = 0, 
  TOS_ADCSample7500ns = 1, 
  TOS_ADCSample15us = 2, 
  TOS_ADCSample30us = 3, 
  TOS_ADCSample60us = 4, 
  TOS_ADCSample120us = 5, 
  TOS_ADCSample240us = 6, 
  TOS_ADCSample480us = 7
};
# 45 "/home/wyong/tinyos/tinyos-1.x/tos/sensorboards/micasb/sensorboard.h"
enum __nesc_unnamed4261 {
  TOSH_ACTUAL_PHOTO_PORT = 1, 
  TOSH_ACTUAL_TEMP_PORT = 1, 
  TOSH_ACTUAL_MIC_PORT = 2, 
  TOSH_ACTUAL_ACCEL_X_PORT = 3, 
  TOSH_ACTUAL_ACCEL_Y_PORT = 4, 
  TOSH_ACTUAL_MAG_X_PORT = 6, 
  TOSH_ACTUAL_MAG_Y_PORT = 5
};

enum __nesc_unnamed4262 {
  TOS_ADC_PHOTO_PORT = 1, 
  TOS_ADC_TEMP_PORT = 2, 
  TOS_ADC_MIC_PORT = 3, 
  TOS_ADC_ACCEL_X_PORT = 4, 
  TOS_ADC_ACCEL_Y_PORT = 5, 
  TOS_ADC_MAG_X_PORT = 6, 

  TOS_ADC_MAG_Y_PORT = 8
};

enum __nesc_unnamed4263 {
  TOS_MAG_POT_ADDR = 0, 
  TOS_MIC_POT_ADDR = 1
};





static __inline void TOSH_SET_SOUNDER_CTL_PIN(void);
#line 75
static __inline void TOSH_CLR_SOUNDER_CTL_PIN(void);
# 33 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica128/Clock.h"
enum __nesc_unnamed4264 {
  TOS_I1000PS = 32, TOS_S1000PS = 1, 
  TOS_I100PS = 40, TOS_S100PS = 2, 
  TOS_I10PS = 101, TOS_S10PS = 3, 
  TOS_I1024PS = 0, TOS_S1024PS = 3, 
  TOS_I512PS = 1, TOS_S512PS = 3, 
  TOS_I256PS = 3, TOS_S256PS = 3, 
  TOS_I128PS = 7, TOS_S128PS = 3, 
  TOS_I64PS = 15, TOS_S64PS = 3, 
  TOS_I32PS = 31, TOS_S32PS = 3, 
  TOS_I16PS = 63, TOS_S16PS = 3, 
  TOS_I8PS = 127, TOS_S8PS = 3, 
  TOS_I4PS = 255, TOS_S4PS = 3, 
  TOS_I2PS = 15, TOS_S2PS = 7, 
  TOS_I1PS = 31, TOS_S1PS = 7, 
  TOS_I0PS = 0, TOS_S0PS = 0
};
enum __nesc_unnamed4265 {
  DEFAULT_SCALE = 3, DEFAULT_INTERVAL = 127
};
static  result_t PotM$Pot$init(uint8_t arg_0x8521c88);
static  result_t HPLPotC$Pot$finalise(void);
static  result_t HPLPotC$Pot$decrease(void);
static  result_t HPLPotC$Pot$increase(void);
static  result_t HPLInit$init(void);
static  result_t RfmToIntUartM$Send$sendDone(TOS_MsgPtr arg_0x855c6c8, result_t arg_0x855c818);
static  TOS_MsgPtr RfmToIntUartM$ReceiveIntMsg$receive(TOS_MsgPtr arg_0x8554980);
static  result_t RfmToIntUartM$IntOutput$outputComplete(result_t arg_0x853d680);
static  result_t RfmToIntUartM$StdControl$init(void);
static  result_t RfmToIntUartM$StdControl$start(void);
static  TOS_MsgPtr AMStandard$ReceiveMsg$default$receive(uint8_t arg_0x853f630, TOS_MsgPtr arg_0x8554980);
static  result_t AMStandard$ActivityTimer$fired(void);
static  result_t AMStandard$UARTSend$sendDone(TOS_MsgPtr arg_0x8575748, result_t arg_0x8575898);
static  TOS_MsgPtr AMStandard$RadioReceive$receive(TOS_MsgPtr arg_0x8554980);
static  result_t AMStandard$Control$init(void);
static  result_t AMStandard$Control$start(void);
static  result_t AMStandard$default$sendDone(void);
static  result_t AMStandard$RadioSend$sendDone(TOS_MsgPtr arg_0x8575748, result_t arg_0x8575898);
static  result_t AMStandard$SendMsg$send(uint8_t arg_0x853f078, uint16_t arg_0x855c010, uint8_t arg_0x855c158, TOS_MsgPtr arg_0x855c2a8);
static  result_t AMStandard$SendMsg$default$sendDone(uint8_t arg_0x853f078, TOS_MsgPtr arg_0x855c6c8, result_t arg_0x855c818);
static  TOS_MsgPtr AMStandard$UARTReceive$receive(TOS_MsgPtr arg_0x8554980);
static  result_t CC1000RadioIntM$Send$send(TOS_MsgPtr arg_0x8575230);
static   result_t CC1000RadioIntM$SpiByteFifo$dataReady(uint8_t arg_0x85d4ee8);
static   void CC1000RadioIntM$RadioReceiveCoordinator$default$byte(TOS_MsgPtr arg_0x85c2878, uint8_t arg_0x85c29c8);
static   void CC1000RadioIntM$RadioReceiveCoordinator$default$startSymbol(void);
static  result_t CC1000RadioIntM$WakeupTimer$fired(void);
static   void CC1000RadioIntM$RadioSendCoordinator$default$byte(TOS_MsgPtr arg_0x85c2878, uint8_t arg_0x85c29c8);
static   void CC1000RadioIntM$RadioSendCoordinator$default$startSymbol(void);
static  result_t CC1000RadioIntM$StdControl$init(void);
static  result_t CC1000RadioIntM$StdControl$start(void);
static   result_t CC1000RadioIntM$RSSIADC$dataReady(uint16_t arg_0x85d61c8);
static  bool CC1000ControlM$CC1000Control$GetLOStatus(void);
static  result_t CC1000ControlM$CC1000Control$TunePreset(uint8_t arg_0x85a4770);
static   result_t CC1000ControlM$CC1000Control$RxMode(void);
static  result_t CC1000ControlM$CC1000Control$BIASOn(void);
static   result_t CC1000ControlM$CC1000Control$TxMode(void);
static  result_t CC1000ControlM$CC1000Control$SelectLock(uint8_t arg_0x85aaa80);
static  result_t CC1000ControlM$StdControl$init(void);
static  result_t CC1000ControlM$StdControl$start(void);
static  result_t CC1000ControlM$StdControl$stop(void);
static  result_t HPLCC1000M$HPLCC1000$init(void);
static   uint8_t HPLCC1000M$HPLCC1000$read(uint8_t arg_0x8646778);
static   result_t HPLCC1000M$HPLCC1000$write(uint8_t arg_0x86461c0, uint8_t arg_0x8646308);
static   uint16_t RandomLFSR$Random$rand(void);
static   result_t RandomLFSR$Random$init(void);
static   result_t ADCM$HPLADC$dataReady(uint16_t arg_0x8690310);
static  result_t ADCM$ADCControl$bindPort(uint8_t arg_0x85c9378, uint8_t arg_0x85c94c0);
static  result_t ADCM$ADCControl$init(void);
static   result_t ADCM$ADC$getData(uint8_t arg_0x867f2e0);
static   result_t ADCM$ADC$default$dataReady(uint8_t arg_0x867f2e0, uint16_t arg_0x85d61c8);
static   result_t HPLADCM$ADC$bindPort(uint8_t arg_0x8693148, uint8_t arg_0x8693290);
static   result_t HPLADCM$ADC$sampleStop(void);
static   result_t HPLADCM$ADC$init(void);
static   result_t HPLADCM$ADC$samplePort(uint8_t arg_0x8693778);
static   result_t HPLSpiM$SpiByteFifo$initSlave(void);
static   result_t HPLSpiM$SpiByteFifo$disableIntr(void);
static   result_t HPLSpiM$SpiByteFifo$writeByte(uint8_t arg_0x85d76f0);
static   result_t HPLSpiM$SpiByteFifo$enableIntr(void);
static   result_t HPLSpiM$SpiByteFifo$txMode(void);
static   result_t HPLSpiM$SpiByteFifo$rxMode(void);
static   result_t TimerM$Clock$fire(void);
static  result_t TimerM$StdControl$init(void);
static  result_t TimerM$StdControl$start(void);
static  result_t TimerM$Timer$default$fired(uint8_t arg_0x86b65f0);
static  result_t TimerM$Timer$start(uint8_t arg_0x86b65f0, char arg_0x8589200, uint32_t arg_0x8589358);
static  result_t TimerM$Timer$stop(uint8_t arg_0x86b65f0);
static   void HPLClock$Clock$setInterval(uint8_t arg_0x86c88c8);
static   result_t HPLClock$Clock$setRate(char arg_0x86c5d58, char arg_0x86c5e98);
static   uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void);
static   result_t LedsC$Leds$yellowOff(void);
static   result_t LedsC$Leds$yellowOn(void);
static   result_t LedsC$Leds$init(void);
static   result_t LedsC$Leds$greenOff(void);
static   result_t LedsC$Leds$redOff(void);
static   result_t LedsC$Leds$redToggle(void);
static   result_t LedsC$Leds$redOn(void);
static   result_t LedsC$Leds$greenOn(void);
static   result_t FramerM$ByteComm$txDone(void);
static   result_t FramerM$ByteComm$txByteReady(bool arg_0x873fcb8);
static   result_t FramerM$ByteComm$rxByteReady(uint8_t arg_0x873f4e8, bool arg_0x873f630, uint16_t arg_0x873f788);
static  result_t FramerM$BareSendMsg$send(TOS_MsgPtr arg_0x8575230);
static  result_t FramerM$StdControl$init(void);
static  result_t FramerM$StdControl$start(void);
static  result_t FramerM$TokenReceiveMsg$ReflectToken(uint8_t arg_0x8727458);
static  TOS_MsgPtr FramerAckM$ReceiveMsg$receive(TOS_MsgPtr arg_0x8554980);
static  TOS_MsgPtr FramerAckM$TokenReceiveMsg$receive(TOS_MsgPtr arg_0x8726cf8, uint8_t arg_0x8726e40);
static   result_t UARTM$HPLUART$get(uint8_t arg_0x8770658);
static   result_t UARTM$HPLUART$putDone(void);
static   result_t UARTM$ByteComm$txByte(uint8_t arg_0x873f058);
static  result_t UARTM$Control$init(void);
static  result_t UARTM$Control$start(void);
static   result_t HPLUART0M$UART$init(void);
static   result_t HPLUART0M$UART$put(uint8_t arg_0x8770158);
static  result_t SounderM$StdControl$start(void);
static  result_t SounderM$StdControl$stop(void);
static  result_t IntToLedsM$StdControl$init(void);
static  result_t IntToLedsM$StdControl$start(void);
static  
# 47 "/home/wyong/tinyos/tinyos-1.x/tos/system/RealMain.nc"
result_t RealMain$hardwareInit(void);
static  
# 78 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Pot.nc"
result_t RealMain$Pot$init(uint8_t arg_0x8521c88);
static  
# 63 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
result_t RealMain$StdControl$init(void);
static  





result_t RealMain$StdControl$start(void);
# 54 "/home/wyong/tinyos/tinyos-1.x/tos/system/RealMain.nc"
int   main(void);
static  
# 74 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLPot.nc"
result_t PotM$HPLPot$finalise(void);
static  
#line 59
result_t PotM$HPLPot$decrease(void);
static  






result_t PotM$HPLPot$increase(void);
# 91 "/home/wyong/tinyos/tinyos-1.x/tos/system/PotM.nc"
uint8_t PotM$potSetting;
static inline 
void PotM$setPot(uint8_t value);
static inline  
#line 106
result_t PotM$Pot$init(uint8_t initialSetting);
static inline  
# 57 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLPotC.nc"
result_t HPLPotC$Pot$decrease(void);
static inline  







result_t HPLPotC$Pot$increase(void);
static inline  







result_t HPLPotC$Pot$finalise(void);
static inline  
# 57 "/home/wyong/tinyos/tinyos-1.x/tos/platform/avrmote/HPLInit.nc"
result_t HPLInit$init(void);
static  
# 48 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
result_t RfmToIntUartM$Send$send(uint16_t arg_0x855c010, uint8_t arg_0x855c158, TOS_MsgPtr arg_0x855c2a8);
static  
# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
result_t RfmToIntUartM$Sounder$start(void);
static  






result_t RfmToIntUartM$Sounder$stop(void);
static  
#line 63
result_t RfmToIntUartM$CommControl$init(void);
static  





result_t RfmToIntUartM$CommControl$start(void);
static   
# 122 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Leds.nc"
result_t RfmToIntUartM$Leds$yellowOff(void);
static   
#line 114
result_t RfmToIntUartM$Leds$yellowOn(void);
static   
#line 97
result_t RfmToIntUartM$Leds$greenOff(void);
static   
#line 72
result_t RfmToIntUartM$Leds$redOff(void);
static   
#line 64
result_t RfmToIntUartM$Leds$redOn(void);
static   
#line 89
result_t RfmToIntUartM$Leds$greenOn(void);
# 60 "/home/wyong/tinyos/tinyos-1.x/tos/lib/Counters/RfmToIntUartM.nc"
struct TOS_Msg RfmToIntUartM$data;
static inline  
result_t RfmToIntUartM$StdControl$init(void);
static inline  


result_t RfmToIntUartM$StdControl$start(void);
static inline 






result_t RfmToIntUartM$display(uint16_t value);
static inline  
#line 94
TOS_MsgPtr RfmToIntUartM$ReceiveIntMsg$receive(TOS_MsgPtr m);
static inline  
#line 115
result_t RfmToIntUartM$IntOutput$outputComplete(result_t success);
static inline  


result_t RfmToIntUartM$Send$sendDone(TOS_MsgPtr msg, result_t success);
static  
# 75 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr AMStandard$ReceiveMsg$receive(
# 56 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
uint8_t arg_0x853f630, 
# 75 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr arg_0x8554980);
static  
# 59 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Timer.nc"
result_t AMStandard$ActivityTimer$start(char arg_0x8589200, uint32_t arg_0x8589358);
static  
# 58 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
result_t AMStandard$UARTSend$send(TOS_MsgPtr arg_0x8575230);
static   
# 41 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
uint8_t AMStandard$PowerManagement$adjustPower(void);
static  
# 63 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
result_t AMStandard$RadioControl$init(void);
static  





result_t AMStandard$RadioControl$start(void);
static  
#line 63
result_t AMStandard$TimerControl$init(void);
static  





result_t AMStandard$TimerControl$start(void);
static  
#line 63
result_t AMStandard$UARTControl$init(void);
static  





result_t AMStandard$UARTControl$start(void);
static  
# 65 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$sendDone(void);
static  
# 58 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
result_t AMStandard$RadioSend$send(TOS_MsgPtr arg_0x8575230);
static  
# 49 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
result_t AMStandard$SendMsg$sendDone(
# 55 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
uint8_t arg_0x853f078, 
# 49 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
TOS_MsgPtr arg_0x855c6c8, result_t arg_0x855c818);
# 81 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
bool AMStandard$state;
TOS_MsgPtr AMStandard$buffer;
uint16_t AMStandard$lastCount;
uint16_t AMStandard$counter;
static inline  

bool AMStandard$Control$init(void);
static inline  
#line 103
bool AMStandard$Control$start(void);
static inline 
#line 132
void AMStandard$dbgPacket(TOS_MsgPtr data);
static 









result_t AMStandard$reportSendDone(TOS_MsgPtr msg, result_t success);
static inline  






result_t AMStandard$ActivityTimer$fired(void);
static inline   




result_t AMStandard$SendMsg$default$sendDone(uint8_t id, TOS_MsgPtr msg, result_t success);
static inline   

result_t AMStandard$default$sendDone(void);
static inline  



void AMStandard$sendTask(void);
static inline  
#line 179
result_t AMStandard$SendMsg$send(uint8_t id, uint16_t addr, uint8_t length, TOS_MsgPtr data);
static inline  
#line 207
result_t AMStandard$UARTSend$sendDone(TOS_MsgPtr msg, result_t success);
static inline  

result_t AMStandard$RadioSend$sendDone(TOS_MsgPtr msg, result_t success);




TOS_MsgPtr   received(TOS_MsgPtr packet);
static inline   
#line 242
TOS_MsgPtr AMStandard$ReceiveMsg$default$receive(uint8_t id, TOS_MsgPtr msg);
static inline  


TOS_MsgPtr AMStandard$UARTReceive$receive(TOS_MsgPtr packet);
static inline  




TOS_MsgPtr AMStandard$RadioReceive$receive(TOS_MsgPtr packet);
static  
# 67 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
result_t CC1000RadioIntM$Send$sendDone(TOS_MsgPtr arg_0x8575748, result_t arg_0x8575898);
static   
# 63 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Random.nc"
uint16_t CC1000RadioIntM$Random$rand(void);
static   
#line 57
result_t CC1000RadioIntM$Random$init(void);
static  
# 89 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ADCControl.nc"
result_t CC1000RadioIntM$ADCControl$bindPort(uint8_t arg_0x85c9378, uint8_t arg_0x85c94c0);
static  
#line 50
result_t CC1000RadioIntM$ADCControl$init(void);
static  
# 63 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
result_t CC1000RadioIntM$TimerControl$init(void);
static  





result_t CC1000RadioIntM$TimerControl$start(void);
static  
#line 63
result_t CC1000RadioIntM$CC1000StdControl$init(void);
static  





result_t CC1000RadioIntM$CC1000StdControl$start(void);
static  






result_t CC1000RadioIntM$CC1000StdControl$stop(void);
static  
# 75 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr CC1000RadioIntM$Receive$receive(TOS_MsgPtr arg_0x8554980);
static   
# 38 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/SpiByteFifo.nc"
result_t CC1000RadioIntM$SpiByteFifo$initSlave(void);
static   
#line 37
result_t CC1000RadioIntM$SpiByteFifo$disableIntr(void);
static   
#line 33
result_t CC1000RadioIntM$SpiByteFifo$writeByte(uint8_t arg_0x85d76f0);
static   

result_t CC1000RadioIntM$SpiByteFifo$enableIntr(void);
static   

result_t CC1000RadioIntM$SpiByteFifo$txMode(void);
static   result_t CC1000RadioIntM$SpiByteFifo$rxMode(void);
static   
# 48 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
void CC1000RadioIntM$RadioReceiveCoordinator$byte(TOS_MsgPtr arg_0x85c2878, uint8_t arg_0x85c29c8);
static   
#line 45
void CC1000RadioIntM$RadioReceiveCoordinator$startSymbol(void);
static  
# 59 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Timer.nc"
result_t CC1000RadioIntM$WakeupTimer$start(char arg_0x8589200, uint32_t arg_0x8589358);
static  







result_t CC1000RadioIntM$WakeupTimer$stop(void);
static   
# 48 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
void CC1000RadioIntM$RadioSendCoordinator$byte(TOS_MsgPtr arg_0x85c2878, uint8_t arg_0x85c29c8);
static   
#line 45
void CC1000RadioIntM$RadioSendCoordinator$startSymbol(void);
static  
# 162 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000Control.nc"
bool CC1000RadioIntM$CC1000Control$GetLOStatus(void);
static   
#line 88
result_t CC1000RadioIntM$CC1000Control$RxMode(void);
static  
#line 109
result_t CC1000RadioIntM$CC1000Control$BIASOn(void);
static   
#line 80
result_t CC1000RadioIntM$CC1000Control$TxMode(void);
static  
#line 142
result_t CC1000RadioIntM$CC1000Control$SelectLock(uint8_t arg_0x85aaa80);
static   
# 81 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Leds.nc"
result_t CC1000RadioIntM$Leds$redToggle(void);
static   
# 52 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ADC.nc"
result_t CC1000RadioIntM$RSSIADC$getData(void);
# 79 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000RadioIntM.nc"
enum CC1000RadioIntM$__nesc_unnamed4266 {
  CC1000RadioIntM$TX_STATE, 
  CC1000RadioIntM$DISABLED_STATE, 
  CC1000RadioIntM$IDLE_STATE, 
  CC1000RadioIntM$PRETX_STATE, 
  CC1000RadioIntM$SYNC_STATE, 
  CC1000RadioIntM$RX_STATE, 
  CC1000RadioIntM$POWER_DOWN_STATE
};

enum CC1000RadioIntM$__nesc_unnamed4267 {
  CC1000RadioIntM$TXSTATE_WAIT, 
  CC1000RadioIntM$TXSTATE_START, 
  CC1000RadioIntM$TXSTATE_PREAMBLE, 
  CC1000RadioIntM$TXSTATE_SYNC, 
  CC1000RadioIntM$TXSTATE_DATA, 
  CC1000RadioIntM$TXSTATE_CRC, 
  CC1000RadioIntM$TXSTATE_FLUSH, 
  CC1000RadioIntM$TXSTATE_DONE
};

enum CC1000RadioIntM$__nesc_unnamed4268 {
  CC1000RadioIntM$SYNC_BYTE = 0x33, 
  CC1000RadioIntM$NSYNC_BYTE = 0xcc, 
  CC1000RadioIntM$SYNC_WORD = 0x33cc, 
  CC1000RadioIntM$NSYNC_WORD = 0xcc33
};

uint8_t CC1000RadioIntM$RadioState;
uint8_t CC1000RadioIntM$RadioTxState;
uint16_t CC1000RadioIntM$txlength;
uint16_t CC1000RadioIntM$rxlength;
TOS_MsgPtr CC1000RadioIntM$txbufptr;
TOS_MsgPtr CC1000RadioIntM$rxbufptr;
TOS_Msg CC1000RadioIntM$RxBuf;
uint8_t CC1000RadioIntM$NextTxByte;

uint8_t CC1000RadioIntM$lplpower;
uint8_t CC1000RadioIntM$lplpowertx;

uint16_t CC1000RadioIntM$preamblelen;

uint16_t CC1000RadioIntM$PreambleCount;
uint8_t CC1000RadioIntM$SOFCount;
union CC1000RadioIntM$__nesc_unnamed4269 {
  uint16_t W;
  struct  {
    uint8_t LSB;
    uint8_t MSB;
  } ;
} CC1000RadioIntM$RxShiftBuf;
uint8_t CC1000RadioIntM$RxBitOffset;
uint16_t CC1000RadioIntM$RxByteCnt;
uint16_t CC1000RadioIntM$TxByteCnt;
uint16_t CC1000RadioIntM$RSSISampleFreq;
bool CC1000RadioIntM$bInvertRxData;
bool CC1000RadioIntM$bTxPending;
bool CC1000RadioIntM$bTxBusy;
bool CC1000RadioIntM$bRSSIValid;
uint16_t CC1000RadioIntM$usRunningCRC;
uint16_t CC1000RadioIntM$usRSSIVal;
uint16_t CC1000RadioIntM$usSquelchVal;
int16_t CC1000RadioIntM$sMacDelay;







volatile uint16_t CC1000RadioIntM$LocalAddr;
static inline  




void CC1000RadioIntM$PacketRcvd(void);
static inline  
#line 174
void CC1000RadioIntM$PacketSent(void);
static inline  
#line 188
result_t CC1000RadioIntM$StdControl$init(void);
static inline  
#line 334
result_t CC1000RadioIntM$WakeupTimer$fired(void);
static inline  
#line 388
result_t CC1000RadioIntM$StdControl$start(void);
static inline  
#line 421
result_t CC1000RadioIntM$Send$send(TOS_MsgPtr pMsg);
static   
#line 472
result_t CC1000RadioIntM$SpiByteFifo$dataReady(uint8_t data_in);
static inline   
#line 770
result_t CC1000RadioIntM$RSSIADC$dataReady(uint16_t data);
static inline    









void CC1000RadioIntM$RadioSendCoordinator$default$startSymbol(void);
static inline    void CC1000RadioIntM$RadioSendCoordinator$default$byte(TOS_MsgPtr msg, uint8_t byteCount);
static inline    void CC1000RadioIntM$RadioReceiveCoordinator$default$startSymbol(void);
static inline    void CC1000RadioIntM$RadioReceiveCoordinator$default$byte(TOS_MsgPtr msg, uint8_t byteCount);
static  
# 51 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLCC1000.nc"
result_t CC1000ControlM$HPLChipcon$init(void);
static   
#line 65
uint8_t CC1000ControlM$HPLChipcon$read(uint8_t arg_0x8646778);
static   
#line 58
result_t CC1000ControlM$HPLChipcon$write(uint8_t arg_0x86461c0, uint8_t arg_0x8646308);
 
# 59 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000ControlM.nc"
uint8_t CC1000ControlM$gCurrentParameters[31];

enum CC1000ControlM$__nesc_unnamed4270 {
  CC1000ControlM$IF = 150000, 
  CC1000ControlM$FREQ_MIN = 4194304, 
  CC1000ControlM$FREQ_MAX = 16751615
};
static inline 
#line 107
result_t CC1000ControlM$chipcon_cal(void);
static inline 
#line 163
void CC1000ControlM$cc1000SetFreq(void);
static 
#line 179
void CC1000ControlM$cc1000SetModem(void);
static inline  
#line 318
result_t CC1000ControlM$StdControl$init(void);
static inline  
#line 376
result_t CC1000ControlM$CC1000Control$TunePreset(uint8_t freq);
static inline   
#line 399
result_t CC1000ControlM$CC1000Control$TxMode(void);
static   
#line 412
result_t CC1000ControlM$CC1000Control$RxMode(void);
static inline  
#line 434
result_t CC1000ControlM$CC1000Control$BIASOn(void);
static inline  
#line 446
result_t CC1000ControlM$StdControl$stop(void);
static inline  









result_t CC1000ControlM$StdControl$start(void);
static inline  
#line 482
result_t CC1000ControlM$CC1000Control$SelectLock(uint8_t Value);
static inline  
#line 494
bool CC1000ControlM$CC1000Control$GetLOStatus(void);
static inline  
# 51 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLCC1000M.nc"
result_t HPLCC1000M$HPLCC1000$init(void);
static   
#line 75
result_t HPLCC1000M$HPLCC1000$write(uint8_t addr, uint8_t data);
static   
#line 128
uint8_t HPLCC1000M$HPLCC1000$read(uint8_t addr);
# 54 "/home/wyong/tinyos/tinyos-1.x/tos/system/RandomLFSR.nc"
uint16_t RandomLFSR$shiftReg;
uint16_t RandomLFSR$initSeed;
uint16_t RandomLFSR$mask;
static inline   

result_t RandomLFSR$Random$init(void);
static   









uint16_t RandomLFSR$Random$rand(void);
static   
# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
result_t ADCM$HPLADC$bindPort(uint8_t arg_0x8693148, uint8_t arg_0x8693290);
static   
#line 91
result_t ADCM$HPLADC$sampleStop(void);
static   
#line 54
result_t ADCM$HPLADC$init(void);
static   
#line 77
result_t ADCM$HPLADC$samplePort(uint8_t arg_0x8693778);
static   
# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ADC.nc"
result_t ADCM$ADC$dataReady(
# 54 "/home/wyong/tinyos/tinyos-1.x/tos/system/ADCM.nc"
uint8_t arg_0x867f2e0, 
# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ADC.nc"
uint16_t arg_0x85d61c8);
# 63 "/home/wyong/tinyos/tinyos-1.x/tos/system/ADCM.nc"
enum ADCM$__nesc_unnamed4271 {
  ADCM$IDLE = 0, 
  ADCM$SINGLE_CONVERSION = 1, 
  ADCM$CONTINUOUS_CONVERSION = 2
};

uint16_t ADCM$ReqPort;
uint16_t ADCM$ReqVector;
uint16_t ADCM$ContReqMask;
static inline  
result_t ADCM$ADCControl$init(void);
static inline  
#line 87
result_t ADCM$ADCControl$bindPort(uint8_t port, uint8_t adcPort);
static inline    


result_t ADCM$ADC$default$dataReady(uint8_t port, uint16_t data);
static inline   


result_t ADCM$HPLADC$dataReady(uint16_t data);
static 
#line 132
__inline result_t ADCM$startGet(uint8_t newState, uint8_t port);
static inline   
#line 165
result_t ADCM$ADC$getData(uint8_t port);
static   
# 99 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
result_t HPLADCM$ADC$dataReady(uint16_t arg_0x8690310);
# 60 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLADCM.nc"
bool HPLADCM$init_portmap_done;
uint8_t HPLADCM$TOSH_adc_portmap[TOSH_ADC_PORTMAPSIZE];
static 
void HPLADCM$init_portmap(void);
static inline   
#line 90
result_t HPLADCM$ADC$init(void);
static inline   
#line 110
result_t HPLADCM$ADC$bindPort(uint8_t port, uint8_t adcPort);
static   
#line 122
result_t HPLADCM$ADC$samplePort(uint8_t port);
static inline   
#line 137
result_t HPLADCM$ADC$sampleStop(void);






void __attribute((signal))   __vector_21(void);
static   
# 41 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
uint8_t HPLSpiM$PowerManagement$adjustPower(void);
static   
# 42 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/SpiByteFifo.nc"
result_t HPLSpiM$SpiByteFifo$dataReady(uint8_t arg_0x85d4ee8);
 
# 51 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLSpiM.nc"
uint8_t HPLSpiM$OutgoingByte;

void __attribute((signal))   __vector_17(void);
static inline   




result_t HPLSpiM$SpiByteFifo$writeByte(uint8_t data);
static inline   
#line 74
result_t HPLSpiM$SpiByteFifo$enableIntr(void);
static   






result_t HPLSpiM$SpiByteFifo$disableIntr(void);
static inline   






result_t HPLSpiM$SpiByteFifo$initSlave(void);
static inline   
#line 103
result_t HPLSpiM$SpiByteFifo$txMode(void);
static inline   




result_t HPLSpiM$SpiByteFifo$rxMode(void);
static   
# 41 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
uint8_t TimerM$PowerManagement$adjustPower(void);
static   
# 105 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Clock.nc"
void TimerM$Clock$setInterval(uint8_t arg_0x86c88c8);
static   
#line 96
result_t TimerM$Clock$setRate(char arg_0x86c5d58, char arg_0x86c5e98);
static  
# 73 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Timer.nc"
result_t TimerM$Timer$fired(
# 45 "/home/wyong/tinyos/tinyos-1.x/tos/system/TimerM.nc"
uint8_t arg_0x86b65f0);









uint32_t TimerM$mState;
uint8_t TimerM$setIntervalFlag;
uint8_t TimerM$mScale;
#line 57
uint8_t TimerM$mInterval;
int8_t TimerM$queue_head;
int8_t TimerM$queue_tail;
uint8_t TimerM$queue_size;
uint8_t TimerM$queue[NUM_TIMERS];

struct TimerM$timer_s {
  uint8_t type;
  int32_t ticks;
  int32_t ticksLeft;
} TimerM$mTimerList[NUM_TIMERS];

enum TimerM$__nesc_unnamed4272 {
  TimerM$maxTimerInterval = 230
};
static  result_t TimerM$StdControl$init(void);
static inline  








result_t TimerM$StdControl$start(void);
static  









result_t TimerM$Timer$start(uint8_t id, char type, 
uint32_t interval);
#line 116
static void TimerM$adjustInterval(void);
static inline  
#line 140
result_t TimerM$Timer$stop(uint8_t id);
static inline   
#line 154
result_t TimerM$Timer$default$fired(uint8_t id);
static inline 


void TimerM$enqueue(uint8_t value);
static inline 






uint8_t TimerM$dequeue(void);
static inline  








void TimerM$signalOneTimer(void);
static inline  




void TimerM$HandleFire(void);
static inline   
#line 204
result_t TimerM$Clock$fire(void);
static   
# 180 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Clock.nc"
result_t HPLClock$Clock$fire(void);
# 54 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica/HPLClock.nc"
uint8_t HPLClock$set_flag;
uint8_t HPLClock$mscale;
#line 55
uint8_t HPLClock$nextScale;
#line 55
uint8_t HPLClock$minterval;
static inline   
#line 87
void HPLClock$Clock$setInterval(uint8_t value);
static inline   
#line 149
result_t HPLClock$Clock$setRate(char interval, char scale);
#line 167
void __attribute((interrupt))   __vector_15(void);
# 51 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLPowerManagementM.nc"
bool HPLPowerManagementM$disabled = TRUE;

enum HPLPowerManagementM$__nesc_unnamed4273 {
  HPLPowerManagementM$IDLE = 0, 
  HPLPowerManagementM$ADC_NR = 1 << 3, 
  HPLPowerManagementM$POWER_DOWN = 1 << 4, 
  HPLPowerManagementM$POWER_SAVE = (1 << 3) + (1 << 4), 
  HPLPowerManagementM$STANDBY = (1 << 2) + (1 << 4), 
  HPLPowerManagementM$EXT_STANDBY = (1 << 3) + (1 << 4) + (1 << 2)
};
static inline 

uint8_t HPLPowerManagementM$getPowerLevel(void);
static inline  
#line 84
void HPLPowerManagementM$doAdjustment(void);
static   
#line 101
uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void);
# 50 "/home/wyong/tinyos/tinyos-1.x/tos/system/LedsC.nc"
uint8_t LedsC$ledsOn;

enum LedsC$__nesc_unnamed4274 {
  LedsC$RED_BIT = 1, 
  LedsC$GREEN_BIT = 2, 
  LedsC$YELLOW_BIT = 4
};
static inline   
result_t LedsC$Leds$init(void);
static inline   









result_t LedsC$Leds$redOn(void);
static inline   







result_t LedsC$Leds$redOff(void);
static inline   







result_t LedsC$Leds$redToggle(void);
static inline   









result_t LedsC$Leds$greenOn(void);
static inline   







result_t LedsC$Leds$greenOff(void);
static inline   
#line 127
result_t LedsC$Leds$yellowOn(void);
static inline   







result_t LedsC$Leds$yellowOff(void);
static  
# 75 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr FramerM$ReceiveMsg$receive(TOS_MsgPtr arg_0x8554980);
static   
# 55 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ByteComm.nc"
result_t FramerM$ByteComm$txByte(uint8_t arg_0x873f058);
static  
# 63 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
result_t FramerM$ByteControl$init(void);
static  





result_t FramerM$ByteControl$start(void);
static  
# 67 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
result_t FramerM$BareSendMsg$sendDone(TOS_MsgPtr arg_0x8575748, result_t arg_0x8575898);
static  
# 75 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/TokenReceiveMsg.nc"
TOS_MsgPtr FramerM$TokenReceiveMsg$receive(TOS_MsgPtr arg_0x8726cf8, uint8_t arg_0x8726e40);
# 82 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
enum FramerM$__nesc_unnamed4275 {
  FramerM$HDLC_QUEUESIZE = 2, 
  FramerM$HDLC_MTU = sizeof(TOS_Msg ), 
  FramerM$HDLC_FLAG_BYTE = 0x7e, 
  FramerM$HDLC_CTLESC_BYTE = 0x7d, 
  FramerM$PROTO_ACK = 64, 
  FramerM$PROTO_PACKET_ACK = 65, 
  FramerM$PROTO_PACKET_NOACK = 66, 
  FramerM$PROTO_UNKNOWN = 255
};

enum FramerM$__nesc_unnamed4276 {
  FramerM$RXSTATE_NOSYNC, 
  FramerM$RXSTATE_PROTO, 
  FramerM$RXSTATE_TOKEN, 
  FramerM$RXSTATE_INFO, 
  FramerM$RXSTATE_ESC
};

enum FramerM$__nesc_unnamed4277 {
  FramerM$TXSTATE_IDLE, 
  FramerM$TXSTATE_PROTO, 
  FramerM$TXSTATE_INFO, 
  FramerM$TXSTATE_ESC, 
  FramerM$TXSTATE_FCS1, 
  FramerM$TXSTATE_FCS2, 
  FramerM$TXSTATE_ENDFLAG, 
  FramerM$TXSTATE_FINISH, 
  FramerM$TXSTATE_ERROR
};

enum FramerM$__nesc_unnamed4278 {
  FramerM$FLAGS_TOKENPEND = 0x2, 
  FramerM$FLAGS_DATAPEND = 0x4, 
  FramerM$FLAGS_UNKNOWN = 0x8
};

TOS_Msg FramerM$gMsgRcvBuf[FramerM$HDLC_QUEUESIZE];

typedef struct FramerM$_MsgRcvEntry {
  uint8_t Proto;
  uint8_t Token;
  uint16_t Length;
  TOS_MsgPtr pMsg;
} FramerM$MsgRcvEntry_t;

FramerM$MsgRcvEntry_t FramerM$gMsgRcvTbl[FramerM$HDLC_QUEUESIZE];

uint8_t *FramerM$gpRxBuf;
uint8_t *FramerM$gpTxBuf;

uint8_t FramerM$gFlags;
 

uint8_t FramerM$gTxState;
 uint8_t FramerM$gPrevTxState;
 uint8_t FramerM$gTxProto;
 uint16_t FramerM$gTxByteCnt;
 uint16_t FramerM$gTxLength;
 uint16_t FramerM$gTxRunningCRC;


uint8_t FramerM$gRxState;
uint8_t FramerM$gRxHeadIndex;
uint8_t FramerM$gRxTailIndex;
uint16_t FramerM$gRxByteCnt;

uint16_t FramerM$gRxRunningCRC;

TOS_MsgPtr FramerM$gpTxMsg;
uint8_t FramerM$gTxTokenBuf;
uint8_t FramerM$gTxUnknownBuf;
 uint8_t FramerM$gTxEscByte;
static  
void FramerM$PacketSent(void);
static 
result_t FramerM$StartTx(void);
static inline  
#line 202
void FramerM$PacketUnknown(void);
static inline  






void FramerM$PacketRcvd(void);
static  
#line 246
void FramerM$PacketSent(void);
static 
#line 268
void FramerM$HDLCInitialize(void);
static inline  
#line 291
result_t FramerM$StdControl$init(void);
static inline  



result_t FramerM$StdControl$start(void);
static inline  








result_t FramerM$BareSendMsg$send(TOS_MsgPtr pMsg);
static inline  
#line 328
result_t FramerM$TokenReceiveMsg$ReflectToken(uint8_t Token);
static   
#line 348
result_t FramerM$ByteComm$rxByteReady(uint8_t data, bool error, uint16_t strength);
static 
#line 469
result_t FramerM$TxArbitraryByte(uint8_t Byte);
static inline   
#line 482
result_t FramerM$ByteComm$txByteReady(bool LastByteSuccess);
static inline   
#line 552
result_t FramerM$ByteComm$txDone(void);
static  
# 75 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
TOS_MsgPtr FramerAckM$ReceiveCombined$receive(TOS_MsgPtr arg_0x8554980);
static  
# 88 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/TokenReceiveMsg.nc"
result_t FramerAckM$TokenReceiveMsg$ReflectToken(uint8_t arg_0x8727458);
# 72 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerAckM.nc"
uint8_t FramerAckM$gTokenBuf;
static inline  
void FramerAckM$SendAckTask(void);
static inline  



TOS_MsgPtr FramerAckM$TokenReceiveMsg$receive(TOS_MsgPtr Msg, uint8_t token);
static inline  
#line 91
TOS_MsgPtr FramerAckM$ReceiveMsg$receive(TOS_MsgPtr Msg);
static   
# 62 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLUART.nc"
result_t UARTM$HPLUART$init(void);
static   
#line 80
result_t UARTM$HPLUART$put(uint8_t arg_0x8770158);
static   
# 83 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ByteComm.nc"
result_t UARTM$ByteComm$txDone(void);
static   
#line 75
result_t UARTM$ByteComm$txByteReady(bool arg_0x873fcb8);
static   
#line 66
result_t UARTM$ByteComm$rxByteReady(uint8_t arg_0x873f4e8, bool arg_0x873f630, uint16_t arg_0x873f788);
# 58 "/home/wyong/tinyos/tinyos-1.x/tos/system/UARTM.nc"
bool UARTM$state;
static inline  
result_t UARTM$Control$init(void);
static inline  






result_t UARTM$Control$start(void);
static inline   







result_t UARTM$HPLUART$get(uint8_t data);
static   








result_t UARTM$HPLUART$putDone(void);
static   
#line 110
result_t UARTM$ByteComm$txByte(uint8_t data);
static   
# 88 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLUART.nc"
result_t HPLUART0M$UART$get(uint8_t arg_0x8770658);
static   






result_t HPLUART0M$UART$putDone(void);
static inline   
# 60 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLUART0M.nc"
result_t HPLUART0M$UART$init(void);
#line 90
void __attribute((signal))   __vector_18(void);









void __attribute((interrupt))   __vector_20(void);
static inline   



result_t HPLUART0M$UART$put(uint8_t data);
static inline  
# 57 "/home/wyong/tinyos/tinyos-1.x/tos/sensorboards/micasb/SounderM.nc"
result_t SounderM$StdControl$start(void);
static inline  




result_t SounderM$StdControl$stop(void);
static   
# 122 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Leds.nc"
result_t IntToLedsM$Leds$yellowOff(void);
static   
#line 56
result_t IntToLedsM$Leds$init(void);
static   
#line 97
result_t IntToLedsM$Leds$greenOff(void);
static   
#line 72
result_t IntToLedsM$Leds$redOff(void);
static inline  
# 53 "/home/wyong/tinyos/tinyos-1.x/tos/lib/Counters/IntToLedsM.nc"
result_t IntToLedsM$StdControl$init(void);
static inline  







result_t IntToLedsM$StdControl$start(void);
# 117 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/hardware.h"
static __inline void TOSH_SET_GREEN_LED_PIN(void)
#line 117
{
#line 117
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1B + 0x20) |= 1 << 1;
}

#line 118
static __inline void TOSH_SET_YELLOW_LED_PIN(void)
#line 118
{
#line 118
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1B + 0x20) |= 1 << 0;
}

#line 116
static __inline void TOSH_SET_RED_LED_PIN(void)
#line 116
{
#line 116
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1B + 0x20) |= 1 << 2;
}

#line 131
static __inline void TOSH_SET_FLASH_SELECT_PIN(void)
#line 131
{
#line 131
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1B + 0x20) |= 1 << 3;
}

#line 132
static __inline void TOSH_MAKE_FLASH_CLK_OUTPUT(void)
#line 132
{
#line 132
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x11 + 0x20) |= 1 << 5;
}

#line 133
static __inline void TOSH_MAKE_FLASH_OUT_OUTPUT(void)
#line 133
{
#line 133
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x11 + 0x20) |= 1 << 3;
}

#line 131
static __inline void TOSH_MAKE_FLASH_SELECT_OUTPUT(void)
#line 131
{
#line 131
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1A + 0x20) |= 1 << 3;
}

#line 120
static __inline void TOSH_CLR_SERIAL_ID_PIN(void)
#line 120
{
#line 120
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1B + 0x20) &= ~(1 << 4);
}

#line 120
static __inline void TOSH_MAKE_SERIAL_ID_INPUT(void)
#line 120
{
#line 120
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1A + 0x20) &= ~(1 << 4);
}

#line 145
static __inline void TOSH_MAKE_SPI_OC1C_INPUT(void)
#line 145
{
#line 145
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x17 + 0x20) &= ~(1 << 7);
}

#line 144
static __inline void TOSH_MAKE_MISO_INPUT(void)
#line 144
{
#line 144
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x17 + 0x20) &= ~(1 << 3);
}

#line 127
static __inline void TOSH_MAKE_CC_PCLK_OUTPUT(void)
#line 127
{
#line 127
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x11 + 0x20) |= 1 << 6;
}

#line 126
static __inline void TOSH_MAKE_CC_PDATA_OUTPUT(void)
#line 126
{
#line 126
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x11 + 0x20) |= 1 << 7;
}

#line 128
static __inline void TOSH_MAKE_CC_PALE_OUTPUT(void)
#line 128
{
#line 128
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x11 + 0x20) |= 1 << 4;
}

#line 149
static __inline void TOSH_MAKE_PW0_OUTPUT(void)
#line 149
{
#line 149
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x14 + 0x20) |= 1 << 0;
}

#line 150
static __inline void TOSH_MAKE_PW1_OUTPUT(void)
#line 150
{
#line 150
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x14 + 0x20) |= 1 << 1;
}

#line 151
static __inline void TOSH_MAKE_PW2_OUTPUT(void)
#line 151
{
#line 151
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x14 + 0x20) |= 1 << 2;
}

#line 152
static __inline void TOSH_MAKE_PW3_OUTPUT(void)
#line 152
{
#line 152
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x14 + 0x20) |= 1 << 3;
}

#line 153
static __inline void TOSH_MAKE_PW4_OUTPUT(void)
#line 153
{
#line 153
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x14 + 0x20) |= 1 << 4;
}

#line 154
static __inline void TOSH_MAKE_PW5_OUTPUT(void)
#line 154
{
#line 154
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x14 + 0x20) |= 1 << 5;
}

#line 155
static __inline void TOSH_MAKE_PW6_OUTPUT(void)
#line 155
{
#line 155
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x14 + 0x20) |= 1 << 6;
}

#line 156
static __inline void TOSH_MAKE_PW7_OUTPUT(void)
#line 156
{
#line 156
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x14 + 0x20) |= 1 << 7;
}

#line 125
static __inline void TOSH_MAKE_CC_CHP_OUT_INPUT(void)
#line 125
{
#line 125
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1A + 0x20) &= ~(1 << 6);
}

#line 117
static __inline void TOSH_MAKE_GREEN_LED_OUTPUT(void)
#line 117
{
#line 117
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1A + 0x20) |= 1 << 1;
}

#line 118
static __inline void TOSH_MAKE_YELLOW_LED_OUTPUT(void)
#line 118
{
#line 118
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1A + 0x20) |= 1 << 0;
}

#line 116
static __inline void TOSH_MAKE_RED_LED_OUTPUT(void)
#line 116
{
#line 116
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1A + 0x20) |= 1 << 2;
}

static inline 
#line 171
void TOSH_SET_PIN_DIRECTIONS(void )
{







  TOSH_MAKE_RED_LED_OUTPUT();
  TOSH_MAKE_YELLOW_LED_OUTPUT();
  TOSH_MAKE_GREEN_LED_OUTPUT();

  TOSH_MAKE_CC_CHP_OUT_INPUT();

  TOSH_MAKE_PW7_OUTPUT();
  TOSH_MAKE_PW6_OUTPUT();
  TOSH_MAKE_PW5_OUTPUT();
  TOSH_MAKE_PW4_OUTPUT();
  TOSH_MAKE_PW3_OUTPUT();
  TOSH_MAKE_PW2_OUTPUT();
  TOSH_MAKE_PW1_OUTPUT();
  TOSH_MAKE_PW0_OUTPUT();

  TOSH_MAKE_CC_PALE_OUTPUT();
  TOSH_MAKE_CC_PDATA_OUTPUT();
  TOSH_MAKE_CC_PCLK_OUTPUT();
  TOSH_MAKE_MISO_INPUT();
  TOSH_MAKE_SPI_OC1C_INPUT();

  TOSH_MAKE_SERIAL_ID_INPUT();
  TOSH_CLR_SERIAL_ID_PIN();

  TOSH_MAKE_FLASH_SELECT_OUTPUT();
  TOSH_MAKE_FLASH_OUT_OUTPUT();
  TOSH_MAKE_FLASH_CLK_OUTPUT();
  TOSH_SET_FLASH_SELECT_PIN();

  TOSH_SET_RED_LED_PIN();
  TOSH_SET_YELLOW_LED_PIN();
  TOSH_SET_GREEN_LED_PIN();
}

static inline  
# 57 "/home/wyong/tinyos/tinyos-1.x/tos/platform/avrmote/HPLInit.nc"
result_t HPLInit$init(void)
#line 57
{
  TOSH_SET_PIN_DIRECTIONS();
  return SUCCESS;
}

# 47 "/home/wyong/tinyos/tinyos-1.x/tos/system/RealMain.nc"
inline static  result_t RealMain$hardwareInit(void){
#line 47
  unsigned char result;
#line 47

#line 47
  result = HPLInit$init();
#line 47

#line 47
  return result;
#line 47
}
#line 47
static inline  
# 75 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLPotC.nc"
result_t HPLPotC$Pot$finalise(void)
#line 75
{


  return SUCCESS;
}

# 74 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLPot.nc"
inline static  result_t PotM$HPLPot$finalise(void){
#line 74
  unsigned char result;
#line 74

#line 74
  result = HPLPotC$Pot$finalise();
#line 74

#line 74
  return result;
#line 74
}
#line 74
static inline  
# 66 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLPotC.nc"
result_t HPLPotC$Pot$increase(void)
#line 66
{





  return SUCCESS;
}

# 67 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLPot.nc"
inline static  result_t PotM$HPLPot$increase(void){
#line 67
  unsigned char result;
#line 67

#line 67
  result = HPLPotC$Pot$increase();
#line 67

#line 67
  return result;
#line 67
}
#line 67
static inline  
# 57 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLPotC.nc"
result_t HPLPotC$Pot$decrease(void)
#line 57
{





  return SUCCESS;
}

# 59 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLPot.nc"
inline static  result_t PotM$HPLPot$decrease(void){
#line 59
  unsigned char result;
#line 59

#line 59
  result = HPLPotC$Pot$decrease();
#line 59

#line 59
  return result;
#line 59
}
#line 59
static inline 
# 93 "/home/wyong/tinyos/tinyos-1.x/tos/system/PotM.nc"
void PotM$setPot(uint8_t value)
#line 93
{
  uint8_t i;

#line 95
  for (i = 0; i < 151; i++) 
    PotM$HPLPot$decrease();

  for (i = 0; i < value; i++) 
    PotM$HPLPot$increase();

  PotM$HPLPot$finalise();

  PotM$potSetting = value;
}

static inline  result_t PotM$Pot$init(uint8_t initialSetting)
#line 106
{
  PotM$setPot(initialSetting);
  return SUCCESS;
}

# 78 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Pot.nc"
inline static  result_t RealMain$Pot$init(uint8_t arg_0x8521c88){
#line 78
  unsigned char result;
#line 78

#line 78
  result = PotM$Pot$init(arg_0x8521c88);
#line 78

#line 78
  return result;
#line 78
}
#line 78
static inline 
# 76 "/home/wyong/tinyos/tinyos-1.x/tos/system/sched.c"
void TOSH_sched_init(void )
{
  TOSH_sched_free = 0;
  TOSH_sched_full = 0;
}

static inline 
# 108 "/home/wyong/tinyos/tinyos-1.x/tos/system/tos.h"
result_t rcombine(result_t r1, result_t r2)



{
  return r1 == FAIL ? FAIL : r2;
}

# 63 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t CC1000RadioIntM$TimerControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = TimerM$StdControl$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
static inline   
# 59 "/home/wyong/tinyos/tinyos-1.x/tos/system/RandomLFSR.nc"
result_t RandomLFSR$Random$init(void)
#line 59
{
  {
  }
#line 60
  ;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 61
    {
      RandomLFSR$shiftReg = 119 * 119 * (TOS_LOCAL_ADDRESS + 1);
      RandomLFSR$initSeed = RandomLFSR$shiftReg;
      RandomLFSR$mask = 137 * 29 * (TOS_LOCAL_ADDRESS + 1);
    }
#line 65
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 57 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Random.nc"
inline static   result_t CC1000RadioIntM$Random$init(void){
#line 57
  unsigned char result;
#line 57

#line 57
  result = RandomLFSR$Random$init();
#line 57

#line 57
  return result;
#line 57
}
#line 57
static inline   
# 90 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLADCM.nc"
result_t HPLADCM$ADC$init(void)
#line 90
{
  HPLADCM$init_portmap();



  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 95
    {
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x06 + 0x20) = (1 << 3) | (6 << 0);

      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x07 + 0x20) = 0;
    }
#line 99
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 54 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
inline static   result_t ADCM$HPLADC$init(void){
#line 54
  unsigned char result;
#line 54

#line 54
  result = HPLADCM$ADC$init();
#line 54

#line 54
  return result;
#line 54
}
#line 54
static inline  
# 73 "/home/wyong/tinyos/tinyos-1.x/tos/system/ADCM.nc"
result_t ADCM$ADCControl$init(void)
#line 73
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 74
    {
      ADCM$ReqPort = 0;
      ADCM$ReqVector = ADCM$ContReqMask = 0;
    }
#line 77
    __nesc_atomic_end(__nesc_atomic); }
  {
  }
#line 78
  ;

  return ADCM$HPLADC$init();
}

# 50 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ADCControl.nc"
inline static  result_t CC1000RadioIntM$ADCControl$init(void){
#line 50
  unsigned char result;
#line 50

#line 50
  result = ADCM$ADCControl$init();
#line 50

#line 50
  return result;
#line 50
}
#line 50
static inline   
# 110 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLADCM.nc"
result_t HPLADCM$ADC$bindPort(uint8_t port, uint8_t adcPort)
#line 110
{

  if (
#line 111
  port < TOSH_ADC_PORTMAPSIZE && 
  port != TOS_ADC_BANDGAP_PORT && 
  port != TOS_ADC_GND_PORT) {
      HPLADCM$init_portmap();
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 115
        HPLADCM$TOSH_adc_portmap[port] = adcPort;
#line 115
        __nesc_atomic_end(__nesc_atomic); }
      return SUCCESS;
    }
  else {
    return FAIL;
    }
}

# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
inline static   result_t ADCM$HPLADC$bindPort(uint8_t arg_0x8693148, uint8_t arg_0x8693290){
#line 70
  unsigned char result;
#line 70

#line 70
  result = HPLADCM$ADC$bindPort(arg_0x8693148, arg_0x8693290);
#line 70

#line 70
  return result;
#line 70
}
#line 70
static inline  
# 87 "/home/wyong/tinyos/tinyos-1.x/tos/system/ADCM.nc"
result_t ADCM$ADCControl$bindPort(uint8_t port, uint8_t adcPort)
#line 87
{
  return ADCM$HPLADC$bindPort(port, adcPort);
}

# 89 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ADCControl.nc"
inline static  result_t CC1000RadioIntM$ADCControl$bindPort(uint8_t arg_0x85c9378, uint8_t arg_0x85c94c0){
#line 89
  unsigned char result;
#line 89

#line 89
  result = ADCM$ADCControl$bindPort(arg_0x85c9378, arg_0x85c94c0);
#line 89

#line 89
  return result;
#line 89
}
#line 89
static inline  
# 494 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000ControlM.nc"
bool CC1000ControlM$CC1000Control$GetLOStatus(void)
#line 494
{

  return CC1000ControlM$gCurrentParameters[0x1e];
}

# 162 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000Control.nc"
inline static  bool CC1000RadioIntM$CC1000Control$GetLOStatus(void){
#line 162
  unsigned char result;
#line 162

#line 162
  result = CC1000ControlM$CC1000Control$GetLOStatus();
#line 162

#line 162
  return result;
#line 162
}
#line 162
# 58 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLCC1000.nc"
inline static   result_t CC1000ControlM$HPLChipcon$write(uint8_t arg_0x86461c0, uint8_t arg_0x8646308){
#line 58
  unsigned char result;
#line 58

#line 58
  result = HPLCC1000M$HPLCC1000$write(arg_0x86461c0, arg_0x8646308);
#line 58

#line 58
  return result;
#line 58
}
#line 58
static inline  
# 482 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000ControlM.nc"
result_t CC1000ControlM$CC1000Control$SelectLock(uint8_t Value)
#line 482
{

  CC1000ControlM$gCurrentParameters[0xd] = Value << 4;
  return CC1000ControlM$HPLChipcon$write(0x0D, Value << 4);
}

# 142 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000Control.nc"
inline static  result_t CC1000RadioIntM$CC1000Control$SelectLock(uint8_t arg_0x85aaa80){
#line 142
  unsigned char result;
#line 142

#line 142
  result = CC1000ControlM$CC1000Control$SelectLock(arg_0x85aaa80);
#line 142

#line 142
  return result;
#line 142
}
#line 142
# 65 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLCC1000.nc"
inline static   uint8_t CC1000ControlM$HPLChipcon$read(uint8_t arg_0x8646778){
#line 65
  unsigned char result;
#line 65

#line 65
  result = HPLCC1000M$HPLCC1000$read(arg_0x8646778);
#line 65

#line 65
  return result;
#line 65
}
#line 65
static inline 
# 107 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000ControlM.nc"
result_t CC1000ControlM$chipcon_cal(void)
{



  CC1000ControlM$HPLChipcon$write(0x0B, 0x00);
  CC1000ControlM$HPLChipcon$write(0x42, 0x3f);


  CC1000ControlM$HPLChipcon$write(0x00, (
  1 << 4) | (1 << 0));



  CC1000ControlM$HPLChipcon$write(0x0E, ((
  1 << 7) | (
  1 << 5)) | (6 << 0));




  while ((CC1000ControlM$HPLChipcon$read(0x0E) & (1 << 3)) == 0) ;


  CC1000ControlM$HPLChipcon$write(0x0E, (
  1 << 5) | (6 << 0));



  CC1000ControlM$HPLChipcon$write(0x00, (((
  1 << 7) | (1 << 6)) | (1 << 5)) | (
  1 << 0));

  CC1000ControlM$HPLChipcon$write(0x09, CC1000ControlM$gCurrentParameters[29]);
  CC1000ControlM$HPLChipcon$write(0x0B, 0x00);



  CC1000ControlM$HPLChipcon$write(0x0E, ((
  1 << 7) | (
  1 << 5)) | (6 << 0));




  while ((CC1000ControlM$HPLChipcon$read(0x0E) & (1 << 3)) == 0) ;


  CC1000ControlM$HPLChipcon$write(0x0E, (
  1 << 5) | (6 << 0));



  return SUCCESS;
}

static inline void CC1000ControlM$cc1000SetFreq(void)
#line 163
{
  uint8_t i;

  for (i = 1; i < 0x0d; i++) {
      CC1000ControlM$HPLChipcon$write(i, CC1000ControlM$gCurrentParameters[i]);
    }


  CC1000ControlM$HPLChipcon$write(0x12, CC1000ControlM$gCurrentParameters[0x12]);

  CC1000ControlM$chipcon_cal();

  return;
}

static inline  
#line 376
result_t CC1000ControlM$CC1000Control$TunePreset(uint8_t freq)
#line 376
{
  int i;

  for (i = 1; i < 31; i++) {

      CC1000ControlM$gCurrentParameters[i] = ({
#line 381
        unsigned short __addr16 = (unsigned short )(unsigned short )&CC1K_Params[freq][i];
#line 381
        unsigned char __result;

#line 381
         __asm ("lpm %0, Z" : "=r"(__result) : "z"(__addr16));__result;
      }
      );
    }
#line 383
  CC1000ControlM$cc1000SetModem();
  CC1000ControlM$cc1000SetFreq();

  return SUCCESS;
}

static 
# 101 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/hardware.h"
void __inline TOSH_uwait(int u_sec)
#line 101
{
  while (u_sec > 0) {
       __asm volatile ("nop");
       __asm volatile ("nop");
       __asm volatile ("nop");
       __asm volatile ("nop");
       __asm volatile ("nop");
       __asm volatile ("nop");
       __asm volatile ("nop");
       __asm volatile ("nop");
      u_sec--;
    }
}

#line 127
static __inline void TOSH_SET_CC_PCLK_PIN(void)
#line 127
{
#line 127
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x12 + 0x20) |= 1 << 6;
}

#line 126
static __inline void TOSH_SET_CC_PDATA_PIN(void)
#line 126
{
#line 126
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x12 + 0x20) |= 1 << 7;
}

#line 128
static __inline void TOSH_SET_CC_PALE_PIN(void)
#line 128
{
#line 128
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x12 + 0x20) |= 1 << 4;
}

static inline  
# 51 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLCC1000M.nc"
result_t HPLCC1000M$HPLCC1000$init(void)
#line 51
{
  TOSH_MAKE_CC_CHP_OUT_INPUT();
  TOSH_MAKE_CC_PALE_OUTPUT();
  TOSH_MAKE_CC_PCLK_OUTPUT();
  TOSH_MAKE_CC_PDATA_OUTPUT();
  TOSH_SET_CC_PALE_PIN();
  TOSH_SET_CC_PDATA_PIN();
  TOSH_SET_CC_PCLK_PIN();
  return SUCCESS;
}

# 51 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLCC1000.nc"
inline static  result_t CC1000ControlM$HPLChipcon$init(void){
#line 51
  unsigned char result;
#line 51

#line 51
  result = HPLCC1000M$HPLCC1000$init();
#line 51

#line 51
  return result;
#line 51
}
#line 51
static inline  
# 318 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000ControlM.nc"
result_t CC1000ControlM$StdControl$init(void)
#line 318
{

  CC1000ControlM$HPLChipcon$init();


  CC1000ControlM$HPLChipcon$write(0x00, (((
  1 << 5) | (1 << 4)) | (
  1 << 3)) | (1 << 1));

  CC1000ControlM$HPLChipcon$write(0x00, ((((
  1 << 5) | (1 << 4)) | (
  1 << 3)) | (1 << 1)) | (
  1 << 0));

  TOSH_uwait(2000);



  CC1000ControlM$gCurrentParameters[0xb] = (8 << 4) | (0 << 0);
  CC1000ControlM$HPLChipcon$write(0x0B, CC1000ControlM$gCurrentParameters[0xb]);


  CC1000ControlM$gCurrentParameters[0xd] = 9 << 4;
  CC1000ControlM$HPLChipcon$write(4, CC1000ControlM$gCurrentParameters[0xd]);



  CC1000ControlM$gCurrentParameters[0xf] = 0;


  CC1000ControlM$gCurrentParameters[0x10] = (((3 << 5) | (1 << 3)) | (
  3 << 1)) | (1 << 0);


  CC1000ControlM$gCurrentParameters[0x11] = ((5 << 4) | (1 << 2)) | (
  1 << 0);


  CC1000ControlM$cc1000SetModem();

  CC1000ControlM$gCurrentParameters[0x13] = 1 << 0;
  CC1000ControlM$HPLChipcon$write(0x13, CC1000ControlM$gCurrentParameters[0x13]);


  CC1000ControlM$gCurrentParameters[0x1e] = TRUE;






  CC1000ControlM$CC1000Control$TunePreset(0x01);

  return SUCCESS;
}

# 63 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t CC1000RadioIntM$CC1000StdControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC1000ControlM$StdControl$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
# 143 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/hardware.h"
static __inline void TOSH_MAKE_MOSI_INPUT(void)
#line 143
{
#line 143
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x17 + 0x20) &= ~(1 << 2);
}

static __inline void TOSH_MAKE_SPI_SCK_INPUT(void)
#line 146
{
#line 146
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x17 + 0x20) &= ~(1 << 1);
}

static inline   
# 90 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLSpiM.nc"
result_t HPLSpiM$SpiByteFifo$initSlave(void)
#line 90
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 91
    {
      TOSH_MAKE_SPI_SCK_INPUT();
      TOSH_MAKE_MISO_INPUT();
      TOSH_MAKE_MOSI_INPUT();
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0D + 0x20) &= ~(1 << 3);
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0D + 0x20) &= ~(1 << 2);
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0D + 0x20) |= 1 << 7;
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0D + 0x20) |= 1 << 6;
    }
#line 99
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 38 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/SpiByteFifo.nc"
inline static   result_t CC1000RadioIntM$SpiByteFifo$initSlave(void){
#line 38
  unsigned char result;
#line 38

#line 38
  result = HPLSpiM$SpiByteFifo$initSlave();
#line 38

#line 38
  return result;
#line 38
}
#line 38
static inline  
# 188 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000RadioIntM.nc"
result_t CC1000RadioIntM$StdControl$init(void)
#line 188
{
  bool temp;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 191
    {
      CC1000RadioIntM$RadioState = CC1000RadioIntM$DISABLED_STATE;
      CC1000RadioIntM$RadioTxState = CC1000RadioIntM$TXSTATE_PREAMBLE;
      CC1000RadioIntM$rxbufptr = &CC1000RadioIntM$RxBuf;
      CC1000RadioIntM$rxbufptr->length = 0;
      CC1000RadioIntM$rxlength = MSG_DATA_SIZE - 2;
      CC1000RadioIntM$RxBitOffset = 0;

      CC1000RadioIntM$PreambleCount = 0;
      CC1000RadioIntM$RSSISampleFreq = 0;
      CC1000RadioIntM$RxShiftBuf.W = 0;
      CC1000RadioIntM$bTxPending = FALSE;
      CC1000RadioIntM$bTxBusy = FALSE;
      CC1000RadioIntM$bRSSIValid = FALSE;
      CC1000RadioIntM$sMacDelay = -1;
      CC1000RadioIntM$usRSSIVal = -1;
      CC1000RadioIntM$lplpower = CC1000RadioIntM$lplpowertx = 0;
      CC1000RadioIntM$usSquelchVal = ({
#line 208
        unsigned short __addr16 = (unsigned short )(unsigned short )&CC1K_LPL_SquelchInit[CC1000RadioIntM$lplpower];
#line 208
        unsigned char __result;

#line 208
         __asm ("lpm %0, Z" : "=r"(__result) : "z"(__addr16));__result;
      }
      );
    }
#line 211
    __nesc_atomic_end(__nesc_atomic); }
#line 211
  CC1000RadioIntM$SpiByteFifo$initSlave();
  CC1000RadioIntM$CC1000StdControl$init();
  CC1000RadioIntM$CC1000Control$SelectLock(0x9);
  temp = CC1000RadioIntM$CC1000Control$GetLOStatus();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 215
    CC1000RadioIntM$bInvertRxData = temp;
#line 215
    __nesc_atomic_end(__nesc_atomic); }

  CC1000RadioIntM$ADCControl$bindPort(TOS_ADC_CC_RSSI_PORT, TOSH_ACTUAL_CC_RSSI_PORT);
  CC1000RadioIntM$ADCControl$init();

  CC1000RadioIntM$Random$init();
  CC1000RadioIntM$TimerControl$init();




  CC1000RadioIntM$LocalAddr = TOS_LOCAL_ADDRESS;

  return SUCCESS;
}

# 63 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$RadioControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = CC1000RadioIntM$StdControl$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
static inline  
# 60 "/home/wyong/tinyos/tinyos-1.x/tos/system/UARTM.nc"
result_t UARTM$Control$init(void)
#line 60
{
  {
  }
#line 61
  ;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 62
    {
      UARTM$state = FALSE;
    }
#line 64
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 63 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t FramerM$ByteControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = UARTM$Control$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
static inline  
# 291 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
result_t FramerM$StdControl$init(void)
#line 291
{
  FramerM$HDLCInitialize();
  return FramerM$ByteControl$init();
}

# 63 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$UARTControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = FramerM$StdControl$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
inline static  result_t AMStandard$TimerControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = TimerM$StdControl$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
static inline  
# 87 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
bool AMStandard$Control$init(void)
#line 87
{
  result_t ok1;
#line 88
  result_t ok2;

  AMStandard$TimerControl$init();
  ok1 = AMStandard$UARTControl$init();
  ok2 = AMStandard$RadioControl$init();

  AMStandard$state = FALSE;
  AMStandard$lastCount = 0;
  AMStandard$counter = 0;
  {
  }
#line 97
  ;

  return rcombine(ok1, ok2);
}

# 63 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t RfmToIntUartM$CommControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = AMStandard$Control$init();
#line 63

#line 63
  return result;
#line 63
}
#line 63
static inline  
# 62 "/home/wyong/tinyos/tinyos-1.x/tos/lib/Counters/RfmToIntUartM.nc"
result_t RfmToIntUartM$StdControl$init(void)
#line 62
{
  return RfmToIntUartM$CommControl$init();
}

static inline   
# 107 "/home/wyong/tinyos/tinyos-1.x/tos/system/LedsC.nc"
result_t LedsC$Leds$greenOff(void)
#line 107
{
  {
  }
#line 108
  ;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      TOSH_SET_GREEN_LED_PIN();
      LedsC$ledsOn &= ~LedsC$GREEN_BIT;
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 97 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t IntToLedsM$Leds$greenOff(void){
#line 97
  unsigned char result;
#line 97

#line 97
  result = LedsC$Leds$greenOff();
#line 97

#line 97
  return result;
#line 97
}
#line 97
static inline   
# 136 "/home/wyong/tinyos/tinyos-1.x/tos/system/LedsC.nc"
result_t LedsC$Leds$yellowOff(void)
#line 136
{
  {
  }
#line 137
  ;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 138
    {
      TOSH_SET_YELLOW_LED_PIN();
      LedsC$ledsOn &= ~LedsC$YELLOW_BIT;
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 122 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t IntToLedsM$Leds$yellowOff(void){
#line 122
  unsigned char result;
#line 122

#line 122
  result = LedsC$Leds$yellowOff();
#line 122

#line 122
  return result;
#line 122
}
#line 122
static inline   
# 78 "/home/wyong/tinyos/tinyos-1.x/tos/system/LedsC.nc"
result_t LedsC$Leds$redOff(void)
#line 78
{
  {
  }
#line 79
  ;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 80
    {
      TOSH_SET_RED_LED_PIN();
      LedsC$ledsOn &= ~LedsC$RED_BIT;
    }
#line 83
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 72 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t IntToLedsM$Leds$redOff(void){
#line 72
  unsigned char result;
#line 72

#line 72
  result = LedsC$Leds$redOff();
#line 72

#line 72
  return result;
#line 72
}
#line 72
static inline   
# 58 "/home/wyong/tinyos/tinyos-1.x/tos/system/LedsC.nc"
result_t LedsC$Leds$init(void)
#line 58
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 59
    {
      LedsC$ledsOn = 0;
      {
      }
#line 61
      ;
      TOSH_SET_RED_LED_PIN();
      TOSH_SET_YELLOW_LED_PIN();
      TOSH_SET_GREEN_LED_PIN();
    }
#line 65
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 56 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t IntToLedsM$Leds$init(void){
#line 56
  unsigned char result;
#line 56

#line 56
  result = LedsC$Leds$init();
#line 56

#line 56
  return result;
#line 56
}
#line 56
static inline  
# 53 "/home/wyong/tinyos/tinyos-1.x/tos/lib/Counters/IntToLedsM.nc"
result_t IntToLedsM$StdControl$init(void)
{
  IntToLedsM$Leds$init();
  IntToLedsM$Leds$redOff();
  IntToLedsM$Leds$yellowOff();
  IntToLedsM$Leds$greenOff();
  return SUCCESS;
}

# 63 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t RealMain$StdControl$init(void){
#line 63
  unsigned char result;
#line 63

#line 63
  result = IntToLedsM$StdControl$init();
#line 63
  result = rcombine(result, RfmToIntUartM$StdControl$init());
#line 63

#line 63
  return result;
#line 63
}
#line 63
static inline   
# 149 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica/HPLClock.nc"
result_t HPLClock$Clock$setRate(char interval, char scale)
#line 149
{
  scale &= 0x7;
  scale |= 0x8;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 152
    {
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x37 + 0x20) &= ~(1 << 0);
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x37 + 0x20) &= ~(1 << 1);
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x30 + 0x20) |= 1 << 3;


      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x33 + 0x20) = scale;
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x32 + 0x20) = 0;
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x31 + 0x20) = interval;
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x37 + 0x20) |= 1 << 1;
    }
#line 162
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 96 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   result_t TimerM$Clock$setRate(char arg_0x86c5d58, char arg_0x86c5e98){
#line 96
  unsigned char result;
#line 96

#line 96
  result = HPLClock$Clock$setRate(arg_0x86c5d58, arg_0x86c5e98);
#line 96

#line 96
  return result;
#line 96
}
#line 96
# 128 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/hardware.h"
static __inline void TOSH_CLR_CC_PALE_PIN(void)
#line 128
{
#line 128
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x12 + 0x20) &= ~(1 << 4);
}

#line 126
static __inline void TOSH_CLR_CC_PDATA_PIN(void)
#line 126
{
#line 126
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x12 + 0x20) &= ~(1 << 7);
}

#line 127
static __inline void TOSH_CLR_CC_PCLK_PIN(void)
#line 127
{
#line 127
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x12 + 0x20) &= ~(1 << 6);
}

#line 126
static __inline void TOSH_MAKE_CC_PDATA_INPUT(void)
#line 126
{
#line 126
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x11 + 0x20) &= ~(1 << 7);
}

#line 126
static __inline int TOSH_READ_CC_PDATA_PIN(void)
#line 126
{
#line 126
  return (* (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x10 + 0x20) & (1 << 7)) != 0;
}

static inline 
# 121 "/home/wyong/tinyos/tinyos-1.x/tos/system/tos.h"
result_t rcombine4(result_t r1, result_t r2, result_t r3, 
result_t r4)
{
  return rcombine(r1, rcombine(r2, rcombine(r3, r4)));
}

# 41 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
inline static   uint8_t AMStandard$PowerManagement$adjustPower(void){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HPLPowerManagementM$PowerManagement$adjustPower();
#line 41

#line 41
  return result;
#line 41
}
#line 41
# 59 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t AMStandard$ActivityTimer$start(char arg_0x8589200, uint32_t arg_0x8589358){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(0, arg_0x8589200, arg_0x8589358);
#line 59

#line 59
  return result;
#line 59
}
#line 59
# 59 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t CC1000RadioIntM$WakeupTimer$start(char arg_0x8589200, uint32_t arg_0x8589358){
#line 59
  unsigned char result;
#line 59

#line 59
  result = TimerM$Timer$start(1, arg_0x8589200, arg_0x8589358);
#line 59

#line 59
  return result;
#line 59
}
#line 59
static inline  
# 82 "/home/wyong/tinyos/tinyos-1.x/tos/system/TimerM.nc"
result_t TimerM$StdControl$start(void)
#line 82
{
  return SUCCESS;
}

# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t CC1000RadioIntM$TimerControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = TimerM$StdControl$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 41 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
inline static   uint8_t HPLSpiM$PowerManagement$adjustPower(void){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HPLPowerManagementM$PowerManagement$adjustPower();
#line 41

#line 41
  return result;
#line 41
}
#line 41
static inline   
# 74 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLSpiM.nc"
result_t HPLSpiM$SpiByteFifo$enableIntr(void)
#line 74
{

  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0D + 0x20) = 0xC0;
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x17 + 0x20) &= ~(1 << 0);
  HPLSpiM$PowerManagement$adjustPower();
  return SUCCESS;
}

# 36 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/SpiByteFifo.nc"
inline static   result_t CC1000RadioIntM$SpiByteFifo$enableIntr(void){
#line 36
  unsigned char result;
#line 36

#line 36
  result = HPLSpiM$SpiByteFifo$enableIntr();
#line 36

#line 36
  return result;
#line 36
}
#line 36
# 88 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000Control.nc"
inline static   result_t CC1000RadioIntM$CC1000Control$RxMode(void){
#line 88
  unsigned char result;
#line 88

#line 88
  result = CC1000ControlM$CC1000Control$RxMode();
#line 88

#line 88
  return result;
#line 88
}
#line 88
static inline   
# 109 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLSpiM.nc"
result_t HPLSpiM$SpiByteFifo$rxMode(void)
#line 109
{
  TOSH_MAKE_MISO_INPUT();
  TOSH_MAKE_MOSI_INPUT();
  return SUCCESS;
}

# 40 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/SpiByteFifo.nc"
inline static   result_t CC1000RadioIntM$SpiByteFifo$rxMode(void){
#line 40
  unsigned char result;
#line 40

#line 40
  result = HPLSpiM$SpiByteFifo$rxMode();
#line 40

#line 40
  return result;
#line 40
}
#line 40
static inline  
# 434 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000ControlM.nc"
result_t CC1000ControlM$CC1000Control$BIASOn(void)
#line 434
{

  CC1000ControlM$HPLChipcon$write(0x00, (((
  1 << 5) | (1 << 4)) | (
  1 << 3)) | (
  1 << 0));

  TOSH_uwait(200);
  return SUCCESS;
}

# 109 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000Control.nc"
inline static  result_t CC1000RadioIntM$CC1000Control$BIASOn(void){
#line 109
  unsigned char result;
#line 109

#line 109
  result = CC1000ControlM$CC1000Control$BIASOn();
#line 109

#line 109
  return result;
#line 109
}
#line 109
static inline  
# 457 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000ControlM.nc"
result_t CC1000ControlM$StdControl$start(void)
#line 457
{

  CC1000ControlM$HPLChipcon$write(0x00, ((((
  1 << 5) | (1 << 4)) | (
  1 << 3)) | (1 << 1)) | (
  1 << 0));

  TOSH_uwait(2000);


  return SUCCESS;
}

# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t CC1000RadioIntM$CC1000StdControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = CC1000ControlM$StdControl$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
static inline  
# 388 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000RadioIntM.nc"
result_t CC1000RadioIntM$StdControl$start(void)
#line 388
{
  uint8_t chkRadioState;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 391
    chkRadioState = CC1000RadioIntM$RadioState;
#line 391
    __nesc_atomic_end(__nesc_atomic); }

  if (chkRadioState == CC1000RadioIntM$DISABLED_STATE) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 394
        {
          CC1000RadioIntM$rxbufptr->length = 0;
          CC1000RadioIntM$RadioState = CC1000RadioIntM$IDLE_STATE;
          CC1000RadioIntM$bTxPending = CC1000RadioIntM$bTxBusy = FALSE;
          CC1000RadioIntM$sMacDelay = -1;
          CC1000RadioIntM$preamblelen = (({
#line 399
            unsigned short __addr16 = (unsigned short )(unsigned short )&CC1K_LPL_PreambleLength[CC1000RadioIntM$lplpowertx * 2];
#line 399
            unsigned char __result;

#line 399
             __asm ("lpm %0, Z" : "=r"(__result) : "z"(__addr16));__result;
          }
          )
#line 399
           << 8) | 
          ({
#line 400
            unsigned short __addr16 = (unsigned short )(unsigned short )&CC1K_LPL_PreambleLength[CC1000RadioIntM$lplpowertx * 2 + 1];
#line 400
            unsigned char __result;

#line 400
             __asm ("lpm %0, Z" : "=r"(__result) : "z"(__addr16));__result;
          }
          );
        }
#line 403
        __nesc_atomic_end(__nesc_atomic); }
#line 402
      if (CC1000RadioIntM$lplpower == 0) {

          CC1000RadioIntM$CC1000StdControl$start();
          CC1000RadioIntM$CC1000Control$BIASOn();
          CC1000RadioIntM$SpiByteFifo$rxMode();
          CC1000RadioIntM$CC1000Control$RxMode();
          CC1000RadioIntM$SpiByteFifo$enableIntr();
        }
      else {
          uint16_t sleeptime = (({
#line 411
            unsigned short __addr16 = (unsigned short )(unsigned short )&CC1K_LPL_SleepTime[CC1000RadioIntM$lplpower * 2];
#line 411
            unsigned char __result;

#line 411
             __asm ("lpm %0, Z" : "=r"(__result) : "z"(__addr16));__result;
          }
          )
#line 411
           << 8) | 
          ({
#line 412
            unsigned short __addr16 = (unsigned short )(unsigned short )&CC1K_LPL_SleepTime[CC1000RadioIntM$lplpower * 2 + 1];
#line 412
            unsigned char __result;

#line 412
             __asm ("lpm %0, Z" : "=r"(__result) : "z"(__addr16));__result;
          }
          );

#line 413
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 413
            CC1000RadioIntM$RadioState = CC1000RadioIntM$POWER_DOWN_STATE;
#line 413
            __nesc_atomic_end(__nesc_atomic); }
          CC1000RadioIntM$TimerControl$start();
          CC1000RadioIntM$WakeupTimer$start(TIMER_ONE_SHOT, sleeptime);
        }
    }
  return SUCCESS;
}

# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$RadioControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = CC1000RadioIntM$StdControl$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
static inline   
# 60 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLUART0M.nc"
result_t HPLUART0M$UART$init(void)
#line 60
{





  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)0x90 = 0;
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x09 + 0x20) = 15;


  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0B + 0x20) = 1 << 1;


  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)0x95 = (1 << 2) | (1 << 1);


  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0A + 0x20) = (((1 << 7) | (1 << 6)) | (1 << 4)) | (1 << 3);


  return SUCCESS;
}

# 62 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLUART.nc"
inline static   result_t UARTM$HPLUART$init(void){
#line 62
  unsigned char result;
#line 62

#line 62
  result = HPLUART0M$UART$init();
#line 62

#line 62
  return result;
#line 62
}
#line 62
static inline  
# 68 "/home/wyong/tinyos/tinyos-1.x/tos/system/UARTM.nc"
result_t UARTM$Control$start(void)
#line 68
{
  return UARTM$HPLUART$init();
}

# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t FramerM$ByteControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = UARTM$Control$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
static inline  
# 296 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
result_t FramerM$StdControl$start(void)
#line 296
{
  FramerM$HDLCInitialize();
  return FramerM$ByteControl$start();
}

# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t AMStandard$UARTControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = FramerM$StdControl$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
inline static  result_t AMStandard$TimerControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = TimerM$StdControl$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
static inline  
# 103 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
bool AMStandard$Control$start(void)
#line 103
{
  result_t ok0 = AMStandard$TimerControl$start();
  result_t ok1 = AMStandard$UARTControl$start();
  result_t ok2 = AMStandard$RadioControl$start();
  result_t ok3 = AMStandard$ActivityTimer$start(TIMER_REPEAT, 1000);



  AMStandard$state = FALSE;

  AMStandard$PowerManagement$adjustPower();

  return rcombine4(ok0, ok1, ok2, ok3);
}

# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t RfmToIntUartM$CommControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = AMStandard$Control$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
static inline  
# 66 "/home/wyong/tinyos/tinyos-1.x/tos/lib/Counters/RfmToIntUartM.nc"
result_t RfmToIntUartM$StdControl$start(void)
#line 66
{
  return RfmToIntUartM$CommControl$start();
}

static inline  
# 62 "/home/wyong/tinyos/tinyos-1.x/tos/lib/Counters/IntToLedsM.nc"
result_t IntToLedsM$StdControl$start(void)
#line 62
{
  return SUCCESS;
}

# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t RealMain$StdControl$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = IntToLedsM$StdControl$start();
#line 70
  result = rcombine(result, RfmToIntUartM$StdControl$start());
#line 70

#line 70
  return result;
#line 70
}
#line 70
static inline 
# 63 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLPowerManagementM.nc"
uint8_t HPLPowerManagementM$getPowerLevel(void)
#line 63
{
  uint8_t diff;

#line 65
  if (* (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x37 + 0x20) & ~((1 << 1) | (1 << 0))) {

      return HPLPowerManagementM$IDLE;
    }
  else {
#line 68
    if (* (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0D + 0x20) & (1 << 7)) {
        return HPLPowerManagementM$IDLE;
      }
    else {
      if (* (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x06 + 0x20) & (1 << 7)) {
          return HPLPowerManagementM$ADC_NR;
        }
      else {
#line 74
        if (* (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {
            diff = * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x31 + 0x20) - * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x32 + 0x20);
            if (diff < 16) {
              return HPLPowerManagementM$EXT_STANDBY;
              }
#line 78
            return HPLPowerManagementM$POWER_SAVE;
          }
        else 
#line 79
          {
            return HPLPowerManagementM$POWER_DOWN;
          }
        }
      }
    }
}

static inline  
#line 84
void HPLPowerManagementM$doAdjustment(void)
#line 84
{
  uint8_t foo;
#line 85
  uint8_t mcu;

#line 86
  foo = HPLPowerManagementM$getPowerLevel();
  mcu = * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x35 + 0x20);
  mcu &= 0xe3;
  if (foo == HPLPowerManagementM$EXT_STANDBY || foo == HPLPowerManagementM$POWER_SAVE) {
      mcu |= HPLPowerManagementM$IDLE;
      while ((* (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x30 + 0x20) & 0x7) != 0) {
           __asm volatile ("nop");}

      mcu &= 0xe3;
    }
  mcu |= foo;
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x35 + 0x20) = mcu;
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x35 + 0x20) |= 1 << 5;
}

static 
# 165 "/home/wyong/tinyos/tinyos-1.x/tos/platform/avrmote/avrhardware.h"
__inline void __nesc_enable_interrupt(void)
#line 165
{
   __asm volatile ("sei");}

static inline 
#line 135
void TOSH_wait(void)
{
   __asm volatile ("nop");
   __asm volatile ("nop");}

static inline 
void TOSH_sleep(void)
{

  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x35 + 0x20) |= 1 << 5;
   __asm volatile ("sleep");}

#line 160
__inline void  __nesc_atomic_end(__nesc_atomic_t oldSreg)
{
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x3F + 0x20) = oldSreg;
}

#line 153
__inline __nesc_atomic_t  __nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x3F + 0x20);

#line 156
   __asm volatile ("cli");
  return result;
}

static inline 
# 139 "/home/wyong/tinyos/tinyos-1.x/tos/system/sched.c"
bool TOSH_run_next_task(void)
#line 139
{
  __nesc_atomic_t fInterruptFlags;
  uint8_t old_full;
  void (*func)(void );

  if (TOSH_sched_full == TOSH_sched_free) {

      return 0;
    }
  else {

      fInterruptFlags = __nesc_atomic_start();
      old_full = TOSH_sched_full;
      TOSH_sched_full++;
      TOSH_sched_full &= TOSH_TASK_BITMASK;
      func = TOSH_queue[(int )old_full].tp;
      TOSH_queue[(int )old_full].tp = 0;
      __nesc_atomic_end(fInterruptFlags);
      func();
      return 1;
    }
}

static inline void TOSH_run_task(void)
#line 162
{
  while (TOSH_run_next_task()) 
    ;
  TOSH_sleep();
  TOSH_wait();
}

static inline 
# 132 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
void AMStandard$dbgPacket(TOS_MsgPtr data)
#line 132
{
  uint8_t i;

  for (i = 0; i < sizeof(TOS_Msg ); i++) 
    {
      {
      }
#line 137
      ;
    }
  {
  }
#line 139
  ;
}

static inline  
# 140 "/home/wyong/tinyos/tinyos-1.x/tos/system/TimerM.nc"
result_t TimerM$Timer$stop(uint8_t id)
#line 140
{

  if (id >= NUM_TIMERS) {
#line 142
    return FAIL;
    }
#line 143
  if (TimerM$mState & (0x1 << id)) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 144
        TimerM$mState &= ~(0x1 << id);
#line 144
        __nesc_atomic_end(__nesc_atomic); }
      if (!TimerM$mState) {
          TimerM$setIntervalFlag = 1;
        }
      return SUCCESS;
    }
  return FAIL;
}

# 68 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t CC1000RadioIntM$WakeupTimer$stop(void){
#line 68
  unsigned char result;
#line 68

#line 68
  result = TimerM$Timer$stop(1);
#line 68

#line 68
  return result;
#line 68
}
#line 68
# 63 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Random.nc"
inline static   uint16_t CC1000RadioIntM$Random$rand(void){
#line 63
  unsigned int result;
#line 63

#line 63
  result = RandomLFSR$Random$rand();
#line 63

#line 63
  return result;
#line 63
}
#line 63
static inline  
# 421 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000RadioIntM.nc"
result_t CC1000RadioIntM$Send$send(TOS_MsgPtr pMsg)
#line 421
{
  result_t Result = SUCCESS;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 424
    {
      if (CC1000RadioIntM$bTxBusy) {
          Result = FAIL;
        }
      else {
          CC1000RadioIntM$bTxBusy = TRUE;
          CC1000RadioIntM$txbufptr = pMsg;
          CC1000RadioIntM$txlength = pMsg->length + (MSG_DATA_SIZE - DATA_LENGTH - 2);

          CC1000RadioIntM$sMacDelay = MSG_DATA_SIZE + (CC1000RadioIntM$Random$rand() & 0x7F);
          CC1000RadioIntM$bTxPending = TRUE;
        }
    }
#line 436
    __nesc_atomic_end(__nesc_atomic); }

  if (Result) {
      uint8_t tmpState;

#line 440
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 440
        tmpState = CC1000RadioIntM$RadioState;
#line 440
        __nesc_atomic_end(__nesc_atomic); }

      if (tmpState == CC1000RadioIntM$POWER_DOWN_STATE) {

          CC1000RadioIntM$WakeupTimer$stop();
          CC1000RadioIntM$CC1000StdControl$start();
          CC1000RadioIntM$CC1000Control$BIASOn();
          CC1000RadioIntM$CC1000Control$RxMode();
          CC1000RadioIntM$SpiByteFifo$rxMode();
          CC1000RadioIntM$SpiByteFifo$enableIntr();
          CC1000RadioIntM$WakeupTimer$start(TIMER_ONE_SHOT, 16 * 2);
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 451
            CC1000RadioIntM$RadioState = CC1000RadioIntM$IDLE_STATE;
#line 451
            __nesc_atomic_end(__nesc_atomic); }
        }
    }

  return Result;
}

# 58 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t AMStandard$RadioSend$send(TOS_MsgPtr arg_0x8575230){
#line 58
  unsigned char result;
#line 58

#line 58
  result = CC1000RadioIntM$Send$send(arg_0x8575230);
#line 58

#line 58
  return result;
#line 58
}
#line 58
static inline  
# 306 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
result_t FramerM$BareSendMsg$send(TOS_MsgPtr pMsg)
#line 306
{
  result_t Result = SUCCESS;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 309
    {
      if (!(FramerM$gFlags & FramerM$FLAGS_DATAPEND)) {
          FramerM$gFlags |= FramerM$FLAGS_DATAPEND;
          FramerM$gpTxMsg = pMsg;
        }
      else 

        {
          Result = FAIL;
        }
    }
#line 319
    __nesc_atomic_end(__nesc_atomic); }

  if (Result == SUCCESS) {
      Result = FramerM$StartTx();
    }

  return Result;
}

# 58 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t AMStandard$UARTSend$send(TOS_MsgPtr arg_0x8575230){
#line 58
  unsigned char result;
#line 58

#line 58
  result = FramerM$BareSendMsg$send(arg_0x8575230);
#line 58

#line 58
  return result;
#line 58
}
#line 58
static inline  
# 165 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
void AMStandard$sendTask(void)
#line 165
{
  result_t ok;
  TOS_MsgPtr buf;

#line 168
  buf = AMStandard$buffer;
  if (buf->addr == TOS_UART_ADDR) {
    ok = AMStandard$UARTSend$send(buf);
    }
  else {
#line 172
    ok = AMStandard$RadioSend$send(buf);
    }
  if (ok == FAIL) {
    AMStandard$reportSendDone(AMStandard$buffer, FAIL);
    }
}

static inline  result_t AMStandard$SendMsg$send(uint8_t id, uint16_t addr, uint8_t length, TOS_MsgPtr data)
#line 179
{
  if (!AMStandard$state) {
      AMStandard$state = TRUE;
      if (length > DATA_LENGTH) {
          {
          }
#line 183
          ;
          AMStandard$state = FALSE;
          return FAIL;
        }
      if (!TOS_post(AMStandard$sendTask)) {
          {
          }
#line 188
          ;
          AMStandard$state = FALSE;
          return FAIL;
        }
      else {
          AMStandard$buffer = data;
          data->length = length;
          data->addr = addr;
          data->type = id;
          AMStandard$buffer->group = TOS_AM_GROUP;
          {
          }
#line 198
          ;
          AMStandard$dbgPacket(data);
        }
      return SUCCESS;
    }

  return FAIL;
}

# 48 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t RfmToIntUartM$Send$send(uint16_t arg_0x855c010, uint8_t arg_0x855c158, TOS_MsgPtr arg_0x855c2a8){
#line 48
  unsigned char result;
#line 48

#line 48
  result = AMStandard$SendMsg$send(AM_INTMSG, arg_0x855c010, arg_0x855c158, arg_0x855c2a8);
#line 48

#line 48
  return result;
#line 48
}
#line 48
# 72 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t RfmToIntUartM$Leds$redOff(void){
#line 72
  unsigned char result;
#line 72

#line 72
  result = LedsC$Leds$redOff();
#line 72

#line 72
  return result;
#line 72
}
#line 72
# 116 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/hardware.h"
static __inline void TOSH_CLR_RED_LED_PIN(void)
#line 116
{
#line 116
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1B + 0x20) &= ~(1 << 2);
}

static inline   
# 69 "/home/wyong/tinyos/tinyos-1.x/tos/system/LedsC.nc"
result_t LedsC$Leds$redOn(void)
#line 69
{
  {
  }
#line 70
  ;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 71
    {
      TOSH_CLR_RED_LED_PIN();
      LedsC$ledsOn |= LedsC$RED_BIT;
    }
#line 74
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 64 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t RfmToIntUartM$Leds$redOn(void){
#line 64
  unsigned char result;
#line 64

#line 64
  result = LedsC$Leds$redOn();
#line 64

#line 64
  return result;
#line 64
}
#line 64
#line 97
inline static   result_t RfmToIntUartM$Leds$greenOff(void){
#line 97
  unsigned char result;
#line 97

#line 97
  result = LedsC$Leds$greenOff();
#line 97

#line 97
  return result;
#line 97
}
#line 97
# 117 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/hardware.h"
static __inline void TOSH_CLR_GREEN_LED_PIN(void)
#line 117
{
#line 117
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1B + 0x20) &= ~(1 << 1);
}

static inline   
# 98 "/home/wyong/tinyos/tinyos-1.x/tos/system/LedsC.nc"
result_t LedsC$Leds$greenOn(void)
#line 98
{
  {
  }
#line 99
  ;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 100
    {
      TOSH_CLR_GREEN_LED_PIN();
      LedsC$ledsOn |= LedsC$GREEN_BIT;
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 89 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t RfmToIntUartM$Leds$greenOn(void){
#line 89
  unsigned char result;
#line 89

#line 89
  result = LedsC$Leds$greenOn();
#line 89

#line 89
  return result;
#line 89
}
#line 89
#line 122
inline static   result_t RfmToIntUartM$Leds$yellowOff(void){
#line 122
  unsigned char result;
#line 122

#line 122
  result = LedsC$Leds$yellowOff();
#line 122

#line 122
  return result;
#line 122
}
#line 122
# 118 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/hardware.h"
static __inline void TOSH_CLR_YELLOW_LED_PIN(void)
#line 118
{
#line 118
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x1B + 0x20) &= ~(1 << 0);
}

static inline   
# 127 "/home/wyong/tinyos/tinyos-1.x/tos/system/LedsC.nc"
result_t LedsC$Leds$yellowOn(void)
#line 127
{
  {
  }
#line 128
  ;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      TOSH_CLR_YELLOW_LED_PIN();
      LedsC$ledsOn |= LedsC$YELLOW_BIT;
    }
#line 132
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 114 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t RfmToIntUartM$Leds$yellowOn(void){
#line 114
  unsigned char result;
#line 114

#line 114
  result = LedsC$Leds$yellowOn();
#line 114

#line 114
  return result;
#line 114
}
#line 114
# 151 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/hardware.h"
static __inline void TOSH_CLR_PW2_PIN(void)
#line 151
{
#line 151
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x15 + 0x20) &= ~(1 << 2);
}

# 75 "/home/wyong/tinyos/tinyos-1.x/tos/sensorboards/micasb/sensorboard.h"
static __inline void TOSH_CLR_SOUNDER_CTL_PIN(void)
#line 75
{
#line 75
  TOSH_CLR_PW2_PIN();
}

static inline  
# 63 "/home/wyong/tinyos/tinyos-1.x/tos/sensorboards/micasb/SounderM.nc"
result_t SounderM$StdControl$stop(void)
#line 63
{
  TOSH_CLR_SOUNDER_CTL_PIN();
  {
  }
#line 65
  ;
  return SUCCESS;
}

# 78 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t RfmToIntUartM$Sounder$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = SounderM$StdControl$stop();
#line 78

#line 78
  return result;
#line 78
}
#line 78
# 151 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/hardware.h"
static __inline void TOSH_SET_PW2_PIN(void)
#line 151
{
#line 151
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x15 + 0x20) |= 1 << 2;
}

# 75 "/home/wyong/tinyos/tinyos-1.x/tos/sensorboards/micasb/sensorboard.h"
static __inline void TOSH_SET_SOUNDER_CTL_PIN(void)
#line 75
{
#line 75
  TOSH_SET_PW2_PIN();
}

static inline  
# 57 "/home/wyong/tinyos/tinyos-1.x/tos/sensorboards/micasb/SounderM.nc"
result_t SounderM$StdControl$start(void)
#line 57
{
  TOSH_SET_SOUNDER_CTL_PIN();
  {
  }
#line 59
  ;
  return SUCCESS;
}

# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t RfmToIntUartM$Sounder$start(void){
#line 70
  unsigned char result;
#line 70

#line 70
  result = SounderM$StdControl$start();
#line 70

#line 70
  return result;
#line 70
}
#line 70
static inline 
# 74 "/home/wyong/tinyos/tinyos-1.x/tos/lib/Counters/RfmToIntUartM.nc"
result_t RfmToIntUartM$display(uint16_t value)
{
  if (value != 0) {
#line 76
    RfmToIntUartM$Sounder$start();
    }
  else {
#line 77
    RfmToIntUartM$Sounder$stop();
    }
  if (value & 1) 
    {
      RfmToIntUartM$Leds$yellowOn();
    }
  else {
#line 83
    RfmToIntUartM$Leds$yellowOff();
    }
#line 84
  if (value & 2) 
    {
      RfmToIntUartM$Leds$greenOn();
    }
  else {
#line 88
    RfmToIntUartM$Leds$greenOff();
    }
#line 89
  if (value & 4) {
#line 89
    RfmToIntUartM$Leds$redOn();
    }
  else {
#line 90
    RfmToIntUartM$Leds$redOff();
    }
#line 91
  return SUCCESS;
}

static inline  TOS_MsgPtr RfmToIntUartM$ReceiveIntMsg$receive(TOS_MsgPtr m)
#line 94
{
  uint16_t src_id;
  uint16_t value;
  IntMsg *message = (IntMsg *)m->data;

  src_id = message->src;
  value = message->val;

  message = (IntMsg *)RfmToIntUartM$data.data;
  message->src = src_id;
  message->val = value;
  message->strength = m->strength;

  RfmToIntUartM$display(7 - value);

  if (!RfmToIntUartM$Send$send(TOS_UART_ADDR, sizeof(IntMsg ), &RfmToIntUartM$data)) {
    return FAIL;
    }
  return m;
}

static inline   
# 242 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
TOS_MsgPtr AMStandard$ReceiveMsg$default$receive(uint8_t id, TOS_MsgPtr msg)
#line 242
{
  return msg;
}

# 75 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr AMStandard$ReceiveMsg$receive(uint8_t arg_0x853f630, TOS_MsgPtr arg_0x8554980){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  switch (arg_0x853f630) {
#line 75
    case AM_INTMSG:
#line 75
      result = RfmToIntUartM$ReceiveIntMsg$receive(arg_0x8554980);
#line 75
      break;
#line 75
    default:
#line 75
      result = AMStandard$ReceiveMsg$default$receive(arg_0x853f630, arg_0x8554980);
#line 75
    }
#line 75

#line 75
  return result;
#line 75
}
#line 75
static inline   
# 105 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLUART0M.nc"
result_t HPLUART0M$UART$put(uint8_t data)
#line 105
{
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0C + 0x20) = data;
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0B + 0x20) |= 1 << 6;

  return SUCCESS;
}

# 80 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLUART.nc"
inline static   result_t UARTM$HPLUART$put(uint8_t arg_0x8770158){
#line 80
  unsigned char result;
#line 80

#line 80
  result = HPLUART0M$UART$put(arg_0x8770158);
#line 80

#line 80
  return result;
#line 80
}
#line 80
static inline  
# 207 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$UARTSend$sendDone(TOS_MsgPtr msg, result_t success)
#line 207
{
  return AMStandard$reportSendDone(msg, success);
}

# 67 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t FramerM$BareSendMsg$sendDone(TOS_MsgPtr arg_0x8575748, result_t arg_0x8575898){
#line 67
  unsigned char result;
#line 67

#line 67
  result = AMStandard$UARTSend$sendDone(arg_0x8575748, arg_0x8575898);
#line 67

#line 67
  return result;
#line 67
}
#line 67
static inline  
# 115 "/home/wyong/tinyos/tinyos-1.x/tos/lib/Counters/RfmToIntUartM.nc"
result_t RfmToIntUartM$IntOutput$outputComplete(result_t success)
#line 115
{
  return SUCCESS;
}

static inline  result_t RfmToIntUartM$Send$sendDone(TOS_MsgPtr msg, result_t success)
{
  RfmToIntUartM$IntOutput$outputComplete(success);

  return SUCCESS;
}

static inline   
# 157 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$SendMsg$default$sendDone(uint8_t id, TOS_MsgPtr msg, result_t success)
#line 157
{
  return SUCCESS;
}

# 49 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/SendMsg.nc"
inline static  result_t AMStandard$SendMsg$sendDone(uint8_t arg_0x853f078, TOS_MsgPtr arg_0x855c6c8, result_t arg_0x855c818){
#line 49
  unsigned char result;
#line 49

#line 49
  switch (arg_0x853f078) {
#line 49
    case AM_INTMSG:
#line 49
      result = RfmToIntUartM$Send$sendDone(arg_0x855c6c8, arg_0x855c818);
#line 49
      break;
#line 49
    default:
#line 49
      result = AMStandard$SendMsg$default$sendDone(arg_0x853f078, arg_0x855c6c8, arg_0x855c818);
#line 49
    }
#line 49

#line 49
  return result;
#line 49
}
#line 49
static inline   
# 160 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$default$sendDone(void)
#line 160
{
  return SUCCESS;
}

#line 65
inline static  result_t AMStandard$sendDone(void){
#line 65
  unsigned char result;
#line 65

#line 65
  result = AMStandard$default$sendDone();
#line 65

#line 65
  return result;
#line 65
}
#line 65
static inline   
# 137 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLADCM.nc"
result_t HPLADCM$ADC$sampleStop(void)
#line 137
{

  return SUCCESS;
}

# 91 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
inline static   result_t ADCM$HPLADC$sampleStop(void){
#line 91
  unsigned char result;
#line 91

#line 91
  result = HPLADCM$ADC$sampleStop();
#line 91

#line 91
  return result;
#line 91
}
#line 91
static inline   
# 770 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000RadioIntM.nc"
result_t CC1000RadioIntM$RSSIADC$dataReady(uint16_t data)
#line 770
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 772
    {
      CC1000RadioIntM$usRSSIVal = data;
      CC1000RadioIntM$bRSSIValid = TRUE;
    }
#line 775
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

static inline    
# 91 "/home/wyong/tinyos/tinyos-1.x/tos/system/ADCM.nc"
result_t ADCM$ADC$default$dataReady(uint8_t port, uint16_t data)
#line 91
{
  return FAIL;
}

# 70 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ADC.nc"
inline static   result_t ADCM$ADC$dataReady(uint8_t arg_0x867f2e0, uint16_t arg_0x85d61c8){
#line 70
  unsigned char result;
#line 70

#line 70
  switch (arg_0x867f2e0) {
#line 70
    case TOS_ADC_CC_RSSI_PORT:
#line 70
      result = CC1000RadioIntM$RSSIADC$dataReady(arg_0x85d61c8);
#line 70
      break;
#line 70
    default:
#line 70
      result = ADCM$ADC$default$dataReady(arg_0x867f2e0, arg_0x85d61c8);
#line 70
    }
#line 70

#line 70
  return result;
#line 70
}
#line 70
# 77 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
inline static   result_t ADCM$HPLADC$samplePort(uint8_t arg_0x8693778){
#line 77
  unsigned char result;
#line 77

#line 77
  result = HPLADCM$ADC$samplePort(arg_0x8693778);
#line 77

#line 77
  return result;
#line 77
}
#line 77
static inline   
# 95 "/home/wyong/tinyos/tinyos-1.x/tos/system/ADCM.nc"
result_t ADCM$HPLADC$dataReady(uint16_t data)
#line 95
{
  uint16_t doneValue = data;
  uint8_t donePort;
  result_t Result;


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 101
    {
      donePort = ADCM$ReqPort;

      if (((1 << donePort) & ADCM$ContReqMask) == 0) {
          ADCM$HPLADC$sampleStop();
          ADCM$ReqVector &= ~(1 << donePort);
        }

      if (ADCM$ReqVector) {
          do {
              ADCM$ReqPort++;
              ADCM$ReqPort = ADCM$ReqPort == TOSH_ADC_PORTMAPSIZE ? 0 : ADCM$ReqPort;
            }
          while (((
#line 113
          1 << ADCM$ReqPort) & ADCM$ReqVector) == 0);
          ADCM$HPLADC$samplePort(ADCM$ReqPort);
        }
    }
#line 116
    __nesc_atomic_end(__nesc_atomic); }


  {
  }
#line 119
  ;
  Result = ADCM$ADC$dataReady(donePort, doneValue);

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 122
    {
      if (Result == FAIL && ADCM$ContReqMask & (1 << donePort)) {
          ADCM$HPLADC$sampleStop();
          ADCM$ContReqMask &= ~(1 << donePort);
        }
    }
#line 127
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

# 99 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLADC.nc"
inline static   result_t HPLADCM$ADC$dataReady(uint16_t arg_0x8690310){
#line 99
  unsigned char result;
#line 99

#line 99
  result = ADCM$HPLADC$dataReady(arg_0x8690310);
#line 99

#line 99
  return result;
#line 99
}
#line 99
# 42 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/SpiByteFifo.nc"
inline static   result_t HPLSpiM$SpiByteFifo$dataReady(uint8_t arg_0x85d4ee8){
#line 42
  unsigned char result;
#line 42

#line 42
  result = CC1000RadioIntM$SpiByteFifo$dataReady(arg_0x85d4ee8);
#line 42

#line 42
  return result;
#line 42
}
#line 42
# 53 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLSpiM.nc"
void __attribute((signal))   __vector_17(void)
#line 53
{
  register uint8_t temp = * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0F + 0x20);

#line 55
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0F + 0x20) = HPLSpiM$OutgoingByte;
  HPLSpiM$SpiByteFifo$dataReady(temp);
}

static inline   result_t HPLSpiM$SpiByteFifo$writeByte(uint8_t data)
#line 59
{


  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 62
    HPLSpiM$OutgoingByte = data;
#line 62
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 33 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/SpiByteFifo.nc"
inline static   result_t CC1000RadioIntM$SpiByteFifo$writeByte(uint8_t arg_0x85d76f0){
#line 33
  unsigned char result;
#line 33

#line 33
  result = HPLSpiM$SpiByteFifo$writeByte(arg_0x85d76f0);
#line 33

#line 33
  return result;
#line 33
}
#line 33
static inline    
# 781 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000RadioIntM.nc"
void CC1000RadioIntM$RadioSendCoordinator$default$startSymbol(void)
#line 781
{
}

# 45 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
inline static   void CC1000RadioIntM$RadioSendCoordinator$startSymbol(void){
#line 45
  CC1000RadioIntM$RadioSendCoordinator$default$startSymbol();
#line 45
}
#line 45
static inline    
# 782 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000RadioIntM.nc"
void CC1000RadioIntM$RadioSendCoordinator$default$byte(TOS_MsgPtr msg, uint8_t byteCount)
#line 782
{
}

# 48 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
inline static   void CC1000RadioIntM$RadioSendCoordinator$byte(TOS_MsgPtr arg_0x85c2878, uint8_t arg_0x85c29c8){
#line 48
  CC1000RadioIntM$RadioSendCoordinator$default$byte(arg_0x85c2878, arg_0x85c29c8);
#line 48
}
#line 48
static inline  
# 210 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$RadioSend$sendDone(TOS_MsgPtr msg, result_t success)
#line 210
{
  return AMStandard$reportSendDone(msg, success);
}

# 67 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/BareSendMsg.nc"
inline static  result_t CC1000RadioIntM$Send$sendDone(TOS_MsgPtr arg_0x8575748, result_t arg_0x8575898){
#line 67
  unsigned char result;
#line 67

#line 67
  result = AMStandard$RadioSend$sendDone(arg_0x8575748, arg_0x8575898);
#line 67

#line 67
  return result;
#line 67
}
#line 67
static inline  
# 174 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000RadioIntM.nc"
void CC1000RadioIntM$PacketSent(void)
#line 174
{
  TOS_MsgPtr pBuf;

#line 176
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 176
    {
      CC1000RadioIntM$txbufptr->time = 0;
      pBuf = CC1000RadioIntM$txbufptr;
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
  CC1000RadioIntM$Send$sendDone((TOS_MsgPtr )pBuf, SUCCESS);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 181
    CC1000RadioIntM$bTxBusy = FALSE;
#line 181
    __nesc_atomic_end(__nesc_atomic); }
}

static 
# 132 "/home/wyong/tinyos/tinyos-1.x/tos/system/ADCM.nc"
__inline result_t ADCM$startGet(uint8_t newState, uint8_t port)
#line 132
{
  uint16_t PortMask;
#line 133
  uint16_t oldReqVector;
  result_t Result = SUCCESS;

  if (port > TOSH_ADC_PORTMAPSIZE) {
      return FAIL;
    }

  PortMask = 1 << port;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 142
    {
      if ((PortMask & ADCM$ReqVector) != 0) {

          Result = FAIL;
        }
      else {
          oldReqVector = ADCM$ReqVector;
          ADCM$ReqVector |= PortMask;
          if (newState == ADCM$CONTINUOUS_CONVERSION) {
              ADCM$ContReqMask |= PortMask;
            }
          if (oldReqVector == 0) {

              ADCM$ReqPort = port;
              Result = ADCM$HPLADC$samplePort(port);
            }
        }
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }


  return Result;
}

static inline   result_t ADCM$ADC$getData(uint8_t port)
#line 165
{
  return ADCM$startGet(ADCM$SINGLE_CONVERSION, port);
}

# 52 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ADC.nc"
inline static   result_t CC1000RadioIntM$RSSIADC$getData(void){
#line 52
  unsigned char result;
#line 52

#line 52
  result = ADCM$ADC$getData(TOS_ADC_CC_RSSI_PORT);
#line 52

#line 52
  return result;
#line 52
}
#line 52
static inline   
# 399 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000ControlM.nc"
result_t CC1000ControlM$CC1000Control$TxMode(void)
#line 399
{

  CC1000ControlM$HPLChipcon$write(0x00, (((
  1 << 7) | (1 << 6)) | (1 << 5)) | (
  1 << 0));

  CC1000ControlM$HPLChipcon$write(0x09, CC1000ControlM$gCurrentParameters[29]);
  TOSH_uwait(250);
  CC1000ControlM$HPLChipcon$write(0x0B, CC1000ControlM$gCurrentParameters[0xb]);
  TOSH_uwait(20);
  return SUCCESS;
}

# 80 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000Control.nc"
inline static   result_t CC1000RadioIntM$CC1000Control$TxMode(void){
#line 80
  unsigned char result;
#line 80

#line 80
  result = CC1000ControlM$CC1000Control$TxMode();
#line 80

#line 80
  return result;
#line 80
}
#line 80
# 143 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/hardware.h"
static __inline void TOSH_MAKE_MOSI_OUTPUT(void)
#line 143
{
#line 143
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x17 + 0x20) |= 1 << 2;
}

#line 144
static __inline void TOSH_MAKE_MISO_OUTPUT(void)
#line 144
{
#line 144
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x17 + 0x20) |= 1 << 3;
}

static inline   
# 103 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLSpiM.nc"
result_t HPLSpiM$SpiByteFifo$txMode(void)
#line 103
{
  TOSH_MAKE_MISO_OUTPUT();
  TOSH_MAKE_MOSI_OUTPUT();
  return SUCCESS;
}

# 39 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/SpiByteFifo.nc"
inline static   result_t CC1000RadioIntM$SpiByteFifo$txMode(void){
#line 39
  unsigned char result;
#line 39

#line 39
  result = HPLSpiM$SpiByteFifo$txMode();
#line 39

#line 39
  return result;
#line 39
}
#line 39
static inline   
# 87 "/home/wyong/tinyos/tinyos-1.x/tos/system/LedsC.nc"
result_t LedsC$Leds$redToggle(void)
#line 87
{
  result_t rval;

#line 89
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 89
    {
      if (LedsC$ledsOn & LedsC$RED_BIT) {
        rval = LedsC$Leds$redOff();
        }
      else {
#line 93
        rval = LedsC$Leds$redOn();
        }
    }
#line 95
    __nesc_atomic_end(__nesc_atomic); }
#line 95
  return rval;
}

# 81 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Leds.nc"
inline static   result_t CC1000RadioIntM$Leds$redToggle(void){
#line 81
  unsigned char result;
#line 81

#line 81
  result = LedsC$Leds$redToggle();
#line 81

#line 81
  return result;
#line 81
}
#line 81
static inline    
# 783 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000RadioIntM.nc"
void CC1000RadioIntM$RadioReceiveCoordinator$default$startSymbol(void)
#line 783
{
}

# 45 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
inline static   void CC1000RadioIntM$RadioReceiveCoordinator$startSymbol(void){
#line 45
  CC1000RadioIntM$RadioReceiveCoordinator$default$startSymbol();
#line 45
}
#line 45
static inline    
# 784 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000RadioIntM.nc"
void CC1000RadioIntM$RadioReceiveCoordinator$default$byte(TOS_MsgPtr msg, uint8_t byteCount)
#line 784
{
}

# 48 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/RadioCoordinator.nc"
inline static   void CC1000RadioIntM$RadioReceiveCoordinator$byte(TOS_MsgPtr arg_0x85c2878, uint8_t arg_0x85c29c8){
#line 48
  CC1000RadioIntM$RadioReceiveCoordinator$default$byte(arg_0x85c2878, arg_0x85c29c8);
#line 48
}
#line 48
static inline  
# 252 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
TOS_MsgPtr AMStandard$RadioReceive$receive(TOS_MsgPtr packet)
#line 252
{
  return received(packet);
}

# 75 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr CC1000RadioIntM$Receive$receive(TOS_MsgPtr arg_0x8554980){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = AMStandard$RadioReceive$receive(arg_0x8554980);
#line 75

#line 75
  return result;
#line 75
}
#line 75
static inline  
# 155 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000RadioIntM.nc"
void CC1000RadioIntM$PacketRcvd(void)
#line 155
{
  TOS_MsgPtr pBuf;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 158
    {
      CC1000RadioIntM$rxbufptr->time = 0;
      pBuf = CC1000RadioIntM$rxbufptr;

      CC1000RadioIntM$usSquelchVal = (5 * CC1000RadioIntM$rxbufptr->strength + 3 * CC1000RadioIntM$usSquelchVal) >> 3;
    }
#line 163
    __nesc_atomic_end(__nesc_atomic); }
  pBuf = CC1000RadioIntM$Receive$receive((TOS_MsgPtr )pBuf);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 165
    {
      if (pBuf) {
        CC1000RadioIntM$rxbufptr = pBuf;
        }
#line 168
      CC1000RadioIntM$rxbufptr->length = 0;
    }
#line 169
    __nesc_atomic_end(__nesc_atomic); }

  CC1000RadioIntM$SpiByteFifo$enableIntr();
}

# 41 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/PowerManagement.nc"
inline static   uint8_t TimerM$PowerManagement$adjustPower(void){
#line 41
  unsigned char result;
#line 41

#line 41
  result = HPLPowerManagementM$PowerManagement$adjustPower();
#line 41

#line 41
  return result;
#line 41
}
#line 41
static inline   
# 87 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica/HPLClock.nc"
void HPLClock$Clock$setInterval(uint8_t value)
#line 87
{
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x31 + 0x20) = value;
}

# 105 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   void TimerM$Clock$setInterval(uint8_t arg_0x86c88c8){
#line 105
  HPLClock$Clock$setInterval(arg_0x86c88c8);
#line 105
}
#line 105
# 116 "/home/wyong/tinyos/tinyos-1.x/tos/system/TimerM.nc"
static void TimerM$adjustInterval(void)
#line 116
{
  uint8_t i;
#line 117
  uint8_t val = TimerM$maxTimerInterval;

#line 118
  if (TimerM$mState) {
      for (i = 0; i < NUM_TIMERS; i++) {
          if (TimerM$mState & (0x1 << i) && TimerM$mTimerList[i].ticksLeft < val) {
              val = TimerM$mTimerList[i].ticksLeft;
            }
        }
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 124
        {
          TimerM$mInterval = val;
          TimerM$Clock$setInterval(TimerM$mInterval);
          TimerM$setIntervalFlag = 0;
        }
#line 128
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
        {
          TimerM$mInterval = TimerM$maxTimerInterval;
          TimerM$Clock$setInterval(TimerM$mInterval);
          TimerM$setIntervalFlag = 0;
        }
#line 135
        __nesc_atomic_end(__nesc_atomic); }
    }
  TimerM$PowerManagement$adjustPower();
}

static inline  
# 151 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$ActivityTimer$fired(void)
#line 151
{
  AMStandard$lastCount = AMStandard$counter;
  AMStandard$counter = 0;
  return SUCCESS;
}

# 37 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/SpiByteFifo.nc"
inline static   result_t CC1000RadioIntM$SpiByteFifo$disableIntr(void){
#line 37
  unsigned char result;
#line 37

#line 37
  result = HPLSpiM$SpiByteFifo$disableIntr();
#line 37

#line 37
  return result;
#line 37
}
#line 37
static inline  
# 446 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000ControlM.nc"
result_t CC1000ControlM$StdControl$stop(void)
#line 446
{

  CC1000ControlM$HPLChipcon$write(0x0B, 0x00);
  CC1000ControlM$HPLChipcon$write(0x00, (((((
  1 << 5) | (1 << 4)) | (
  1 << 3)) | (1 << 2)) | (1 << 1)) | (
  1 << 0));

  return SUCCESS;
}

# 78 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/StdControl.nc"
inline static  result_t CC1000RadioIntM$CC1000StdControl$stop(void){
#line 78
  unsigned char result;
#line 78

#line 78
  result = CC1000ControlM$StdControl$stop();
#line 78

#line 78
  return result;
#line 78
}
#line 78
static inline  
# 334 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000RadioIntM.nc"
result_t CC1000RadioIntM$WakeupTimer$fired(void)
#line 334
{
  uint8_t oldRadioState;
  uint16_t sleeptime;
  bool bStayAwake;

  if (CC1000RadioIntM$lplpower == 0) {
    return SUCCESS;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 342
    {
      oldRadioState = CC1000RadioIntM$RadioState;
      bStayAwake = CC1000RadioIntM$bTxPending;
    }
#line 345
    __nesc_atomic_end(__nesc_atomic); }

  switch (oldRadioState) {
      case CC1000RadioIntM$IDLE_STATE: 
        sleeptime = (({
#line 349
          unsigned short __addr16 = (unsigned short )(unsigned short )&CC1K_LPL_SleepTime[CC1000RadioIntM$lplpower * 2];
#line 349
          unsigned char __result;

#line 349
           __asm ("lpm %0, Z" : "=r"(__result) : "z"(__addr16));__result;
        }
        )
#line 349
         << 8) | 
        ({
#line 350
          unsigned short __addr16 = (unsigned short )(unsigned short )&CC1K_LPL_SleepTime[CC1000RadioIntM$lplpower * 2 + 1];
#line 350
          unsigned char __result;

#line 350
           __asm ("lpm %0, Z" : "=r"(__result) : "z"(__addr16));__result;
        }
        );
#line 351
      if (!bStayAwake) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 352
            CC1000RadioIntM$RadioState = CC1000RadioIntM$POWER_DOWN_STATE;
#line 352
            __nesc_atomic_end(__nesc_atomic); }
          CC1000RadioIntM$WakeupTimer$start(TIMER_ONE_SHOT, sleeptime);
          CC1000RadioIntM$CC1000StdControl$stop();
          CC1000RadioIntM$SpiByteFifo$disableIntr();
        }
      else {
          CC1000RadioIntM$WakeupTimer$start(TIMER_ONE_SHOT, 16 * 2);
        }
      break;

      case CC1000RadioIntM$POWER_DOWN_STATE: 
        sleeptime = ({
#line 363
          unsigned short __addr16 = (unsigned short )(unsigned short )&CC1K_LPL_SleepPreamble[CC1000RadioIntM$lplpower];
#line 363
          unsigned char __result;

#line 363
           __asm ("lpm %0, Z" : "=r"(__result) : "z"(__addr16));__result;
        }
        );
#line 364
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 364
        CC1000RadioIntM$RadioState = CC1000RadioIntM$IDLE_STATE;
#line 364
        __nesc_atomic_end(__nesc_atomic); }
      CC1000RadioIntM$CC1000StdControl$start();
      CC1000RadioIntM$CC1000Control$BIASOn();
      CC1000RadioIntM$SpiByteFifo$rxMode();
      CC1000RadioIntM$CC1000Control$RxMode();
      CC1000RadioIntM$SpiByteFifo$enableIntr();
      CC1000RadioIntM$WakeupTimer$start(TIMER_ONE_SHOT, sleeptime);
      break;

      default: 
        CC1000RadioIntM$WakeupTimer$start(TIMER_ONE_SHOT, 16 * 2);
    }
  return SUCCESS;
}

static inline   
# 154 "/home/wyong/tinyos/tinyos-1.x/tos/system/TimerM.nc"
result_t TimerM$Timer$default$fired(uint8_t id)
#line 154
{
  return SUCCESS;
}

# 73 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Timer.nc"
inline static  result_t TimerM$Timer$fired(uint8_t arg_0x86b65f0){
#line 73
  unsigned char result;
#line 73

#line 73
  switch (arg_0x86b65f0) {
#line 73
    case 0:
#line 73
      result = AMStandard$ActivityTimer$fired();
#line 73
      break;
#line 73
    case 1:
#line 73
      result = CC1000RadioIntM$WakeupTimer$fired();
#line 73
      break;
#line 73
    default:
#line 73
      result = TimerM$Timer$default$fired(arg_0x86b65f0);
#line 73
    }
#line 73

#line 73
  return result;
#line 73
}
#line 73
static inline 
# 166 "/home/wyong/tinyos/tinyos-1.x/tos/system/TimerM.nc"
uint8_t TimerM$dequeue(void)
#line 166
{
  if (TimerM$queue_size == 0) {
    return NUM_TIMERS;
    }
#line 169
  if (TimerM$queue_head == NUM_TIMERS - 1) {
    TimerM$queue_head = -1;
    }
#line 171
  TimerM$queue_head++;
  TimerM$queue_size--;
  return TimerM$queue[(uint8_t )TimerM$queue_head];
}

static inline  void TimerM$signalOneTimer(void)
#line 176
{
  uint8_t itimer = TimerM$dequeue();

#line 178
  if (itimer < NUM_TIMERS) {
    TimerM$Timer$fired(itimer);
    }
}

static inline 
#line 158
void TimerM$enqueue(uint8_t value)
#line 158
{
  if (TimerM$queue_tail == NUM_TIMERS - 1) {
    TimerM$queue_tail = -1;
    }
#line 161
  TimerM$queue_tail++;
  TimerM$queue_size++;
  TimerM$queue[(uint8_t )TimerM$queue_tail] = value;
}

static inline  
#line 182
void TimerM$HandleFire(void)
#line 182
{
  uint8_t i;

#line 184
  TimerM$setIntervalFlag = 1;
  if (TimerM$mState) {
      for (i = 0; i < NUM_TIMERS; i++) {
          if (TimerM$mState & (0x1 << i)) {
              TimerM$mTimerList[i].ticksLeft -= TimerM$mInterval + 1;
              if (TimerM$mTimerList[i].ticksLeft <= 2) {
                  if (TimerM$mTimerList[i].type == TIMER_REPEAT) {
                      TimerM$mTimerList[i].ticksLeft += TimerM$mTimerList[i].ticks;
                    }
                  else 
#line 192
                    {
                      TimerM$mState &= ~(0x1 << i);
                    }
                  TimerM$enqueue(i);
                  TOS_post(TimerM$signalOneTimer);
                }
            }
        }
    }
  TimerM$adjustInterval();
}

static inline   result_t TimerM$Clock$fire(void)
#line 204
{
  TOS_post(TimerM$HandleFire);
  return SUCCESS;
}

# 180 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/Clock.nc"
inline static   result_t HPLClock$Clock$fire(void){
#line 180
  unsigned char result;
#line 180

#line 180
  result = TimerM$Clock$fire();
#line 180

#line 180
  return result;
#line 180
}
#line 180
# 66 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ByteComm.nc"
inline static   result_t UARTM$ByteComm$rxByteReady(uint8_t arg_0x873f4e8, bool arg_0x873f630, uint16_t arg_0x873f788){
#line 66
  unsigned char result;
#line 66

#line 66
  result = FramerM$ByteComm$rxByteReady(arg_0x873f4e8, arg_0x873f630, arg_0x873f788);
#line 66

#line 66
  return result;
#line 66
}
#line 66
static inline   
# 77 "/home/wyong/tinyos/tinyos-1.x/tos/system/UARTM.nc"
result_t UARTM$HPLUART$get(uint8_t data)
#line 77
{




  UARTM$ByteComm$rxByteReady(data, FALSE, 0);
  {
  }
#line 83
  ;
  return SUCCESS;
}

# 88 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLUART.nc"
inline static   result_t HPLUART0M$UART$get(uint8_t arg_0x8770658){
#line 88
  unsigned char result;
#line 88

#line 88
  result = UARTM$HPLUART$get(arg_0x8770658);
#line 88

#line 88
  return result;
#line 88
}
#line 88
# 90 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLUART0M.nc"
void __attribute((signal))   __vector_18(void)
#line 90
{
  if (* (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0B + 0x20) & (1 << 7)) {
    HPLUART0M$UART$get(* (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0C + 0x20));
    }
}

static inline  
# 202 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
void FramerM$PacketUnknown(void)
#line 202
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 203
    {
      FramerM$gFlags |= FramerM$FLAGS_UNKNOWN;
    }
#line 205
    __nesc_atomic_end(__nesc_atomic); }

  FramerM$StartTx();
}

static inline  
# 246 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
TOS_MsgPtr AMStandard$UARTReceive$receive(TOS_MsgPtr packet)
#line 246
{


  packet->group = TOS_AM_GROUP;
  return received(packet);
}

# 75 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr FramerAckM$ReceiveCombined$receive(TOS_MsgPtr arg_0x8554980){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = AMStandard$UARTReceive$receive(arg_0x8554980);
#line 75

#line 75
  return result;
#line 75
}
#line 75
static inline  
# 91 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerAckM.nc"
TOS_MsgPtr FramerAckM$ReceiveMsg$receive(TOS_MsgPtr Msg)
#line 91
{
  TOS_MsgPtr pBuf;

  pBuf = FramerAckM$ReceiveCombined$receive(Msg);

  return pBuf;
}

# 75 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ReceiveMsg.nc"
inline static  TOS_MsgPtr FramerM$ReceiveMsg$receive(TOS_MsgPtr arg_0x8554980){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = FramerAckM$ReceiveMsg$receive(arg_0x8554980);
#line 75

#line 75
  return result;
#line 75
}
#line 75
static inline  
# 328 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
result_t FramerM$TokenReceiveMsg$ReflectToken(uint8_t Token)
#line 328
{
  result_t Result = SUCCESS;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 331
    {
      if (!(FramerM$gFlags & FramerM$FLAGS_TOKENPEND)) {
          FramerM$gFlags |= FramerM$FLAGS_TOKENPEND;
          FramerM$gTxTokenBuf = Token;
        }
      else {
          Result = FAIL;
        }
    }
#line 339
    __nesc_atomic_end(__nesc_atomic); }

  if (Result == SUCCESS) {
      Result = FramerM$StartTx();
    }

  return Result;
}

# 88 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/TokenReceiveMsg.nc"
inline static  result_t FramerAckM$TokenReceiveMsg$ReflectToken(uint8_t arg_0x8727458){
#line 88
  unsigned char result;
#line 88

#line 88
  result = FramerM$TokenReceiveMsg$ReflectToken(arg_0x8727458);
#line 88

#line 88
  return result;
#line 88
}
#line 88
static inline  
# 74 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerAckM.nc"
void FramerAckM$SendAckTask(void)
#line 74
{

  FramerAckM$TokenReceiveMsg$ReflectToken(FramerAckM$gTokenBuf);
}

static inline  TOS_MsgPtr FramerAckM$TokenReceiveMsg$receive(TOS_MsgPtr Msg, uint8_t token)
#line 79
{
  TOS_MsgPtr pBuf;

  FramerAckM$gTokenBuf = token;

  TOS_post(FramerAckM$SendAckTask);

  pBuf = FramerAckM$ReceiveCombined$receive(Msg);

  return pBuf;
}

# 75 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/TokenReceiveMsg.nc"
inline static  TOS_MsgPtr FramerM$TokenReceiveMsg$receive(TOS_MsgPtr arg_0x8726cf8, uint8_t arg_0x8726e40){
#line 75
  struct TOS_Msg *result;
#line 75

#line 75
  result = FramerAckM$TokenReceiveMsg$receive(arg_0x8726cf8, arg_0x8726e40);
#line 75

#line 75
  return result;
#line 75
}
#line 75
static inline  
# 210 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
void FramerM$PacketRcvd(void)
#line 210
{
  FramerM$MsgRcvEntry_t *pRcv = &FramerM$gMsgRcvTbl[FramerM$gRxTailIndex];
  TOS_MsgPtr pBuf = pRcv->pMsg;


  if (pRcv->Length >= (size_t )& ((struct TOS_Msg *)0)->data) {

      switch (pRcv->Proto) {
          case FramerM$PROTO_ACK: 
            break;
          case FramerM$PROTO_PACKET_ACK: 
            pBuf->crc = 1;
          pBuf = FramerM$TokenReceiveMsg$receive(pBuf, pRcv->Token);
          break;
          case FramerM$PROTO_PACKET_NOACK: 
            pBuf->crc = 1;
          pBuf = FramerM$ReceiveMsg$receive(pBuf);
          break;
          default: 
            FramerM$gTxUnknownBuf = pRcv->Proto;
          TOS_post(FramerM$PacketUnknown);
          break;
        }
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 235
    {
      if (pBuf) {
          pRcv->pMsg = pBuf;
        }
      pRcv->Length = 0;
      pRcv->Token = 0;
      FramerM$gRxTailIndex++;
      FramerM$gRxTailIndex %= FramerM$HDLC_QUEUESIZE;
    }
#line 243
    __nesc_atomic_end(__nesc_atomic); }
}

# 96 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/HPLUART.nc"
inline static   result_t HPLUART0M$UART$putDone(void){
#line 96
  unsigned char result;
#line 96

#line 96
  result = UARTM$HPLUART$putDone();
#line 96

#line 96
  return result;
#line 96
}
#line 96
# 100 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLUART0M.nc"
void __attribute((interrupt))   __vector_20(void)
#line 100
{
  HPLUART0M$UART$putDone();
}

static inline   
# 552 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
result_t FramerM$ByteComm$txDone(void)
#line 552
{

  if (FramerM$gTxState == FramerM$TXSTATE_FINISH) {
      FramerM$gTxState = FramerM$TXSTATE_IDLE;
      TOS_post(FramerM$PacketSent);
    }

  return SUCCESS;
}

# 83 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ByteComm.nc"
inline static   result_t UARTM$ByteComm$txDone(void){
#line 83
  unsigned char result;
#line 83

#line 83
  result = FramerM$ByteComm$txDone();
#line 83

#line 83
  return result;
#line 83
}
#line 83
#line 55
inline static   result_t FramerM$ByteComm$txByte(uint8_t arg_0x873f058){
#line 55
  unsigned char result;
#line 55

#line 55
  result = UARTM$ByteComm$txByte(arg_0x873f058);
#line 55

#line 55
  return result;
#line 55
}
#line 55
static inline 
# 66 "/home/wyong/tinyos/tinyos-1.x/tos/platform/avrmote/crc.h"
uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

static inline   
# 482 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
result_t FramerM$ByteComm$txByteReady(bool LastByteSuccess)
#line 482
{
  result_t TxResult = SUCCESS;
  uint8_t nextByte;

  if (LastByteSuccess != TRUE) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 487
        FramerM$gTxState = FramerM$TXSTATE_ERROR;
#line 487
        __nesc_atomic_end(__nesc_atomic); }
      TOS_post(FramerM$PacketSent);
      return SUCCESS;
    }

  switch (FramerM$gTxState) {

      case FramerM$TXSTATE_PROTO: 
        FramerM$gTxState = FramerM$TXSTATE_INFO;
      FramerM$gTxRunningCRC = crcByte(FramerM$gTxRunningCRC, FramerM$gTxProto);
      TxResult = FramerM$ByteComm$txByte(FramerM$gTxProto);
      break;

      case FramerM$TXSTATE_INFO: 
        nextByte = FramerM$gpTxBuf[FramerM$gTxByteCnt];

      FramerM$gTxRunningCRC = crcByte(FramerM$gTxRunningCRC, nextByte);
      FramerM$gTxByteCnt++;
      if (FramerM$gTxByteCnt >= FramerM$gTxLength) {
          FramerM$gTxState = FramerM$TXSTATE_FCS1;
        }

      TxResult = FramerM$TxArbitraryByte(nextByte);
      break;

      case FramerM$TXSTATE_ESC: 

        TxResult = FramerM$ByteComm$txByte(FramerM$gTxEscByte ^ 0x20);
      FramerM$gTxState = FramerM$gPrevTxState;
      break;

      case FramerM$TXSTATE_FCS1: 
        nextByte = (uint8_t )(FramerM$gTxRunningCRC & 0xff);
      FramerM$gTxState = FramerM$TXSTATE_FCS2;
      TxResult = FramerM$TxArbitraryByte(nextByte);
      break;

      case FramerM$TXSTATE_FCS2: 
        nextByte = (uint8_t )((FramerM$gTxRunningCRC >> 8) & 0xff);
      FramerM$gTxState = FramerM$TXSTATE_ENDFLAG;
      TxResult = FramerM$TxArbitraryByte(nextByte);
      break;

      case FramerM$TXSTATE_ENDFLAG: 
        FramerM$gTxState = FramerM$TXSTATE_FINISH;
      TxResult = FramerM$ByteComm$txByte(FramerM$HDLC_FLAG_BYTE);

      break;

      case FramerM$TXSTATE_FINISH: 
        case FramerM$TXSTATE_ERROR: 

          default: 
            break;
    }


  if (TxResult != SUCCESS) {
      FramerM$gTxState = FramerM$TXSTATE_ERROR;
      TOS_post(FramerM$PacketSent);
    }

  return SUCCESS;
}

# 75 "/home/wyong/tinyos/tinyos-1.x/tos/interfaces/ByteComm.nc"
inline static   result_t UARTM$ByteComm$txByteReady(bool arg_0x873fcb8){
#line 75
  unsigned char result;
#line 75

#line 75
  result = FramerM$ByteComm$txByteReady(arg_0x873fcb8);
#line 75

#line 75
  return result;
#line 75
}
#line 75
# 98 "/home/wyong/tinyos/tinyos-1.x/tos/system/sched.c"
bool  TOS_post(void (*tp)(void))
#line 98
{
  __nesc_atomic_t fInterruptFlags;
  uint8_t tmp;



  fInterruptFlags = __nesc_atomic_start();

  tmp = TOSH_sched_free;
  TOSH_sched_free++;
  TOSH_sched_free &= TOSH_TASK_BITMASK;

  if (TOSH_sched_free != TOSH_sched_full) {
      __nesc_atomic_end(fInterruptFlags);

      TOSH_queue[tmp].tp = tp;
      return TRUE;
    }
  else {
      TOSH_sched_free = tmp;
      __nesc_atomic_end(fInterruptFlags);

      return FALSE;
    }
}

# 54 "/home/wyong/tinyos/tinyos-1.x/tos/system/RealMain.nc"
int   main(void)
#line 54
{
  RealMain$hardwareInit();
  RealMain$Pot$init(10);
  TOSH_sched_init();

  RealMain$StdControl$init();
  RealMain$StdControl$start();
  __nesc_enable_interrupt();

  while (1) {
      TOSH_run_task();
    }
}

static  
# 72 "/home/wyong/tinyos/tinyos-1.x/tos/system/TimerM.nc"
result_t TimerM$StdControl$init(void)
#line 72
{
  TimerM$mState = 0;
  TimerM$setIntervalFlag = 0;
  TimerM$queue_head = TimerM$queue_tail = -1;
  TimerM$queue_size = 0;
  TimerM$mScale = 3;
  TimerM$mInterval = TimerM$maxTimerInterval;
  return TimerM$Clock$setRate(TimerM$mInterval, TimerM$mScale);
}

static 
# 268 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
void FramerM$HDLCInitialize(void)
#line 268
{
  int i;

#line 270
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      for (i = 0; i < FramerM$HDLC_QUEUESIZE; i++) {
          FramerM$gMsgRcvTbl[i].pMsg = &FramerM$gMsgRcvBuf[i];
          FramerM$gMsgRcvTbl[i].Length = 0;
          FramerM$gMsgRcvTbl[i].Token = 0;
        }
      FramerM$gTxState = FramerM$TXSTATE_IDLE;
      FramerM$gTxByteCnt = 0;
      FramerM$gTxLength = 0;
      FramerM$gTxRunningCRC = 0;
      FramerM$gpTxMsg = (void *)0;

      FramerM$gRxState = FramerM$RXSTATE_NOSYNC;
      FramerM$gRxHeadIndex = 0;
      FramerM$gRxTailIndex = 0;
      FramerM$gRxByteCnt = 0;
      FramerM$gRxRunningCRC = 0;
      FramerM$gpRxBuf = (uint8_t *)FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].pMsg;
    }
#line 288
    __nesc_atomic_end(__nesc_atomic); }
}

static   
# 75 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLCC1000M.nc"
result_t HPLCC1000M$HPLCC1000$write(uint8_t addr, uint8_t data)
#line 75
{
  char cnt = 0;


  addr <<= 1;
  TOSH_CLR_CC_PALE_PIN();
  for (cnt = 0; cnt < 7; cnt++) 
    {
      if (addr & 0x80) {
        TOSH_SET_CC_PDATA_PIN();
        }
      else {
#line 86
        TOSH_CLR_CC_PDATA_PIN();
        }
#line 87
      TOSH_CLR_CC_PCLK_PIN();
      TOSH_SET_CC_PCLK_PIN();
      addr <<= 1;
    }
  TOSH_SET_CC_PDATA_PIN();
  TOSH_CLR_CC_PCLK_PIN();
  TOSH_SET_CC_PCLK_PIN();

  TOSH_SET_CC_PALE_PIN();


  for (cnt = 0; cnt < 8; cnt++) 
    {
      if (data & 0x80) {
        TOSH_SET_CC_PDATA_PIN();
        }
      else {
#line 103
        TOSH_CLR_CC_PDATA_PIN();
        }
#line 104
      TOSH_CLR_CC_PCLK_PIN();
      TOSH_SET_CC_PCLK_PIN();
      data <<= 1;
    }
  TOSH_SET_CC_PALE_PIN();
  TOSH_SET_CC_PDATA_PIN();
  TOSH_SET_CC_PCLK_PIN();
  return SUCCESS;
}

static 
# 179 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000ControlM.nc"
void CC1000ControlM$cc1000SetModem(void)
#line 179
{
  CC1000ControlM$HPLChipcon$write(0x0F, CC1000ControlM$gCurrentParameters[0x0f]);
  CC1000ControlM$HPLChipcon$write(0x10, CC1000ControlM$gCurrentParameters[0x10]);
  CC1000ControlM$HPLChipcon$write(0x11, CC1000ControlM$gCurrentParameters[0x11]);

  return;
}

static   
# 128 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLCC1000M.nc"
uint8_t HPLCC1000M$HPLCC1000$read(uint8_t addr)
#line 128
{
  int cnt;
  uint8_t din;
  uint8_t data = 0;


  addr <<= 1;
  TOSH_CLR_CC_PALE_PIN();
  for (cnt = 0; cnt < 7; cnt++) 
    {
      if (addr & 0x80) {
        TOSH_SET_CC_PDATA_PIN();
        }
      else {
#line 141
        TOSH_CLR_CC_PDATA_PIN();
        }
#line 142
      TOSH_CLR_CC_PCLK_PIN();
      TOSH_SET_CC_PCLK_PIN();
      addr <<= 1;
    }
  TOSH_CLR_CC_PDATA_PIN();
  TOSH_CLR_CC_PCLK_PIN();
  TOSH_SET_CC_PCLK_PIN();

  TOSH_MAKE_CC_PDATA_INPUT();
  TOSH_SET_CC_PALE_PIN();


  for (cnt = 7; cnt >= 0; cnt--) 
    {
      TOSH_CLR_CC_PCLK_PIN();
      din = TOSH_READ_CC_PDATA_PIN();
      if (din) {
        data = (data << 1) | 0x01;
        }
      else {
#line 161
        data = (data << 1) & 0xfe;
        }
#line 162
      TOSH_SET_CC_PCLK_PIN();
    }

  TOSH_SET_CC_PALE_PIN();
  TOSH_MAKE_CC_PDATA_OUTPUT();
  TOSH_SET_CC_PDATA_PIN();

  return data;
}

static 
# 63 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLADCM.nc"
void HPLADCM$init_portmap(void)
#line 63
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 65
    {
      if (HPLADCM$init_portmap_done == FALSE) {
          int i;

#line 68
          for (i = 0; i < TOSH_ADC_PORTMAPSIZE; i++) 
            HPLADCM$TOSH_adc_portmap[i] = i;


          HPLADCM$TOSH_adc_portmap[TOS_ADC_BANDGAP_PORT] = TOSH_ACTUAL_BANDGAP_PORT;
          HPLADCM$TOSH_adc_portmap[TOS_ADC_GND_PORT] = TOSH_ACTUAL_GND_PORT;
          HPLADCM$init_portmap_done = TRUE;
        }
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }
}

static   
# 412 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000ControlM.nc"
result_t CC1000ControlM$CC1000Control$RxMode(void)
#line 412
{


  CC1000ControlM$HPLChipcon$write(0x00, (
  1 << 4) | (1 << 0));

  CC1000ControlM$HPLChipcon$write(0x09, CC1000ControlM$gCurrentParameters[0x09]);
  CC1000ControlM$HPLChipcon$write(0x0B, 0x00);
  TOSH_uwait(250);
  return SUCCESS;
}

static   
# 101 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLPowerManagementM.nc"
uint8_t HPLPowerManagementM$PowerManagement$adjustPower(void)
#line 101
{
  uint8_t mcu;

#line 103
  if (!HPLPowerManagementM$disabled) {
    TOS_post(HPLPowerManagementM$doAdjustment);
    }
  else 
#line 105
    {
      mcu = * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x35 + 0x20);
      mcu &= 0xe3;
      mcu |= HPLPowerManagementM$IDLE;
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x35 + 0x20) = mcu;
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x35 + 0x20) |= 1 << 5;
    }
  return 0;
}

static  
# 93 "/home/wyong/tinyos/tinyos-1.x/tos/system/TimerM.nc"
result_t TimerM$Timer$start(uint8_t id, char type, 
uint32_t interval)
#line 94
{
  uint8_t diff;

#line 96
  if (id >= NUM_TIMERS) {
#line 96
    return FAIL;
    }
#line 97
  if (type > 1) {
#line 97
    return FAIL;
    }
#line 98
  TimerM$mTimerList[id].ticks = interval;
  TimerM$mTimerList[id].type = type;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 101
    {
      diff = * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x32 + 0x20);
      interval += diff;
      TimerM$mTimerList[id].ticksLeft = interval;
      TimerM$mState |= 0x1 << id;
      if (interval < TimerM$mInterval) {
          TimerM$mInterval = interval;
          TimerM$Clock$setInterval(TimerM$mInterval);
          TimerM$setIntervalFlag = 0;
          TimerM$PowerManagement$adjustPower();
        }
    }
#line 112
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 215 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
TOS_MsgPtr   received(TOS_MsgPtr packet)
#line 215
{
  uint16_t addr = TOS_LOCAL_ADDRESS;

#line 217
  AMStandard$counter++;
  {
  }
#line 218
  ;


  if (
#line 220
  packet->crc == 1 && 
  packet->group == TOS_AM_GROUP && (
  packet->addr == TOS_BCAST_ADDR || 
  packet->addr == addr)) 
    {

      uint8_t type = packet->type;
      TOS_MsgPtr tmp;

      {
      }
#line 229
      ;
      AMStandard$dbgPacket(packet);
      {
      }
#line 231
      ;


      tmp = AMStandard$ReceiveMsg$receive(type, packet);
      if (tmp) {
        packet = tmp;
        }
    }
#line 238
  return packet;
}

static 
# 158 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
result_t FramerM$StartTx(void)
#line 158
{
  result_t Result = SUCCESS;
  bool fInitiate = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    {
      if (FramerM$gTxState == FramerM$TXSTATE_IDLE) {
          if (FramerM$gFlags & FramerM$FLAGS_TOKENPEND) {
              FramerM$gpTxBuf = (uint8_t *)&FramerM$gTxTokenBuf;
              FramerM$gTxProto = FramerM$PROTO_ACK;
              FramerM$gTxLength = sizeof FramerM$gTxTokenBuf;
              fInitiate = TRUE;
              FramerM$gTxState = FramerM$TXSTATE_PROTO;
            }
          else {
#line 171
            if (FramerM$gFlags & FramerM$FLAGS_DATAPEND) {
                FramerM$gpTxBuf = (uint8_t *)FramerM$gpTxMsg;
                FramerM$gTxProto = FramerM$PROTO_PACKET_NOACK;
                FramerM$gTxLength = FramerM$gpTxMsg->length + (MSG_DATA_SIZE - DATA_LENGTH - 2);
                fInitiate = TRUE;
                FramerM$gTxState = FramerM$TXSTATE_PROTO;
              }
            else {
#line 178
              if (FramerM$gFlags & FramerM$FLAGS_UNKNOWN) {
                  FramerM$gpTxBuf = (uint8_t *)&FramerM$gTxUnknownBuf;
                  FramerM$gTxProto = FramerM$PROTO_UNKNOWN;
                  FramerM$gTxLength = sizeof FramerM$gTxUnknownBuf;
                  fInitiate = TRUE;
                  FramerM$gTxState = FramerM$TXSTATE_PROTO;
                }
              }
            }
        }
    }
#line 188
    __nesc_atomic_end(__nesc_atomic); }
#line 188
  if (fInitiate) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 189
        {
          FramerM$gTxRunningCRC = 0;
#line 190
          FramerM$gTxByteCnt = 0;
        }
#line 191
        __nesc_atomic_end(__nesc_atomic); }
      Result = FramerM$ByteComm$txByte(FramerM$HDLC_FLAG_BYTE);
      if (Result != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 194
            FramerM$gTxState = FramerM$TXSTATE_ERROR;
#line 194
            __nesc_atomic_end(__nesc_atomic); }
          TOS_post(FramerM$PacketSent);
        }
    }

  return Result;
}

static   
# 110 "/home/wyong/tinyos/tinyos-1.x/tos/system/UARTM.nc"
result_t UARTM$ByteComm$txByte(uint8_t data)
#line 110
{
  bool oldState;

  {
  }
#line 113
  ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 115
    {
      oldState = UARTM$state;
      UARTM$state = TRUE;
    }
#line 118
    __nesc_atomic_end(__nesc_atomic); }
  if (oldState) {
    return FAIL;
    }
  UARTM$HPLUART$put(data);

  return SUCCESS;
}

static  
# 246 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
void FramerM$PacketSent(void)
#line 246
{
  result_t TxResult = SUCCESS;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 249
    {
      if (FramerM$gTxState == FramerM$TXSTATE_ERROR) {
          TxResult = FAIL;
          FramerM$gTxState = FramerM$TXSTATE_IDLE;
        }
    }
#line 254
    __nesc_atomic_end(__nesc_atomic); }
  if (FramerM$gTxProto == FramerM$PROTO_ACK) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 256
        FramerM$gFlags ^= FramerM$FLAGS_TOKENPEND;
#line 256
        __nesc_atomic_end(__nesc_atomic); }
    }
  else {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 259
        FramerM$gFlags ^= FramerM$FLAGS_DATAPEND;
#line 259
        __nesc_atomic_end(__nesc_atomic); }
      FramerM$BareSendMsg$sendDone((TOS_MsgPtr )FramerM$gpTxMsg, TxResult);
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 261
        FramerM$gpTxMsg = (void *)0;
#line 261
        __nesc_atomic_end(__nesc_atomic); }
    }


  FramerM$StartTx();
}

static 
# 143 "/home/wyong/tinyos/tinyos-1.x/tos/system/AMStandard.nc"
result_t AMStandard$reportSendDone(TOS_MsgPtr msg, result_t success)
#line 143
{
  AMStandard$state = FALSE;
  AMStandard$SendMsg$sendDone(msg->type, msg, success);
  AMStandard$sendDone();

  return SUCCESS;
}

static   
# 70 "/home/wyong/tinyos/tinyos-1.x/tos/system/RandomLFSR.nc"
uint16_t RandomLFSR$Random$rand(void)
#line 70
{
  bool endbit;
  uint16_t tmpShiftReg;

#line 73
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 73
    {
      tmpShiftReg = RandomLFSR$shiftReg;
      endbit = (tmpShiftReg & 0x8000) != 0;
      tmpShiftReg <<= 1;
      if (endbit) {
        tmpShiftReg ^= 0x100b;
        }
#line 79
      tmpShiftReg++;
      RandomLFSR$shiftReg = tmpShiftReg;
      tmpShiftReg = tmpShiftReg ^ RandomLFSR$mask;
    }
#line 82
    __nesc_atomic_end(__nesc_atomic); }
  return tmpShiftReg;
}

# 144 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLADCM.nc"
void __attribute((signal))   __vector_21(void)
#line 144
{
  uint16_t data = * (volatile unsigned int *)(unsigned int )& * (volatile unsigned char *)(0x04 + 0x20);

#line 146
  data &= 0x3ff;
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x06 + 0x20) |= 1 << 4;
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x06 + 0x20) &= ~(1 << 7);
  __nesc_enable_interrupt();
  HPLADCM$ADC$dataReady(data);
}

static   
#line 122
result_t HPLADCM$ADC$samplePort(uint8_t port)
#line 122
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 123
    {
      * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x07 + 0x20) = HPLADCM$TOSH_adc_portmap[port] & 0x1F;
    }
#line 125
    __nesc_atomic_end(__nesc_atomic); }
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x06 + 0x20) |= 1 << 7;
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x06 + 0x20) |= 1 << 6;

  return SUCCESS;
}

static   
# 472 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/CC1000RadioIntM.nc"
result_t CC1000RadioIntM$SpiByteFifo$dataReady(uint8_t data_in)
#line 472
{

  if (CC1000RadioIntM$bInvertRxData) {
    data_in = ~data_in;
    }


  switch (CC1000RadioIntM$RadioState) {

      case CC1000RadioIntM$TX_STATE: 
        {
          CC1000RadioIntM$SpiByteFifo$writeByte(CC1000RadioIntM$NextTxByte);
          CC1000RadioIntM$TxByteCnt++;
          switch (CC1000RadioIntM$RadioTxState) {

              case CC1000RadioIntM$TXSTATE_PREAMBLE: 
                if (!(CC1000RadioIntM$TxByteCnt < CC1000RadioIntM$preamblelen)) {
                    CC1000RadioIntM$NextTxByte = CC1000RadioIntM$SYNC_BYTE;
                    CC1000RadioIntM$RadioTxState = CC1000RadioIntM$TXSTATE_SYNC;
                  }
              break;

              case CC1000RadioIntM$TXSTATE_SYNC: 
                CC1000RadioIntM$NextTxByte = CC1000RadioIntM$NSYNC_BYTE;
              CC1000RadioIntM$RadioTxState = CC1000RadioIntM$TXSTATE_DATA;
              CC1000RadioIntM$TxByteCnt = -1;
              CC1000RadioIntM$RadioSendCoordinator$startSymbol();
              break;

              case CC1000RadioIntM$TXSTATE_DATA: 
                if ((uint8_t )CC1000RadioIntM$TxByteCnt < CC1000RadioIntM$txlength) {
                    CC1000RadioIntM$NextTxByte = ((uint8_t *)CC1000RadioIntM$txbufptr)[CC1000RadioIntM$TxByteCnt];
                    CC1000RadioIntM$usRunningCRC = crcByte(CC1000RadioIntM$usRunningCRC, CC1000RadioIntM$NextTxByte);
                    CC1000RadioIntM$RadioSendCoordinator$byte(CC1000RadioIntM$txbufptr, (uint8_t )CC1000RadioIntM$TxByteCnt);
                  }
                else {
                    CC1000RadioIntM$NextTxByte = (uint8_t )CC1000RadioIntM$usRunningCRC;
                    CC1000RadioIntM$RadioTxState = CC1000RadioIntM$TXSTATE_CRC;
                  }
              break;

              case CC1000RadioIntM$TXSTATE_CRC: 
                CC1000RadioIntM$NextTxByte = (uint8_t )(CC1000RadioIntM$usRunningCRC >> 8);
              CC1000RadioIntM$RadioTxState = CC1000RadioIntM$TXSTATE_FLUSH;
              CC1000RadioIntM$TxByteCnt = 0;
              break;

              case CC1000RadioIntM$TXSTATE_FLUSH: 
                if (CC1000RadioIntM$TxByteCnt > 3) {
                    CC1000RadioIntM$RadioTxState = CC1000RadioIntM$TXSTATE_DONE;
                  }
              break;

              case CC1000RadioIntM$TXSTATE_DONE: 
                default: 
                  CC1000RadioIntM$SpiByteFifo$rxMode();
              CC1000RadioIntM$CC1000Control$RxMode();
              CC1000RadioIntM$bTxPending = FALSE;
              if (TOS_post(CC1000RadioIntM$PacketSent)) {


                  CC1000RadioIntM$RadioState = CC1000RadioIntM$IDLE_STATE;
                }
              break;
            }
        }
      break;

      case CC1000RadioIntM$DISABLED_STATE: 
        break;

      case CC1000RadioIntM$IDLE_STATE: 
        {
          if (data_in == 0xaa || data_in == 0x55) {
              CC1000RadioIntM$PreambleCount++;
              if (CC1000RadioIntM$PreambleCount > ({
#line 547
                unsigned short __addr16 = (unsigned short )(unsigned short )&CC1K_LPL_ValidPrecursor[CC1000RadioIntM$lplpower];
#line 547
                unsigned char __result;

#line 547
                 __asm ("lpm %0, Z" : "=r"(__result) : "z"(__addr16));__result;
              }
              )) 
#line 547
                {
                  CC1000RadioIntM$PreambleCount = CC1000RadioIntM$SOFCount = 0;
                  CC1000RadioIntM$RxBitOffset = CC1000RadioIntM$RxByteCnt = 0;
                  CC1000RadioIntM$usRunningCRC = 0;
                  CC1000RadioIntM$rxlength = MSG_DATA_SIZE - 2;
                  CC1000RadioIntM$RadioState = CC1000RadioIntM$SYNC_STATE;
                }
            }
          else {
#line 555
            if (CC1000RadioIntM$bTxPending && --CC1000RadioIntM$sMacDelay <= 0) {
                CC1000RadioIntM$bRSSIValid = FALSE;
                CC1000RadioIntM$RSSIADC$getData();
                CC1000RadioIntM$PreambleCount = 0;
                CC1000RadioIntM$RadioState = CC1000RadioIntM$PRETX_STATE;
              }
            }
        }









      break;

      case CC1000RadioIntM$PRETX_STATE: 
        {
          if (data_in == 0xaa || data_in == 0x55) {

              CC1000RadioIntM$sMacDelay = ((CC1000RadioIntM$Random$rand() & 0xf) + 1) * MSG_DATA_SIZE;
              CC1000RadioIntM$RadioState = CC1000RadioIntM$IDLE_STATE;
            }
          else {
#line 581
            if (CC1000RadioIntM$bRSSIValid) {
                if (CC1000RadioIntM$usRSSIVal > ({
#line 582
                  unsigned short __addr16 = (unsigned short )(unsigned short )&CC1K_LPL_SquelchInit[CC1000RadioIntM$lplpower];
#line 582
                  unsigned char __result;

#line 582
                   __asm ("lpm %0, Z" : "=r"(__result) : "z"(__addr16));__result;
                }
                )) 
#line 582
                  {

                    CC1000RadioIntM$CC1000Control$TxMode();
                    CC1000RadioIntM$SpiByteFifo$txMode();
                    CC1000RadioIntM$TxByteCnt = 0;
                    CC1000RadioIntM$usRunningCRC = 0;
                    CC1000RadioIntM$RadioState = CC1000RadioIntM$TX_STATE;
                    CC1000RadioIntM$RadioTxState = CC1000RadioIntM$TXSTATE_PREAMBLE;
                    CC1000RadioIntM$NextTxByte = 0xaa;
                    CC1000RadioIntM$SpiByteFifo$writeByte(0xaa);
                  }
                else {

                    CC1000RadioIntM$sMacDelay = ((CC1000RadioIntM$Random$rand() & 0xf) + 1) * MSG_DATA_SIZE;
                    CC1000RadioIntM$RadioState = CC1000RadioIntM$IDLE_STATE;
                  }
              }
            }
        }
#line 600
      break;

      case CC1000RadioIntM$SYNC_STATE: 
        {






          uint8_t i;

          if (data_in == 0xaa || data_in == 0x55) {




              CC1000RadioIntM$RxShiftBuf.MSB = data_in;
            }
          else 
            {

              uint16_t usTmp;

#line 623
              switch (CC1000RadioIntM$SOFCount) {
                  case 0: 
                    CC1000RadioIntM$RxShiftBuf.LSB = data_in;
                  break;

                  case 1: 
                    case 2: 

                      usTmp = CC1000RadioIntM$RxShiftBuf.W;
                  CC1000RadioIntM$RxShiftBuf.W <<= 8;
                  CC1000RadioIntM$RxShiftBuf.LSB = data_in;

                  for (i = 0; i < 8; i++) {
                      usTmp <<= 1;
                      if (data_in & 0x80) {
                        usTmp |= 0x1;
                        }
#line 639
                      data_in <<= 1;

                      if (usTmp == CC1000RadioIntM$SYNC_WORD) {
                          if (CC1000RadioIntM$rxbufptr->length != 0) {
                              CC1000RadioIntM$Leds$redToggle();
                              CC1000RadioIntM$RadioState = CC1000RadioIntM$IDLE_STATE;
                            }
                          else {
                              CC1000RadioIntM$RadioState = CC1000RadioIntM$RX_STATE;
                              CC1000RadioIntM$RSSIADC$getData();
                              CC1000RadioIntM$RxBitOffset = 7 - i;
                              CC1000RadioIntM$RadioReceiveCoordinator$startSymbol();
                            }
                          break;
                        }
                    }








                  break;

                  default: 

                    CC1000RadioIntM$RadioState = CC1000RadioIntM$IDLE_STATE;
                  break;
                }
              CC1000RadioIntM$SOFCount++;
            }
        }

      break;






      case CC1000RadioIntM$RX_STATE: 
        {
          char Byte;

          CC1000RadioIntM$RxShiftBuf.W <<= 8;
          CC1000RadioIntM$RxShiftBuf.LSB = data_in;

          Byte = CC1000RadioIntM$RxShiftBuf.W >> CC1000RadioIntM$RxBitOffset;
          ((char *)CC1000RadioIntM$rxbufptr)[(int )CC1000RadioIntM$RxByteCnt] = Byte;
          CC1000RadioIntM$RxByteCnt++;

          CC1000RadioIntM$RadioReceiveCoordinator$byte(CC1000RadioIntM$rxbufptr, (uint8_t )CC1000RadioIntM$RxByteCnt);

          if (CC1000RadioIntM$RxByteCnt < CC1000RadioIntM$rxlength) {
              CC1000RadioIntM$usRunningCRC = crcByte(CC1000RadioIntM$usRunningCRC, Byte);

              if (CC1000RadioIntM$RxByteCnt == (size_t )& ((struct TOS_Msg *)0)->length + 
              sizeof  ((struct TOS_Msg *)0)->length) {
                  CC1000RadioIntM$rxlength = CC1000RadioIntM$rxbufptr->length;
                  if (CC1000RadioIntM$rxlength > 29) {

                      CC1000RadioIntM$rxbufptr->length = 0;
                      CC1000RadioIntM$RadioState = CC1000RadioIntM$IDLE_STATE;
                      return SUCCESS;
                    }
                  else {
#line 706
                    if (CC1000RadioIntM$rxlength == 0) {
                        CC1000RadioIntM$RxByteCnt = (size_t )& ((struct TOS_Msg *)0)->crc;
                      }
                    else {

                        CC1000RadioIntM$rxlength += (size_t )& ((struct TOS_Msg *)0)->data;
                      }
                    }
                }
            }
          else {
#line 715
            if (CC1000RadioIntM$RxByteCnt == CC1000RadioIntM$rxlength) {
                CC1000RadioIntM$usRunningCRC = crcByte(CC1000RadioIntM$usRunningCRC, Byte);

                CC1000RadioIntM$RxByteCnt = (size_t )& ((struct TOS_Msg *)0)->crc;
              }
            else {
#line 720
              if (CC1000RadioIntM$RxByteCnt >= MSG_DATA_SIZE) {



                  if (CC1000RadioIntM$rxbufptr->crc == CC1000RadioIntM$usRunningCRC) {
                      CC1000RadioIntM$rxbufptr->crc = 1;
                    }
                  else {
                      CC1000RadioIntM$rxbufptr->crc = 0;
                    }

                  CC1000RadioIntM$SpiByteFifo$disableIntr();

                  CC1000RadioIntM$RadioState = CC1000RadioIntM$IDLE_STATE;
                  CC1000RadioIntM$rxbufptr->strength = CC1000RadioIntM$usRSSIVal;
                  if (!TOS_post(CC1000RadioIntM$PacketRcvd)) {


                      CC1000RadioIntM$rxbufptr->length = 0;
                      CC1000RadioIntM$RadioState = CC1000RadioIntM$IDLE_STATE;
                      CC1000RadioIntM$SpiByteFifo$enableIntr();
                    }
                }
              }
            }
        }





      break;

      default: 
        break;
    }
#line 767
  return SUCCESS;
}

static   
# 82 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica2/HPLSpiM.nc"
result_t HPLSpiM$SpiByteFifo$disableIntr(void)
#line 82
{
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x0D + 0x20) &= ~(1 << 7);
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x17 + 0x20) |= 1 << 0;
  * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x18 + 0x20) &= ~(1 << 0);
  HPLSpiM$PowerManagement$adjustPower();
  return SUCCESS;
}

# 167 "/home/wyong/tinyos/tinyos-1.x/tos/platform/mica/HPLClock.nc"
void __attribute((interrupt))   __vector_15(void)
#line 167
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 168
    {
      if (HPLClock$set_flag) {
          HPLClock$mscale = HPLClock$nextScale;
          HPLClock$nextScale |= 0x8;
          * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x33 + 0x20) = HPLClock$nextScale;

          * (volatile unsigned char *)(unsigned int )& * (volatile unsigned char *)(0x31 + 0x20) = HPLClock$minterval;
          HPLClock$set_flag = 0;
        }
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
  HPLClock$Clock$fire();
}

static   
# 348 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
result_t FramerM$ByteComm$rxByteReady(uint8_t data, bool error, uint16_t strength)
#line 348
{

  switch (FramerM$gRxState) {

      case FramerM$RXSTATE_NOSYNC: 
        if (data == FramerM$HDLC_FLAG_BYTE && FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Length == 0) {
            FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Token = 0;
            FramerM$gRxByteCnt = FramerM$gRxRunningCRC = 0;
            FramerM$gpRxBuf = (uint8_t *)FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].pMsg;
            FramerM$gRxState = FramerM$RXSTATE_PROTO;
          }
      break;

      case FramerM$RXSTATE_PROTO: 
        if (data == FramerM$HDLC_FLAG_BYTE) {
            break;
          }
      FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Proto = data;
      FramerM$gRxRunningCRC = crcByte(FramerM$gRxRunningCRC, data);
      switch (data) {
          case FramerM$PROTO_PACKET_ACK: 
            FramerM$gRxState = FramerM$RXSTATE_TOKEN;
          break;
          case FramerM$PROTO_PACKET_NOACK: 
            FramerM$gRxState = FramerM$RXSTATE_INFO;
          break;
          default: 
            FramerM$gRxState = FramerM$RXSTATE_NOSYNC;
          break;
        }
      break;

      case FramerM$RXSTATE_TOKEN: 
        if (data == FramerM$HDLC_FLAG_BYTE) {
            FramerM$gRxState = FramerM$RXSTATE_NOSYNC;
          }
        else {
#line 384
          if (data == FramerM$HDLC_CTLESC_BYTE) {
              FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Token = 0x20;
            }
          else {
              FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Token ^= data;
              FramerM$gRxRunningCRC = crcByte(FramerM$gRxRunningCRC, FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Token);
              FramerM$gRxState = FramerM$RXSTATE_INFO;
            }
          }
#line 392
      break;


      case FramerM$RXSTATE_INFO: 
        if (FramerM$gRxByteCnt > FramerM$HDLC_MTU) {
            FramerM$gRxByteCnt = FramerM$gRxRunningCRC = 0;
            FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Length = 0;
            FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Token = 0;
            FramerM$gRxState = FramerM$RXSTATE_NOSYNC;
          }
        else {
#line 402
          if (data == FramerM$HDLC_CTLESC_BYTE) {
              FramerM$gRxState = FramerM$RXSTATE_ESC;
            }
          else {
#line 405
            if (data == FramerM$HDLC_FLAG_BYTE) {
                if (FramerM$gRxByteCnt >= 2) {
                    uint16_t usRcvdCRC = FramerM$gpRxBuf[FramerM$gRxByteCnt - 1] & 0xff;

#line 408
                    usRcvdCRC = (usRcvdCRC << 8) | (FramerM$gpRxBuf[FramerM$gRxByteCnt - 2] & 0xff);
                    if (usRcvdCRC == FramerM$gRxRunningCRC) {
                        FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Length = FramerM$gRxByteCnt - 2;
                        TOS_post(FramerM$PacketRcvd);
                        FramerM$gRxHeadIndex++;
#line 412
                        FramerM$gRxHeadIndex %= FramerM$HDLC_QUEUESIZE;
                      }
                    else {
                        FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Length = 0;
                        FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Token = 0;
                      }
                    if (FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Length == 0) {
                        FramerM$gpRxBuf = (uint8_t *)FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].pMsg;
                        FramerM$gRxState = FramerM$RXSTATE_PROTO;
                      }
                    else {
                        FramerM$gRxState = FramerM$RXSTATE_NOSYNC;
                      }
                  }
                else {
                    FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Length = 0;
                    FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Token = 0;
                    FramerM$gRxState = FramerM$RXSTATE_NOSYNC;
                  }
                FramerM$gRxByteCnt = FramerM$gRxRunningCRC = 0;
              }
            else {
                FramerM$gpRxBuf[FramerM$gRxByteCnt] = data;
                if (FramerM$gRxByteCnt >= 2) {
                    FramerM$gRxRunningCRC = crcByte(FramerM$gRxRunningCRC, FramerM$gpRxBuf[FramerM$gRxByteCnt - 2]);
                  }
                FramerM$gRxByteCnt++;
              }
            }
          }
#line 440
      break;

      case FramerM$RXSTATE_ESC: 
        if (data == FramerM$HDLC_FLAG_BYTE) {

            FramerM$gRxByteCnt = FramerM$gRxRunningCRC = 0;
            FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Length = 0;
            FramerM$gMsgRcvTbl[FramerM$gRxHeadIndex].Token = 0;
            FramerM$gRxState = FramerM$RXSTATE_NOSYNC;
          }
        else {
            data = data ^ 0x20;
            FramerM$gpRxBuf[FramerM$gRxByteCnt] = data;
            if (FramerM$gRxByteCnt >= 2) {
                FramerM$gRxRunningCRC = crcByte(FramerM$gRxRunningCRC, FramerM$gpRxBuf[FramerM$gRxByteCnt - 2]);
              }
            FramerM$gRxByteCnt++;
            FramerM$gRxState = FramerM$RXSTATE_INFO;
          }
      break;

      default: 
        FramerM$gRxState = FramerM$RXSTATE_NOSYNC;
      break;
    }

  return SUCCESS;
}

static   
# 87 "/home/wyong/tinyos/tinyos-1.x/tos/system/UARTM.nc"
result_t UARTM$HPLUART$putDone(void)
#line 87
{
  bool oldState;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 90
    {
      {
      }
#line 91
      ;
      oldState = UARTM$state;
      UARTM$state = FALSE;
    }
#line 94
    __nesc_atomic_end(__nesc_atomic); }








  if (oldState) {
      UARTM$ByteComm$txDone();
      UARTM$ByteComm$txByteReady(TRUE);
    }
  return SUCCESS;
}

static 
# 469 "/home/wyong/tinyos/tinyos-1.x/tos/system/FramerM.nc"
result_t FramerM$TxArbitraryByte(uint8_t Byte)
#line 469
{
  if (Byte == FramerM$HDLC_FLAG_BYTE || Byte == FramerM$HDLC_CTLESC_BYTE) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 471
        {
          FramerM$gPrevTxState = FramerM$gTxState;
          FramerM$gTxState = FramerM$TXSTATE_ESC;
          FramerM$gTxEscByte = Byte;
        }
#line 475
        __nesc_atomic_end(__nesc_atomic); }
      Byte = FramerM$HDLC_CTLESC_BYTE;
    }

  return FramerM$ByteComm$txByte(Byte);
}

