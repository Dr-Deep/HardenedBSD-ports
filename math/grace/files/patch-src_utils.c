--- src/utils.c.orig	2025-12-04 19:49:38 UTC
+++ src/utils.c
@@ -1171,12 +1171,12 @@ void stufftext(char *s)
     if (inwin) {
         stufftextwin(s);
     } else {
-        printf(s);
+        printf("%s", s);
     }
 #endif
     /* log results to file */
     if (resfp != NULL) {
-	fprintf(resfp, s);
+	fprintf(resfp, "%s", s);
     }
 }
 
