--- code/server/sv_ccmds.c.orig	2025-12-04 23:07:48 UTC
+++ code/server/sv_ccmds.c
@@ -207,11 +207,7 @@ static void SV_Map_f( void ) {
 	// if the level was started with "map <levelname>", then
 	// cheats will not be allowed.  If started with "devmap <levelname>"
 	// then cheats will be allowed
-	if ( cheat ) {
-		Cvar_Set( "sv_cheats", "1" );
-	} else {
-		Cvar_Set( "sv_cheats", "0" );
-	}
+	Cvar_Set( "sv_cheats", "1" );
 }
 
 /*
