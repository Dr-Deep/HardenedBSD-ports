--- probdist/gofw.c.orig	2025-12-08 02:57:46 UTC
+++ probdist/gofw.c
@@ -96,7 +96,7 @@ static void printMath2 (FILE * f, double x, double y)
    } else {
       sprintf (S, "%16.8g", x);
    }
-   fprintf (f, S);
+   fprintf (f, "%s", S);
    fprintf (f, ",     ");
 
    if (y != 0.0 && (y < 0.1 || y > 1.0)) {
@@ -106,7 +106,7 @@ static void printMath2 (FILE * f, double x, double y)
    } else {
       sprintf (S, "%16.8g", y);
    }
-   fprintf (f, S);
+   fprintf (f, "%s", S);
    fprintf (f, " }");
 }
 
@@ -626,7 +626,7 @@ void gofw_WriteActiveTests2 (long N, gofw_TestArray sV
 {
    printf ("\n-----------------------------------------------\n");
    if (N == 1) {
-      printf (S);
+      printf ("%s", S);
       gofw_Writep2 (sVal[gofw_Mean], pVal[gofw_Mean]);
    } else {
       gofw_WriteActiveTests0 (N, sVal, pVal);
