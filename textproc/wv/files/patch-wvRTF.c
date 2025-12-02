--- wvRTF.c.orig	2025-12-02 02:17:34 UTC
+++ wvRTF.c
@@ -192,7 +192,7 @@ output_rtfUserData (rtfUserData * ud)
     rtf_output_char ('{');
 
     /* font color */
-    rtf_output (rtfColors[ud->cCol]);
+    rtf_output ("%s",rtfColors[ud->cCol]);
 
     /* font face */
     rtf_output ("\\f%d", ud->cFont);
