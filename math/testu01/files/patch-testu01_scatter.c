--- testu01/scatter.c.orig	2025-12-08 03:00:34 UTC
+++ testu01/scatter.c
@@ -425,7 +425,7 @@ static void BottomGraphTex (
    /* Replace the _ in the generator name by \_ for Latex */
    mystr_Subst (Title, "_", "\\_");
    mystr_Subst (Title, "01_", "01\\_");
-   fprintf (f, Title);
+   fprintf (f, "%s", Title);
 
    fprintf (f, "\n\nHypercube in %1d dimensions.\\\\\n", scatter_t);
    fprintf (f, " Over = ");
@@ -556,16 +556,16 @@ static void HeadGraphGnu (
          *p = '\0';
          len = strlen (q);
          if (len > 0) {
-            fprintf (f, q);
+            fprintf (f, "%s", q);
             fprintf (f, ";\\n");
          }
          p++;
          q = p;
          p = strchr (q, '\n');
       }
-      fprintf (f, q);
+      fprintf (f, "%s", q);
    } else
-      fprintf (f, Title);
+      fprintf (f, "%s", Title);
 
    fprintf (f, ";\\n   N = %1ld", scatter_N);
    fprintf (f, "; t = %1d", scatter_t);
@@ -595,14 +595,14 @@ static void HeadGraphGnu (
       strcat (Nout3, ".ps");
       /* Postscript file for figure */
       fprintf (f, "set output \"");
-      fprintf (f, Nout3);
+      fprintf (f, "%s", Nout3);
       fprintf (f, "\"\nset term postscript");
    } else if (scatter_Output == scatter_gnu_term) {
       fprintf (f, "set output\n");
       fprintf (f, "set term x11");
    }
    fprintf (f, "\nplot \"");
-   fprintf (f, Nout2);
+   fprintf (f, "%s", Nout2);
    fprintf (f, "\"\n");
    if (scatter_Output == scatter_gnu_term) {
       fprintf (f, "pause -1  \"Hit return to continue \"\n");
