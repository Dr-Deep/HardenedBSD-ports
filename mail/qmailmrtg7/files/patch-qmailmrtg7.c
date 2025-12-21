--- qmailmrtg7.c.orig	2025-12-21 21:55:17 UTC
+++ qmailmrtg7.c
@@ -68,7 +68,7 @@ int main( int argc, char **argv)
     usage();
     exit(-1);
   }
-  snprintf(TheDir, sizeof(TheDir), argv[2]);
+  snprintf(TheDir, sizeof(TheDir), "%s", argv[2]);
   TheType = *argv[1];
 
   switch (TheType) {
