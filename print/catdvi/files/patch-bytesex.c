--- bytesex.c.orig	2025-12-05 00:59:54 UTC
+++ bytesex.c
@@ -36,7 +36,7 @@ void efread(void *ptr, size_t size, size_t nmemb,
                 } else {
                         panic("%s\n", strerror(errno));
                 }
-                panic(errmsg);
+                panic("%s", errmsg);
         }
 }
 
