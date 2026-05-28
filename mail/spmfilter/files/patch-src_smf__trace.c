--- src/smf_trace.c.orig	2025-12-04 21:03:05 UTC
+++ src/smf_trace.c
@@ -96,9 +96,9 @@ static void trace_syslog(SMFTrace_T level, const char 
   }
   
   if ((level >= 128) && (debug_flag == 1)) 
-    syslog(priority, message);
+    syslog(priority, "%s", message);
   else if (level < 128)
-    syslog(priority, message);
+    syslog(priority, "%s", message);
 }
 
 static void trace_stderr(SMFTrace_T level, const char *message) {
