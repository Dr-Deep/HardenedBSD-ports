--- code/tools/asm/cmdlib.c.orig	2025-12-05 05:58:42 UTC
+++ code/tools/asm/cmdlib.c
@@ -185,7 +185,7 @@ void _printf( const char *format, ... ) {
 	vsprintf (text, format, argptr);
 	va_end (argptr);
 
-  printf(text);
+  printf("%s", text);
 
 #ifdef WIN32
   if (!lookedForServer) {
