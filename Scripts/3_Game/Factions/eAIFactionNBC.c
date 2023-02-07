class eAIFactionNBC : eAIFaction
{
	void eAIFactionNBC()
	{
		m_Name = "NBC";
		m_Loadout = "NBCLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionCivilian)) return true;
		if (other.IsInherited(eAIFactionPolice)) return true;
		if (other.IsInherited(eAIFactionFireFighter)) return true;
		if (other.IsInherited(eAIFactionNBC)) return true;
		if (other.IsInherited(eAIFactionGuards)) return true;
		if (other.IsInherited(eAIFactionPassive)) return true;
		if (other.IsInherited(eAIFactionSurvivor)) return true;
		return false;
	}
};
