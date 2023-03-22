[eAIRegisterFaction(eAIFactionBandit)]
class eAIFactionBandit : eAIFaction
{
	void eAIFactionBandit()
	{
		m_Loadout = "BanditLoadout";
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionBandit)) return true;
		return false;
	}
};
