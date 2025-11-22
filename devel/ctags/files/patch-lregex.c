--- lregex.c.orig	2025-11-22 19:03:39 UTC
+++ lregex.c
@@ -408,7 +408,7 @@ static void processLanguageRegex (const langType langu
 		const char* regexfile = parameter + 1;
 		FILE* const fp = fopen (regexfile, "r");
 		if (fp == NULL)
-			error (WARNING | PERROR, regexfile);
+			error (WARNING | PERROR, "%s", regexfile);
 		else
 		{
 			vString* const regex = vStringNew ();
