--- adserver/adserver.m.orig	2025-12-08 23:54:38 UTC
+++ adserver/adserver.m
@@ -287,7 +287,7 @@ void DiePrintingMessage(NSString *msg, int exitVal)
 
 void DiePrintingMessage(NSString *msg, int exitVal)
 {
-  fprintf(stderr, [msg cString]);
+  fprintf(stderr, "%s", [msg cString]);
   exit(exitVal);
 }
 
