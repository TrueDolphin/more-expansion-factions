[eAIRegisterFaction(eAIFactionNorth)]
class eAIFactionNorth : eAIFaction
{
	void eAIFactionNorth()
	{
		m_Name = "North";
		m_Loadout = "TTSKOLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionNorth)) return true;
		if (other.IsInherited(eAIFactionRaiders)) return true;
		if (other.IsInherited(eAIFactionMercenaries)) return true;
		return false;
	}
};
