class eAIFactionSouth : eAIFaction
{
	void eAIFactionSouth()
	{
		m_Name = "South";
		m_Loadout = "TTSKOLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionSouth)) return true;
		if (other.IsInherited(eAIFactionCivilian)) return true;
		return false;
	}
};
