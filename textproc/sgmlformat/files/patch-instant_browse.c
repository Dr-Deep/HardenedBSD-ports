--- instant/browse.c.orig	2025-12-08 02:38:45 UTC
+++ instant/browse.c
@@ -166,7 +166,7 @@ Browse()
 	    if (av[1] && isdigit(*av[1])) {
 		n = atoi(av[1]);
 		if (n < ce->ndcont) {
-		    printf(ce->dcont[n]);
+		    printf("%s", ce->dcont[n]);
 		    fputs("\n", stdout);
 		}
 		else if (ce->ndcont == 0)
