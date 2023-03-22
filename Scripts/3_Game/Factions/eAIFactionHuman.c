[eAIRegisterFaction(eAIFactionHuman)]
class eAIFactionHuman : eAIFaction
{
	void eAIFactionHuman()
	{
		m_Loadout = "HumanLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionCivilian)) return true;
		if (other.IsInherited(eAIFactionGuards)) return true;
		if (other.IsInherited(eAIFactionPassive)) return true;
		if (other.IsInherited(eAIFactionSurvivor)) return true;
		return false;
	}
};
