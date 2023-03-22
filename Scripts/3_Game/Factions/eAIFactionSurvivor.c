[eAIRegisterFaction(eAIFactionSurvivor)]
class eAIFactionSurvivor : eAIFaction
{
	void eAIFactionSurvivor()
	{
		m_Loadout = "SurvivorLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionRaiders)) return false;
		if (other.IsInherited(eAIFactionMercenaries)) return false;
		return true;
	}
};
