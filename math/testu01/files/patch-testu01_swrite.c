--- testu01/swrite.c.orig	2025-12-08 02:59:41 UTC
+++ testu01/swrite.c
@@ -149,7 +149,7 @@ void swrite_Chi2SumTest (long N, sres_Chi2 *res)
       return;
    printf ("Test on the sum of all N observations\n");
    swrite_AddStrChi (str, LENGTH, N*res->degFree);
-   printf (str);
+   printf ("%s", str);
    gofw_Writep2 (res->sVal2[gofw_Sum], res->pVal2[gofw_Sum]);
 }
 
@@ -163,7 +163,7 @@ void swrite_Chi2SumTestb (long N, double sval, double 
       return;
    printf ("Test on the sum of all N observations\n");
    swrite_AddStrChi (str, LENGTH, N*degFree);
-   printf (str);
+   printf ("%s", str);
    gofw_Writep2 (sval, pval);
 }
 
