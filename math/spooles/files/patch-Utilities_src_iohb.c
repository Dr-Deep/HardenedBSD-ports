--- Utilities/src/iohb.c.orig	2025-12-02 02:12:30 UTC
+++ Utilities/src/iohb.c
@@ -1725,7 +1725,7 @@ static void IOHBTerminate(char* message) 
 
 static void IOHBTerminate(char* message) 
 {
-   fprintf(stderr,message);
+   fprintf(stderr,"%s",message);
    exit(1);
 }
 
