[eAIRegisterFaction(eAIFactionCannibal)]
class eAIFactionCannibal : eAIFaction
{
	void eAIFactionCannibal()
	{
		m_Name = "Cannibal";
		m_Loadout = "Humanloadout";
		m_Disease = eAgents.BRAIN;
	}

	override bool HasDisease() 
	{
		return true;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionCannibal)) return true;
		return false;
	}
};
