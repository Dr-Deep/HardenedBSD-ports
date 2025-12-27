--- LuaJIT-src/src/lj_prng.c.orig	2025-12-27 17:01:34 UTC
+++ LuaJIT-src/src/lj_prng.c
@@ -129,14 +129,6 @@ static PRGR libfunc_rgr;
 #define LJ_TARGET_HAS_GETENTROPY	1
 #endif
 
-#if LJ_TARGET_HAS_GETENTROPY
-extern int getentropy(void *buf, size_t len)
-#ifdef __ELF__
-  __attribute__((weak))
-#endif
-;
-#endif
-
 #endif
 
 /* For the /dev/urandom fallback. */
