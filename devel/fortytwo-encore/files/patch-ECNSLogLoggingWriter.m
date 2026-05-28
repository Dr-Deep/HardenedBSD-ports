--- ECNSLogLoggingWriter.m.orig	2025-11-25 23:13:54 UTC
+++ ECNSLogLoggingWriter.m
@@ -36,7 +36,7 @@ - writeLog: (NSString *) logEntry {
 @implementation ECNSLogLoggingWriter
 
 - writeLog: (NSString *) logEntry {
-  NSLog( logEntry );
+  NSLog( @"%s", logEntry );
   
   return self;
 }
