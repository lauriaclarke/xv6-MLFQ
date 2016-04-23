
//TODO: REFRESH_RATE has to be a multiple of QUANTUM
#define NULL 0

#define QUANTUM 50 // In ms
#define QUANTUM_CONVERT(x) (1000/(x)) // To convert quantum to Interrupts/s

#define REFRESH_RATE 20 // Number of QUANTUMs QUANTUM*# in ms
#define QUEUE_SIZE 32 // Max number of process in a queue
#define QUEUE_COUNT 4 // Number of queues

