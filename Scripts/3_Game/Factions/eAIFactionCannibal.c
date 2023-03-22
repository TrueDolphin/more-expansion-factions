[eAIRegisterFaction(eAIFactionCannibal)]
class eAIFactionCannibal : eAIFaction
{
	void eAIFactionCannibal()
	{
		m_Loadout = "Humanloadout";
		m_FactionModifier = "brain";
	}

	override bool HasModifier()
	{
		return true;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionCannibal)) return true;
		return false;
	}
};
