--- ext/mri/utils.h.orig	2025-12-04 19:36:37 UTC
+++ ext/mri/utils.h
@@ -1,5 +1,4 @@
 #include <stdlib.h>
 #include <stddef.h>
 
-void explicit_bzero(void *p, size_t n);
-#define sodium_memzero explicit_bzero
\ No newline at end of file
+#define sodium_memzero explicit_bzero
