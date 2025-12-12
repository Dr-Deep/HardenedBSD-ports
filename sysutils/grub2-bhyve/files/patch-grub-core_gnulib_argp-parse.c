--- grub-core/gnulib/argp-parse.c.orig	2025-12-10 15:39:10 UTC
+++ grub-core/gnulib/argp-parse.c
@@ -154,7 +154,7 @@ argp_version_parser (int key, char *arg, struct argp_s
       else if (argp_program_version)
         fprintf (state->out_stream, "%s\n", argp_program_version);
       else
-        __argp_error (state, dgettext (state->root_argp->argp_domain,
+        __argp_error (state, "%s", dgettext (state->root_argp->argp_domain,
                                        "(PROGRAM ERROR) No version known!?"));
       if (! (state->flags & ARGP_NO_EXIT))
         exit (0);
