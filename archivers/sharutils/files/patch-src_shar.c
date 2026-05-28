--- src/shar.c.orig	2015-05-22 15:27:34 UTC
+++ src/shar.c
@@ -83,6 +83,8 @@ static const char cright_years_z[] =
 
 #define LOG10_MAX_INT  11
 
+char const * const program_name = "shar";
+
 /* System related declarations.  */
 
 /* Convert a possibly-signed character to an unsigned character.  This is
@@ -931,7 +933,7 @@ print_header_stamp (FILE * fp)
         free (c_dir);
       }
     else
-      error (0, errno, _("Cannot get current directory name"));
+      error (0, errno, "%s", _("Cannot get current directory name"));
   }
 }
 
@@ -2154,7 +2156,7 @@ configure_shar (int * argc_p, char *** argv_p)
        */
       FILE * fp = freopen ("/dev/null", "w" FOPEN_BINARY, stderr);
       if (fp != stderr)
-        error (SHAR_EXIT_FAILED, errno,
+        error (SHAR_EXIT_FAILED, errno, "%s",
                _("reopening stderr to /dev/null"));
     }
 
@@ -2225,7 +2227,7 @@ configure_shar (int * argc_p, char *** argv_p)
   if (HAVE_OPT(QUERY_USER))
     {
       if (HAVE_OPT(NET_HEADERS))
-	error (0, 0, _("PLEASE avoid -X shars on Usenet or public networks"));
+	error (0, 0, "%s", _("PLEASE avoid -X shars on Usenet or public networks"));
 
       fputs ("shar_wish=\n", output);
     }
