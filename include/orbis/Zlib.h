#ifndef _SCE_ZLIB_H_
#define _SCE_ZLIB_H_

#include <stdint.h>

#ifdef __cplusplus 
extern "C" {
#endif

// do not call while you're decompressing something.
int sceZlibFinalize(void);
// the actual length of decompressed data will be written to destlen. *result should be 0 if ok.
int sceZlibGetResult(uint64_t id, uint32_t *destlen, int32_t *result);
// destlen cannot be larger than 0x10000.
int sceZlibInflate(void *src, uint32_t srclen, void *dest, uint32_t destlen, uint64_t *id);
// pass NULL and 0 for both arguments respectively.
int sceZlibInitialize(void *, uint64_t);
// if maxtimeforwait is NULL it means wait till decompression is done.
int sceZlibWaitForDone(uint64_t *id, uint32_t *maxtimeforwait);

#endif

#ifdef __cplusplus
}
#endif
