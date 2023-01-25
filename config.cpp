#define _ARMA_

class CfgPatches
{
	class DayZ_Expansion_AI_Armbands_scripts
	{
		requiredAddons[] = {"DZ_Scripts","DayZExpansion_AI_Scripts"};
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
				files[] = {"DayZExpansion/AI/Scripts/Common","DayZExpansion/AI/Scripts/3_Game","dolphin/More-Expansion-Factions/Game"};
			};
		};
	};
};
