--- rtspproxy/rtspproxy.cpp.orig	2025-12-21 20:16:59 UTC
+++ rtspproxy/rtspproxy.cpp
@@ -27,9 +27,9 @@ void OutputDebugInfo( const char* fmt, ... )
     char str[4096];
     va_list v;
     va_start( v, fmt );
-    vsprintf( str, fmt, v );
-    strcat( str, "\n" );
-    printf( str );
+    vsnprintf( str, sizeof(str), fmt, v );
+    strlcat( str, "\n" , sizeof(str)-1);
+    printf( "%s", str );
 }
 
 /**************************************
