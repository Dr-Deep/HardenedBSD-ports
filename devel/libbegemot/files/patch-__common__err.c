--- _common_err.c.orig	2025-12-01 19:06:11 UTC
+++ _common_err.c
@@ -105,5 +105,5 @@ begemot_common_err(const char *prefix, const char *suf
 	}
 	vfprintf(stderr, fmt, ap);
 	if(suffix)
-		fprintf(stderr, suffix);
+		fprintf(stderr, "%s", suffix);
 }
