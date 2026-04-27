<<<<<<< HEAD
--- libunbound/python/libunbound.i.orig	2025-11-26 10:16:06 UTC
=======
--- libunbound/python/libunbound.i.orig	2026-01-21 12:34:44 UTC
>>>>>>> upstream/main
+++ libunbound/python/libunbound.i
@@ -853,7 +853,7 @@ Result: ['74.125.43.147', '74.125.43.99', '74.125.43.1
 %{ 
   //printf("resolve_start(%lX)\n",(long unsigned int)arg1);
   Py_BEGIN_ALLOW_THREADS 
-  $function 
+  $action
   Py_END_ALLOW_THREADS 
   //printf("resolve_stop()\n");
 %} 
