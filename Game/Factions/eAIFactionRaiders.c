modded class eAIFactionRaiders
{
	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionCivilian)) return false;
		if (other.IsInherited(eAIFactionPassive)) return true;
		if (other.IsInherited(eAIFactionNorth)) return true;
		return false;
	}
};