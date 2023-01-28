modded class eAIFactionCivilian
{
	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionRaiders)) return false;
		if (other.IsInherited(eAIFactionMercenaries)) return false;
		return true;
	}
};