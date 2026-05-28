--- asm.c.orig	2025-12-01 19:08:03 UTC
+++ asm.c
@@ -916,7 +916,7 @@ errprn(code, aline, arg)
   }
 
   if (ierr >= ERRMAX) {
-    sprintf(outs, tooManyMsgErr);
+    sprintf(outs, "%s", tooManyMsgErr);
 #ifndef VMS
     textout(outs);
 #else
