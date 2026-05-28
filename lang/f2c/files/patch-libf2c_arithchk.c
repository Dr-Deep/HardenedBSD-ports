--- libf2c/arithchk.c.orig	2025-12-02 02:51:50 UTC
+++ libf2c/arithchk.c
@@ -122,7 +122,7 @@ ccheck(void)
 	long Cray1;
 
 	/* Cray1 = 4617762693716115456 -- without overflow on non-Crays */
-	Cray1 = printf(emptyfmt) < 0 ? 0 : 4617762;
+	Cray1 = printf("%s", emptyfmt) < 0 ? 0 : 4617762;
 	if (printf(emptyfmt, Cray1) >= 0)
 		Cray1 = 1000000*Cray1 + 693716;
 	if (printf(emptyfmt, Cray1) >= 0)
