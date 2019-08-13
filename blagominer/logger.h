#pragma once
//GLOBAL Fix vs warning. -->
#pragma warning (disable:4819)
//<--

//GLOBAL Fix memory error. -->
#define HeapFree(x, y, z) do{if(z!=nullptr) {HeapFree(x,y,z); z=nullptr;} }while(0)
#define VirtualFree(x, y, z) do{if(x!=nullptr) {VirtualFree(x,y,z); x=nullptr;} }while(0)
#define freeaddrinfo(x) do{if(x!=nullptr) {freeaddrinfo(x); x=nullptr;} }while(0)
#define closesocket(x) do{if(x!=INVALID_SOCKET) {closesocket(x); x=INVALID_SOCKET;} }while(0)
#define CloseHandle(x) do{if(x!=INVALID_HANDLE_VALUE) {CloseHandle(x); x=INVALID_HANDLE_VALUE;} }while(0)

#include <stdio.h>
#define Logf(fmt,...) do { char logb[256]; snprintf(logb, sizeof(logb)-1, fmt "%s:%d\n", ##__VA_ARGS__, __func__, __LINE__); Log(logb); }while(0)
//<--

#include "blagominer.h"
#include "inout.h"
#include "error.h"

//logger variables
extern bool use_log;
extern FILE * fp_Log;

#ifdef __cplusplus
extern "C"{
#endif

//logger functions
void Log_init(void);
void Log(char const *const strLog);
void Log_llu(unsigned long long const llu_num);
void Log_u(size_t const u_num);
void Log_server(char const *const strLog);
#ifdef __cplusplus
}
#endif
