[eAIRegisterFaction(eAIFactionFireFighter)]
class eAIFactionFireFighter : eAIFaction
{
	void eAIFactionFireFighter()
	{
		m_Loadout = "FireFighterLoadout";
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
