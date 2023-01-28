#define _ARMA_

class CfgPatches
{
	class DayZ_More_Expansion_Factions_scripts
	{
		requiredAddons[] = {""DayZExpansion_AI_Scripts"};
	};
};
class CfgMods
{
	class More_Expansion_Factions
	{
		action = "";
		hideName = 0;
		hidePicture = 0;
		name = "More Expansion Factions";
		credits = "DayZ Expansion and dolphin";
		author = "Dolphin";
		authorID = "";
		version = "0.1";
		extra = 0;
		type = "servermod";
		dependencies[] = {"Game"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"dolphin/More-Expansion-Factions/Scripts/3_Game"};
			};
		};
	};
};
