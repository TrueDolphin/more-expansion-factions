[eAIRegisterFaction(eAIFactionPlayerSurvivor)]
class eAIFactionPlayerSurvivor : eAIFaction
{
	void eAIFactionplayerSurvivor()
	{
		m_Loadout = "PlayerSurvivorLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionRaiders)) return false;
		if (other.IsInherited(eAIFactionMercenaries)) return false;
		return true;
	}
};
