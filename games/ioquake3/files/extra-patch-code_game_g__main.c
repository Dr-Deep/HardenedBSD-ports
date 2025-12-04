--- code/game/g_main.c.orig	2025-12-04 22:55:12 UTC
+++ code/game/g_main.c
@@ -97,7 +97,7 @@ static cvarTable_t		gameCvarTable[] = {
 
 static cvarTable_t		gameCvarTable[] = {
 	// don't override the cheat state set by the system
-	{ &g_cheats, "sv_cheats", "", 0, 0, qfalse },
+	{ &g_cheats, "sv_cheats", "1", 0, 0, qfalse },
 
 	// noset vars
 	{ NULL, "gamename", GAMEVERSION , CVAR_SERVERINFO | CVAR_ROM, 0, qfalse  },
