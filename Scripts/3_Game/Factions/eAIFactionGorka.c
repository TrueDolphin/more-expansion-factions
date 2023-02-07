class eAIFactionGorka : eAIFaction
{
	void eAIFactionGorka()
	{
		m_Name = "Gorka";
		m_Loadout = "GorkaLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionGorka)) return true;
		return false;
	}
};
